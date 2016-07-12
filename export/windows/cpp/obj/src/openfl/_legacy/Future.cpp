#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Future
#include <openfl/_legacy/Future.h>
#endif
#ifndef INCLUDED_openfl__legacy_Promise
#include <openfl/_legacy/Promise.h>
#endif
namespace openfl{
namespace _legacy{

Void Future_obj::__construct(Dynamic work)
{
HX_STACK_FRAME("openfl._legacy.Future","new",0x6d0ac7b9,"openfl._legacy.Future.new","openfl/_legacy/Assets.hx",1692,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(work,"work")
{
	HX_STACK_LINE(1694)
	bool tmp = (work != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1694)
	if ((tmp)){
		HX_STACK_LINE(1696)
		::openfl::_legacy::Promise tmp1 = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1696)
		::openfl::_legacy::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(1697)
		promise->future = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1699)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1701)
			Dynamic tmp2 = work();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1701)
			Dynamic result = tmp2;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(1702)
			Dynamic tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1702)
			promise->complete(tmp3);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1706)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1706)
					promise->error(tmp2);
				}
			}
		}
	}
}
;
	return null();
}

//Future_obj::~Future_obj() { }

Dynamic Future_obj::__CreateEmpty() { return  new Future_obj; }
hx::ObjectPtr< Future_obj > Future_obj::__new(Dynamic work)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(work);
	return _result_;}

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::Future Future_obj::onComplete( Dynamic listener){
	HX_STACK_FRAME("openfl._legacy.Future","onComplete",0x222e6abf,"openfl._legacy.Future.onComplete","openfl/_legacy/Assets.hx",1715,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(1717)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1717)
	if ((tmp)){
		HX_STACK_LINE(1719)
		bool tmp1 = this->__completed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1719)
		if ((tmp1)){
			HX_STACK_LINE(1721)
			Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1721)
			listener(tmp2).Cast< Void >();
		}
		else{
			HX_STACK_LINE(1723)
			bool tmp2 = this->__errored;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1723)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1723)
			if ((tmp3)){
				HX_STACK_LINE(1725)
				bool tmp4 = (this->__completeListeners == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1725)
				if ((tmp4)){
					HX_STACK_LINE(1727)
					this->__completeListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				HX_STACK_LINE(1731)
				Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1731)
				this->__completeListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	HX_STACK_LINE(1737)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

::openfl::_legacy::Future Future_obj::onError( Dynamic listener){
	HX_STACK_FRAME("openfl._legacy.Future","onError",0x410f8202,"openfl._legacy.Future.onError","openfl/_legacy/Assets.hx",1742,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(1744)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1744)
	if ((tmp)){
		HX_STACK_LINE(1746)
		bool tmp1 = this->__errored;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1746)
		if ((tmp1)){
			HX_STACK_LINE(1748)
			Dynamic tmp2 = this->__errorMessage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1748)
			listener(tmp2).Cast< Void >();
		}
		else{
			HX_STACK_LINE(1750)
			bool tmp2 = this->__completed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1750)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1750)
			if ((tmp3)){
				HX_STACK_LINE(1752)
				bool tmp4 = (this->__errorListeners == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1752)
				if ((tmp4)){
					HX_STACK_LINE(1754)
					this->__errorListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				HX_STACK_LINE(1758)
				Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1758)
				this->__errorListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	HX_STACK_LINE(1764)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

::openfl::_legacy::Future Future_obj::onProgress( Dynamic listener){
	HX_STACK_FRAME("openfl._legacy.Future","onProgress",0x289161b3,"openfl._legacy.Future.onProgress","openfl/_legacy/Assets.hx",1769,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(1771)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1771)
	if ((tmp)){
		HX_STACK_LINE(1773)
		bool tmp1 = (this->__progressListeners == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1773)
		if ((tmp1)){
			HX_STACK_LINE(1775)
			this->__progressListeners = Dynamic( Array_obj<Dynamic>::__new() );
		}
		HX_STACK_LINE(1779)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1779)
		this->__progressListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(1783)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

::openfl::_legacy::Future Future_obj::then( Dynamic next){
	HX_STACK_FRAME("openfl._legacy.Future","then",0x005d7964,"openfl._legacy.Future.then","openfl/_legacy/Assets.hx",1788,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(next,"next")
	HX_STACK_LINE(1790)
	bool tmp = this->__completed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1790)
	if ((tmp)){
		HX_STACK_LINE(1792)
		Dynamic tmp1 = this->value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1792)
		::openfl::_legacy::Future tmp2 = next(tmp1).Cast< ::openfl::_legacy::Future >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1792)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1794)
		bool tmp1 = this->__errored;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1794)
		if ((tmp1)){
			HX_STACK_LINE(1796)
			::openfl::_legacy::Future tmp2 = ::openfl::_legacy::Future_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1796)
			::openfl::_legacy::Future future = tmp2;		HX_STACK_VAR(future,"future");
			HX_STACK_LINE(1797)
			Dynamic tmp3 = this->__errorMessage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1797)
			future->onError(tmp3);
			HX_STACK_LINE(1798)
			::openfl::_legacy::Future tmp4 = future;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1798)
			return tmp4;
		}
		else{
			HX_STACK_LINE(1802)
			::openfl::_legacy::Promise tmp2 = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1802)
			::openfl::_legacy::Promise promise = tmp2;		HX_STACK_VAR(promise,"promise");
			HX_STACK_LINE(1804)
			Dynamic tmp3 = promise->error_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1804)
			this->onError(tmp3);
			HX_STACK_LINE(1805)
			Dynamic tmp4 = promise->progress_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1805)
			this->onProgress(tmp4);

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::openfl::_legacy::Promise,promise,Dynamic,next)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/_legacy/Assets.hx",1807,0x9276b055)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(1809)
					Dynamic tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1809)
					::openfl::_legacy::Future tmp6 = next(tmp5).Cast< ::openfl::_legacy::Future >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1809)
					::openfl::_legacy::Future future = tmp6;		HX_STACK_VAR(future,"future");
					HX_STACK_LINE(1810)
					Dynamic tmp7 = promise->error_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1810)
					future->onError(tmp7);
					HX_STACK_LINE(1811)
					Dynamic tmp8 = promise->complete_dyn();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1811)
					future->onComplete(tmp8);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(1807)
			this->onComplete( Dynamic(new _Function_3_1(promise,next)));
			HX_STACK_LINE(1815)
			::openfl::_legacy::Future tmp5 = promise->future;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1815)
			return tmp5;
		}
	}
	HX_STACK_LINE(1790)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

