#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Bitmap_obj::__construct(::openfl::_legacy::display::BitmapData bitmapData,::openfl::_legacy::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl._legacy.display.Bitmap","new",0x890ca811,"openfl._legacy.display.Bitmap.new","openfl/_legacy/display/Bitmap.hx",16,0x223e911c)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(18)
	Dynamic tmp = ::openfl::_legacy::display::DisplayObject_obj::lime_create_display_object();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(tmp,HX_HCSTRING("Bitmap","\x0f","\x84","\xa0","\x25"));
	HX_STACK_LINE(20)
	bool tmp1 = (pixelSnapping == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::openfl::_legacy::display::PixelSnapping tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(20)
		tmp2 = ::openfl::_legacy::display::PixelSnapping_obj::AUTO;
	}
	else{
		HX_STACK_LINE(20)
		tmp2 = pixelSnapping;
	}
	HX_STACK_LINE(20)
	this->set_pixelSnapping(tmp2);
	HX_STACK_LINE(21)
	bool tmp3 = smoothing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	this->set_smoothing(tmp3);
	HX_STACK_LINE(23)
	bool tmp4 = (bitmapData != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	if ((tmp4)){
		HX_STACK_LINE(25)
		::openfl::_legacy::display::BitmapData tmp5 = bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		this->set_bitmapData(tmp5);
	}
	else{
		HX_STACK_LINE(27)
		::openfl::_legacy::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		if ((tmp6)){
			HX_STACK_LINE(29)
			this->__rebuild();
		}
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::openfl::_legacy::display::BitmapData bitmapData,::openfl::_legacy::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return _result_;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bitmap_obj::__rebuild( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Bitmap","__rebuild",0x4c9eb1ec,"openfl._legacy.display.Bitmap.__rebuild","openfl/_legacy/display/Bitmap.hx",36,0x223e911c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(40)
			::openfl::_legacy::display::Graphics tmp2 = this->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			::openfl::_legacy::display::Graphics gfx = tmp2;		HX_STACK_VAR(gfx,"gfx");
			HX_STACK_LINE(41)
			gfx->clear();
			HX_STACK_LINE(43)
			::openfl::_legacy::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			if ((tmp4)){
				HX_STACK_LINE(45)
				::openfl::_legacy::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				bool tmp6 = this->smoothing;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				gfx->beginBitmapFill(tmp5,null(),false,tmp6);
				HX_STACK_LINE(46)
				::openfl::_legacy::display::BitmapData tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				int tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(46)
				::openfl::_legacy::display::BitmapData tmp9 = this->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				int tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				gfx->drawRect((int)0,(int)0,tmp8,tmp10);
				HX_STACK_LINE(47)
				gfx->endFill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,__rebuild,(void))

::openfl::_legacy::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::_legacy::display::BitmapData value){
	HX_STACK_FRAME("openfl._legacy.display.Bitmap","set_bitmapData",0x46897a65,"openfl._legacy.display.Bitmap.set_bitmapData","openfl/_legacy/display/Bitmap.hx",63,0x223e911c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(65)
	this->bitmapData = value;
	HX_STACK_LINE(66)
	this->__rebuild();
	HX_STACK_LINE(68)
	::openfl::_legacy::display::BitmapData tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

::openfl::_legacy::display::PixelSnapping Bitmap_obj::get_pixelSnapping( ){
	HX_STACK_FRAME("openfl._legacy.display.Bitmap","get_pixelSnapping",0x6eee452a,"openfl._legacy.display.Bitmap.get_pixelSnapping","openfl/_legacy/display/Bitmap.hx",73,0x223e911c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	int tmp1 = ::openfl::_legacy::display::Bitmap_obj::lime_display_object_get_pixel_snapping(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(76)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	::openfl::_legacy::display::PixelSnapping tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::display::PixelSnapping >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_pixelSnapping,return )

::openfl::_legacy::display::PixelSnapping Bitmap_obj::set_pixelSnapping( ::openfl::_legacy::display::PixelSnapping value){
	HX_STACK_FRAME("openfl._legacy.display.Bitmap","set_pixelSnapping",0x925c1d36,"openfl._legacy.display.Bitmap.set_pixelSnapping","openfl/_legacy/display/Bitmap.hx",81,0x223e911c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	if ((tmp)){
		HX_STACK_LINE(85)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		::openfl::_legacy::display::Bitmap_obj::lime_display_object_set_pixel_snapping(tmp1,(int)0);
	}
	else{
		HX_STACK_LINE(89)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		::openfl::_legacy::display::Bitmap_obj::lime_display_object_set_pixel_snapping(tmp1,value->__Index());
	}
	HX_STACK_LINE(93)
	::openfl::_legacy::display::PixelSnapping tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_pixelSnapping,return )

bool Bitmap_obj::set_smoothing( bool value){
	HX_STACK_FRAME("openfl._legacy.display.Bitmap","set_smoothing",0x20df4a48,"openfl._legacy.display.Bitmap.set_smoothing","openfl/_legacy/display/Bitmap.hx",98,0x223e911c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(100)
	this->smoothing = value;
	HX_STACK_LINE(101)
	this->__rebuild();
	HX_STACK_LINE(103)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_smoothing,return )

Dynamic Bitmap_obj::lime_display_object_get_pixel_snapping;

Dynamic Bitmap_obj::lime_display_object_set_pixel_snapping;


Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__rebuild") ) { return __rebuild_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { if (inCallProp == hx::paccAlways) return get_pixelSnapping(); }
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_pixelSnapping") ) { return get_pixelSnapping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixelSnapping") ) { return set_pixelSnapping_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 38:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_snapping") ) { outValue = lime_display_object_get_pixel_snapping; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pixel_snapping") ) { outValue = lime_display_object_set_pixel_snapping; return true;  }
	}
	return false;
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == hx::paccAlways) return set_smoothing(inValue);smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return set_bitmapData(inValue);bitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { if (inCallProp == hx::paccAlways) return set_pixelSnapping(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bitmap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 38:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_snapping") ) { lime_display_object_get_pixel_snapping=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pixel_snapping") ) { lime_display_object_set_pixel_snapping=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Bitmap_obj::lime_display_object_get_pixel_snapping,HX_HCSTRING("lime_display_object_get_pixel_snapping","\xf7","\x52","\xe4","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Bitmap_obj::lime_display_object_set_pixel_snapping,HX_HCSTRING("lime_display_object_set_pixel_snapping","\x6b","\x85","\x93","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__rebuild","\x7b","\x7f","\xd3","\x22"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_pixelSnapping","\xb9","\xb9","\x11","\xbf"),
	HX_HCSTRING("set_pixelSnapping","\xc5","\x91","\x7f","\xe2"),
	HX_HCSTRING("set_smoothing","\x57","\x8b","\x4b","\x9c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bitmap_obj::lime_display_object_get_pixel_snapping,"lime_display_object_get_pixel_snapping");
	HX_MARK_MEMBER_NAME(Bitmap_obj::lime_display_object_set_pixel_snapping,"lime_display_object_set_pixel_snapping");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bitmap_obj::lime_display_object_get_pixel_snapping,"lime_display_object_get_pixel_snapping");
	HX_VISIT_MEMBER_NAME(Bitmap_obj::lime_display_object_set_pixel_snapping,"lime_display_object_set_pixel_snapping");
};

#endif

hx::Class Bitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_display_object_get_pixel_snapping","\xf7","\x52","\xe4","\xc6"),
	HX_HCSTRING("lime_display_object_set_pixel_snapping","\x6b","\x85","\x93","\xa3"),
	::String(null()) };

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Bitmap","\x9f","\x4b","\x99","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &Bitmap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
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

void Bitmap_obj::__boot()
{
	lime_display_object_get_pixel_snapping= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_pixel_snapping","\xd5","\xf8","\xa9","\x59"),(int)1);
	lime_display_object_set_pixel_snapping= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_pixel_snapping","\x49","\x2b","\x59","\x36"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
