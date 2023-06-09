/**
 * Autogenerated by Thrift Compiler (0.17.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef multi_fusion_TYPES_H
#define multi_fusion_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>


namespace fusion_api {

class CameraTarget;

class RadarTarget;

class LidarTarget;

typedef struct _CameraTarget__isset {
  _CameraTarget__isset() : no(false), label(false), dc(false), x(false), y(false), w(false), h(false), lon(false), lat(false), time(false) {}
  bool no :1;
  bool label :1;
  bool dc :1;
  bool x :1;
  bool y :1;
  bool w :1;
  bool h :1;
  bool lon :1;
  bool lat :1;
  bool time :1;
} _CameraTarget__isset;

class CameraTarget : public virtual ::apache::thrift::TBase {
 public:

  CameraTarget(const CameraTarget&);
  CameraTarget& operator=(const CameraTarget&);
  CameraTarget() noexcept
               : no(0),
                 label(),
                 dc(0),
                 x(0),
                 y(0),
                 w(0),
                 h(0),
                 lon(0),
                 lat(0),
                 time() {
  }

  virtual ~CameraTarget() noexcept;
  int32_t no;
  std::string label;
  double dc;
  double x;
  double y;
  double w;
  double h;
  double lon;
  double lat;
  std::string time;

  _CameraTarget__isset __isset;

  void __set_no(const int32_t val);

  void __set_label(const std::string& val);

  void __set_dc(const double val);

  void __set_x(const double val);

  void __set_y(const double val);

  void __set_w(const double val);

  void __set_h(const double val);

  void __set_lon(const double val);

  void __set_lat(const double val);

  void __set_time(const std::string& val);

  bool operator == (const CameraTarget & rhs) const
  {
    if (!(no == rhs.no))
      return false;
    if (!(label == rhs.label))
      return false;
    if (!(dc == rhs.dc))
      return false;
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(w == rhs.w))
      return false;
    if (!(h == rhs.h))
      return false;
    if (!(lon == rhs.lon))
      return false;
    if (!(lat == rhs.lat))
      return false;
    if (!(time == rhs.time))
      return false;
    return true;
  }
  bool operator != (const CameraTarget &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CameraTarget & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(CameraTarget &a, CameraTarget &b);

std::ostream& operator<<(std::ostream& out, const CameraTarget& obj);

typedef struct _RadarTarget__isset {
  _RadarTarget__isset() : no(false), hd(false), vd(false), vs(false), hs(false), vas(false), has(false), lane(false), rsc(false), dc(false), pk(false), cy(false), lon(false), lat(false), time(false) {}
  bool no :1;
  bool hd :1;
  bool vd :1;
  bool vs :1;
  bool hs :1;
  bool vas :1;
  bool has :1;
  bool lane :1;
  bool rsc :1;
  bool dc :1;
  bool pk :1;
  bool cy :1;
  bool lon :1;
  bool lat :1;
  bool time :1;
} _RadarTarget__isset;

class RadarTarget : public virtual ::apache::thrift::TBase {
 public:

  RadarTarget(const RadarTarget&);
  RadarTarget& operator=(const RadarTarget&);
  RadarTarget() noexcept
              : no(0),
                hd(0),
                vd(0),
                vs(0),
                hs(0),
                vas(0),
                has(0),
                lane(0),
                rsc(0),
                dc(0),
                pk(0),
                cy(0),
                lon(0),
                lat(0),
                time() {
  }

  virtual ~RadarTarget() noexcept;
  int32_t no;
  double hd;
  double vd;
  double vs;
  double hs;
  double vas;
  double has;
  int8_t lane;
  double rsc;
  int16_t dc;
  int16_t pk;
  int16_t cy;
  double lon;
  double lat;
  std::string time;

  _RadarTarget__isset __isset;

  void __set_no(const int32_t val);

  void __set_hd(const double val);

  void __set_vd(const double val);

  void __set_vs(const double val);

  void __set_hs(const double val);

  void __set_vas(const double val);

  void __set_has(const double val);

  void __set_lane(const int8_t val);

  void __set_rsc(const double val);

  void __set_dc(const int16_t val);

  void __set_pk(const int16_t val);

  void __set_cy(const int16_t val);

  void __set_lon(const double val);

  void __set_lat(const double val);

  void __set_time(const std::string& val);

  bool operator == (const RadarTarget & rhs) const
  {
    if (!(no == rhs.no))
      return false;
    if (!(hd == rhs.hd))
      return false;
    if (!(vd == rhs.vd))
      return false;
    if (!(vs == rhs.vs))
      return false;
    if (!(hs == rhs.hs))
      return false;
    if (!(vas == rhs.vas))
      return false;
    if (!(has == rhs.has))
      return false;
    if (!(lane == rhs.lane))
      return false;
    if (!(rsc == rhs.rsc))
      return false;
    if (!(dc == rhs.dc))
      return false;
    if (!(pk == rhs.pk))
      return false;
    if (!(cy == rhs.cy))
      return false;
    if (!(lon == rhs.lon))
      return false;
    if (!(lat == rhs.lat))
      return false;
    if (!(time == rhs.time))
      return false;
    return true;
  }
  bool operator != (const RadarTarget &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RadarTarget & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(RadarTarget &a, RadarTarget &b);

std::ostream& operator<<(std::ostream& out, const RadarTarget& obj);

typedef struct _LidarTarget__isset {
  _LidarTarget__isset() : no(false), label(false), conf(false), x(false), y(false), w(false), h(false), lon(false), lat(false), time(false) {}
  bool no :1;
  bool label :1;
  bool conf :1;
  bool x :1;
  bool y :1;
  bool w :1;
  bool h :1;
  bool lon :1;
  bool lat :1;
  bool time :1;
} _LidarTarget__isset;

class LidarTarget : public virtual ::apache::thrift::TBase {
 public:

  LidarTarget(const LidarTarget&);
  LidarTarget& operator=(const LidarTarget&);
  LidarTarget() noexcept
              : no(0),
                label(),
                conf(0),
                x(0),
                y(0),
                w(0),
                h(0),
                lon(0),
                lat(0),
                time() {
  }

  virtual ~LidarTarget() noexcept;
  int32_t no;
  std::string label;
  double conf;
  double x;
  double y;
  double w;
  double h;
  double lon;
  double lat;
  std::string time;

  _LidarTarget__isset __isset;

  void __set_no(const int32_t val);

  void __set_label(const std::string& val);

  void __set_conf(const double val);

  void __set_x(const double val);

  void __set_y(const double val);

  void __set_w(const double val);

  void __set_h(const double val);

  void __set_lon(const double val);

  void __set_lat(const double val);

  void __set_time(const std::string& val);

  bool operator == (const LidarTarget & rhs) const
  {
    if (!(no == rhs.no))
      return false;
    if (!(label == rhs.label))
      return false;
    if (!(conf == rhs.conf))
      return false;
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(w == rhs.w))
      return false;
    if (!(h == rhs.h))
      return false;
    if (!(lon == rhs.lon))
      return false;
    if (!(lat == rhs.lat))
      return false;
    if (!(time == rhs.time))
      return false;
    return true;
  }
  bool operator != (const LidarTarget &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LidarTarget & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(LidarTarget &a, LidarTarget &b);

std::ostream& operator<<(std::ostream& out, const LidarTarget& obj);

} // namespace

#endif
