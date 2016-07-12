#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif
namespace openfl{
namespace events{

Void SampleDataEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("openfl.events.SampleDataEvent","new",0xc5f17621,"openfl.events.SampleDataEvent.new","openfl/events/SampleDataEvent.hx",17,0x7507e28f)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(19)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(21)
	::openfl::_legacy::utils::ByteArray tmp3 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	this->data = tmp3;
	HX_STACK_LINE(22)
	::openfl::_legacy::utils::ByteArray tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	::String tmp5 = ::openfl::utils::_Endian::Endian_Impl__obj::toString(((Dynamic)((int)1)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	tmp4->set_endian(tmp5);
	HX_STACK_LINE(23)
	this->position = ((Float)0.0);
}
;
	return null();
}

//SampleDataEvent_obj::~SampleDataEvent_obj() { }

Dynamic SampleDataEvent_obj::__CreateEmpty() { return  new SampleDataEvent_obj; }
hx::ObjectPtr< SampleDataEvent_obj > SampleDataEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< SampleDataEvent_obj > _result_ = new SampleDataEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable);
	return _result_;}

Dynamic SampleDataEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SampleDataEvent_obj > _result_ = new SampleDataEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::openfl::_legacy::events::Event SampleDataEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.SampleDataEvent","clone",0xed066b5e,"openfl.events.SampleDataEvent.clone","openfl/events/SampleDataEvent.hx",28,0x7507e28f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::openfl::events::SampleDataEvent tmp3 = ::openfl::events::SampleDataEvent_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::openfl::events::SampleDataEvent event = tmp3;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(31)
	Dynamic tmp4 = this->get_target();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	event->set_target(tmp4);
	HX_STACK_LINE(32)
	Dynamic tmp5 = this->get_currentTarget();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	event->set_currentTarget(tmp5);
	HX_STACK_LINE(36)
	::openfl::events::SampleDataEvent tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	return tmp6;
}


::String SampleDataEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.SampleDataEvent","toString",0x071baf4b,"openfl.events.SampleDataEvent.toString","openfl/events/SampleDataEvent.hx",41,0x7507e28f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::String tmp = this->__formatToString(HX_HCSTRING("SampleDataEvent","\xe6","\x7b","\xb4","\x20"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


::String SampleDataEvent_obj::SAMPLE_DATA;


SampleDataEvent_obj::SampleDataEvent_obj()
{
}

void SampleDataEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SampleDataEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(position,"position");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SampleDataEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(position,"position");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SampleDataEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SampleDataEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SampleDataEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(SampleDataEvent_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsFloat,(int)offsetof(SampleDataEvent_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SampleDataEvent_obj::SAMPLE_DATA,HX_HCSTRING("SAMPLE_DATA","\x9f","\xd5","\x99","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SampleDataEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SampleDataEvent_obj::SAMPLE_DATA,"SAMPLE_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SampleDataEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SampleDataEvent_obj::SAMPLE_DATA,"SAMPLE_DATA");
};

#endif

hx::Class SampleDataEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SAMPLE_DATA","\x9f","\xd5","\x99","\xbc"),
	::String(null()) };

void SampleDataEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.SampleDataEvent","\xaf","\xd1","\x59","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SampleDataEvent_obj >;
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

void SampleDataEvent_obj::__boot()
{
	SAMPLE_DATA= HX_HCSTRING("sampleData","\x74","\x3f","\x0b","\x5e");
}

} // end namespace openfl
} // end namespace events
