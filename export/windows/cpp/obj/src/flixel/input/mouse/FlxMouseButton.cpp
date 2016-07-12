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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouseButton_obj::__construct(int ID)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","new",0xa21f5d96,"flixel.input.mouse.FlxMouseButton.new","flixel/input/mouse/FlxMouseButton.hx",10,0x7fcdf6f7)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(28)
	this->justPressedTimeInTicks = ((Float)-1);
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/mouse/FlxMouseButton.hx",27,0x7fcdf6f7)
			{
				HX_STACK_LINE(27)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(27)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(27)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(27)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(27)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(27)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(27)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(27)
				point->_inPool = false;
				HX_STACK_LINE(27)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	this->justPressedPosition = _Function_1_1::Block();
	HX_STACK_LINE(10)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//FlxMouseButton_obj::~FlxMouseButton_obj() { }

Dynamic FlxMouseButton_obj::__CreateEmpty() { return  new FlxMouseButton_obj; }
hx::ObjectPtr< FlxMouseButton_obj > FlxMouseButton_obj::__new(int ID)
{  hx::ObjectPtr< FlxMouseButton_obj > _result_ = new FlxMouseButton_obj();
	_result_->__construct(ID);
	return _result_;}

Dynamic FlxMouseButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseButton_obj > _result_ = new FlxMouseButton_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxMouseButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxMouseButton_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxMouseButton_obj >(this); }
Void FlxMouseButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","update",0x2ce19e93,"flixel.input.mouse.FlxMouseButton.update","flixel/input/mouse/FlxMouseButton.hx",34,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::update();
		HX_STACK_LINE(37)
		int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		if ((tmp1)){
			HX_STACK_LINE(39)
			::flixel::math::FlxPoint tmp2 = this->justPressedPosition;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			int tmp4 = tmp3->screenX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			::flixel::input::mouse::FlxMouse tmp5 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			int tmp6 = tmp5->screenY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			tmp2->set(tmp4,tmp6);
			HX_STACK_LINE(40)
			::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			this->justPressedTimeInTicks = tmp7->ticks;
		}
		else{
			HX_STACK_LINE(43)
			int tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			bool tmp3 = (tmp2 == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			if ((tmp3)){
				HX_STACK_LINE(45)
				int tmp4 = this->ID;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				::flixel::math::FlxPoint tmp5 = this->justPressedPosition;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				::flixel::input::mouse::FlxMouse tmp6 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				::flixel::math::FlxPoint tmp7 = tmp6->getScreenPosition(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				Float tmp8 = this->justPressedTimeInTicks;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				::flixel::input::FlxSwipe tmp9 = ::flixel::input::FlxSwipe_obj::__new(tmp4,tmp5,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(45)
				::flixel::FlxG_obj::swipes->push(tmp9);
			}
		}
	}
return null();
}


Void FlxMouseButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","destroy",0x9f3f8d30,"flixel.input.mouse.FlxMouseButton.destroy","flixel/input/mouse/FlxMouseButton.hx",51,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::flixel::math::FlxPoint tmp = this->justPressedPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		this->justPressedPosition = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,destroy,(void))

Void FlxMouseButton_obj::onDown( Dynamic _){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onDown",0x8ad419ab,"flixel.input.mouse.FlxMouseButton.onDown","flixel/input/mouse/FlxMouseButton.hx",83,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(83)
		this->press();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onDown,(void))

Void FlxMouseButton_obj::onUp( Dynamic _){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onUp",0x3a027364,"flixel.input.mouse.FlxMouseButton.onUp","flixel/input/mouse/FlxMouseButton.hx",96,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(96)
		this->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onUp,(void))

::flixel::input::mouse::FlxMouseButton FlxMouseButton_obj::getByID( int id){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","getByID",0x8e5f095e,"flixel.input.mouse.FlxMouseButton.getByID","flixel/input/mouse/FlxMouseButton.hx",13,0x7fcdf6f7)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(14)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	::flixel::input::mouse::FlxMouseButton tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	switch( (int)(tmp)){
		case (int)-1: {
			HX_STACK_LINE(16)
			::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(16)
			tmp1 = tmp2->_leftButton;
		}
		;break;
		case (int)-2: {
			HX_STACK_LINE(19)
			::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			tmp1 = tmp2->_middleButton;
		}
		;break;
		case (int)-3: {
			HX_STACK_LINE(20)
			::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			tmp1 = tmp2->_rightButton;
		}
		;break;
	}
	HX_STACK_LINE(14)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,getByID,return )


FlxMouseButton_obj::FlxMouseButton_obj()
{
}

void FlxMouseButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseButton);
	HX_MARK_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_MARK_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	::flixel::input::FlxInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouseButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_VISIT_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	::flixel::input::FlxInput_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxMouseButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { return justPressedPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { return justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxMouseButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { outValue = getByID_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxMouseButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { justPressedPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae"));
	outFields->push(HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxMouseButton_obj,justPressedPosition),HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae")},
	{hx::fsFloat,(int)offsetof(FlxMouseButton_obj,justPressedTimeInTicks),HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae"),
	HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"),
	HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMouseButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	::String(null()) };

void FlxMouseButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse.FlxMouseButton","\xa4","\x9a","\xd7","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMouseButton_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMouseButton_obj >;
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
} // end namespace input
} // end namespace mouse
