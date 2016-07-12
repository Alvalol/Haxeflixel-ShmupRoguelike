#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_JoystickEvent
#include <openfl/_legacy/events/JoystickEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void JoystickEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{
HX_STACK_FRAME("openfl._legacy.events.JoystickEvent","new",0x086a2edf,"openfl._legacy.events.JoystickEvent.new","openfl/_legacy/events/JoystickEvent.hx",26,0xf082dab0)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_device,"device")
HX_STACK_ARG(__o_id,"id")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int device = __o_device.Default(0);
int id = __o_id.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
{
	HX_STACK_LINE(28)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(30)
	this->device = device;
	HX_STACK_LINE(31)
	this->id = id;
	HX_STACK_LINE(32)
	this->x = x;
	HX_STACK_LINE(33)
	this->y = y;
	HX_STACK_LINE(34)
	this->z = z;
	HX_STACK_LINE(36)
	this->axis = Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add((int)0).Add((int)0).Add((int)0);
}
;
	return null();
}

//JoystickEvent_obj::~JoystickEvent_obj() { }

Dynamic JoystickEvent_obj::__CreateEmpty() { return  new JoystickEvent_obj; }
hx::ObjectPtr< JoystickEvent_obj > JoystickEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{  hx::ObjectPtr< JoystickEvent_obj > _result_ = new JoystickEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_device,__o_id,__o_x,__o_y,__o_z);
	return _result_;}

Dynamic JoystickEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoystickEvent_obj > _result_ = new JoystickEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

::openfl::_legacy::events::Event JoystickEvent_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.events.JoystickEvent","clone",0x49ad4f9c,"openfl._legacy.events.JoystickEvent.clone","openfl/_legacy/events/JoystickEvent.hx",41,0xf082dab0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	int tmp3 = this->device;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	::openfl::_legacy::events::JoystickEvent tmp8 = ::openfl::_legacy::events::JoystickEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	return tmp8;
}


::String JoystickEvent_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.events.JoystickEvent","toString",0x73d685cd,"openfl._legacy.events.JoystickEvent.toString","openfl/_legacy/events/JoystickEvent.hx",48,0xf082dab0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String tmp1 = (HX_HCSTRING("[JoystickEvent type=\"","\x9c","\xa4","\xf2","\xd8") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	bool tmp3 = this->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	bool tmp7 = this->get_cancelable();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	::String tmp10 = (tmp9 + HX_HCSTRING(" device=","\xc7","\x6a","\xb7","\xfd"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(50)
	int tmp11 = this->device;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(50)
	::String tmp13 = (tmp12 + HX_HCSTRING(" id=","\xe2","\xd7","\x76","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(50)
	int tmp14 = this->id;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(50)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(50)
	::String tmp16 = (tmp15 + HX_HCSTRING(" x=","\xe5","\xb0","\x18","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(50)
	Float tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(50)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(50)
	::String tmp19 = (tmp18 + HX_HCSTRING(" y=","\xc4","\xb1","\x18","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(50)
	Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(50)
	::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(50)
	::String tmp22 = (tmp21 + HX_HCSTRING(" z=","\xa3","\xb2","\x18","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(50)
	Float tmp23 = this->z;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(50)
	::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(50)
	::String tmp25 = (tmp24 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(50)
	return tmp25;
}


::String JoystickEvent_obj::AXIS_MOVE;

::String JoystickEvent_obj::BALL_MOVE;

::String JoystickEvent_obj::BUTTON_DOWN;

::String JoystickEvent_obj::BUTTON_UP;

::String JoystickEvent_obj::HAT_MOVE;

::String JoystickEvent_obj::DEVICE_ADDED;

::String JoystickEvent_obj::DEVICE_REMOVED;


JoystickEvent_obj::JoystickEvent_obj()
{
}

void JoystickEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoystickEvent);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JoystickEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic JoystickEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JoystickEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(JoystickEvent_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &JoystickEvent_obj::AXIS_MOVE,HX_HCSTRING("AXIS_MOVE","\xaf","\x7a","\x13","\x2a")},
	{hx::fsString,(void *) &JoystickEvent_obj::BALL_MOVE,HX_HCSTRING("BALL_MOVE","\x91","\x80","\xbd","\x89")},
	{hx::fsString,(void *) &JoystickEvent_obj::BUTTON_DOWN,HX_HCSTRING("BUTTON_DOWN","\x0f","\x01","\x0b","\xf3")},
	{hx::fsString,(void *) &JoystickEvent_obj::BUTTON_UP,HX_HCSTRING("BUTTON_UP","\xc8","\x15","\x81","\x4b")},
	{hx::fsString,(void *) &JoystickEvent_obj::HAT_MOVE,HX_HCSTRING("HAT_MOVE","\xd5","\x55","\x50","\x21")},
	{hx::fsString,(void *) &JoystickEvent_obj::DEVICE_ADDED,HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6")},
	{hx::fsString,(void *) &JoystickEvent_obj::DEVICE_REMOVED,HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::AXIS_MOVE,"AXIS_MOVE");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::BALL_MOVE,"BALL_MOVE");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::BUTTON_UP,"BUTTON_UP");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::HAT_MOVE,"HAT_MOVE");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::AXIS_MOVE,"AXIS_MOVE");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::BALL_MOVE,"BALL_MOVE");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::BUTTON_UP,"BUTTON_UP");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::HAT_MOVE,"HAT_MOVE");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
};

#endif

hx::Class JoystickEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("AXIS_MOVE","\xaf","\x7a","\x13","\x2a"),
	HX_HCSTRING("BALL_MOVE","\x91","\x80","\xbd","\x89"),
	HX_HCSTRING("BUTTON_DOWN","\x0f","\x01","\x0b","\xf3"),
	HX_HCSTRING("BUTTON_UP","\xc8","\x15","\x81","\x4b"),
	HX_HCSTRING("HAT_MOVE","\xd5","\x55","\x50","\x21"),
	HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6"),
	HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33"),
	::String(null()) };

void JoystickEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.JoystickEvent","\x6d","\xd3","\x1b","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JoystickEvent_obj >;
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

void JoystickEvent_obj::__boot()
{
	AXIS_MOVE= HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f");
	BALL_MOVE= HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37");
	BUTTON_DOWN= HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac");
	BUTTON_UP= HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c");
	HAT_MOVE= HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab");
	DEVICE_ADDED= HX_HCSTRING("deviceAdded","\x4a","\x08","\x84","\x0b");
	DEVICE_REMOVED= HX_HCSTRING("deviceRemoved","\xaa","\xc9","\x5b","\x59");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
