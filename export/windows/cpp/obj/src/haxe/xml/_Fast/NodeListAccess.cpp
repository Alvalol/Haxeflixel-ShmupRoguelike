#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace haxe{
namespace xml{
namespace _Fast{

Void NodeListAccess_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml._Fast.NodeListAccess","new",0x22c8c708,"haxe.xml._Fast.NodeListAccess.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",97,0x60a2153a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(97)
	this->__x = x;
}
;
	return null();
}

//NodeListAccess_obj::~NodeListAccess_obj() { }

Dynamic NodeListAccess_obj::__CreateEmpty() { return  new NodeListAccess_obj; }
hx::ObjectPtr< NodeListAccess_obj > NodeListAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< NodeListAccess_obj > _result_ = new NodeListAccess_obj();
	_result_->__construct(x);
	return _result_;}

Dynamic NodeListAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeListAccess_obj > _result_ = new NodeListAccess_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::List NodeListAccess_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.xml._Fast.NodeListAccess","resolve",0x21d97d94,"haxe.xml._Fast.NodeListAccess.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",100,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(101)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	::List l = tmp;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(102)
	::Xml tmp1 = this->__x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	Dynamic tmp3 = tmp1->elementsNamed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp3);  __it->hasNext(); ){
		::Xml x = __it->next();
		{
			HX_STACK_LINE(103)
			::haxe::xml::Fast tmp4 = ::haxe::xml::Fast_obj::__new(x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			l->add(tmp4);
		}
;
	}
	HX_STACK_LINE(104)
	::List tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(NodeListAccess_obj,resolve,return )


NodeListAccess_obj::NodeListAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void NodeListAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeListAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void NodeListAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic NodeListAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic NodeListAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void NodeListAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(NodeListAccess_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeListAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeListAccess_obj::__mClass,"__mClass");
};

#endif

hx::Class NodeListAccess_obj::__mClass;

void NodeListAccess_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml._Fast.NodeListAccess","\x16","\xe3","\x8e","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NodeListAccess_obj >;
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
