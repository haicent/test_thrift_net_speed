
#include "mfu/AlgorithmApi.h"
#include <iostream>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace ::fusion_api;

class AlgorithmApiHandler : virtual public AlgorithmApiIf {
public:
  std::shared_ptr<TTransport> socket;
  std::shared_ptr<TTransport> transport;
  std::shared_ptr<TProtocol> protocol;

  AlgorithmApiHandler() {
    this->socket =
        std::shared_ptr<TTransport>(new TSocket("192.168.10.205", 8888));
    this->transport =
        std::shared_ptr<TTransport>(new TBufferedTransport(socket));
    this->protocol = std::shared_ptr<TProtocol>(new TBinaryProtocol(transport));
  }

  void multiDeviceFusion(
      const std::map<std::string, std::vector<CameraTarget>> &cml,
      const std::map<std::string, std::vector<RadarTarget>> &rml,
      const std::map<std::string, std::vector<LidarTarget>> &lml) {

    fusion_api::AlgorithmApiClient client(protocol);
    try {
      transport->open();
      client.multiDeviceFusion(cml, rml, lml);
      transport->close();
    } catch (std::exception &tx) {
      std::cout << "ERROR: " << tx.what() << std::endl;
    }
  }
};

int main(int argc, char **argv) {
  int port = 9999;
  ::std::shared_ptr<AlgorithmApiHandler> handler(new AlgorithmApiHandler());
  ::std::shared_ptr<TProcessor> processor(new AlgorithmApiProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(
      new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(
      new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory,
                       protocolFactory);
  server.serve();
  return 0;
}
