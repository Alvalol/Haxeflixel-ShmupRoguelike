#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void BitmapLogFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","new",0xa186019f,"flixel.system.frontEnds.BitmapLogFrontEnd.new","flixel/system/frontEnds/BitmapLogFrontEnd.hx",51,0x20ede752)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BitmapLogFrontEnd_obj::~BitmapLogFrontEnd_obj() { }

Dynamic BitmapLogFrontEnd_obj::__CreateEmpty() { return  new BitmapLogFrontEnd_obj; }
hx::ObjectPtr< BitmapLogFrontEnd_obj > BitmapLogFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapLogFrontEnd_obj > _result_ = new BitmapLogFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapLogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapLogFrontEnd_obj > _result_ = new BitmapLogFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void BitmapLogFrontEnd_obj::add( ::openfl::_legacy::display::BitmapData Data,::String __o_Name){
::String Name = __o_Name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","add",0xa17c2360,"flixel.system.frontEnds.BitmapLogFrontEnd.add","flixel/system/frontEnds/BitmapLogFrontEnd.hx",9,0x20ede752)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Name,"Name")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLogFrontEnd_obj,add,(void))

Void BitmapLogFrontEnd_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","clear",0x3f6bb08c,"flixel.system.frontEnds.BitmapLogFrontEnd.clear","flixel/system/frontEnds/BitmapLogFrontEnd.hx",19,0x20ede752)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,clear,(void))

Void BitmapLogFrontEnd_obj::clearAt( hx::Null< int >  __o_Index){
int Index = __o_Index.Default(-1);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","clearAt",0xb622249f,"flixel.system.frontEnds.BitmapLogFrontEnd.clearAt","flixel/system/frontEnds/BitmapLogFrontEnd.hx",30,0x20ede752)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLogFrontEnd_obj,clearAt,(void))

Void BitmapLogFrontEnd_obj::viewCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapLogFrontEnd","viewCache",0xebde341c,"flixel.system.frontEnds.BitmapLogFrontEnd.viewCache","flixel/system/frontEnds/BitmapLogFrontEnd.hx",40,0x20ede752)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,viewCache,(void))


BitmapLogFrontEnd_obj::BitmapLogFrontEnd_obj()
{
}

Dynamic BitmapLogFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clearAt") ) { return clearAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewCache") ) { return viewCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearAt","\xe0","\xe7","\x44","\xab"),
	HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapLogFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapLogFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapLogFrontEnd_obj::__mClass;

void BitmapLogFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.BitmapLogFrontEnd","\x2d","\x46","\xa7","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapLogFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
