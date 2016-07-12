#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class IDataOutput_obj::__mClass;

void IDataOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.IDataOutput","\x53","\x48","\x44","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IDataOutput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
