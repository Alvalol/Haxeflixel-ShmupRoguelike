#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
namespace haxe{
namespace xml{
namespace _Fast{

Void AttribAccess_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml._Fast.AttribAccess","new",0x8109dad2,"haxe.xml._Fast.AttribAccess.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",48,0x60a2153a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(48)
	this->__x = x;
}
;
	return null();
}

//AttribAccess_obj::~AttribAccess_obj() { }

Dynamic AttribAccess_obj::__CreateEmpty() { return  new AttribAccess_obj; }
hx::ObjectPtr< AttribAccess_obj > AttribAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< AttribAccess_obj > _result_ = new AttribAccess_obj();
	_result_->__construct(x);
	return _result_;}

Dynamic AttribAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttribAccess_obj > _result_ = new AttribAccess_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String AttribAccess_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.xml._Fast.AttribAccess","resolve",0x20913e5e,"haxe.xml._Fast.AttribAccess.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",51,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(52)
	::Xml tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1 = tmp->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	int tmp2 = ::Xml_obj::Document;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	if ((tmp3)){
		HX_STACK_LINE(53)
		::String tmp4 = (HX_HCSTRING("Cannot access document attribute ","\xca","\x30","\xfe","\xc0") + name);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(54)
	::Xml tmp4 = this->__x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	::String tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	::String v = tmp6;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(55)
	bool tmp7 = (v == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	if ((tmp7)){
		HX_STACK_LINE(56)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::Xml tmp9 = this->__x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			::Xml _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(56)
			int tmp10 = _this->nodeType;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			int tmp11 = ::Xml_obj::Element;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(56)
			if ((tmp12)){
				HX_STACK_LINE(56)
				::String tmp13 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + _this->nodeType);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(56)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(56)
			tmp8 = _this->nodeName;
		}
		HX_STACK_LINE(56)
		::String tmp9 = (tmp8 + HX_HCSTRING(" is missing attribute ","\x54","\x31","\x39","\x75"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(56)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(56)
		HX_STACK_DO_THROW(tmp11);
	}
	HX_STACK_LINE(57)
	::String tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(AttribAccess_obj,resolve,return )


AttribAccess_obj::AttribAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void AttribAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttribAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void AttribAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic AttribAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic AttribAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void AttribAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(AttribAccess_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttribAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttribAccess_obj::__mClass,"__mClass");
};

#endif

hx::Class AttribAccess_obj::__mClass;

void AttribAccess_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml._Fast.AttribAccess","\xe0","\xc9","\x73","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AttribAccess_obj >;
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

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast
