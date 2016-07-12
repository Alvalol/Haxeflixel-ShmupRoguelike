#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_system_PixelFormat
#include <openfl/_legacy/system/PixelFormat.h>
#endif
namespace openfl{
namespace _legacy{
namespace _system{

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::ABGR1555;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::ABGR4444;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::ABGR8888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::ARGB1555;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::ARGB2101010;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::ARGB4444;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::ARGB8888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGR24;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGR555;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGR565;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGR888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGRA4444;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGRA5551;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGRA8888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::BGRX8888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::INDEX1LSB;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::INDEX1MSB;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::INDEX4LSB;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::INDEX4MSB;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::INDEX8;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::IYUV;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGB24;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGB332;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGB444;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGB555;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGB565;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGB888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGBA4444;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGBA5551;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGBA8888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::RGBX8888;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::UNKNOWN;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::UYVY;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::YUY2;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::YV12;

::openfl::_legacy::_system::PixelFormat PixelFormat_obj::YVYU;

HX_DEFINE_CREATE_ENUM(PixelFormat_obj)

int PixelFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ABGR1555","\x90","\xa1","\x15","\xf9")) return 16;
	if (inName==HX_HCSTRING("ABGR4444","\x4c","\x82","\x10","\xfb")) return 12;
	if (inName==HX_HCSTRING("ABGR8888","\x4c","\x69","\xb8","\xfd")) return 28;
	if (inName==HX_HCSTRING("ARGB1555","\x90","\xc5","\x03","\x5c")) return 14;
	if (inName==HX_HCSTRING("ARGB2101010","\xc3","\xef","\xba","\x0a")) return 30;
	if (inName==HX_HCSTRING("ARGB4444","\x4c","\xa6","\xfe","\x5d")) return 10;
	if (inName==HX_HCSTRING("ARGB8888","\x4c","\x8d","\xa6","\x60")) return 26;
	if (inName==HX_HCSTRING("BGR24","\xef","\xd3","\x9e","\x2f")) return 21;
	if (inName==HX_HCSTRING("BGR555","\x08","\xe5","\x5c","\x7b")) return 9;
	if (inName==HX_HCSTRING("BGR565","\xe7","\xe5","\x5c","\x7b")) return 19;
	if (inName==HX_HCSTRING("BGR888","\x6b","\x2e","\x5f","\x7b")) return 24;
	if (inName==HX_HCSTRING("BGRA4444","\xb4","\x61","\x4b","\xa0")) return 13;
	if (inName==HX_HCSTRING("BGRA5551","\x70","\x5b","\xf5","\xa0")) return 17;
	if (inName==HX_HCSTRING("BGRA8888","\xb4","\x48","\xf3","\xa2")) return 29;
	if (inName==HX_HCSTRING("BGRX8888","\x4b","\xa0","\x2a","\xe1")) return 25;
	if (inName==HX_HCSTRING("INDEX1LSB","\x3c","\x9c","\x69","\x02")) return 1;
	if (inName==HX_HCSTRING("INDEX1MSB","\x7d","\x5e","\x6a","\x02")) return 2;
	if (inName==HX_HCSTRING("INDEX4LSB","\x19","\x40","\x65","\x04")) return 3;
	if (inName==HX_HCSTRING("INDEX4MSB","\x5a","\x02","\x66","\x04")) return 4;
	if (inName==HX_HCSTRING("INDEX8","\x06","\xc1","\x75","\x46")) return 5;
	if (inName==HX_HCSTRING("IYUV","\x51","\x66","\x84","\x30")) return 32;
	if (inName==HX_HCSTRING("RGB24","\xef","\xf7","\xfb","\x65")) return 20;
	if (inName==HX_HCSTRING("RGB332","\xc5","\xba","\x7d","\xd6")) return 6;
	if (inName==HX_HCSTRING("RGB444","\xe7","\x7d","\x7e","\xd6")) return 7;
	if (inName==HX_HCSTRING("RGB555","\x08","\x41","\x7f","\xd6")) return 8;
	if (inName==HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")) return 18;
	if (inName==HX_HCSTRING("RGB888","\x6b","\x8a","\x81","\xd6")) return 22;
	if (inName==HX_HCSTRING("RGBA4444","\xb4","\xbd","\xbc","\xcd")) return 11;
	if (inName==HX_HCSTRING("RGBA5551","\x70","\xb7","\x66","\xce")) return 15;
	if (inName==HX_HCSTRING("RGBA8888","\xb4","\xa4","\x64","\xd0")) return 27;
	if (inName==HX_HCSTRING("RGBX8888","\x4b","\xfc","\x9b","\x0e")) return 23;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 0;
	if (inName==HX_HCSTRING("UYVY","\xa7","\xf6","\x72","\x38")) return 34;
	if (inName==HX_HCSTRING("YUY2","\x95","\xca","\x14","\x3b")) return 33;
	if (inName==HX_HCSTRING("YV12","\xfe","\x69","\x15","\x3b")) return 31;
	if (inName==HX_HCSTRING("YVYU","\xf9","\x8c","\x15","\x3b")) return 35;
	return super::__FindIndex(inName);
}

int PixelFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ABGR1555","\x90","\xa1","\x15","\xf9")) return 0;
	if (inName==HX_HCSTRING("ABGR4444","\x4c","\x82","\x10","\xfb")) return 0;
	if (inName==HX_HCSTRING("ABGR8888","\x4c","\x69","\xb8","\xfd")) return 0;
	if (inName==HX_HCSTRING("ARGB1555","\x90","\xc5","\x03","\x5c")) return 0;
	if (inName==HX_HCSTRING("ARGB2101010","\xc3","\xef","\xba","\x0a")) return 0;
	if (inName==HX_HCSTRING("ARGB4444","\x4c","\xa6","\xfe","\x5d")) return 0;
	if (inName==HX_HCSTRING("ARGB8888","\x4c","\x8d","\xa6","\x60")) return 0;
	if (inName==HX_HCSTRING("BGR24","\xef","\xd3","\x9e","\x2f")) return 0;
	if (inName==HX_HCSTRING("BGR555","\x08","\xe5","\x5c","\x7b")) return 0;
	if (inName==HX_HCSTRING("BGR565","\xe7","\xe5","\x5c","\x7b")) return 0;
	if (inName==HX_HCSTRING("BGR888","\x6b","\x2e","\x5f","\x7b")) return 0;
	if (inName==HX_HCSTRING("BGRA4444","\xb4","\x61","\x4b","\xa0")) return 0;
	if (inName==HX_HCSTRING("BGRA5551","\x70","\x5b","\xf5","\xa0")) return 0;
	if (inName==HX_HCSTRING("BGRA8888","\xb4","\x48","\xf3","\xa2")) return 0;
	if (inName==HX_HCSTRING("BGRX8888","\x4b","\xa0","\x2a","\xe1")) return 0;
	if (inName==HX_HCSTRING("INDEX1LSB","\x3c","\x9c","\x69","\x02")) return 0;
	if (inName==HX_HCSTRING("INDEX1MSB","\x7d","\x5e","\x6a","\x02")) return 0;
	if (inName==HX_HCSTRING("INDEX4LSB","\x19","\x40","\x65","\x04")) return 0;
	if (inName==HX_HCSTRING("INDEX4MSB","\x5a","\x02","\x66","\x04")) return 0;
	if (inName==HX_HCSTRING("INDEX8","\x06","\xc1","\x75","\x46")) return 0;
	if (inName==HX_HCSTRING("IYUV","\x51","\x66","\x84","\x30")) return 0;
	if (inName==HX_HCSTRING("RGB24","\xef","\xf7","\xfb","\x65")) return 0;
	if (inName==HX_HCSTRING("RGB332","\xc5","\xba","\x7d","\xd6")) return 0;
	if (inName==HX_HCSTRING("RGB444","\xe7","\x7d","\x7e","\xd6")) return 0;
	if (inName==HX_HCSTRING("RGB555","\x08","\x41","\x7f","\xd6")) return 0;
	if (inName==HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")) return 0;
	if (inName==HX_HCSTRING("RGB888","\x6b","\x8a","\x81","\xd6")) return 0;
	if (inName==HX_HCSTRING("RGBA4444","\xb4","\xbd","\xbc","\xcd")) return 0;
	if (inName==HX_HCSTRING("RGBA5551","\x70","\xb7","\x66","\xce")) return 0;
	if (inName==HX_HCSTRING("RGBA8888","\xb4","\xa4","\x64","\xd0")) return 0;
	if (inName==HX_HCSTRING("RGBX8888","\x4b","\xfc","\x9b","\x0e")) return 0;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 0;
	if (inName==HX_HCSTRING("UYVY","\xa7","\xf6","\x72","\x38")) return 0;
	if (inName==HX_HCSTRING("YUY2","\x95","\xca","\x14","\x3b")) return 0;
	if (inName==HX_HCSTRING("YV12","\xfe","\x69","\x15","\x3b")) return 0;
	if (inName==HX_HCSTRING("YVYU","\xf9","\x8c","\x15","\x3b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic PixelFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ABGR1555","\x90","\xa1","\x15","\xf9")) return ABGR1555;
	if (inName==HX_HCSTRING("ABGR4444","\x4c","\x82","\x10","\xfb")) return ABGR4444;
	if (inName==HX_HCSTRING("ABGR8888","\x4c","\x69","\xb8","\xfd")) return ABGR8888;
	if (inName==HX_HCSTRING("ARGB1555","\x90","\xc5","\x03","\x5c")) return ARGB1555;
	if (inName==HX_HCSTRING("ARGB2101010","\xc3","\xef","\xba","\x0a")) return ARGB2101010;
	if (inName==HX_HCSTRING("ARGB4444","\x4c","\xa6","\xfe","\x5d")) return ARGB4444;
	if (inName==HX_HCSTRING("ARGB8888","\x4c","\x8d","\xa6","\x60")) return ARGB8888;
	if (inName==HX_HCSTRING("BGR24","\xef","\xd3","\x9e","\x2f")) return BGR24;
	if (inName==HX_HCSTRING("BGR555","\x08","\xe5","\x5c","\x7b")) return BGR555;
	if (inName==HX_HCSTRING("BGR565","\xe7","\xe5","\x5c","\x7b")) return BGR565;
	if (inName==HX_HCSTRING("BGR888","\x6b","\x2e","\x5f","\x7b")) return BGR888;
	if (inName==HX_HCSTRING("BGRA4444","\xb4","\x61","\x4b","\xa0")) return BGRA4444;
	if (inName==HX_HCSTRING("BGRA5551","\x70","\x5b","\xf5","\xa0")) return BGRA5551;
	if (inName==HX_HCSTRING("BGRA8888","\xb4","\x48","\xf3","\xa2")) return BGRA8888;
	if (inName==HX_HCSTRING("BGRX8888","\x4b","\xa0","\x2a","\xe1")) return BGRX8888;
	if (inName==HX_HCSTRING("INDEX1LSB","\x3c","\x9c","\x69","\x02")) return INDEX1LSB;
	if (inName==HX_HCSTRING("INDEX1MSB","\x7d","\x5e","\x6a","\x02")) return INDEX1MSB;
	if (inName==HX_HCSTRING("INDEX4LSB","\x19","\x40","\x65","\x04")) return INDEX4LSB;
	if (inName==HX_HCSTRING("INDEX4MSB","\x5a","\x02","\x66","\x04")) return INDEX4MSB;
	if (inName==HX_HCSTRING("INDEX8","\x06","\xc1","\x75","\x46")) return INDEX8;
	if (inName==HX_HCSTRING("IYUV","\x51","\x66","\x84","\x30")) return IYUV;
	if (inName==HX_HCSTRING("RGB24","\xef","\xf7","\xfb","\x65")) return RGB24;
	if (inName==HX_HCSTRING("RGB332","\xc5","\xba","\x7d","\xd6")) return RGB332;
	if (inName==HX_HCSTRING("RGB444","\xe7","\x7d","\x7e","\xd6")) return RGB444;
	if (inName==HX_HCSTRING("RGB555","\x08","\x41","\x7f","\xd6")) return RGB555;
	if (inName==HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")) return RGB565;
	if (inName==HX_HCSTRING("RGB888","\x6b","\x8a","\x81","\xd6")) return RGB888;
	if (inName==HX_HCSTRING("RGBA4444","\xb4","\xbd","\xbc","\xcd")) return RGBA4444;
	if (inName==HX_HCSTRING("RGBA5551","\x70","\xb7","\x66","\xce")) return RGBA5551;
	if (inName==HX_HCSTRING("RGBA8888","\xb4","\xa4","\x64","\xd0")) return RGBA8888;
	if (inName==HX_HCSTRING("RGBX8888","\x4b","\xfc","\x9b","\x0e")) return RGBX8888;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return UNKNOWN;
	if (inName==HX_HCSTRING("UYVY","\xa7","\xf6","\x72","\x38")) return UYVY;
	if (inName==HX_HCSTRING("YUY2","\x95","\xca","\x14","\x3b")) return YUY2;
	if (inName==HX_HCSTRING("YV12","\xfe","\x69","\x15","\x3b")) return YV12;
	if (inName==HX_HCSTRING("YVYU","\xf9","\x8c","\x15","\x3b")) return YVYU;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),
	HX_HCSTRING("INDEX1LSB","\x3c","\x9c","\x69","\x02"),
	HX_HCSTRING("INDEX1MSB","\x7d","\x5e","\x6a","\x02"),
	HX_HCSTRING("INDEX4LSB","\x19","\x40","\x65","\x04"),
	HX_HCSTRING("INDEX4MSB","\x5a","\x02","\x66","\x04"),
	HX_HCSTRING("INDEX8","\x06","\xc1","\x75","\x46"),
	HX_HCSTRING("RGB332","\xc5","\xba","\x7d","\xd6"),
	HX_HCSTRING("RGB444","\xe7","\x7d","\x7e","\xd6"),
	HX_HCSTRING("RGB555","\x08","\x41","\x7f","\xd6"),
	HX_HCSTRING("BGR555","\x08","\xe5","\x5c","\x7b"),
	HX_HCSTRING("ARGB4444","\x4c","\xa6","\xfe","\x5d"),
	HX_HCSTRING("RGBA4444","\xb4","\xbd","\xbc","\xcd"),
	HX_HCSTRING("ABGR4444","\x4c","\x82","\x10","\xfb"),
	HX_HCSTRING("BGRA4444","\xb4","\x61","\x4b","\xa0"),
	HX_HCSTRING("ARGB1555","\x90","\xc5","\x03","\x5c"),
	HX_HCSTRING("RGBA5551","\x70","\xb7","\x66","\xce"),
	HX_HCSTRING("ABGR1555","\x90","\xa1","\x15","\xf9"),
	HX_HCSTRING("BGRA5551","\x70","\x5b","\xf5","\xa0"),
	HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"),
	HX_HCSTRING("BGR565","\xe7","\xe5","\x5c","\x7b"),
	HX_HCSTRING("RGB24","\xef","\xf7","\xfb","\x65"),
	HX_HCSTRING("BGR24","\xef","\xd3","\x9e","\x2f"),
	HX_HCSTRING("RGB888","\x6b","\x8a","\x81","\xd6"),
	HX_HCSTRING("RGBX8888","\x4b","\xfc","\x9b","\x0e"),
	HX_HCSTRING("BGR888","\x6b","\x2e","\x5f","\x7b"),
	HX_HCSTRING("BGRX8888","\x4b","\xa0","\x2a","\xe1"),
	HX_HCSTRING("ARGB8888","\x4c","\x8d","\xa6","\x60"),
	HX_HCSTRING("RGBA8888","\xb4","\xa4","\x64","\xd0"),
	HX_HCSTRING("ABGR8888","\x4c","\x69","\xb8","\xfd"),
	HX_HCSTRING("BGRA8888","\xb4","\x48","\xf3","\xa2"),
	HX_HCSTRING("ARGB2101010","\xc3","\xef","\xba","\x0a"),
	HX_HCSTRING("YV12","\xfe","\x69","\x15","\x3b"),
	HX_HCSTRING("IYUV","\x51","\x66","\x84","\x30"),
	HX_HCSTRING("YUY2","\x95","\xca","\x14","\x3b"),
	HX_HCSTRING("UYVY","\xa7","\xf6","\x72","\x38"),
	HX_HCSTRING("YVYU","\xf9","\x8c","\x15","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelFormat_obj::ABGR1555,"ABGR1555");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::ABGR4444,"ABGR4444");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::ABGR8888,"ABGR8888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::ARGB1555,"ARGB1555");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::ARGB2101010,"ARGB2101010");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::ARGB4444,"ARGB4444");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::ARGB8888,"ARGB8888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGR24,"BGR24");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGR555,"BGR555");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGR565,"BGR565");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGR888,"BGR888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGRA4444,"BGRA4444");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGRA5551,"BGRA5551");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGRA8888,"BGRA8888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::BGRX8888,"BGRX8888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::INDEX1LSB,"INDEX1LSB");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::INDEX1MSB,"INDEX1MSB");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::INDEX4LSB,"INDEX4LSB");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::INDEX4MSB,"INDEX4MSB");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::INDEX8,"INDEX8");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::IYUV,"IYUV");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGB24,"RGB24");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGB332,"RGB332");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGB444,"RGB444");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGB555,"RGB555");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGB888,"RGB888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGBA4444,"RGBA4444");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGBA5551,"RGBA5551");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGBA8888,"RGBA8888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::RGBX8888,"RGBX8888");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::UNKNOWN,"UNKNOWN");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::UYVY,"UYVY");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::YUY2,"YUY2");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::YV12,"YV12");
	HX_MARK_MEMBER_NAME(PixelFormat_obj::YVYU,"YVYU");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::ABGR1555,"ABGR1555");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::ABGR4444,"ABGR4444");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::ABGR8888,"ABGR8888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::ARGB1555,"ARGB1555");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::ARGB2101010,"ARGB2101010");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::ARGB4444,"ARGB4444");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::ARGB8888,"ARGB8888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGR24,"BGR24");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGR555,"BGR555");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGR565,"BGR565");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGR888,"BGR888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGRA4444,"BGRA4444");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGRA5551,"BGRA5551");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGRA8888,"BGRA8888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::BGRX8888,"BGRX8888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::INDEX1LSB,"INDEX1LSB");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::INDEX1MSB,"INDEX1MSB");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::INDEX4LSB,"INDEX4LSB");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::INDEX4MSB,"INDEX4MSB");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::INDEX8,"INDEX8");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::IYUV,"IYUV");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGB24,"RGB24");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGB332,"RGB332");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGB444,"RGB444");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGB555,"RGB555");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGB888,"RGB888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGBA4444,"RGBA4444");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGBA5551,"RGBA5551");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGBA8888,"RGBA8888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::RGBX8888,"RGBX8888");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::UNKNOWN,"UNKNOWN");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::UYVY,"UYVY");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::YUY2,"YUY2");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::YV12,"YV12");
	HX_VISIT_MEMBER_NAME(PixelFormat_obj::YVYU,"YVYU");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class PixelFormat_obj::__mClass;

