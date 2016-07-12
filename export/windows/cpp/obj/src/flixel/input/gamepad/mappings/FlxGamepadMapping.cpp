#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_Manufacturer
#include <flixel/input/gamepad/mappings/Manufacturer.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

Void FlxGamepadMapping_obj::__construct(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","new",0xf72cefab,"flixel.input.gamepad.mappings.FlxGamepadMapping.new","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",12,0x5edd1803)
HX_STACK_THIS(this)
HX_STACK_ARG(attachment,"attachment")
{
	HX_STACK_LINE(21)
	this->attachment = ::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE;
	HX_STACK_LINE(15)
	this->supportsPointer = false;
	HX_STACK_LINE(14)
	this->supportsMotion = false;
	HX_STACK_LINE(27)
	bool tmp = (attachment != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	if ((tmp)){
		HX_STACK_LINE(28)
		::flixel::input::gamepad::FlxGamepadAttachment tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		this->set_attachment(tmp1);
	}
	HX_STACK_LINE(39)
	this->initValues();
}
;
	return null();
}

//FlxGamepadMapping_obj::~FlxGamepadMapping_obj() { }

Dynamic FlxGamepadMapping_obj::__CreateEmpty() { return  new FlxGamepadMapping_obj; }
hx::ObjectPtr< FlxGamepadMapping_obj > FlxGamepadMapping_obj::__new(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{  hx::ObjectPtr< FlxGamepadMapping_obj > _result_ = new FlxGamepadMapping_obj();
	_result_->__construct(attachment);
	return _result_;}

Dynamic FlxGamepadMapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadMapping_obj > _result_ = new FlxGamepadMapping_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxGamepadMapping_obj::initValues( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","initValues",0xb7dc8f27,"flixel.input.gamepad.mappings.FlxGamepadMapping.initValues","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",42,0x5edd1803)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMapping_obj,initValues,(void))

::flixel::input::gamepad::FlxGamepadAnalogStick FlxGamepadMapping_obj::getAnalogStick( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","getAnalogStick",0x7f97569f,"flixel.input.gamepad.mappings.FlxGamepadMapping.getAnalogStick","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",45,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(46)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	switch( (int)(tmp)){
		case (int)19: {
			HX_STACK_LINE(49)
			tmp1 = this->leftStick;
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(51)
			tmp1 = this->rightStick;
		}
		;break;
		default: {
			HX_STACK_LINE(53)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(46)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getAnalogStick,return )

int FlxGamepadMapping_obj::getID( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","getID",0xc83859fc,"flixel.input.gamepad.mappings.FlxGamepadMapping.getID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",62,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(62)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getID,return )

int FlxGamepadMapping_obj::getRawID( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","getRawID",0xe7780022,"flixel.input.gamepad.mappings.FlxGamepadMapping.getRawID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",70,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(70)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getRawID,return )

bool FlxGamepadMapping_obj::isAxisForMotion( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","isAxisForMotion",0x69ad82bf,"flixel.input.gamepad.mappings.FlxGamepadMapping.isAxisForMotion","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",75,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(75)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,isAxisForMotion,return )

bool FlxGamepadMapping_obj::isAxisFlipped( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","isAxisFlipped",0x941958e2,"flixel.input.gamepad.mappings.FlxGamepadMapping.isAxisFlipped","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",83,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(83)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,isAxisFlipped,return )

int FlxGamepadMapping_obj::axisIndexToRawID( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","axisIndexToRawID",0x3c47e36c,"flixel.input.gamepad.mappings.FlxGamepadMapping.axisIndexToRawID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",93,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(93)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,axisIndexToRawID,return )

int FlxGamepadMapping_obj::checkForFakeAxis( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","checkForFakeAxis",0xd918b8ec,"flixel.input.gamepad.mappings.FlxGamepadMapping.checkForFakeAxis","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",98,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(98)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,checkForFakeAxis,return )

::flixel::input::gamepad::FlxGamepadAttachment FlxGamepadMapping_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.FlxGamepadMapping","set_attachment",0x9aaad735,"flixel.input.gamepad.mappings.FlxGamepadMapping.set_attachment","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",103,0x5edd1803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_LINE(104)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = this->attachment = attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,set_attachment,return )


FlxGamepadMapping_obj::FlxGamepadMapping_obj()
{
}

void FlxGamepadMapping_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadMapping);
	HX_MARK_MEMBER_NAME(supportsMotion,"supportsMotion");
	HX_MARK_MEMBER_NAME(supportsPointer,"supportsPointer");
	HX_MARK_MEMBER_NAME(leftStick,"leftStick");
	HX_MARK_MEMBER_NAME(rightStick,"rightStick");
	HX_MARK_MEMBER_NAME(attachment,"attachment");
	HX_MARK_MEMBER_NAME(manufacturer,"manufacturer");
	HX_MARK_END_CLASS();
}

void FlxGamepadMapping_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(supportsMotion,"supportsMotion");
	HX_VISIT_MEMBER_NAME(supportsPointer,"supportsPointer");
	HX_VISIT_MEMBER_NAME(leftStick,"leftStick");
	HX_VISIT_MEMBER_NAME(rightStick,"rightStick");
	HX_VISIT_MEMBER_NAME(attachment,"attachment");
	HX_VISIT_MEMBER_NAME(manufacturer,"manufacturer");
}

Dynamic FlxGamepadMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return getRawID_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftStick") ) { return leftStick; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightStick") ) { return rightStick; }
		if (HX_FIELD_EQ(inName,"attachment") ) { return attachment; }
		if (HX_FIELD_EQ(inName,"initValues") ) { return initValues_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { return manufacturer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return isAxisFlipped_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsMotion") ) { return supportsMotion; }
		if (HX_FIELD_EQ(inName,"getAnalogStick") ) { return getAnalogStick_dyn(); }
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return set_attachment_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"supportsPointer") ) { return supportsPointer; }
		if (HX_FIELD_EQ(inName,"isAxisForMotion") ) { return isAxisForMotion_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return axisIndexToRawID_dyn(); }
		if (HX_FIELD_EQ(inName,"checkForFakeAxis") ) { return checkForFakeAxis_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadMapping_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftStick") ) { leftStick=inValue.Cast< ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightStick") ) { rightStick=inValue.Cast< ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attachment") ) { if (inCallProp == hx::paccAlways) return set_attachment(inValue);attachment=inValue.Cast< ::flixel::input::gamepad::FlxGamepadAttachment >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { manufacturer=inValue.Cast< ::flixel::input::gamepad::mappings::Manufacturer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsMotion") ) { supportsMotion=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"supportsPointer") ) { supportsPointer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadMapping_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("supportsMotion","\xda","\x76","\xa1","\x62"));
	outFields->push(HX_HCSTRING("supportsPointer","\x99","\x5f","\x50","\x15"));
	outFields->push(HX_HCSTRING("leftStick","\xc9","\x67","\xf1","\x98"));
	outFields->push(HX_HCSTRING("rightStick","\xd4","\x5f","\xd6","\x86"));
	outFields->push(HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd"));
	outFields->push(HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxGamepadMapping_obj,supportsMotion),HX_HCSTRING("supportsMotion","\xda","\x76","\xa1","\x62")},
	{hx::fsBool,(int)offsetof(FlxGamepadMapping_obj,supportsPointer),HX_HCSTRING("supportsPointer","\x99","\x5f","\x50","\x15")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(int)offsetof(FlxGamepadMapping_obj,leftStick),HX_HCSTRING("leftStick","\xc9","\x67","\xf1","\x98")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(int)offsetof(FlxGamepadMapping_obj,rightStick),HX_HCSTRING("rightStick","\xd4","\x5f","\xd6","\x86")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAttachment*/ ,(int)offsetof(FlxGamepadMapping_obj,attachment),HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd")},
	{hx::fsObject /*::flixel::input::gamepad::mappings::Manufacturer*/ ,(int)offsetof(FlxGamepadMapping_obj,manufacturer),HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("supportsMotion","\xda","\x76","\xa1","\x62"),
	HX_HCSTRING("supportsPointer","\x99","\x5f","\x50","\x15"),
	HX_HCSTRING("leftStick","\xc9","\x67","\xf1","\x98"),
	HX_HCSTRING("rightStick","\xd4","\x5f","\xd6","\x86"),
	HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd"),
	HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14"),
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getAnalogStick","\x0a","\xf8","\x74","\x58"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("isAxisForMotion","\xf4","\x1e","\xbd","\x52"),
	HX_HCSTRING("isAxisFlipped","\xd7","\x0d","\xda","\x83"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	HX_HCSTRING("checkForFakeAxis","\x17","\xcb","\xb1","\xdd"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadMapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadMapping_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadMapping_obj::__mClass;

void FlxGamepadMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.FlxGamepadMapping","\x39","\x3e","\x23","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadMapping_obj >;
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
} // end namespace mappings
