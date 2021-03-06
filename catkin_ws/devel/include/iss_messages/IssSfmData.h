// Generated by gencpp from file iss_messages/IssSfmData.msg
// DO NOT EDIT!


#ifndef ISS_MESSAGES_MESSAGE_ISSSFMDATA_H
#define ISS_MESSAGES_MESSAGE_ISSSFMDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/Float32MultiArray.h>

namespace iss_messages
{
template <class ContainerAllocator>
struct IssSfmData_
{
  typedef IssSfmData_<ContainerAllocator> Type;

  IssSfmData_()
    : header()
    , sfmMsg()
    , feuertime()  {
    }
  IssSfmData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sfmMsg(_alloc)
    , feuertime()  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::std_msgs::Float32MultiArray_<ContainerAllocator>  _sfmMsg_type;
  _sfmMsg_type sfmMsg;

   typedef ros::Time _feuertime_type;
  _feuertime_type feuertime;




  typedef boost::shared_ptr< ::iss_messages::IssSfmData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iss_messages::IssSfmData_<ContainerAllocator> const> ConstPtr;

}; // struct IssSfmData_

typedef ::iss_messages::IssSfmData_<std::allocator<void> > IssSfmData;

typedef boost::shared_ptr< ::iss_messages::IssSfmData > IssSfmDataPtr;
typedef boost::shared_ptr< ::iss_messages::IssSfmData const> IssSfmDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iss_messages::IssSfmData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iss_messages::IssSfmData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iss_messages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'iss_messages': ['/home/feuerwerr/Repository/feuerwerr_ros/trunk/catkin_ws/src/iss_messages/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iss_messages::IssSfmData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iss_messages::IssSfmData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iss_messages::IssSfmData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iss_messages::IssSfmData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iss_messages::IssSfmData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iss_messages::IssSfmData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iss_messages::IssSfmData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b5034ba0029c2a336da5f3ce33908e59";
  }

  static const char* value(const ::iss_messages::IssSfmData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb5034ba0029c2a33ULL;
  static const uint64_t static_value2 = 0x6da5f3ce33908e59ULL;
};

template<class ContainerAllocator>
struct DataType< ::iss_messages::IssSfmData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iss_messages/IssSfmData";
  }

  static const char* value(const ::iss_messages::IssSfmData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iss_messages::IssSfmData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold data of sfm output\n\
\n\
Header header\n\
std_msgs/Float32MultiArray sfmMsg\n\
time feuertime\n\
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
\n\
================================================================================\n\
MSG: std_msgs/Float32MultiArray\n\
# Please look at the MultiArrayLayout message definition for\n\
# documentation on all multiarrays.\n\
\n\
MultiArrayLayout  layout        # specification of data layout\n\
float32[]         data          # array of data\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayLayout\n\
# The multiarray declares a generic multi-dimensional array of a\n\
# particular data type.  Dimensions are ordered from outer most\n\
# to inner most.\n\
\n\
MultiArrayDimension[] dim # Array of dimension properties\n\
uint32 data_offset        # padding elements at front of data\n\
\n\
# Accessors should ALWAYS be written in terms of dimension stride\n\
# and specified outer-most dimension first.\n\
# \n\
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]\n\
#\n\
# A standard, 3-channel 640x480 image with interleaved color channels\n\
# would be specified as:\n\
#\n\
# dim[0].label  = \"height\"\n\
# dim[0].size   = 480\n\
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)\n\
# dim[1].label  = \"width\"\n\
# dim[1].size   = 640\n\
# dim[1].stride = 3*640 = 1920\n\
# dim[2].label  = \"channel\"\n\
# dim[2].size   = 3\n\
# dim[2].stride = 3\n\
#\n\
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayDimension\n\
string label   # label of given dimension\n\
uint32 size    # size of given dimension (in type units)\n\
uint32 stride  # stride of given dimension\n\
";
  }

  static const char* value(const ::iss_messages::IssSfmData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iss_messages::IssSfmData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sfmMsg);
      stream.next(m.feuertime);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IssSfmData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iss_messages::IssSfmData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iss_messages::IssSfmData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sfmMsg: ";
    s << std::endl;
    Printer< ::std_msgs::Float32MultiArray_<ContainerAllocator> >::stream(s, indent + "  ", v.sfmMsg);
    s << indent << "feuertime: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.feuertime);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ISS_MESSAGES_MESSAGE_ISSSFMDATA_H
