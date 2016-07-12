#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__legacy_events__EventDispatcher_Listener
#include <openfl/_legacy/events/_EventDispatcher/Listener.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{
namespace _EventDispatcher{

Void Listener_obj::__construct(Dynamic callback,bool useCapture,int priority)
{
HX_STACK_FRAME("openfl._legacy.events._EventDispatcher.Listener","new",0x937dd281,"openfl._legacy.events._EventDispatcher.Listener.new","openfl/_legacy/events/EventDispatcher.hx",212,0xebfd71ed)
HX_STACK_THIS(this)
HX_STACK_ARG(callback,"callback")
HX_STACK_ARG(useCapture,"useCapture")
HX_STACK_ARG(priority,"priority")
{
	HX_STACK_LINE(214)
	this->callback = callback;
	HX_STACK_LINE(215)
	this->useCapture = useCapture;
	HX_STACK_LINE(216)
	this->priority = priority;
}
;
	return null();
}

//Listener_obj::~Listener_obj() { }

Dynamic Listener_obj::__CreateEmpty() { return  new Listener_obj; }
hx::ObjectPtr< Listener_obj > Listener_obj::__new(Dynamic callback,bool useCapture,int priority)
{  hx::ObjectPtr< Listener_obj > _result_ = new Listener_obj();
	_result_->__construct(callback,useCapture,priority);
	return _result_;}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Listener_obj > _result_ = new Listener_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool Listener_obj::match( Dynamic callback,bool useCapture){
	HX_STACK_FRAME("openfl._legacy.events._EventDispatcher.Listener","match",0x366ad5a6,"openfl._legacy.events._EventDispatcher.Listener.match","openfl/_legacy/events/EventDispatcher.hx",221,0xebfd71ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(callback,"callback")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_LINE(223)
	Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	Dynamic tmp1 = callback;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	Dynamic tmp2 = tmp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	Dynamic tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(223)
	bool tmp4 = ::Reflect_obj::compareMethods(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(223)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(223)
	if ((tmp4)){
		HX_STACK_LINE(223)
		bool tmp6 = this->useCapture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		bool tmp8 = useCapture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		tmp5 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(223)
		tmp5 = false;
	}
	HX_STACK_LINE(223)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Listener_obj,match,return )


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(useCapture,"useCapture");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(useCapture,"useCapture");
}

Dynamic Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"priority") ) { return priority; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { return useCapture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { useCapture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"));
	outFields->push(HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Listener_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsInt,(int)offsetof(Listener_obj,priority),HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb")},
	{hx::fsBool,(int)offsetof(Listener_obj,useCapture),HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"),
	HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#endif

hx::Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events._EventDispatcher.Listener","\x0f","\x7e","\xa8","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Listener_obj >;
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
} // end namespace _legacy
} // end namespace events
} // end namespace _EventDispatcher
