#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void TextEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text)
{
HX_STACK_FRAME("openfl.events.TextEvent","new",0x29e58508,"openfl.events.TextEvent.new","openfl/events/TextEvent.hx",13,0x23b91588)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_text,"text")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(15)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(17)
	this->text = text;
}
;
	return null();
}

//TextEvent_obj::~TextEvent_obj() { }

Dynamic TextEvent_obj::__CreateEmpty() { return  new TextEvent_obj; }
hx::ObjectPtr< TextEvent_obj > TextEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text)
{  hx::ObjectPtr< TextEvent_obj > _result_ = new TextEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_text);
	return _result_;}

Dynamic TextEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEvent_obj > _result_ = new TextEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::_legacy::events::Event TextEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.TextEvent","clone",0x41494205,"openfl.events.TextEvent.clone","openfl/events/TextEvent.hx",22,0x23b91588)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::openfl::events::TextEvent tmp4 = ::openfl::events::TextEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	::openfl::events::TextEvent event = tmp4;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(25)
	Dynamic tmp5 = this->get_target();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	event->set_target(tmp5);
	HX_STACK_LINE(26)
	Dynamic tmp6 = this->get_currentTarget();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	event->set_currentTarget(tmp6);
	HX_STACK_LINE(30)
	::openfl::events::TextEvent tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	return tmp7;
}


::String TextEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.TextEvent","toString",0x2a253b04,"openfl.events.TextEvent.toString","openfl/events/TextEvent.hx",35,0x23b91588)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::String tmp = this->__formatToString(HX_HCSTRING("TextEvent","\x0d","\x38","\x85","\xb0"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


::String TextEvent_obj::LINK;

::String TextEvent_obj::TEXT_INPUT;


TextEvent_obj::TextEvent_obj()
{
}

void TextEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEvent);
	HX_MARK_MEMBER_NAME(text,"text");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextEvent_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TextEvent_obj::LINK,HX_HCSTRING("LINK","\xfa","\xdf","\x73","\x32")},
	{hx::fsString,(void *) &TextEvent_obj::TEXT_INPUT,HX_HCSTRING("TEXT_INPUT","\x98","\x17","\xd6","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_MARK_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

#endif

hx::Class TextEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LINK","\xfa","\xdf","\x73","\x32"),
	HX_HCSTRING("TEXT_INPUT","\x98","\x17","\xd6","\x79"),
	::String(null()) };

void TextEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.TextEvent","\x16","\xa1","\xf4","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEvent_obj >;
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

void TextEvent_obj::__boot()
{
	LINK= HX_HCSTRING("link","\xfa","\x17","\xb3","\x47");
	TEXT_INPUT= HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57");
}

} // end namespace openfl
} // end namespace events