Dynamic __Create_PixelFormat_obj() { return new PixelFormat_obj; }

void PixelFormat_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.system.PixelFormat","\x22","\xaf","\xac","\xde"), hx::TCanCast< PixelFormat_obj >,sStaticFields,sMemberFields,
	&__Create_PixelFormat_obj, &__Create,
	&super::__SGetClass(), &CreatePixelFormat_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void PixelFormat_obj::__boot()
{
hx::Static(ABGR1555) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("ABGR1555","\x90","\xa1","\x15","\xf9"),16);
hx::Static(ABGR4444) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("ABGR4444","\x4c","\x82","\x10","\xfb"),12);
hx::Static(ABGR8888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("ABGR8888","\x4c","\x69","\xb8","\xfd"),28);
hx::Static(ARGB1555) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("ARGB1555","\x90","\xc5","\x03","\x5c"),14);
hx::Static(ARGB2101010) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("ARGB2101010","\xc3","\xef","\xba","\x0a"),30);
hx::Static(ARGB4444) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("ARGB4444","\x4c","\xa6","\xfe","\x5d"),10);
hx::Static(ARGB8888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("ARGB8888","\x4c","\x8d","\xa6","\x60"),26);
hx::Static(BGR24) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGR24","\xef","\xd3","\x9e","\x2f"),21);
hx::Static(BGR555) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGR555","\x08","\xe5","\x5c","\x7b"),9);
hx::Static(BGR565) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGR565","\xe7","\xe5","\x5c","\x7b"),19);
hx::Static(BGR888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGR888","\x6b","\x2e","\x5f","\x7b"),24);
hx::Static(BGRA4444) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGRA4444","\xb4","\x61","\x4b","\xa0"),13);
hx::Static(BGRA5551) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGRA5551","\x70","\x5b","\xf5","\xa0"),17);
hx::Static(BGRA8888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGRA8888","\xb4","\x48","\xf3","\xa2"),29);
hx::Static(BGRX8888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("BGRX8888","\x4b","\xa0","\x2a","\xe1"),25);
hx::Static(INDEX1LSB) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("INDEX1LSB","\x3c","\x9c","\x69","\x02"),1);
hx::Static(INDEX1MSB) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("INDEX1MSB","\x7d","\x5e","\x6a","\x02"),2);
hx::Static(INDEX4LSB) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("INDEX4LSB","\x19","\x40","\x65","\x04"),3);
hx::Static(INDEX4MSB) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("INDEX4MSB","\x5a","\x02","\x66","\x04"),4);
hx::Static(INDEX8) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("INDEX8","\x06","\xc1","\x75","\x46"),5);
hx::Static(IYUV) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("IYUV","\x51","\x66","\x84","\x30"),32);
hx::Static(RGB24) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGB24","\xef","\xf7","\xfb","\x65"),20);
hx::Static(RGB332) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGB332","\xc5","\xba","\x7d","\xd6"),6);
hx::Static(RGB444) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGB444","\xe7","\x7d","\x7e","\xd6"),7);
hx::Static(RGB555) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGB555","\x08","\x41","\x7f","\xd6"),8);
hx::Static(RGB565) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"),18);
hx::Static(RGB888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGB888","\x6b","\x8a","\x81","\xd6"),22);
hx::Static(RGBA4444) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGBA4444","\xb4","\xbd","\xbc","\xcd"),11);
hx::Static(RGBA5551) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGBA5551","\x70","\xb7","\x66","\xce"),15);
hx::Static(RGBA8888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGBA8888","\xb4","\xa4","\x64","\xd0"),27);
hx::Static(RGBX8888) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("RGBX8888","\x4b","\xfc","\x9b","\x0e"),23);
hx::Static(UNKNOWN) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),0);
hx::Static(UYVY) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("UYVY","\xa7","\xf6","\x72","\x38"),34);
hx::Static(YUY2) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("YUY2","\x95","\xca","\x14","\x3b"),33);
hx::Static(YV12) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("YV12","\xfe","\x69","\x15","\x3b"),31);
hx::Static(YVYU) = hx::CreateEnum< PixelFormat_obj >(HX_HCSTRING("YVYU","\xf9","\x8c","\x15","\x3b"),35);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace system
