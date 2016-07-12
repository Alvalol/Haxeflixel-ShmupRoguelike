#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_OUYAID
#include <flixel/input/gamepad/id/OUYAID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_OUYAMapping
#include <flixel/input/gamepad/mappings/OUYAMapping.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

Void OUYAMapping_obj::__construct(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.mappings.OUYAMapping","new",0x98fc348c,"flixel.input.gamepad.mappings.OUYAMapping.new","flixel/input/gamepad/mappings/OUYAMapping.hx",7,0xfd22efc2)
HX_STACK_THIS(this)
HX_STACK_ARG(attachment,"attachment")
{
	HX_STACK_LINE(7)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	super::__construct(tmp);
}
;
	return null();
}

//OUYAMapping_obj::~OUYAMapping_obj() { }

Dynamic OUYAMapping_obj::__CreateEmpty() { return  new OUYAMapping_obj; }
hx::ObjectPtr< OUYAMapping_obj > OUYAMapping_obj::__new(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{  hx::ObjectPtr< OUYAMapping_obj > _result_ = new OUYAMapping_obj();
	_result_->__construct(attachment);
	return _result_;}

Dynamic OUYAMapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OUYAMapping_obj > _result_ = new OUYAMapping_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void OUYAMapping_obj::initValues( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.mappings.OUYAMapping","initValues",0x29941866,"flixel.input.gamepad.mappings.OUYAMapping.initValues","flixel/input/gamepad/mappings/OUYAMapping.hx",18,0xfd22efc2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp = ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		this->leftStick = tmp;
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp1 = ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		this->rightStick = tmp1;
	}
return null();
}


int OUYAMapping_obj::getID( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.OUYAMapping","getID",0xf00b591d,"flixel.input.gamepad.mappings.OUYAMapping.getID","flixel/input/gamepad/mappings/OUYAMapping.hx",24,0xfd22efc2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(25)
	int tmp = rawID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = (int)1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(29)
			tmp1 = (int)2;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(30)
			tmp1 = (int)3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(31)
			tmp1 = (int)10;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(32)
			tmp1 = (int)8;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(33)
			tmp1 = (int)9;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(34)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(35)
			tmp1 = (int)5;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(36)
			tmp1 = (int)17;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(37)
			tmp1 = (int)18;
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(38)
			tmp1 = (int)11;
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(39)
			tmp1 = (int)12;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(40)
			tmp1 = (int)13;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(41)
			tmp1 = (int)14;
		}
		;break;
		default: {
			HX_STACK_LINE(42)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(25)
	return tmp1;
}


int OUYAMapping_obj::getRawID( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.OUYAMapping","getRawID",0x921e6ba1,"flixel.input.gamepad.mappings.OUYAMapping.getRawID","flixel/input/gamepad/mappings/OUYAMapping.hx",47,0xfd22efc2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(48)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(50)
			tmp1 = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(51)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(52)
			tmp1 = (int)3;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(53)
			tmp1 = (int)4;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(54)
			tmp1 = (int)2;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(55)
			tmp1 = (int)10;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(56)
			tmp1 = (int)11;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(57)
			tmp1 = (int)6;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(58)
			tmp1 = (int)7;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(59)
			tmp1 = (int)16;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(60)
			tmp1 = (int)15;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(61)
			tmp1 = (int)13;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(62)
			tmp1 = (int)14;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(63)
			tmp1 = (int)8;
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(64)
			tmp1 = (int)9;
		}
		;break;
		default: {
			HX_STACK_LINE(65)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(48)
	return tmp1;
}


int OUYAMapping_obj::axisIndexToRawID( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.OUYAMapping","axisIndexToRawID",0x899465eb,"flixel.input.gamepad.mappings.OUYAMapping.axisIndexToRawID","flixel/input/gamepad/mappings/OUYAMapping.hx",71,0xfd22efc2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(72)
	int tmp = axisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp1 = this->leftStick;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	int tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	bool tmp3 = (tmp == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	if ((tmp3)){
		HX_STACK_LINE(72)
		tmp4 = (int)19;
	}
	else{
		HX_STACK_LINE(73)
		int tmp5 = axisID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp6 = this->leftStick;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		int tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		if ((tmp8)){
			HX_STACK_LINE(73)
			tmp4 = (int)20;
		}
		else{
			HX_STACK_LINE(74)
			int tmp9 = axisID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp10 = this->rightStick;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			int tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(74)
			bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			if ((tmp12)){
				HX_STACK_LINE(74)
				tmp4 = (int)21;
			}
			else{
				HX_STACK_LINE(75)
				int tmp13 = axisID;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(75)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp14 = this->rightStick;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(75)
				int tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(75)
				bool tmp16 = (tmp13 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(75)
				if ((tmp16)){
					HX_STACK_LINE(75)
					tmp4 = (int)22;
				}
				else{
					HX_STACK_LINE(76)
					tmp4 = axisID;
				}
			}
		}
	}
	HX_STACK_LINE(72)
	return tmp4;
}


int OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

int OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

int OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

int OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


OUYAMapping_obj::OUYAMapping_obj()
{
}

Dynamic OUYAMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return getRawID_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return initValues_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return axisIndexToRawID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(OUYAMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class OUYAMapping_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null()) };

void OUYAMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.OUYAMapping","\x9a","\x3e","\x94","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OUYAMapping_obj >;
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

void OUYAMapping_obj::__boot()
{
	LEFT_ANALOG_STICK_FAKE_X= (int)19;
	LEFT_ANALOG_STICK_FAKE_Y= (int)20;
	RIGHT_ANALOG_STICK_FAKE_X= (int)21;
	RIGHT_ANALOG_STICK_FAKE_Y= (int)22;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
