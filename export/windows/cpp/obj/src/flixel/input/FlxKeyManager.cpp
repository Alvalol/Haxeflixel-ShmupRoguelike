#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
namespace flixel{
namespace input{

Void FlxKeyManager_obj::__construct(::hx::Class keyListClass)
{
HX_STACK_FRAME("flixel.input.FlxKeyManager","new",0x4637a4fc,"flixel.input.FlxKeyManager.new","flixel/input/FlxKeyManager.hx",8,0xfedfa8b6)
HX_STACK_THIS(this)
HX_STACK_ARG(keyListClass,"keyListClass")
{
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/FlxKeyManager.hx",40,0xfedfa8b6)
			{
				HX_STACK_LINE(40)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(40)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(40)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(40)
	this->_keyListMap = _Function_1_1::Block();
	HX_STACK_LINE(36)
	this->_keyListArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(19)
	this->preventDefaultKeys = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(13)
	this->enabled = true;
	HX_STACK_LINE(198)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	::String tmp2 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	Dynamic tmp3 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	tmp1->addEventListener(tmp2,tmp3,null(),null(),null());
	HX_STACK_LINE(199)
	::openfl::_legacy::display::MovieClip tmp4 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	::openfl::_legacy::display::Stage tmp5 = tmp4->get_stage();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(199)
	::String tmp6 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(199)
	Dynamic tmp7 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(199)
	tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
	HX_STACK_LINE(201)
	::hx::Class tmp8 = keyListClass;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(201)
	::flixel::input::FlxBaseKeyList tmp9 = ::Type_obj::createInstance(tmp8,cpp::ArrayBase_obj::__new().Add((int)1).Add(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(201)
	this->pressed = ((Dynamic)(tmp9));
	HX_STACK_LINE(202)
	::hx::Class tmp10 = keyListClass;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(202)
	::flixel::input::FlxBaseKeyList tmp11 = ::Type_obj::createInstance(tmp10,cpp::ArrayBase_obj::__new().Add((int)2).Add(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(202)
	this->justPressed = ((Dynamic)(tmp11));
	HX_STACK_LINE(203)
	::hx::Class tmp12 = keyListClass;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(203)
	::flixel::input::FlxBaseKeyList tmp13 = ::Type_obj::createInstance(tmp12,cpp::ArrayBase_obj::__new().Add((int)-1).Add(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(203)
	this->justReleased = ((Dynamic)(tmp13));
}
;
	return null();
}

//FlxKeyManager_obj::~FlxKeyManager_obj() { }

Dynamic FlxKeyManager_obj::__CreateEmpty() { return  new FlxKeyManager_obj; }
hx::ObjectPtr< FlxKeyManager_obj > FlxKeyManager_obj::__new(::hx::Class keyListClass)
{  hx::ObjectPtr< FlxKeyManager_obj > _result_ = new FlxKeyManager_obj();
	_result_->__construct(keyListClass);
	return _result_;}

Dynamic FlxKeyManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyManager_obj > _result_ = new FlxKeyManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxKeyManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

FlxKeyManager_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxKeyManager_obj >(this); }
FlxKeyManager_obj::operator ::flixel::input::IFlxInputManager_obj *()
	{ return new ::flixel::input::IFlxInputManager_delegate_< FlxKeyManager_obj >(this); }
bool FlxKeyManager_obj::anyPressed( cpp::ArrayBase KeyArray){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyPressed",0xbdbeabfa,"flixel.input.FlxKeyManager.anyPressed","flixel/input/FlxKeyManager.hx",49,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(50)
	bool tmp = this->checkKeyArrayState(KeyArray,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyPressed,return )

bool FlxKeyManager_obj::anyJustPressed( cpp::ArrayBase KeyArray){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyJustPressed",0x4d22732e,"flixel.input.FlxKeyManager.anyJustPressed","flixel/input/FlxKeyManager.hx",60,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(61)
	bool tmp = this->checkKeyArrayState(KeyArray,(int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustPressed,return )

bool FlxKeyManager_obj::anyJustReleased( cpp::ArrayBase KeyArray){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyJustReleased",0x37d862b1,"flixel.input.FlxKeyManager.anyJustReleased","flixel/input/FlxKeyManager.hx",71,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(72)
	bool tmp = this->checkKeyArrayState(KeyArray,(int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustReleased,return )

int FlxKeyManager_obj::firstPressed( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstPressed",0xa191a036,"flixel.input.FlxKeyManager.firstPressed","flixel/input/FlxKeyManager.hx",81,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		while((true)){
			HX_STACK_LINE(82)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(82)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(82)
			if ((tmp1)){
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(82)
			::flixel::input::FlxInput tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(82)
			++(_g);
			HX_STACK_LINE(84)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			if ((tmp3)){
				HX_STACK_LINE(84)
				bool tmp5 = (key->current == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(84)
				if ((tmp10)){
					HX_STACK_LINE(84)
					tmp4 = (key->current == (int)2);
				}
				else{
					HX_STACK_LINE(84)
					tmp4 = true;
				}
			}
			else{
				HX_STACK_LINE(84)
				tmp4 = false;
			}
			HX_STACK_LINE(84)
			if ((tmp4)){
				HX_STACK_LINE(86)
				Dynamic tmp5 = key->ID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(89)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstPressed,return )

int FlxKeyManager_obj::firstJustPressed( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstJustPressed",0xd38a356a,"flixel.input.FlxKeyManager.firstJustPressed","flixel/input/FlxKeyManager.hx",98,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(99)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			if ((tmp1)){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			::flixel::input::FlxInput tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(101)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			if ((tmp3)){
				HX_STACK_LINE(101)
				tmp4 = (key->current == (int)2);
			}
			else{
				HX_STACK_LINE(101)
				tmp4 = false;
			}
			HX_STACK_LINE(101)
			if ((tmp4)){
				HX_STACK_LINE(103)
				Dynamic tmp5 = key->ID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(106)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustPressed,return )

int FlxKeyManager_obj::firstJustReleased( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstJustReleased",0x4c3a94f5,"flixel.input.FlxKeyManager.firstJustReleased","flixel/input/FlxKeyManager.hx",115,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		while((true)){
			HX_STACK_LINE(116)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(116)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			if ((tmp1)){
				HX_STACK_LINE(116)
				break;
			}
			HX_STACK_LINE(116)
			::flixel::input::FlxInput tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(116)
			++(_g);
			HX_STACK_LINE(118)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			if ((tmp3)){
				HX_STACK_LINE(118)
				tmp4 = (key->current == (int)-1);
			}
			else{
				HX_STACK_LINE(118)
				tmp4 = false;
			}
			HX_STACK_LINE(118)
			if ((tmp4)){
				HX_STACK_LINE(120)
				Dynamic tmp5 = key->ID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(123)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustReleased,return )

bool FlxKeyManager_obj::checkStatus( Dynamic KeyCode,int Status){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","checkStatus",0xbf018ab6,"flixel.input.FlxKeyManager.checkStatus","flixel/input/FlxKeyManager.hx",134,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(135)
	::haxe::ds::IntMap tmp = this->_keyListMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	Dynamic tmp1 = KeyCode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	::flixel::input::FlxInput tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(137)
	bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	if ((tmp3)){
		HX_STACK_LINE(139)
		int tmp4 = Status;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		bool tmp5 = key->hasState(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		if ((tmp5)){
			HX_STACK_LINE(141)
			return true;
		}
	}
	HX_STACK_LINE(151)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkStatus,return )

Array< ::Dynamic > FlxKeyManager_obj::getIsDown( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","getIsDown",0x4bba783e,"flixel.input.FlxKeyManager.getIsDown","flixel/input/FlxKeyManager.hx",160,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	Array< ::Dynamic > keysDown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysDown,"keysDown");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(163)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			if ((tmp1)){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			::flixel::input::FlxInput tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(163)
			++(_g);
			HX_STACK_LINE(165)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			if ((tmp3)){
				HX_STACK_LINE(165)
				bool tmp5 = (key->current == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(165)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(165)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(165)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(165)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(165)
				if ((tmp10)){
					HX_STACK_LINE(165)
					tmp4 = (key->current == (int)2);
				}
				else{
					HX_STACK_LINE(165)
					tmp4 = true;
				}
			}
			else{
				HX_STACK_LINE(165)
				tmp4 = false;
			}
			HX_STACK_LINE(165)
			if ((tmp4)){
				HX_STACK_LINE(167)
				::flixel::input::FlxInput tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				keysDown->push(tmp5);
			}
		}
	}
	HX_STACK_LINE(170)
	return keysDown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,getIsDown,return )

Void FlxKeyManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","destroy",0x5d667f96,"flixel.input.FlxKeyManager.destroy","flixel/input/FlxKeyManager.hx",177,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		this->_keyListArray = null();
		HX_STACK_LINE(179)
		this->_keyListMap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,destroy,(void))

Void FlxKeyManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","reset",0x4cbf7d6b,"flixel.input.FlxKeyManager.reset","flixel/input/FlxKeyManager.hx",187,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(187)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			if ((tmp1)){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			::flixel::input::FlxInput tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(187)
			++(_g);
			HX_STACK_LINE(189)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			if ((tmp3)){
				HX_STACK_LINE(191)
				key->release();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,reset,(void))

Void FlxKeyManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","update",0x595b7aed,"flixel.input.FlxKeyManager.update","flixel/input/FlxKeyManager.hx",211,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		while((true)){
			HX_STACK_LINE(211)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(211)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(211)
			if ((tmp1)){
				HX_STACK_LINE(211)
				break;
			}
			HX_STACK_LINE(211)
			::flixel::input::FlxInput tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(211)
			++(_g);
			HX_STACK_LINE(213)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			if ((tmp3)){
				HX_STACK_LINE(215)
				key->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,update,(void))

bool FlxKeyManager_obj::checkKeyArrayState( cpp::ArrayBase KeyArray,int State){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","checkKeyArrayState",0xb44c8d33,"flixel.input.FlxKeyManager.checkKeyArrayState","flixel/input/FlxKeyManager.hx",228,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(State,"State")
	HX_STACK_LINE(229)
	bool tmp = (KeyArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	if ((tmp)){
		HX_STACK_LINE(231)
		return false;
	}
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			bool tmp1 = (_g < KeyArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(234)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			if ((tmp2)){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(234)
			Dynamic tmp3 = KeyArray->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			Dynamic code = tmp3;		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(234)
			++(_g);
			HX_STACK_LINE(236)
			::haxe::ds::IntMap tmp4 = this->_keyListMap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			Dynamic tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			::flixel::input::FlxInput tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			::flixel::input::FlxInput key = tmp6;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(238)
			bool tmp7 = (key != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			if ((tmp7)){
				HX_STACK_LINE(240)
				int tmp8 = State;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				bool tmp9 = key->hasState(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				if ((tmp9)){
					HX_STACK_LINE(242)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(247)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkKeyArrayState,return )

Void FlxKeyManager_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onKeyUp",0xae1caad7,"flixel.input.FlxKeyManager.onKeyUp","flixel/input/FlxKeyManager.hx",254,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(255)
		::openfl::_legacy::events::KeyboardEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		int tmp1 = this->resolveKeyCode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		int c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(256)
		int tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		::openfl::_legacy::events::KeyboardEvent tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		this->handlePreventDefaultKeys(tmp2,tmp3);
		HX_STACK_LINE(258)
		bool tmp4 = this->enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		if ((tmp4)){
			HX_STACK_LINE(260)
			::haxe::ds::IntMap tmp5 = this->_keyListMap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(260)
			int tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(260)
			::flixel::input::FlxInput tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			::flixel::input::FlxInput key = tmp7;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(260)
			bool tmp8 = (key != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			if ((tmp8)){
				HX_STACK_LINE(260)
				key->release();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyUp,(void))

Void FlxKeyManager_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onKeyDown",0xe38153de,"flixel.input.FlxKeyManager.onKeyDown","flixel/input/FlxKeyManager.hx",268,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(269)
		::openfl::_legacy::events::KeyboardEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		int tmp1 = this->resolveKeyCode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		int c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(270)
		int tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		::openfl::_legacy::events::KeyboardEvent tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		this->handlePreventDefaultKeys(tmp2,tmp3);
		HX_STACK_LINE(272)
		bool tmp4 = this->enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		if ((tmp4)){
			HX_STACK_LINE(274)
			::haxe::ds::IntMap tmp5 = this->_keyListMap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			int tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			::flixel::input::FlxInput tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(274)
			::flixel::input::FlxInput key = tmp7;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(274)
			bool tmp8 = (key != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(274)
			if ((tmp8)){
				HX_STACK_LINE(274)
				key->press();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyDown,(void))

Void FlxKeyManager_obj::handlePreventDefaultKeys( int keyCode,::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","handlePreventDefaultKeys",0x60508309,"flixel.input.FlxKeyManager.handlePreventDefaultKeys","flixel/input/FlxKeyManager.hx",279,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(280)
		::haxe::ds::IntMap tmp = this->_keyListMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		int tmp1 = keyCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		::flixel::input::FlxInput tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(281)
		bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(281)
		if ((tmp4)){
			HX_STACK_LINE(281)
			tmp5 = (this->preventDefaultKeys != null());
		}
		else{
			HX_STACK_LINE(281)
			tmp5 = false;
		}
		HX_STACK_LINE(281)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(281)
		if ((tmp5)){
			HX_STACK_LINE(281)
			Dynamic tmp7 = key->ID;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(281)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(281)
			int tmp9 = this->preventDefaultKeys->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(281)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(281)
			tmp6 = (tmp10 != (int)-1);
		}
		else{
			HX_STACK_LINE(281)
			tmp6 = false;
		}
		HX_STACK_LINE(281)
		if ((tmp6)){
			HX_STACK_LINE(283)
			event->stopImmediatePropagation();
			HX_STACK_LINE(284)
			event->stopPropagation();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,handlePreventDefaultKeys,(void))

bool FlxKeyManager_obj::inKeyArray( cpp::ArrayBase KeyArray,Dynamic Key){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","inKeyArray",0xf3ad4f63,"flixel.input.FlxKeyManager.inKeyArray","flixel/input/FlxKeyManager.hx",293,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(294)
	bool tmp = (KeyArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	if ((tmp)){
		HX_STACK_LINE(296)
		return false;
	}
	else{
		HX_STACK_LINE(300)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(300)
		while((true)){
			HX_STACK_LINE(300)
			bool tmp1 = (_g < KeyArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			if ((tmp2)){
				HX_STACK_LINE(300)
				break;
			}
			HX_STACK_LINE(300)
			Dynamic tmp3 = KeyArray->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			Dynamic key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(300)
			++(_g);
			HX_STACK_LINE(302)
			bool tmp4 = (key == Key);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(302)
			if ((tmp5)){
				HX_STACK_LINE(302)
				tmp6 = (key == (int)-2);
			}
			else{
				HX_STACK_LINE(302)
				tmp6 = true;
			}
			HX_STACK_LINE(302)
			if ((tmp6)){
				HX_STACK_LINE(304)
				return true;
			}
		}
	}
	HX_STACK_LINE(308)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,inKeyArray,return )

int FlxKeyManager_obj::resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","resolveKeyCode",0x9a8225c4,"flixel.input.FlxKeyManager.resolveKeyCode","flixel/input/FlxKeyManager.hx",312,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(313)
	int tmp = e->keyCode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,resolveKeyCode,return )

Void FlxKeyManager_obj::updateKeyStates( int KeyCode,bool Down){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","updateKeyStates",0xe52c7794,"flixel.input.FlxKeyManager.updateKeyStates","flixel/input/FlxKeyManager.hx",320,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_ARG(Down,"Down")
		HX_STACK_LINE(321)
		::haxe::ds::IntMap tmp = this->_keyListMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		int tmp1 = KeyCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		::flixel::input::FlxInput tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(323)
		bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		if ((tmp3)){
			HX_STACK_LINE(325)
			bool tmp4 = Down;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			if ((tmp4)){
				HX_STACK_LINE(327)
				key->press();
			}
			else{
				HX_STACK_LINE(331)
				key->release();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,updateKeyStates,(void))

Void FlxKeyManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onFocus",0xd3a750d5,"flixel.input.FlxKeyManager.onFocus","flixel/input/FlxKeyManager.hx",336,0xfedfa8b6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocus,(void))

Void FlxKeyManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onFocusLost",0x1879b559,"flixel.input.FlxKeyManager.onFocusLost","flixel/input/FlxKeyManager.hx",340,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocusLost,(void))

::flixel::input::FlxInput FlxKeyManager_obj::getKey( int KeyCode){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","getKey",0x7576b78d,"flixel.input.FlxKeyManager.getKey","flixel/input/FlxKeyManager.hx",347,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_LINE(348)
	::haxe::ds::IntMap tmp = this->_keyListMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	int tmp1 = KeyCode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	::flixel::input::FlxInput tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(348)
	::flixel::input::FlxInput tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(348)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,getKey,return )


FlxKeyManager_obj::FlxKeyManager_obj()
{
}

void FlxKeyManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyManager);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_MARK_MEMBER_NAME(_keyListMap,"_keyListMap");
	HX_MARK_END_CLASS();
}

void FlxKeyManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_VISIT_MEMBER_NAME(_keyListMap,"_keyListMap");
}

Dynamic FlxKeyManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"getKey") ) { return getKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return getIsDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"inKeyArray") ) { return inKeyArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed; }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { return _keyListMap; }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		if (HX_FIELD_EQ(inName,"firstPressed") ) { return firstPressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { return _keyListArray; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return resolveKeyCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return updateKeyStates_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"firstJustPressed") ) { return firstJustPressed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"firstJustReleased") ) { return firstJustReleased_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { return preventDefaultKeys; }
		if (HX_FIELD_EQ(inName,"checkKeyArrayState") ) { return checkKeyArrayState_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handlePreventDefaultKeys") ) { return handlePreventDefaultKeys_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { _keyListMap=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { _keyListArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { preventDefaultKeys=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("preventDefaultKeys","\x5d","\xd3","\x15","\x2d"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("_keyListArray","\x9b","\x69","\x07","\xf6"));
	outFields->push(HX_HCSTRING("_keyListMap","\x1e","\xa2","\x94","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxKeyManager_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxKeyManager_obj,preventDefaultKeys),HX_HCSTRING("preventDefaultKeys","\x5d","\xd3","\x15","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,justPressed),HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,justReleased),HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxKeyManager_obj,_keyListArray),HX_HCSTRING("_keyListArray","\x9b","\x69","\x07","\xf6")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxKeyManager_obj,_keyListMap),HX_HCSTRING("_keyListMap","\x1e","\xa2","\x94","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("preventDefaultKeys","\x5d","\xd3","\x15","\x2d"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("_keyListArray","\x9b","\x69","\x07","\xf6"),
	HX_HCSTRING("_keyListMap","\x1e","\xa2","\x94","\x4b"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("firstPressed","\x52","\xe8","\x2e","\x63"),
	HX_HCSTRING("firstJustPressed","\x86","\xbb","\xa3","\x20"),
	HX_HCSTRING("firstJustReleased","\x59","\x67","\x76","\x75"),
	HX_HCSTRING("checkStatus","\x1a","\xba","\x0d","\xe8"),
	HX_HCSTRING("getIsDown","\xa2","\x46","\x2b","\xdc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("checkKeyArrayState","\x4f","\xd2","\x68","\x9f"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("handlePreventDefaultKeys","\x25","\x85","\xc7","\x5d"),
	HX_HCSTRING("inKeyArray","\x7f","\x18","\xf1","\xc5"),
	HX_HCSTRING("resolveKeyCode","\xe0","\xac","\x16","\xf4"),
	HX_HCSTRING("updateKeyStates","\xf8","\x28","\x8e","\xed"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("getKey","\xa9","\xc2","\x20","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxKeyManager_obj::__mClass;

void FlxKeyManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxKeyManager","\x0a","\xb7","\x52","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxKeyManager_obj >;
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
