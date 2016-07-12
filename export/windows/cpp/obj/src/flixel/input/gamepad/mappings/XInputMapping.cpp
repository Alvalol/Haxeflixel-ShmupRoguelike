#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_XInputID
#include <flixel/input/gamepad/id/XInputID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#include <flixel/input/gamepad/mappings/XInputMapping.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

Void XInputMapping_obj::__construct(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","new",0x0bf6dd68,"flixel.input.gamepad.mappings.XInputMapping.new","flixel/input/gamepad/mappings/XInputMapping.hx",7,0x442329e6)
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

//XInputMapping_obj::~XInputMapping_obj() { }

Dynamic XInputMapping_obj::__CreateEmpty() { return  new XInputMapping_obj; }
hx::ObjectPtr< XInputMapping_obj > XInputMapping_obj::__new(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{  hx::ObjectPtr< XInputMapping_obj > _result_ = new XInputMapping_obj();
	_result_->__construct(attachment);
	return _result_;}

Dynamic XInputMapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XInputMapping_obj > _result_ = new XInputMapping_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void XInputMapping_obj::initValues( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","initValues",0xac18830a,"flixel.input.gamepad.mappings.XInputMapping.initValues","flixel/input/gamepad/mappings/XInputMapping.hx",21,0x442329e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp = ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this->leftStick = tmp;
		HX_STACK_LINE(23)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp1 = ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		this->rightStick = tmp1;
	}
return null();
}


int XInputMapping_obj::getID( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","getID",0x15a6f0f9,"flixel.input.gamepad.mappings.XInputMapping.getID","flixel/input/gamepad/mappings/XInputMapping.hx",27,0x442329e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(28)
	int tmp = rawID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(30)
			tmp1 = (int)1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(31)
			tmp1 = (int)0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(32)
			tmp1 = (int)3;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(33)
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(34)
			tmp1 = (int)6;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(35)
			tmp1 = (int)10;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(36)
			tmp1 = (int)7;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(37)
			tmp1 = (int)8;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(38)
			tmp1 = (int)9;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(39)
			tmp1 = (int)4;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(40)
			tmp1 = (int)5;
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(42)
			tmp1 = (int)17;
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(43)
			tmp1 = (int)18;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(48)
			tmp1 = (int)11;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(49)
			tmp1 = (int)12;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(50)
			tmp1 = (int)13;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(51)
			tmp1 = (int)14;
		}
		;break;
		default: {
			HX_STACK_LINE(52)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(28)
	return tmp1;
}


int XInputMapping_obj::getRawID( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","getRawID",0x00062545,"flixel.input.gamepad.mappings.XInputMapping.getRawID","flixel/input/gamepad/mappings/XInputMapping.hx",57,0x442329e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(58)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(60)
			tmp1 = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(61)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(62)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(63)
			tmp1 = (int)3;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(64)
			tmp1 = (int)6;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(65)
			tmp1 = (int)10;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(66)
			tmp1 = (int)7;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(67)
			tmp1 = (int)8;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(68)
			tmp1 = (int)9;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(69)
			tmp1 = (int)4;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(70)
			tmp1 = (int)5;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(71)
			tmp1 = (int)11;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(72)
			tmp1 = (int)12;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(73)
			tmp1 = (int)13;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(74)
			tmp1 = (int)14;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(75)
			tmp1 = (int)2;
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(76)
			tmp1 = (int)5;
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(78)
			tmp1 = (int)19;
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(79)
			tmp1 = (int)20;
		}
		;break;
		default: {
			HX_STACK_LINE(81)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(58)
	return tmp1;
}


int XInputMapping_obj::axisIndexToRawID( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.XInputMapping","axisIndexToRawID",0x4e04638f,"flixel.input.gamepad.mappings.XInputMapping.axisIndexToRawID","flixel/input/gamepad/mappings/XInputMapping.hx",98,0x442329e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(100)
	int tmp = axisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp1 = this->leftStick;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	int tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	bool tmp3 = (tmp == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	if ((tmp3)){
		HX_STACK_LINE(100)
		tmp4 = (int)15;
	}
	else{
		HX_STACK_LINE(101)
		int tmp5 = axisID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp6 = this->leftStick;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		int tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		if ((tmp8)){
			HX_STACK_LINE(101)
			tmp4 = (int)16;
		}
		else{
			HX_STACK_LINE(102)
			int tmp9 = axisID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(102)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp10 = this->rightStick;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			int tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			if ((tmp12)){
				HX_STACK_LINE(102)
				tmp4 = (int)17;
			}
			else{
				HX_STACK_LINE(103)
				int tmp13 = axisID;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(103)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp14 = this->rightStick;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(103)
				int tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(103)
				bool tmp16 = (tmp13 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(103)
				if ((tmp16)){
					HX_STACK_LINE(103)
					tmp4 = (int)18;
				}
				else{
					HX_STACK_LINE(104)
					bool tmp17 = (axisID == (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(104)
					if ((tmp17)){
						HX_STACK_LINE(104)
						tmp4 = (int)19;
					}
					else{
						HX_STACK_LINE(105)
						bool tmp18 = (axisID == (int)5);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(105)
						if ((tmp18)){
							HX_STACK_LINE(105)
							tmp4 = (int)20;
						}
						else{
							HX_STACK_LINE(106)
							tmp4 = axisID;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(100)
	return tmp4;
}


int XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

int XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

int XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

int XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;

int XInputMapping_obj::LEFT_TRIGGER_FAKE;

int XInputMapping_obj::RIGHT_TRIGGER_FAKE;


XInputMapping_obj::XInputMapping_obj()
{
}

Dynamic XInputMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &XInputMapping_obj::LEFT_TRIGGER_FAKE,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd")},
	{hx::fsInt,(void *) &XInputMapping_obj::RIGHT_TRIGGER_FAKE,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11")},
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
	HX_MARK_MEMBER_NAME(XInputMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(XInputMapping_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(XInputMapping_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
};

#endif

hx::Class XInputMapping_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"),
	HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"),
	::String(null()) };

void XInputMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.XInputMapping","\x76","\x49","\x9a","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XInputMapping_obj >;
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

void XInputMapping_obj::__boot()
{
	LEFT_ANALOG_STICK_FAKE_X= (int)15;
	LEFT_ANALOG_STICK_FAKE_Y= (int)16;
	RIGHT_ANALOG_STICK_FAKE_X= (int)17;
	RIGHT_ANALOG_STICK_FAKE_Y= (int)18;
	LEFT_TRIGGER_FAKE= (int)19;
	RIGHT_TRIGGER_FAKE= (int)20;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
