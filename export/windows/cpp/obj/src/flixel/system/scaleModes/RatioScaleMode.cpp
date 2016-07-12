#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace _system{
namespace scaleModes{

Void RatioScaleMode_obj::__construct(hx::Null< bool >  __o_fillScreen)
{
HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","new",0x00d4d0cf,"flixel.system.scaleModes.RatioScaleMode.new","flixel/system/scaleModes/RatioScaleMode.hx",14,0x35e4ce80)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_fillScreen,"fillScreen")
bool fillScreen = __o_fillScreen.Default(false);
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	this->fillScreen = fillScreen;
}
;
	return null();
}

//RatioScaleMode_obj::~RatioScaleMode_obj() { }

Dynamic RatioScaleMode_obj::__CreateEmpty() { return  new RatioScaleMode_obj; }
hx::ObjectPtr< RatioScaleMode_obj > RatioScaleMode_obj::__new(hx::Null< bool >  __o_fillScreen)
{  hx::ObjectPtr< RatioScaleMode_obj > _result_ = new RatioScaleMode_obj();
	_result_->__construct(__o_fillScreen);
	return _result_;}

Dynamic RatioScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RatioScaleMode_obj > _result_ = new RatioScaleMode_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RatioScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","updateGameSize",0xacc31ced,"flixel.system.scaleModes.RatioScaleMode.updateGameSize","flixel/system/scaleModes/RatioScaleMode.hx",20,0x35e4ce80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(21)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		int tmp1 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		Float ratio = tmp2;		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(22)
		Float tmp3 = (Float(Width) / Float(Height));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		Float realRatio = tmp3;		HX_STACK_VAR(realRatio,"realRatio");
		HX_STACK_LINE(24)
		bool tmp4 = (realRatio < ratio);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		bool scaleY = tmp4;		HX_STACK_VAR(scaleY,"scaleY");
		HX_STACK_LINE(25)
		bool tmp5 = this->fillScreen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		if ((tmp5)){
			HX_STACK_LINE(27)
			bool tmp6 = scaleY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(27)
			scaleY = tmp7;
		}
		HX_STACK_LINE(30)
		bool tmp6 = scaleY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		if ((tmp6)){
			HX_STACK_LINE(32)
			::flixel::math::FlxPoint tmp7 = this->gameSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			int tmp8 = Width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			tmp7->set_x(tmp8);
			HX_STACK_LINE(33)
			::flixel::math::FlxPoint tmp9 = this->gameSize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(33)
			::flixel::math::FlxPoint tmp10 = this->gameSize;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(33)
			Float tmp12 = ratio;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(33)
			Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(33)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(33)
			tmp9->set_y(tmp14);
		}
		else{
			HX_STACK_LINE(37)
			::flixel::math::FlxPoint tmp7 = this->gameSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			int tmp8 = Height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			tmp7->set_y(tmp8);
			HX_STACK_LINE(38)
			::flixel::math::FlxPoint tmp9 = this->gameSize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(38)
			::flixel::math::FlxPoint tmp10 = this->gameSize;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(38)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(38)
			Float tmp12 = ratio;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(38)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(38)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(38)
			tmp9->set_x(tmp14);
		}
	}
return null();
}



RatioScaleMode_obj::RatioScaleMode_obj()
{
}

Dynamic RatioScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { return fillScreen; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RatioScaleMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { fillScreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RatioScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fillScreen","\x4f","\xc2","\xf7","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RatioScaleMode_obj,fillScreen),HX_HCSTRING("fillScreen","\x4f","\xc2","\xf7","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fillScreen","\x4f","\xc2","\xf7","\x4a"),
	HX_HCSTRING("updateGameSize","\xfc","\x94","\xa3","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class RatioScaleMode_obj::__mClass;

void RatioScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.RatioScaleMode","\x5d","\xbd","\x32","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RatioScaleMode_obj >;
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
} // end namespace scaleModes
