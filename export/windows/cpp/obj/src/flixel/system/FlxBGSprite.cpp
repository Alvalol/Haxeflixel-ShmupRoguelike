#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
namespace flixel{
namespace _system{

Void FlxBGSprite_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxBGSprite","new",0x62e2bd41,"flixel.system.FlxBGSprite.new","flixel/system/FlxBGSprite.hx",11,0xa9844f6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(13)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::String tmp1 = tmp->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(HX_HCSTRING("bg_graphic_","\xb1","\x39","\x19","\x0d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	this->makeGraphic((int)1,(int)1,(int)0,true,tmp1);
	HX_STACK_LINE(14)
	::flixel::math::FlxPoint tmp2 = this->scrollFactor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	tmp2->set(null(),null());
}
;
	return null();
}

//FlxBGSprite_obj::~FlxBGSprite_obj() { }

Dynamic FlxBGSprite_obj::__CreateEmpty() { return  new FlxBGSprite_obj; }
hx::ObjectPtr< FlxBGSprite_obj > FlxBGSprite_obj::__new()
{  hx::ObjectPtr< FlxBGSprite_obj > _result_ = new FlxBGSprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBGSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBGSprite_obj > _result_ = new FlxBGSprite_obj();
	_result_->__construct();
	return _result_;}

Void FlxBGSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.FlxBGSprite","draw",0x1cf08403,"flixel.system.FlxBGSprite.draw","flixel/system/FlxBGSprite.hx",22,0xa9844f6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		while((true)){
			HX_STACK_LINE(22)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(22)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			if ((tmp1)){
				HX_STACK_LINE(22)
				break;
			}
			HX_STACK_LINE(22)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(22)
			++(_g);
			HX_STACK_LINE(24)
			bool tmp3 = camera->visible;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(24)
			if ((tmp6)){
				HX_STACK_LINE(24)
				bool tmp8 = camera->exists;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(24)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(24)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(24)
				tmp7 = true;
			}
			HX_STACK_LINE(24)
			if ((tmp7)){
				HX_STACK_LINE(26)
				continue;
			}
			HX_STACK_LINE(29)
			::flixel::math::FlxMatrix tmp8 = this->_matrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(29)
			tmp8->identity();
			HX_STACK_LINE(30)
			::flixel::math::FlxMatrix tmp9 = this->_matrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(30)
			int tmp10 = camera->width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(30)
			int tmp11 = camera->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(30)
			tmp9->scale(tmp10,tmp11);
			HX_STACK_LINE(31)
			::flixel::graphics::frames::FlxFrame tmp12 = this->frame;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(31)
			::flixel::math::FlxMatrix tmp13 = this->_matrix;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(31)
			::openfl::_legacy::geom::ColorTransform tmp14 = this->colorTransform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(31)
			camera->drawPixels(tmp12,null(),tmp13,tmp14,null(),null());
		}
	}
return null();
}



FlxBGSprite_obj::FlxBGSprite_obj()
{
}

Dynamic FlxBGSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBGSprite_obj::__mClass;

void FlxBGSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxBGSprite","\xcf","\x08","\x11","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBGSprite_obj >;
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
