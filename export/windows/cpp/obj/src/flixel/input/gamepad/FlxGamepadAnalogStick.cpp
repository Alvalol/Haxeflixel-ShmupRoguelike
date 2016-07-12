#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadAnalogStick_obj::__construct(int x,int y,Dynamic settings)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadAnalogStick","new",0xfbbee6c0,"flixel.input.gamepad.FlxGamepadAnalogStick.new","flixel/input/gamepad/FlxGamepadAnalogStick.hx",5,0xc7b72a73)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(settings,"settings")
{
	HX_STACK_LINE(35)
	this->mode = ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_ANALOG;
	HX_STACK_LINE(30)
	this->digitalThreshold = ((Float)0.5);
	HX_STACK_LINE(25)
	this->rawRight = (int)-1;
	HX_STACK_LINE(21)
	this->rawLeft = (int)-1;
	HX_STACK_LINE(17)
	this->rawDown = (int)-1;
	HX_STACK_LINE(13)
	this->rawUp = (int)-1;
	HX_STACK_LINE(39)
	this->x = x;
	HX_STACK_LINE(40)
	this->y = y;
	HX_STACK_LINE(42)
	bool tmp = (settings == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	if ((tmp)){
		HX_STACK_LINE(43)
		return null();
	}
	HX_STACK_LINE(45)
	bool tmp1 = (settings->__Field(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::flixel::input::gamepad::FlxAnalogToDigitalMode tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	if ((tmp1)){
		HX_STACK_LINE(45)
		tmp2 = settings->__Field(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(45)
		tmp2 = ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_ANALOG;
	}
	HX_STACK_LINE(45)
	this->mode = tmp2;
	HX_STACK_LINE(46)
	bool tmp3 = (settings->__Field(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	if ((tmp3)){
		HX_STACK_LINE(46)
		tmp4 = settings->__Field(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(46)
		tmp4 = (int)-1;
	}
	HX_STACK_LINE(46)
	this->rawUp = tmp4;
	HX_STACK_LINE(47)
	bool tmp5 = (settings->__Field(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(47)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(47)
	if ((tmp5)){
		HX_STACK_LINE(47)
		tmp6 = settings->__Field(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(47)
		tmp6 = (int)-1;
	}
	HX_STACK_LINE(47)
	this->rawDown = tmp6;
	HX_STACK_LINE(48)
	bool tmp7 = (settings->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	if ((tmp7)){
		HX_STACK_LINE(48)
		tmp8 = settings->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(48)
		tmp8 = (int)-1;
	}
	HX_STACK_LINE(48)
	this->rawLeft = tmp8;
	HX_STACK_LINE(49)
	bool tmp9 = (settings->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(49)
	int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	if ((tmp9)){
		HX_STACK_LINE(49)
		tmp10 = settings->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(49)
		tmp10 = (int)-1;
	}
	HX_STACK_LINE(49)
	this->rawRight = tmp10;
	HX_STACK_LINE(50)
	bool tmp11 = (settings->__Field(HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(50)
	if ((tmp11)){
		HX_STACK_LINE(50)
		tmp12 = settings->__Field(HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(50)
		tmp12 = (int)-1;
	}
	HX_STACK_LINE(50)
	this->digitalThreshold = tmp12;
}
;
	return null();
}

//FlxGamepadAnalogStick_obj::~FlxGamepadAnalogStick_obj() { }

Dynamic FlxGamepadAnalogStick_obj::__CreateEmpty() { return  new FlxGamepadAnalogStick_obj; }
hx::ObjectPtr< FlxGamepadAnalogStick_obj > FlxGamepadAnalogStick_obj::__new(int x,int y,Dynamic settings)
{  hx::ObjectPtr< FlxGamepadAnalogStick_obj > _result_ = new FlxGamepadAnalogStick_obj();
	_result_->__construct(x,y,settings);
	return _result_;}

Dynamic FlxGamepadAnalogStick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadAnalogStick_obj > _result_ = new FlxGamepadAnalogStick_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String FlxGamepadAnalogStick_obj::toString( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadAnalogStick","toString",0x35569e4c,"flixel.input.gamepad.FlxGamepadAnalogStick.toString","flixel/input/gamepad/FlxGamepadAnalogStick.hx",54,0xc7b72a73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(56)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(56)
		int tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		_this->value = tmp3;
		HX_STACK_LINE(56)
		tmp = _this;
	}
	HX_STACK_LINE(57)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(57)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(57)
		int tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		_this->value = tmp4;
		HX_STACK_LINE(57)
		tmp1 = _this;
	}
	HX_STACK_LINE(58)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(58)
		_this->label = HX_HCSTRING("rawUp","\x63","\x6a","\x26","\xe4");
		HX_STACK_LINE(58)
		int tmp5 = this->rawUp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		_this->value = tmp5;
		HX_STACK_LINE(58)
		tmp2 = _this;
	}
	HX_STACK_LINE(59)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(59)
		_this->label = HX_HCSTRING("rawDown","\x6a","\x0e","\x23","\xff");
		HX_STACK_LINE(59)
		int tmp6 = this->rawDown;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		_this->value = tmp6;
		HX_STACK_LINE(59)
		tmp3 = _this;
	}
	HX_STACK_LINE(60)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(60)
		_this->label = HX_HCSTRING("rawLeft","\x0f","\x1e","\x65","\x04");
		HX_STACK_LINE(60)
		int tmp7 = this->rawLeft;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		_this->value = tmp7;
		HX_STACK_LINE(60)
		tmp4 = _this;
	}
	HX_STACK_LINE(61)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(61)
		_this->label = HX_HCSTRING("rawRight","\xd4","\x3c","\x22","\x4b");
		HX_STACK_LINE(61)
		int tmp8 = this->rawRight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		_this->value = tmp8;
		HX_STACK_LINE(61)
		tmp5 = _this;
	}
	HX_STACK_LINE(62)
	::flixel::util::LabelValuePair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp7 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		::flixel::util::LabelValuePair tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		::flixel::util::LabelValuePair _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(62)
		_this->label = HX_HCSTRING("digitalThreshold","\xb3","\x20","\x9a","\x6e");
		HX_STACK_LINE(62)
		Float tmp9 = this->digitalThreshold;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		_this->value = tmp9;
		HX_STACK_LINE(62)
		tmp6 = _this;
	}
	HX_STACK_LINE(63)
	::flixel::util::LabelValuePair tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp8 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		::flixel::util::LabelValuePair tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		::flixel::util::LabelValuePair _this = tmp9;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(63)
		_this->label = HX_HCSTRING("mode","\x63","\xd3","\x60","\x48");
		HX_STACK_LINE(63)
		::flixel::input::gamepad::FlxAnalogToDigitalMode tmp10 = this->mode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		_this->value = tmp10;
		HX_STACK_LINE(63)
		tmp7 = _this;
	}
	HX_STACK_LINE(55)
	::String tmp8 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStick_obj,toString,return )


FlxGamepadAnalogStick_obj::FlxGamepadAnalogStick_obj()
{
}

void FlxGamepadAnalogStick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogStick);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(rawUp,"rawUp");
	HX_MARK_MEMBER_NAME(rawDown,"rawDown");
	HX_MARK_MEMBER_NAME(rawLeft,"rawLeft");
	HX_MARK_MEMBER_NAME(rawRight,"rawRight");
	HX_MARK_MEMBER_NAME(digitalThreshold,"digitalThreshold");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogStick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(rawUp,"rawUp");
	HX_VISIT_MEMBER_NAME(rawDown,"rawDown");
	HX_VISIT_MEMBER_NAME(rawLeft,"rawLeft");
	HX_VISIT_MEMBER_NAME(rawRight,"rawRight");
	HX_VISIT_MEMBER_NAME(digitalThreshold,"digitalThreshold");
	HX_VISIT_MEMBER_NAME(mode,"mode");
}

Dynamic FlxGamepadAnalogStick_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rawUp") ) { return rawUp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawDown") ) { return rawDown; }
		if (HX_FIELD_EQ(inName,"rawLeft") ) { return rawLeft; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rawRight") ) { return rawRight; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"digitalThreshold") ) { return digitalThreshold; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadAnalogStick_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::flixel::input::gamepad::FlxAnalogToDigitalMode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rawUp") ) { rawUp=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawDown") ) { rawDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rawLeft") ) { rawLeft=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rawRight") ) { rawRight=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"digitalThreshold") ) { digitalThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogStick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("rawUp","\x63","\x6a","\x26","\xe4"));
	outFields->push(HX_HCSTRING("rawDown","\x6a","\x0e","\x23","\xff"));
	outFields->push(HX_HCSTRING("rawLeft","\x0f","\x1e","\x65","\x04"));
	outFields->push(HX_HCSTRING("rawRight","\xd4","\x3c","\x22","\x4b"));
	outFields->push(HX_HCSTRING("digitalThreshold","\xb3","\x20","\x9a","\x6e"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawUp),HX_HCSTRING("rawUp","\x63","\x6a","\x26","\xe4")},
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawDown),HX_HCSTRING("rawDown","\x6a","\x0e","\x23","\xff")},
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawLeft),HX_HCSTRING("rawLeft","\x0f","\x1e","\x65","\x04")},
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStick_obj,rawRight),HX_HCSTRING("rawRight","\xd4","\x3c","\x22","\x4b")},
	{hx::fsFloat,(int)offsetof(FlxGamepadAnalogStick_obj,digitalThreshold),HX_HCSTRING("digitalThreshold","\xb3","\x20","\x9a","\x6e")},
	{hx::fsObject /*::flixel::input::gamepad::FlxAnalogToDigitalMode*/ ,(int)offsetof(FlxGamepadAnalogStick_obj,mode),HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("rawUp","\x63","\x6a","\x26","\xe4"),
	HX_HCSTRING("rawDown","\x6a","\x0e","\x23","\xff"),
	HX_HCSTRING("rawLeft","\x0f","\x1e","\x65","\x04"),
	HX_HCSTRING("rawRight","\xd4","\x3c","\x22","\x4b"),
	HX_HCSTRING("digitalThreshold","\xb3","\x20","\x9a","\x6e"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadAnalogStick_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadAnalogStick_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadAnalogStick_obj::__mClass;

void FlxGamepadAnalogStick_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepadAnalogStick","\xce","\xc6","\x9c","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadAnalogStick_obj >;
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
} // end namespace gamepad
