/**
 * Autogenerated by Thrift Compiler (0.17.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "mfu/multi_fusion_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace fusion_api {


CameraTarget::~CameraTarget() noexcept {
}


void CameraTarget::__set_no(const int32_t val) {
  this->no = val;
}

void CameraTarget::__set_label(const std::string& val) {
  this->label = val;
}

void CameraTarget::__set_dc(const double val) {
  this->dc = val;
}

void CameraTarget::__set_x(const double val) {
  this->x = val;
}

void CameraTarget::__set_y(const double val) {
  this->y = val;
}

void CameraTarget::__set_w(const double val) {
  this->w = val;
}

void CameraTarget::__set_h(const double val) {
  this->h = val;
}

void CameraTarget::__set_lon(const double val) {
  this->lon = val;
}

void CameraTarget::__set_lat(const double val) {
  this->lat = val;
}

void CameraTarget::__set_time(const std::string& val) {
  this->time = val;
}
std::ostream& operator<<(std::ostream& out, const CameraTarget& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t CameraTarget::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->no);
          this->__isset.no = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->label);
          this->__isset.label = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->dc);
          this->__isset.dc = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->x);
          this->__isset.x = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->y);
          this->__isset.y = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->w);
          this->__isset.w = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->h);
          this->__isset.h = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lon);
          this->__isset.lon = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lat);
          this->__isset.lat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CameraTarget::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CameraTarget");

  xfer += oprot->writeFieldBegin("no", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->no);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("label", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->label);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dc", ::apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->dc);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("x", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->x);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("y", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->y);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("w", ::apache::thrift::protocol::T_DOUBLE, 6);
  xfer += oprot->writeDouble(this->w);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("h", ::apache::thrift::protocol::T_DOUBLE, 7);
  xfer += oprot->writeDouble(this->h);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lon", ::apache::thrift::protocol::T_DOUBLE, 8);
  xfer += oprot->writeDouble(this->lon);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lat", ::apache::thrift::protocol::T_DOUBLE, 9);
  xfer += oprot->writeDouble(this->lat);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CameraTarget &a, CameraTarget &b) {
  using ::std::swap;
  swap(a.no, b.no);
  swap(a.label, b.label);
  swap(a.dc, b.dc);
  swap(a.x, b.x);
  swap(a.y, b.y);
  swap(a.w, b.w);
  swap(a.h, b.h);
  swap(a.lon, b.lon);
  swap(a.lat, b.lat);
  swap(a.time, b.time);
  swap(a.__isset, b.__isset);
}

CameraTarget::CameraTarget(const CameraTarget& other0) {
  no = other0.no;
  label = other0.label;
  dc = other0.dc;
  x = other0.x;
  y = other0.y;
  w = other0.w;
  h = other0.h;
  lon = other0.lon;
  lat = other0.lat;
  time = other0.time;
  __isset = other0.__isset;
}
CameraTarget& CameraTarget::operator=(const CameraTarget& other1) {
  no = other1.no;
  label = other1.label;
  dc = other1.dc;
  x = other1.x;
  y = other1.y;
  w = other1.w;
  h = other1.h;
  lon = other1.lon;
  lat = other1.lat;
  time = other1.time;
  __isset = other1.__isset;
  return *this;
}
void CameraTarget::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CameraTarget(";
  out << "no=" << to_string(no);
  out << ", " << "label=" << to_string(label);
  out << ", " << "dc=" << to_string(dc);
  out << ", " << "x=" << to_string(x);
  out << ", " << "y=" << to_string(y);
  out << ", " << "w=" << to_string(w);
  out << ", " << "h=" << to_string(h);
  out << ", " << "lon=" << to_string(lon);
  out << ", " << "lat=" << to_string(lat);
  out << ", " << "time=" << to_string(time);
  out << ")";
}


RadarTarget::~RadarTarget() noexcept {
}


void RadarTarget::__set_no(const int32_t val) {
  this->no = val;
}

void RadarTarget::__set_hd(const double val) {
  this->hd = val;
}

void RadarTarget::__set_vd(const double val) {
  this->vd = val;
}

void RadarTarget::__set_vs(const double val) {
  this->vs = val;
}

void RadarTarget::__set_hs(const double val) {
  this->hs = val;
}

void RadarTarget::__set_vas(const double val) {
  this->vas = val;
}

void RadarTarget::__set_has(const double val) {
  this->has = val;
}

void RadarTarget::__set_lane(const int8_t val) {
  this->lane = val;
}

void RadarTarget::__set_rsc(const double val) {
  this->rsc = val;
}

void RadarTarget::__set_dc(const int16_t val) {
  this->dc = val;
}

void RadarTarget::__set_pk(const int16_t val) {
  this->pk = val;
}

void RadarTarget::__set_cy(const int16_t val) {
  this->cy = val;
}

void RadarTarget::__set_lon(const double val) {
  this->lon = val;
}

void RadarTarget::__set_lat(const double val) {
  this->lat = val;
}

void RadarTarget::__set_time(const std::string& val) {
  this->time = val;
}
std::ostream& operator<<(std::ostream& out, const RadarTarget& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t RadarTarget::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->no);
          this->__isset.no = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->hd);
          this->__isset.hd = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->vd);
          this->__isset.vd = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->vs);
          this->__isset.vs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->hs);
          this->__isset.hs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->vas);
          this->__isset.vas = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->has);
          this->__isset.has = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->lane);
          this->__isset.lane = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->rsc);
          this->__isset.rsc = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->dc);
          this->__isset.dc = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->pk);
          this->__isset.pk = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->cy);
          this->__isset.cy = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lon);
          this->__isset.lon = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lat);
          this->__isset.lat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 15:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t RadarTarget::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("RadarTarget");

  xfer += oprot->writeFieldBegin("no", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->no);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hd", ::apache::thrift::protocol::T_DOUBLE, 2);
  xfer += oprot->writeDouble(this->hd);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vd", ::apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->vd);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vs", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->vs);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hs", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->hs);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("vas", ::apache::thrift::protocol::T_DOUBLE, 6);
  xfer += oprot->writeDouble(this->vas);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("has", ::apache::thrift::protocol::T_DOUBLE, 7);
  xfer += oprot->writeDouble(this->has);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lane", ::apache::thrift::protocol::T_BYTE, 8);
  xfer += oprot->writeByte(this->lane);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("rsc", ::apache::thrift::protocol::T_DOUBLE, 9);
  xfer += oprot->writeDouble(this->rsc);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dc", ::apache::thrift::protocol::T_I16, 10);
  xfer += oprot->writeI16(this->dc);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pk", ::apache::thrift::protocol::T_I16, 11);
  xfer += oprot->writeI16(this->pk);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cy", ::apache::thrift::protocol::T_I16, 12);
  xfer += oprot->writeI16(this->cy);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lon", ::apache::thrift::protocol::T_DOUBLE, 13);
  xfer += oprot->writeDouble(this->lon);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lat", ::apache::thrift::protocol::T_DOUBLE, 14);
  xfer += oprot->writeDouble(this->lat);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_STRING, 15);
  xfer += oprot->writeString(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RadarTarget &a, RadarTarget &b) {
  using ::std::swap;
  swap(a.no, b.no);
  swap(a.hd, b.hd);
  swap(a.vd, b.vd);
  swap(a.vs, b.vs);
  swap(a.hs, b.hs);
  swap(a.vas, b.vas);
  swap(a.has, b.has);
  swap(a.lane, b.lane);
  swap(a.rsc, b.rsc);
  swap(a.dc, b.dc);
  swap(a.pk, b.pk);
  swap(a.cy, b.cy);
  swap(a.lon, b.lon);
  swap(a.lat, b.lat);
  swap(a.time, b.time);
  swap(a.__isset, b.__isset);
}

RadarTarget::RadarTarget(const RadarTarget& other2) {
  no = other2.no;
  hd = other2.hd;
  vd = other2.vd;
  vs = other2.vs;
  hs = other2.hs;
  vas = other2.vas;
  has = other2.has;
  lane = other2.lane;
  rsc = other2.rsc;
  dc = other2.dc;
  pk = other2.pk;
  cy = other2.cy;
  lon = other2.lon;
  lat = other2.lat;
  time = other2.time;
  __isset = other2.__isset;
}
RadarTarget& RadarTarget::operator=(const RadarTarget& other3) {
  no = other3.no;
  hd = other3.hd;
  vd = other3.vd;
  vs = other3.vs;
  hs = other3.hs;
  vas = other3.vas;
  has = other3.has;
  lane = other3.lane;
  rsc = other3.rsc;
  dc = other3.dc;
  pk = other3.pk;
  cy = other3.cy;
  lon = other3.lon;
  lat = other3.lat;
  time = other3.time;
  __isset = other3.__isset;
  return *this;
}
void RadarTarget::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "RadarTarget(";
  out << "no=" << to_string(no);
  out << ", " << "hd=" << to_string(hd);
  out << ", " << "vd=" << to_string(vd);
  out << ", " << "vs=" << to_string(vs);
  out << ", " << "hs=" << to_string(hs);
  out << ", " << "vas=" << to_string(vas);
  out << ", " << "has=" << to_string(has);
  out << ", " << "lane=" << to_string(lane);
  out << ", " << "rsc=" << to_string(rsc);
  out << ", " << "dc=" << to_string(dc);
  out << ", " << "pk=" << to_string(pk);
  out << ", " << "cy=" << to_string(cy);
  out << ", " << "lon=" << to_string(lon);
  out << ", " << "lat=" << to_string(lat);
  out << ", " << "time=" << to_string(time);
  out << ")";
}


LidarTarget::~LidarTarget() noexcept {
}


void LidarTarget::__set_no(const int32_t val) {
  this->no = val;
}

void LidarTarget::__set_label(const std::string& val) {
  this->label = val;
}

void LidarTarget::__set_conf(const double val) {
  this->conf = val;
}

void LidarTarget::__set_x(const double val) {
  this->x = val;
}

void LidarTarget::__set_y(const double val) {
  this->y = val;
}

void LidarTarget::__set_w(const double val) {
  this->w = val;
}

void LidarTarget::__set_h(const double val) {
  this->h = val;
}

void LidarTarget::__set_lon(const double val) {
  this->lon = val;
}

void LidarTarget::__set_lat(const double val) {
  this->lat = val;
}

void LidarTarget::__set_time(const std::string& val) {
  this->time = val;
}
std::ostream& operator<<(std::ostream& out, const LidarTarget& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t LidarTarget::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->no);
          this->__isset.no = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->label);
          this->__isset.label = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->conf);
          this->__isset.conf = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->x);
          this->__isset.x = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->y);
          this->__isset.y = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->w);
          this->__isset.w = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->h);
          this->__isset.h = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lon);
          this->__isset.lon = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->lat);
          this->__isset.lat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t LidarTarget::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("LidarTarget");

  xfer += oprot->writeFieldBegin("no", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->no);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("label", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->label);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("conf", ::apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->conf);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("x", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->x);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("y", ::apache::thrift::protocol::T_DOUBLE, 5);
  xfer += oprot->writeDouble(this->y);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("w", ::apache::thrift::protocol::T_DOUBLE, 6);
  xfer += oprot->writeDouble(this->w);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("h", ::apache::thrift::protocol::T_DOUBLE, 7);
  xfer += oprot->writeDouble(this->h);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lon", ::apache::thrift::protocol::T_DOUBLE, 8);
  xfer += oprot->writeDouble(this->lon);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lat", ::apache::thrift::protocol::T_DOUBLE, 9);
  xfer += oprot->writeDouble(this->lat);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(LidarTarget &a, LidarTarget &b) {
  using ::std::swap;
  swap(a.no, b.no);
  swap(a.label, b.label);
  swap(a.conf, b.conf);
  swap(a.x, b.x);
  swap(a.y, b.y);
  swap(a.w, b.w);
  swap(a.h, b.h);
  swap(a.lon, b.lon);
  swap(a.lat, b.lat);
  swap(a.time, b.time);
  swap(a.__isset, b.__isset);
}

LidarTarget::LidarTarget(const LidarTarget& other4) {
  no = other4.no;
  label = other4.label;
  conf = other4.conf;
  x = other4.x;
  y = other4.y;
  w = other4.w;
  h = other4.h;
  lon = other4.lon;
  lat = other4.lat;
  time = other4.time;
  __isset = other4.__isset;
}
LidarTarget& LidarTarget::operator=(const LidarTarget& other5) {
  no = other5.no;
  label = other5.label;
  conf = other5.conf;
  x = other5.x;
  y = other5.y;
  w = other5.w;
  h = other5.h;
  lon = other5.lon;
  lat = other5.lat;
  time = other5.time;
  __isset = other5.__isset;
  return *this;
}
void LidarTarget::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "LidarTarget(";
  out << "no=" << to_string(no);
  out << ", " << "label=" << to_string(label);
  out << ", " << "conf=" << to_string(conf);
  out << ", " << "x=" << to_string(x);
  out << ", " << "y=" << to_string(y);
  out << ", " << "w=" << to_string(w);
  out << ", " << "h=" << to_string(h);
  out << ", " << "lon=" << to_string(lon);
  out << ", " << "lat=" << to_string(lat);
  out << ", " << "time=" << to_string(time);
  out << ")";
}

} // namespace
