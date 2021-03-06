// Generated by gencpp from file visualization/Palette.msg
// DO NOT EDIT!


#ifndef VISUALIZATION_MESSAGE_PALETTE_H
#define VISUALIZATION_MESSAGE_PALETTE_H

#include <ros/service_traits.h>


#include <visualization/PaletteRequest.h>
#include <visualization/PaletteResponse.h>


namespace visualization
{

struct Palette
{

typedef PaletteRequest Request;
typedef PaletteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Palette
} // namespace visualization


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::visualization::Palette > {
  static const char* value()
  {
    return "cd6f35b272f9ce0ceb0409de9795cd7f";
  }

  static const char* value(const ::visualization::Palette&) { return value(); }
};

template<>
struct DataType< ::visualization::Palette > {
  static const char* value()
  {
    return "visualization/Palette";
  }

  static const char* value(const ::visualization::Palette&) { return value(); }
};


// service_traits::MD5Sum< ::visualization::PaletteRequest> should match 
// service_traits::MD5Sum< ::visualization::Palette > 
template<>
struct MD5Sum< ::visualization::PaletteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::visualization::Palette >::value();
  }
  static const char* value(const ::visualization::PaletteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::visualization::PaletteRequest> should match 
// service_traits::DataType< ::visualization::Palette > 
template<>
struct DataType< ::visualization::PaletteRequest>
{
  static const char* value()
  {
    return DataType< ::visualization::Palette >::value();
  }
  static const char* value(const ::visualization::PaletteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::visualization::PaletteResponse> should match 
// service_traits::MD5Sum< ::visualization::Palette > 
template<>
struct MD5Sum< ::visualization::PaletteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::visualization::Palette >::value();
  }
  static const char* value(const ::visualization::PaletteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::visualization::PaletteResponse> should match 
// service_traits::DataType< ::visualization::Palette > 
template<>
struct DataType< ::visualization::PaletteResponse>
{
  static const char* value()
  {
    return DataType< ::visualization::Palette >::value();
  }
  static const char* value(const ::visualization::PaletteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VISUALIZATION_MESSAGE_PALETTE_H
