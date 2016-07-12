#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
namespace haxe{
namespace xml{
namespace _Fast{

Void HasAttribAccess_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml._Fast.HasAttribAccess","new",0x4d025ce8,"haxe.xml._Fast.HasAttribAccess.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",67,0x60a2153a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(67)
	this->__x = x;
}
;
	return null();
}

//HasAttribAccess_obj::~HasAttribAccess_obj() { }

Dynamic HasAttribAccess_obj::__CreateEmpty() { return  new HasAttribAccess_obj; }
hx::ObjectPtr< HasAttribAccess_obj > HasAttribAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< HasAttribAccess_obj > _result_ = new HasAttribAccess_obj();
	_result_->__construct(x);
	return _result_;}

Dynamic HasAttribAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HasAttribAccess_obj > _result_ = new HasAttribAccess_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool HasAttribAccess_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.xml._Fast.HasAttribAccess","resolve",0x0ac38374,"haxe.xml._Fast.HasAttribAccess.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",70,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(71)
	::Xml tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = tmp->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	int tmp2 = ::Xml_obj::Document;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	if ((tmp3)){
		HX_STACK_LINE(72)
		::String tmp4 = (HX_HCSTRING("Cannot access document attribute ","\xca","\x30","\xfe","\xc0") + name);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(73)
	::Xml tmp4 = this->__x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(HasAttribAccess_obj,resolve,return )


HasAttribAccess_obj::HasAttribAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void HasAttribAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HasAttribAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void HasAttribAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic HasAttribAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic HasAttribAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void HasAttribAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(HasAttribAccess_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HasAttribAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HasAttribAccess_obj::__mClass,"__mClass");
};

#endif

hx::Class HasAttribAccess_obj::__mClass;

void HasAttribAccess_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml._Fast.HasAttribAccess","\xf6","\x08","\x10","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HasAttribAccess_obj >;
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
