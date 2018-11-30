// Generated by gencpp from file novatel_msgs/BESTPOS.msg
// DO NOT EDIT!


#ifndef NOVATEL_MSGS_MESSAGE_BESTPOS_H
#define NOVATEL_MSGS_MESSAGE_BESTPOS_H


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
struct BESTPOS_
{
  typedef BESTPOS_<ContainerAllocator> Type;

  BESTPOS_()
    : header()
    , solution_status(0)
    , position_type(0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , undulation(0.0)
    , datum_id(0)
    , latitude_std(0.0)
    , longitude_std(0.0)
    , altitude_std(0.0)
    , stn_id()
    , diff_age(0.0)
    , sol_age(0.0)
    , svs(0)
    , sol_svs(0)
    , l1_svs(0)
    , mult_svs(0)
    , reserved(0)
    , extsolstat(0)
    , gal_sig_mask(0)
    , sig_mask(0)  {
      stn_id.assign(0);
  }
  BESTPOS_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , solution_status(0)
    , position_type(0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , undulation(0.0)
    , datum_id(0)
    , latitude_std(0.0)
    , longitude_std(0.0)
    , altitude_std(0.0)
    , stn_id()
    , diff_age(0.0)
    , sol_age(0.0)
    , svs(0)
    , sol_svs(0)
    , l1_svs(0)
    , mult_svs(0)
    , reserved(0)
    , extsolstat(0)
    , gal_sig_mask(0)
    , sig_mask(0)  {
  (void)_alloc;
      stn_id.assign(0);
  }



   typedef  ::novatel_msgs::CommonHeader_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _solution_status_type;
  _solution_status_type solution_status;

   typedef uint32_t _position_type_type;
  _position_type_type position_type;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _altitude_type;
  _altitude_type altitude;

   typedef float _undulation_type;
  _undulation_type undulation;

   typedef uint32_t _datum_id_type;
  _datum_id_type datum_id;

   typedef float _latitude_std_type;
  _latitude_std_type latitude_std;

   typedef float _longitude_std_type;
  _longitude_std_type longitude_std;

   typedef float _altitude_std_type;
  _altitude_std_type altitude_std;

   typedef boost::array<uint8_t, 4>  _stn_id_type;
  _stn_id_type stn_id;

   typedef float _diff_age_type;
  _diff_age_type diff_age;

   typedef float _sol_age_type;
  _sol_age_type sol_age;

   typedef uint8_t _svs_type;
  _svs_type svs;

   typedef uint8_t _sol_svs_type;
  _sol_svs_type sol_svs;

   typedef uint8_t _l1_svs_type;
  _l1_svs_type l1_svs;

   typedef uint8_t _mult_svs_type;
  _mult_svs_type mult_svs;

   typedef uint8_t _reserved_type;
  _reserved_type reserved;

   typedef uint8_t _extsolstat_type;
  _extsolstat_type extsolstat;

   typedef uint8_t _gal_sig_mask_type;
  _gal_sig_mask_type gal_sig_mask;

   typedef uint8_t _sig_mask_type;
  _sig_mask_type sig_mask;



  enum {
    SOLUTION_STATUS_SOLUTION_COMPUTED = 0u,
    SOLUTION_STATUS_INSUFFICIENT_OBSERVATIONS = 1u,
    SOLUTION_STATUS_NO_CONVERGENCE = 2u,
    SOLUTION_STATUS_SINGULARITY_AT_PARAMETERS_MATRIX = 3u,
    SOLUTION_STATUS_COVARIANCE_TRACE_EXCEEDS_MAXIMUM = 4u,
    SOLUTION_STATUS_TEST_DISTANCE_EXCEEDED = 5u,
    SOLUTION_STATUS_COLD_START = 6u,
    SOLUTION_STATUS_VELOCITY_OR_HEIGHT_LIMIT_EXCEEDED = 7u,
    SOLUTION_STATUS_VARIANCE_EXCEEDS_LIMITS = 8u,
    SOLUTION_STATUS_RESIDUALS_TOO_LARGE = 9u,
    SOLUTION_STATUS_INTEGRITY_WARNING = 13u,
    SOLUTION_STATUS_PENDING = 18u,
    SOLUTION_STATUS_INVALID_FIX = 19u,
    SOLUTION_STATUS_INVALID_RATE = 22u,
    POSITION_TYPE_NONE = 0u,
    POSITION_TYPE_FIXED = 1u,
    POSITION_TYPE_FIXEDHEIGHT = 2u,
    POSITION_TYPE_FLOATCONV = 4u,
    POSITION_TYPE_WIDELANE = 5u,
    POSITION_TYPE_NARROWLANE = 6u,
    POSITION_TYPE_DOPPLER_VELOCITY = 8u,
    POSITION_TYPE_SINGLE = 16u,
    POSITION_TYPE_PSRDIFF = 17u,
    POSITION_TYPE_WAAS = 18u,
    POSITION_TYPE_PROPAGATED = 19u,
    POSITION_TYPE_OMNISTAR = 20u,
    POSITION_TYPE_L1_FLOAT = 32u,
    POSITION_TYPE_IONOFREE_FLOAT = 33u,
    POSITION_TYPE_NARROW_FLOAT = 34u,
    POSITION_TYPE_L1_INT = 48u,
    POSITION_TYPE_WIDE_INT = 49u,
    POSITION_TYPE_NARROW_INT = 50u,
    POSITION_TYPE_RTK_DIRECT_INS = 51u,
    POSITION_TYPE_INS_SBAS = 52u,
    POSITION_TYPE_INS_PSRSP = 53u,
    POSITION_TYPE_INS_PSRDIFF = 54u,
    POSITION_TYPE_INS_RTKFLOAT = 55u,
    POSITION_TYPE_INS_RTKFIXED = 56u,
    POSITION_TYPE_INS_OMNISTAR = 57u,
    POSITION_TYPE_INS_OMNISTAR_HP = 58u,
    POSITION_TYPE_INS_OMNISTAR_XP = 59u,
    POSITION_TYPE_OMNISTAR_HP = 64u,
    POSITION_TYPE_OMNISTAR_XP = 65u,
    POSITION_TYPE_PPP_CONVERGING = 68u,
    POSITION_TYPE_PPP = 69u,
    POSITION_TYPE_INS_PPP_CONVERGING = 73u,
    POSITION_TYPE_INS_PPP = 74u,
  };


  typedef boost::shared_ptr< ::novatel_msgs::BESTPOS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_msgs::BESTPOS_<ContainerAllocator> const> ConstPtr;

}; // struct BESTPOS_

typedef ::novatel_msgs::BESTPOS_<std::allocator<void> > BESTPOS;

typedef boost::shared_ptr< ::novatel_msgs::BESTPOS > BESTPOSPtr;
typedef boost::shared_ptr< ::novatel_msgs::BESTPOS const> BESTPOSConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_msgs::BESTPOS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_msgs::BESTPOS_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_msgs::BESTPOS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_msgs::BESTPOS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_msgs::BESTPOS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8321b9523105411643891c8653878967";
  }

