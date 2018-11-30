// Generated by gencpp from file novatel_msgs/CORRIMUDATA.msg
// DO NOT EDIT!


#ifndef NOVATEL_MSGS_MESSAGE_CORRIMUDATA_H
#define NOVATEL_MSGS_MESSAGE_CORRIMUDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <novatel_msgs/CommonHeader.h>

namespace novatel_msgs
{
template <class ContainerAllocator>
struct CORRIMUDATA_
{
  typedef CORRIMUDATA_<ContainerAllocator> Type;

  CORRIMUDATA_()
    : header()
    , week(0)
    , gpssec(0.0)
    , pitch_rate(0.0)
    , roll_rate(0.0)
    , yaw_rate(0.0)
    , x_accel(0.0)
    , y_accel(0.0)
    , z_accel(0.0)  {
    }
  CORRIMUDATA_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , week(0)
    , gpssec(0.0)
    , pitch_rate(0.0)
    , roll_rate(0.0)
    , yaw_rate(0.0)
    , x_accel(0.0)
    , y_accel(0.0)
    , z_accel(0.0)  {
  (void)_alloc;
    }



   typedef  ::novatel_msgs::CommonHeader_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _week_type;
  _week_type week;

   typedef double _gpssec_type;
  _gpssec_type gpssec;

   typedef double _pitch_rate_type;
  _pitch_rate_type pitch_rate;

   typedef double _roll_rate_type;
  _roll_rate_type roll_rate;

   typedef double _yaw_rate_type;
  _yaw_rate_type yaw_rate;

   typedef double _x_accel_type;
  _x_accel_type x_accel;

   typedef double _y_accel_type;
  _y_accel_type y_accel;

   typedef double _z_accel_type;
  _z_accel_type z_accel;





  typedef boost::shared_ptr< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> const> ConstPtr;

}; // struct CORRIMUDATA_

typedef ::novatel_msgs::CORRIMUDATA_<std::allocator<void> > CORRIMUDATA;

typedef boost::shared_ptr< ::novatel_msgs::CORRIMUDATA > CORRIMUDATAPtr;
typedef boost::shared_ptr< ::novatel_msgs::CORRIMUDATA const> CORRIMUDATAConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'novatel_msgs': ['/home/sukie/catkin_ws/src/novatel_span_driver/novatel_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ca3f26f898322425170fe621393f009";
  }

  static const char* value(const ::novatel_msgs::CORRIMUDATA_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ca3f26f89832242ULL;
  static const uint64_t static_value2 = 0x5170fe621393f009ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_msgs/CORRIMUDATA";
  }