bool Future_obj::get_isCompleted( ){
	HX_STACK_FRAME("openfl._legacy.Future","get_isCompleted",0x8d5428b1,"openfl._legacy.Future.get_isCompleted","openfl/_legacy/Assets.hx",1829,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1831)
	bool tmp = this->__completed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1831)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1831)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1831)
	if ((tmp1)){
		HX_STACK_LINE(1831)
		tmp2 = this->__errored;
	}
	else{
		HX_STACK_LINE(1831)
		tmp2 = true;
	}
	HX_STACK_LINE(1831)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,get_isCompleted,return )


Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(__completed,"__completed");
	HX_MARK_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(__errored,"__errored");
	HX_MARK_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(__errorMessage,"__errorMessage");
	HX_MARK_MEMBER_NAME(__progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(__completed,"__completed");
	HX_VISIT_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(__errored,"__errored");
	HX_VISIT_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(__errorMessage,"__errorMessage");
	HX_VISIT_MEMBER_NAME(__progressListeners,"__progressListeners");
}

Dynamic Future_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { return __errored; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return inCallProp == hx::paccAlways ? get_isCompleted() : isCompleted; }
		if (HX_FIELD_EQ(inName,"__completed") ) { return __completed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { return __errorMessage; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return get_isCompleted_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return __errorListeners; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return __completeListeners; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return __progressListeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Future_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { __errored=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__completed") ) { __completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { __errorMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { __errorListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { __completeListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { __progressListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"));
	outFields->push(HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"));
	outFields->push(HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"));
	outFields->push(HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"));
	outFields->push(HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"));
	outFields->push(HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Future_obj,isCompleted),HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(Future_obj,__completed),HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__completeListeners),HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85")},
	{hx::fsBool,(int)offsetof(Future_obj,__errored),HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__errorListeners),HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,__errorMessage),HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__progressListeners),HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"),
	HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"),
	HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"),
	HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"),
	HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"),
	HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("get_isCompleted","\xd8","\x0f","\x9b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#endif

hx::Class Future_obj::__mClass;

void Future_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Future","\x47","\x77","\xd4","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Future_obj >;
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
