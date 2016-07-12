#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace net{

Void URLVariables_obj::__construct(::String source)
{
HX_STACK_FRAME("openfl.net.URLVariables","new",0x0e8c3f29,"openfl.net.URLVariables.new","openfl/net/URLVariables.hx",7,0x10f26625)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(9)
	bool tmp = (source != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	if ((tmp)){
		HX_STACK_LINE(11)
		::String tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11)
		this->decode(tmp1);
	}
}
;
	return null();
}

//URLVariables_obj::~URLVariables_obj() { }

Dynamic URLVariables_obj::__CreateEmpty() { return  new URLVariables_obj; }
hx::ObjectPtr< URLVariables_obj > URLVariables_obj::__new(::String source)
{  hx::ObjectPtr< URLVariables_obj > _result_ = new URLVariables_obj();
	_result_->__construct(source);
	return _result_;}

Dynamic URLVariables_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLVariables_obj > _result_ = new URLVariables_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLVariables_obj::decode( ::String source){
{
		HX_STACK_FRAME("openfl.net.URLVariables","decode",0x44099205,"openfl.net.URLVariables.decode","openfl/net/URLVariables.hx",18,0x10f26625)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(20)
		Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(22)
			while((true)){
				HX_STACK_LINE(22)
				bool tmp = (_g < fields->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(22)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(22)
				if ((tmp1)){
					HX_STACK_LINE(22)
					break;
				}
				HX_STACK_LINE(22)
				::String tmp2 = fields->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(22)
				::String f = tmp2;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(22)
				++(_g);
				HX_STACK_LINE(24)
				::String tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(24)
				::Reflect_obj::deleteField(hx::ObjectPtr<OBJ_>(this),tmp3);
			}
		}
		HX_STACK_LINE(28)
		::String tmp = source.split(HX_HCSTRING(";","\x3b","\x00","\x00","\x00"))->join(HX_HCSTRING("&","\x26","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		Array< ::String > fields1 = tmp.split(HX_HCSTRING("&","\x26","\x00","\x00","\x00"));		HX_STACK_VAR(fields1,"fields1");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(30)
			while((true)){
				HX_STACK_LINE(30)
				bool tmp1 = (_g < fields1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(30)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(30)
				if ((tmp2)){
					HX_STACK_LINE(30)
					break;
				}
				HX_STACK_LINE(30)
				::String tmp3 = fields1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(30)
				::String f = tmp3;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(30)
				++(_g);
				HX_STACK_LINE(32)
				int tmp4 = f.indexOf(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				int eq = tmp4;		HX_STACK_VAR(eq,"eq");
				HX_STACK_LINE(34)
				bool tmp5 = (eq > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				if ((tmp5)){
					HX_STACK_LINE(36)
					int tmp6 = eq;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(36)
					::String tmp7 = f.substr((int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(36)
					::String tmp8 = ::StringTools_obj::urlDecode(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(36)
					int tmp9 = (eq + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(36)
					::String tmp10 = f.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(36)
					::String tmp11 = ::StringTools_obj::urlDecode(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(36)
					::Reflect_obj::setField(hx::ObjectPtr<OBJ_>(this),tmp8,tmp11);
				}
				else{
					HX_STACK_LINE(38)
					bool tmp6 = (eq != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(38)
					if ((tmp6)){
						HX_STACK_LINE(40)
						::String tmp7 = f;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(40)
						::String tmp8 = ::StringTools_obj::urlDecode(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(40)
						::Reflect_obj::setField(hx::ObjectPtr<OBJ_>(this),tmp8,HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLVariables_obj,decode,(void))

::String URLVariables_obj::toString( ){
	HX_STACK_FRAME("openfl.net.URLVariables","toString",0x3ea32943,"openfl.net.URLVariables.toString","openfl/net/URLVariables.hx",49,0x10f26625)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(52)
	Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		while((true)){
			HX_STACK_LINE(54)
			bool tmp = (_g < fields->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			if ((tmp1)){
				HX_STACK_LINE(54)
				break;
			}
			HX_STACK_LINE(54)
			::String tmp2 = fields->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			::String f = tmp2;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(54)
			++(_g);
			HX_STACK_LINE(56)
			::String tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			::String tmp4 = ::StringTools_obj::urlEncode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			::String tmp5 = (tmp4 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			::String tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			Dynamic tmp7 = ::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			::String tmp8 = ::StringTools_obj::urlEncode(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			result->push(tmp9);
		}
	}
	HX_STACK_LINE(60)
	::String tmp = result->join(HX_HCSTRING("&","\x26","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(URLVariables_obj,toString,return )


URLVariables_obj::URLVariables_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void URLVariables_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLVariables);
	HX_MARK_DYNAMIC;
	HX_MARK_END_CLASS();
}

void URLVariables_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
}

Dynamic URLVariables_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic URLVariables_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void URLVariables_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

#endif

hx::Class URLVariables_obj::__mClass;

void URLVariables_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLVariables","\xb7","\x76","\x89","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLVariables_obj >;
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
} // end namespace net