  static const char* value(const ::novatel_msgs::CORRIMUDATA_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# message 812\n\
# Contains the RAWIMU data corrected for gravity, \n\
# the earth's rotation and estimated sensor errors.\n\
novatel_msgs/CommonHeader header\n\
\n\
int32 week\n\
float64 gpssec\n\
\n\
# Gyro values are instantaneous and in radians, must\n\
# multiply by datarate to get rad/s.\n\
float64 pitch_rate\n\
float64 roll_rate\n\
float64 yaw_rate\n\
\n\
float64 x_accel\n\
float64 y_accel\n\
float64 z_accel\n\
\n\
================================================================================\n\
MSG: novatel_msgs/CommonHeader\n\
# On the wire, this header is preceeded by three sync bytes,\n\
# which are 0xAA 0x44 0x12, and a uint8 which is the header length.\n\
\n\
# Message ID of the log being output.\n\
uint16 id\n\
\n\
# Measurement source, format, response bit.\n\
uint8 msg_type\n\
\n\
uint8 port_addr\n\
uint16 length\n\
uint16 sequence\n\
\n\
uint8 idle_time\n\
uint8 time_status\n\
\n\
uint16 gps_week\n\
uint32 gps_week_seconds\n\
\n\
# Table 3 in the SPAN on OEM6 manual.\n\
# See: http://www.novatel.com/assets/Documents/Manuals/OM-20000144UM.pdf#page=13\n\
uint32 receiver_status\n\
uint32 RECEIVER_STATUS_ERROR=1\n\
uint32 RECEIVER_STATUS_TEMPERATURE_WARNING=2\n\
uint32 RECEIVER_STATUS_VOLTAGE_SUPPLY_WARNING=4\n\
uint32 RECEIVER_STATUS_ANTENNA_UNPOWERED=8\n\
uint32 RECEIVER_STATUS_LNA_FAILURE=16\n\
uint32 RECEIVER_STATUS_ANTENNA_OPEN=32\n\
uint32 RECEIVER_STATUS_ANTENNA_SHORTED=64\n\
uint32 RECEIVER_STATUS_CPU_OVERLOADED=128\n\
uint32 RECEIVER_STATUS_COM1_BUFFER_OVERRUN=256\n\
uint32 RECEIVER_STATUS_COM2_BUFFER_OVERRUN=512\n\
uint32 RECEIVER_STATUS_COM3_BUFFER_OVERRUN=1024\n\
uint32 RECEIVER_STATUS_LINK_OVERLOAD=2048\n\
uint32 RECEIVER_STATUS_AUX_TRANSMIT_OVERRUN=8192\n\
uint32 RECEIVER_STATUS_AGC_OUT_OF_RANGE=16384\n\
uint32 RECEIVER_STATUS_INS_RESET=65536\n\
uint32 RECEIVER_STATUS_ALMANAC_INVALID=262144\n\
uint32 RECEIVER_STATUS_POSITION_SOLUTION_INVALID=524288\n\
uint32 RECEIVER_STATUS_POSITION_NOT_FIXED=1048576\n\
uint32 RECEIVER_STATUS_CLOCK_STEERING_DISABLED=2097152\n\
uint32 RECEIVER_STATUS_CLOCK_MODEL_INVALID=4194304\n\
uint32 RECEIVER_STATUS_EXTERNAL_OSCILLATOR_LOCKED=8388608\n\
uint32 RECEIVER_STATUS_SOFTWARE_RESOURCE_WARNING=16777216\n\
uint32 RECEIVER_STATUS_AUXILIARY3_EVENT=536870912\n\
uint32 RECEIVER_STATUS_AUXILIARY2_EVENT=1073741824\n\
uint32 RECEIVER_STATUS_AUXILIARY1_EVENT=2147483648\n\
\n\
uint16 reserved\n\
uint16 software_version\n\
\n\
";
  }

  static const char* value(const ::novatel_msgs::CORRIMUDATA_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.week);
      stream.next(m.gpssec);
      stream.next(m.pitch_rate);
      stream.next(m.roll_rate);
      stream.next(m.yaw_rate);
      stream.next(m.x_accel);
      stream.next(m.y_accel);
      stream.next(m.z_accel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CORRIMUDATA_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_msgs::CORRIMUDATA_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_msgs::CORRIMUDATA_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::novatel_msgs::CommonHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "week: ";
    Printer<int32_t>::stream(s, indent + "  ", v.week);
    s << indent << "gpssec: ";
    Printer<double>::stream(s, indent + "  ", v.gpssec);
    s << indent << "pitch_rate: ";
    Printer<double>::stream(s, indent + "  ", v.pitch_rate);
    s << indent << "roll_rate: ";
    Printer<double>::stream(s, indent + "  ", v.roll_rate);
    s << indent << "yaw_rate: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_rate);
    s << indent << "x_accel: ";
    Printer<double>::stream(s, indent + "  ", v.x_accel);
    s << indent << "y_accel: ";
    Printer<double>::stream(s, indent + "  ", v.y_accel);
    s << indent << "z_accel: ";
    Printer<double>::stream(s, indent + "  ", v.z_accel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_MSGS_MESSAGE_CORRIMUDATA_H
