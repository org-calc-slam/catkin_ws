// Generated by gencpp from file rcs_msg_wrapper/dwdx.msg
// DO NOT EDIT!


#ifndef RCS_MSG_WRAPPER_MESSAGE_DWDX_H
#define RCS_MSG_WRAPPER_MESSAGE_DWDX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace rcs_msg_wrapper
{
template <class ContainerAllocator>
struct dwdx_
{
  typedef dwdx_<ContainerAllocator> Type;

  dwdx_()
    : header()
    , time_label(0.0)
    , global_x(0)
    , global_y(0)
    , global_h(0)
    , zone(0)
    , longitude(0)
    , latitude(0)
    , heading(0)
    , pitch(0)
    , roll(0)
    , global_vx(0)
    , global_vy(0)
    , global_vz(0)
    , global_wx(0)
    , global_wy(0)
    , global_wz(0)
    , mileage(0)
    , id(0)  {
    }
  dwdx_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time_label(0.0)
    , global_x(0)
    , global_y(0)
    , global_h(0)
    , zone(0)
    , longitude(0)
    , latitude(0)
    , heading(0)
    , pitch(0)
    , roll(0)
    , global_vx(0)
    , global_vy(0)
    , global_vz(0)
    , global_wx(0)
    , global_wy(0)
    , global_wz(0)
    , mileage(0)
    , id(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _time_label_type;
  _time_label_type time_label;

   typedef uint32_t _global_x_type;
  _global_x_type global_x;

   typedef uint32_t _global_y_type;
  _global_y_type global_y;

   typedef uint32_t _global_h_type;
  _global_h_type global_h;

   typedef uint16_t _zone_type;
  _zone_type zone;

   typedef int32_t _longitude_type;
  _longitude_type longitude;

   typedef int32_t _latitude_type;
  _latitude_type latitude;

   typedef uint16_t _heading_type;
  _heading_type heading;

   typedef int16_t _pitch_type;
  _pitch_type pitch;

   typedef int16_t _roll_type;
  _roll_type roll;

   typedef int16_t _global_vx_type;
  _global_vx_type global_vx;

   typedef int16_t _global_vy_type;
  _global_vy_type global_vy;

   typedef int16_t _global_vz_type;
  _global_vz_type global_vz;

   typedef int16_t _global_wx_type;
  _global_wx_type global_wx;

   typedef int16_t _global_wy_type;
  _global_wy_type global_wy;

   typedef int16_t _global_wz_type;
  _global_wz_type global_wz;

   typedef uint32_t _mileage_type;
  _mileage_type mileage;

   typedef uint32_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> const> ConstPtr;

}; // struct dwdx_

typedef ::rcs_msg_wrapper::dwdx_<std::allocator<void> > dwdx;

typedef boost::shared_ptr< ::rcs_msg_wrapper::dwdx > dwdxPtr;
typedef boost::shared_ptr< ::rcs_msg_wrapper::dwdx const> dwdxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rcs_msg_wrapper::dwdx_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rcs_msg_wrapper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rcs_msg_wrapper': ['/home/sukie/catkin_ws/src/rcs_msg_wrapper/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5892ad3732ec5fee9c5b2efe18dee12c";
  }

  static const char* value(const ::rcs_msg_wrapper::dwdx_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5892ad3732ec5feeULL;
  static const uint64_t static_value2 = 0x9c5b2efe18dee12cULL;
};

template<class ContainerAllocator>
struct DataType< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rcs_msg_wrapper/dwdx";
  }

  static const char* value(const ::rcs_msg_wrapper::dwdx_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Header needs to be the first field to refer to std_msgs/Header, other msgs here needs to add the package name such as nav_msgs/Odometry\n\
Header header\n\
float64 time_label\n\
uint32 global_x\n\
uint32 global_y\n\
uint32 global_h\n\
uint16 zone\n\
int32 longitude\n\
int32 latitude\n\
uint16 heading\n\
int16 pitch\n\
int16 roll\n\
int16 global_vx\n\
int16 global_vy\n\
int16 global_vz\n\
int16 global_wx\n\
int16 global_wy\n\
int16 global_wz\n\
uint32 mileage\n\
uint32 id\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::rcs_msg_wrapper::dwdx_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time_label);
      stream.next(m.global_x);
      stream.next(m.global_y);
      stream.next(m.global_h);
      stream.next(m.zone);
      stream.next(m.longitude);
      stream.next(m.latitude);
      stream.next(m.heading);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.global_vx);
      stream.next(m.global_vy);
      stream.next(m.global_vz);
      stream.next(m.global_wx);
      stream.next(m.global_wy);
      stream.next(m.global_wz);
      stream.next(m.mileage);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct dwdx_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rcs_msg_wrapper::dwdx_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rcs_msg_wrapper::dwdx_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_label: ";
    Printer<double>::stream(s, indent + "  ", v.time_label);
    s << indent << "global_x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.global_x);
    s << indent << "global_y: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.global_y);
    s << indent << "global_h: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.global_h);
    s << indent << "zone: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.zone);
    s << indent << "longitude: ";
    Printer<int32_t>::stream(s, indent + "  ", v.longitude);
    s << indent << "latitude: ";
    Printer<int32_t>::stream(s, indent + "  ", v.latitude);
    s << indent << "heading: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.heading);
    s << indent << "pitch: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<int16_t>::stream(s, indent + "  ", v.roll);
    s << indent << "global_vx: ";
    Printer<int16_t>::stream(s, indent + "  ", v.global_vx);
    s << indent << "global_vy: ";
    Printer<int16_t>::stream(s, indent + "  ", v.global_vy);
    s << indent << "global_vz: ";
    Printer<int16_t>::stream(s, indent + "  ", v.global_vz);
    s << indent << "global_wx: ";
    Printer<int16_t>::stream(s, indent + "  ", v.global_wx);
    s << indent << "global_wy: ";
    Printer<int16_t>::stream(s, indent + "  ", v.global_wy);
    s << indent << "global_wz: ";
    Printer<int16_t>::stream(s, indent + "  ", v.global_wz);
    s << indent << "mileage: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mileage);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RCS_MSG_WRAPPER_MESSAGE_DWDX_H
