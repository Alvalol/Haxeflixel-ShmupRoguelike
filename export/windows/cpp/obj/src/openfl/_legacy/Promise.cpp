#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Future
#include <openfl/_legacy/Future.h>
#endif
#ifndef INCLUDED_openfl__legacy_Promise
#include <openfl/_legacy/Promise.h>
#endif
namespace openfl{
namespace _legacy{

Void Promise_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.Promise","new",0x7f6b0a89,"openfl._legacy.Promise.new","openfl/_legacy/Assets.hx",1848,0x9276b055)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1850)
	::openfl::_legacy::Future tmp = ::openfl::_legacy::Future_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1850)
	this->future = tmp;
}
;
	return null();
}

//Promise_obj::~Promise_obj() { }

Dynamic Promise_obj::__CreateEmpty() { return  new Promise_obj; }
hx::ObjectPtr< Promise_obj > Promise_obj::__new()
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct();
	return _result_;}

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::Promise Promise_obj::complete( Dynamic data){
	HX_STACK_FRAME("openfl._legacy.Promise","complete",0x04e051f0,"openfl._legacy.Promise.complete","openfl/_legacy/Assets.hx",1855,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1857)
	::openfl::_legacy::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1857)
	bool tmp1 = tmp->__errored;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1857)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1857)
	if ((tmp2)){
		HX_STACK_LINE(1859)
		::openfl::_legacy::Future tmp3 = this->future;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1859)
		tmp3->__completed = true;
		HX_STACK_LINE(1860)
		::openfl::_legacy::Future tmp4 = this->future;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1860)
		tmp4->value = data;
		HX_STACK_LINE(1862)
		::openfl::_legacy::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1862)
		bool tmp6 = (tmp5->__completeListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1862)
		if ((tmp6)){
			HX_STACK_LINE(1864)
			{
				HX_STACK_LINE(1864)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1864)
				::openfl::_legacy::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1864)
				cpp::ArrayBase _g1 = tmp7->__completeListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1864)
				while((true)){
					HX_STACK_LINE(1864)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1864)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1864)
					if ((tmp9)){
						HX_STACK_LINE(1864)
						break;
					}
					HX_STACK_LINE(1864)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1864)
					Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(1864)
					++(_g);
					HX_STACK_LINE(1866)
					Dynamic tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1866)
					listener(tmp11).Cast< Void >();
				}
			}
			HX_STACK_LINE(1870)
			::openfl::_legacy::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1870)
			tmp7->__completeListeners = null();
		}
	}
	HX_STACK_LINE(1876)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,complete,return )

::openfl::_legacy::Promise Promise_obj::completeWith( ::openfl::_legacy::Future future){
	HX_STACK_FRAME("openfl._legacy.Promise","completeWith",0xd3d9ac16,"openfl._legacy.Promise.completeWith","openfl/_legacy/Assets.hx",1881,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(future,"future")
	HX_STACK_LINE(1883)
	Dynamic tmp = this->complete_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1883)
	future->onComplete(tmp);
	HX_STACK_LINE(1884)
	Dynamic tmp1 = this->error_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1884)
	future->onError(tmp1);
	HX_STACK_LINE(1885)
	Dynamic tmp2 = this->progress_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1885)
	future->onProgress(tmp2);
	HX_STACK_LINE(1887)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,completeWith,return )

::openfl::_legacy::Promise Promise_obj::error( Dynamic msg){
	HX_STACK_FRAME("openfl._legacy.Promise","error",0x5222a231,"openfl._legacy.Promise.error","openfl/_legacy/Assets.hx",1893,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(msg,"msg")
	HX_STACK_LINE(1895)
	::openfl::_legacy::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1895)
	bool tmp1 = tmp->__completed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1895)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1895)
	if ((tmp2)){
		HX_STACK_LINE(1897)
		::openfl::_legacy::Future tmp3 = this->future;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1897)
		tmp3->__errored = true;
		HX_STACK_LINE(1898)
		::openfl::_legacy::Future tmp4 = this->future;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1898)
		tmp4->__errorMessage = msg;
		HX_STACK_LINE(1900)
		::openfl::_legacy::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1900)
		bool tmp6 = (tmp5->__errorListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1900)
		if ((tmp6)){
			HX_STACK_LINE(1902)
			{
				HX_STACK_LINE(1902)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1902)
				::openfl::_legacy::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1902)
				cpp::ArrayBase _g1 = tmp7->__errorListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1902)
				while((true)){
					HX_STACK_LINE(1902)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1902)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1902)
					if ((tmp9)){
						HX_STACK_LINE(1902)
						break;
					}
					HX_STACK_LINE(1902)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1902)
					Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(1902)
					++(_g);
					HX_STACK_LINE(1904)
					Dynamic tmp11 = msg;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1904)
					listener(tmp11).Cast< Void >();
				}
			}
			HX_STACK_LINE(1908)
			::openfl::_legacy::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1908)
			tmp7->__errorListeners = null();
		}
	}
	HX_STACK_LINE(1914)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

::openfl::_legacy::Promise Promise_obj::progress( Float progress){
	HX_STACK_FRAME("openfl._legacy.Promise","progress",0x0b4348e4,"openfl._legacy.Promise.progress","openfl/_legacy/Assets.hx",1919,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(progress,"progress")
	HX_STACK_LINE(1921)
	::openfl::_legacy::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1921)
	bool tmp1 = tmp->__errored;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1921)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1921)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1921)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1921)
	if ((tmp3)){
		HX_STACK_LINE(1921)
		::openfl::_legacy::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1921)
		::openfl::_legacy::Future tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1921)
		bool tmp7 = tmp6->__completed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1921)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1921)
		tmp4 = !(tmp8);
	}
	else{
		HX_STACK_LINE(1921)
		tmp4 = false;
	}
	HX_STACK_LINE(1921)
	if ((tmp4)){
		HX_STACK_LINE(1923)
		::openfl::_legacy::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1923)
		bool tmp6 = (tmp5->__progressListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1923)
		if ((tmp6)){
			HX_STACK_LINE(1925)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1925)
			::openfl::_legacy::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1925)
			cpp::ArrayBase _g1 = tmp7->__progressListeners;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1925)
			while((true)){
				HX_STACK_LINE(1925)
				bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1925)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1925)
				if ((tmp9)){
					HX_STACK_LINE(1925)
					break;
				}
				HX_STACK_LINE(1925)
				Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1925)
				Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(1925)
				++(_g);
				HX_STACK_LINE(1927)
				Float tmp11 = progress;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1927)
				listener(tmp11).Cast< Void >();
			}
		}
	}
	HX_STACK_LINE(1935)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,progress,return )

bool Promise_obj::get_isCompleted( ){
	HX_STACK_FRAME("openfl._legacy.Promise","get_isCompleted",0xfc756381,"openfl._legacy.Promise.get_isCompleted","openfl/_legacy/Assets.hx",1947,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1949)
	::openfl::_legacy::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1949)
	bool tmp1 = tmp->get_isCompleted();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1949)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,get_isCompleted,return )


Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
}

Dynamic Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return future; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"progress") ) { return progress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return inCallProp == hx::paccAlways ? get_isCompleted() : isCompleted; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return completeWith_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return get_isCompleted_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Promise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast< ::openfl::_legacy::Future >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::Future*/ ,(int)offsetof(Promise_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsBool,(int)offsetof(Promise_obj,isCompleted),HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("completeWith","\x5f","\xf3","\xba","\xc2"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("get_isCompleted","\xd8","\x0f","\x9b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_obj::__mClass;

void Promise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Promise","\x17","\x12","\x87","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
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