  static const char* value(const ::novatel_msgs::BESTPOS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8321b95231054116ULL;
  static const uint64_t static_value2 = 0x43891c8653878967ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_msgs/BESTPOS";
  }

  static const char* value(const ::novatel_msgs::BESTPOS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# message 42\n\
novatel_msgs/CommonHeader header\n\
\n\
# Table 21 in the SPAN on OEM6 manual.\n\
# See: http://www.novatel.com/assets/Documents/Manuals/OM-20000144UM.pdf#page=99\n\
uint32 solution_status\n\
uint32 SOLUTION_STATUS_SOLUTION_COMPUTED=0\n\
uint32 SOLUTION_STATUS_INSUFFICIENT_OBSERVATIONS=1\n\
uint32 SOLUTION_STATUS_NO_CONVERGENCE=2\n\
uint32 SOLUTION_STATUS_SINGULARITY_AT_PARAMETERS_MATRIX=3\n\
uint32 SOLUTION_STATUS_COVARIANCE_TRACE_EXCEEDS_MAXIMUM=4\n\
uint32 SOLUTION_STATUS_TEST_DISTANCE_EXCEEDED=5\n\
uint32 SOLUTION_STATUS_COLD_START=6\n\
uint32 SOLUTION_STATUS_VELOCITY_OR_HEIGHT_LIMIT_EXCEEDED=7\n\
uint32 SOLUTION_STATUS_VARIANCE_EXCEEDS_LIMITS=8\n\
uint32 SOLUTION_STATUS_RESIDUALS_TOO_LARGE=9\n\
uint32 SOLUTION_STATUS_INTEGRITY_WARNING=13\n\
uint32 SOLUTION_STATUS_PENDING=18\n\
uint32 SOLUTION_STATUS_INVALID_FIX=19\n\
uint32 SOLUTION_STATUS_INVALID_RATE=22\n\
\n\
# Table 22 in the SPAN on OEM6 manual.\n\
# http://www.novatel.com/assets/Documents/Manuals/OM-20000144UM.pdf#page=100\n\
uint32 position_type\n\
uint32 POSITION_TYPE_NONE=0\n\
uint32 POSITION_TYPE_FIXED=1\n\
uint32 POSITION_TYPE_FIXEDHEIGHT=2\n\
uint32 POSITION_TYPE_FLOATCONV=4\n\
uint32 POSITION_TYPE_WIDELANE=5\n\
uint32 POSITION_TYPE_NARROWLANE=6\n\
uint32 POSITION_TYPE_DOPPLER_VELOCITY=8\n\
uint32 POSITION_TYPE_SINGLE=16\n\
uint32 POSITION_TYPE_PSRDIFF=17\n\
uint32 POSITION_TYPE_WAAS=18\n\
uint32 POSITION_TYPE_PROPAGATED=19\n\
uint32 POSITION_TYPE_OMNISTAR=20\n\
uint32 POSITION_TYPE_L1_FLOAT=32\n\
uint32 POSITION_TYPE_IONOFREE_FLOAT=33\n\
uint32 POSITION_TYPE_NARROW_FLOAT=34\n\
uint32 POSITION_TYPE_L1_INT=48\n\
uint32 POSITION_TYPE_WIDE_INT=49\n\
uint32 POSITION_TYPE_NARROW_INT=50\n\
uint32 POSITION_TYPE_RTK_DIRECT_INS=51\n\
uint32 POSITION_TYPE_INS_SBAS=52\n\
uint32 POSITION_TYPE_INS_PSRSP=53\n\
uint32 POSITION_TYPE_INS_PSRDIFF=54\n\
uint32 POSITION_TYPE_INS_RTKFLOAT=55\n\
uint32 POSITION_TYPE_INS_RTKFIXED=56\n\
uint32 POSITION_TYPE_INS_OMNISTAR=57\n\
uint32 POSITION_TYPE_INS_OMNISTAR_HP=58\n\
uint32 POSITION_TYPE_INS_OMNISTAR_XP=59\n\
uint32 POSITION_TYPE_OMNISTAR_HP=64\n\
uint32 POSITION_TYPE_OMNISTAR_XP=65\n\
uint32 POSITION_TYPE_PPP_CONVERGING=68\n\
uint32 POSITION_TYPE_PPP=69\n\
uint32 POSITION_TYPE_INS_PPP_CONVERGING=73\n\
uint32 POSITION_TYPE_INS_PPP=74\n\
\n\
float64 latitude\n\
float64 longitude\n\
float64 altitude\n\
\n\
float32 undulation\n\
uint32 datum_id\n\
\n\
float32 latitude_std\n\
float32 longitude_std\n\
float32 altitude_std\n\
\n\
char[4] stn_id\n\
\n\
float32 diff_age\n\
float32 sol_age\n\
\n\
uint8 svs\n\
uint8 sol_svs\n\
uint8 l1_svs\n\
uint8 mult_svs\n\
uint8 reserved\n\
uint8 extsolstat\n\
uint8 gal_sig_mask\n\
uint8 sig_mask\n\
\n\
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

  static const char* value(const ::novatel_msgs::BESTPOS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.solution_status);
      stream.next(m.position_type);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
      stream.next(m.undulation);
      stream.next(m.datum_id);
      stream.next(m.latitude_std);
      stream.next(m.longitude_std);
      stream.next(m.altitude_std);
      stream.next(m.stn_id);
      stream.next(m.diff_age);
      stream.next(m.sol_age);
      stream.next(m.svs);
      stream.next(m.sol_svs);
      stream.next(m.l1_svs);
      stream.next(m.mult_svs);
      stream.next(m.reserved);
      stream.next(m.extsolstat);
      stream.next(m.gal_sig_mask);
      stream.next(m.sig_mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BESTPOS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_msgs::BESTPOS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_msgs::BESTPOS_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::novatel_msgs::CommonHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "solution_status: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.solution_status);
    s << indent << "position_type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.position_type);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
    s << indent << "undulation: ";
    Printer<float>::stream(s, indent + "  ", v.undulation);
    s << indent << "datum_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.datum_id);
    s << indent << "latitude_std: ";
    Printer<float>::stream(s, indent + "  ", v.latitude_std);
    s << indent << "longitude_std: ";
    Printer<float>::stream(s, indent + "  ", v.longitude_std);
    s << indent << "altitude_std: ";
    Printer<float>::stream(s, indent + "  ", v.altitude_std);
    s << indent << "stn_id[]" << std::endl;
    for (size_t i = 0; i < v.stn_id.size(); ++i)
    {
      s << indent << "  stn_id[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.stn_id[i]);
    }
    s << indent << "diff_age: ";
    Printer<float>::stream(s, indent + "  ", v.diff_age);
    s << indent << "sol_age: ";
    Printer<float>::stream(s, indent + "  ", v.sol_age);
    s << indent << "svs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.svs);
    s << indent << "sol_svs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sol_svs);
    s << indent << "l1_svs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.l1_svs);
    s << indent << "mult_svs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mult_svs);
    s << indent << "reserved: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved);
    s << indent << "extsolstat: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.extsolstat);
    s << indent << "gal_sig_mask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gal_sig_mask);
    s << indent << "sig_mask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sig_mask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_MSGS_MESSAGE_BESTPOS_H
