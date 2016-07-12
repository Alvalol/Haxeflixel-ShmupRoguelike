#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
namespace openfl{
namespace display{

Void FrameLabel_obj::__construct(::String name,int frame)
{
HX_STACK_FRAME("openfl.display.FrameLabel","new",0x6d144ce3,"openfl.display.FrameLabel.new","openfl/display/FrameLabel.hx",17,0x7487bdab)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(frame,"frame")
{
	HX_STACK_LINE(19)
	super::__construct(null());
	HX_STACK_LINE(21)
	this->__name = name;
	HX_STACK_LINE(22)
	this->__frame = frame;
}
;
	return null();
}

//FrameLabel_obj::~FrameLabel_obj() { }

Dynamic FrameLabel_obj::__CreateEmpty() { return  new FrameLabel_obj; }
hx::ObjectPtr< FrameLabel_obj > FrameLabel_obj::__new(::String name,int frame)
{  hx::ObjectPtr< FrameLabel_obj > _result_ = new FrameLabel_obj();
	_result_->__construct(name,frame);
	return _result_;}

Dynamic FrameLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameLabel_obj > _result_ = new FrameLabel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int FrameLabel_obj::get_frame( ){
	HX_STACK_FRAME("openfl.display.FrameLabel","get_frame",0x73ee1547,"openfl.display.FrameLabel.get_frame","openfl/display/FrameLabel.hx",34,0x7487bdab)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	int tmp = this->__frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FrameLabel_obj,get_frame,return )

::String FrameLabel_obj::get_name( ){
	HX_STACK_FRAME("openfl.display.FrameLabel","get_name",0xc5787671,"openfl.display.FrameLabel.get_name","openfl/display/FrameLabel.hx",35,0x7487bdab)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::String tmp = this->__name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FrameLabel_obj,get_name,return )


FrameLabel_obj::FrameLabel_obj()
{
}

void FrameLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameLabel);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(__frame,"__frame");
	HX_MARK_MEMBER_NAME(__name,"__name");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FrameLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(__frame,"__frame");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FrameLabel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp == hx::paccAlways ? get_name() : name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return inCallProp == hx::paccAlways ? get_frame() : frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__frame") ) { return __frame; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__frame") ) { __frame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("__frame","\x0d","\xd1","\xe1","\x70"));
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FrameLabel_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsString,(int)offsetof(FrameLabel_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(FrameLabel_obj,__frame),HX_HCSTRING("__frame","\x0d","\xd1","\xe1","\x70")},
	{hx::fsString,(int)offsetof(FrameLabel_obj,__name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("__frame","\x0d","\xd1","\xe1","\x70"),
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("get_frame","\x84","\xd4","\x2c","\x4a"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

#endif

hx::Class FrameLabel_obj::__mClass;

void FrameLabel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.FrameLabel","\x71","\x9f","\x55","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrameLabel_obj >;
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

} // end namespace openfl
} // end namespace display
