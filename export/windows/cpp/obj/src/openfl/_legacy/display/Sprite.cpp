#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Sprite_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.Sprite","new",0x3d3d3727,"openfl._legacy.display.Sprite.new","openfl/_legacy/display/Sprite.hx",14,0xb166f6c6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	Dynamic tmp = ::openfl::_legacy::display::DisplayObjectContainer_obj::lime_create_display_object_container();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	::String tmp1 = this->__getType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(18)
	this->useHandCursor = true;
	HX_STACK_LINE(19)
	this->buttonMode = false;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new()
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Void Sprite_obj::startDrag( hx::Null< bool >  __o_lockCenter,::openfl::_legacy::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.Sprite","startDrag",0x2d8cdb7d,"openfl._legacy.display.Sprite.startDrag","openfl/_legacy/display/Sprite.hx",24,0xb166f6c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
		HX_STACK_LINE(26)
		::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(28)
			::openfl::_legacy::display::Stage tmp2 = this->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			bool tmp3 = lockCenter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			::openfl::_legacy::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			tmp2->__startDrag(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

Void Sprite_obj::stopDrag( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Sprite","stopDrag",0xe37418ef,"openfl._legacy.display.Sprite.stopDrag","openfl/_legacy/display/Sprite.hx",35,0xb166f6c6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		if ((tmp1)){
			HX_STACK_LINE(39)
			::openfl::_legacy::display::Stage tmp2 = this->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			tmp2->__stopDrag(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

::String Sprite_obj::__getType( ){
	HX_STACK_FRAME("openfl._legacy.display.Sprite","__getType",0xd3032957,"openfl._legacy.display.Sprite.__getType","openfl/_legacy/display/Sprite.hx",46,0xb166f6c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	::String type = tmp1;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(49)
	int tmp2 = type.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	int position = tmp2;		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(50)
	bool tmp3 = (position >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	if ((tmp3)){
		HX_STACK_LINE(50)
		int tmp5 = (position + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		tmp4 = type.substr(tmp5,null());
	}
	else{
		HX_STACK_LINE(50)
		tmp4 = type;
	}
	HX_STACK_LINE(50)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,__getType,return )


Sprite_obj::Sprite_obj()
{
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"__getType") ) { return __getType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,buttonMode),HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("__getType","\x50","\xf3","\xd9","\xa0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Sprite","\xb5","\x17","\x23","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
