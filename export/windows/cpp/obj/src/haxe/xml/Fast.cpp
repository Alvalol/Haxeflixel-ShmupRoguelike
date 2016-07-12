#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace haxe{
namespace xml{

Void Fast_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml.Fast","new",0xda21546d,"haxe.xml.Fast.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",122,0x60a2153a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(123)
	int tmp = x->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(123)
		int tmp4 = x->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		int tmp5 = ::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		tmp3 = (tmp4 != tmp6);
	}
	else{
		HX_STACK_LINE(123)
		tmp3 = false;
	}
	HX_STACK_LINE(123)
	if ((tmp3)){
		HX_STACK_LINE(124)
		::String tmp4 = (HX_HCSTRING("Invalid nodeType ","\x3b","\xe0","\xcb","\xe1") + x->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(125)
	this->x = x;
	HX_STACK_LINE(126)
	::haxe::xml::_Fast::NodeAccess tmp4 = ::haxe::xml::_Fast::NodeAccess_obj::__new(x);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	this->node = tmp4;
	HX_STACK_LINE(127)
	::haxe::xml::_Fast::NodeListAccess tmp5 = ::haxe::xml::_Fast::NodeListAccess_obj::__new(x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	this->nodes = tmp5;
	HX_STACK_LINE(128)
	::haxe::xml::_Fast::AttribAccess tmp6 = ::haxe::xml::_Fast::AttribAccess_obj::__new(x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	this->att = tmp6;
	HX_STACK_LINE(129)
	::haxe::xml::_Fast::HasAttribAccess tmp7 = ::haxe::xml::_Fast::HasAttribAccess_obj::__new(x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(129)
	this->has = tmp7;
	HX_STACK_LINE(130)
	::haxe::xml::_Fast::HasNodeAccess tmp8 = ::haxe::xml::_Fast::HasNodeAccess_obj::__new(x);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(130)
	this->hasNode = tmp8;
}
;
	return null();
}

//Fast_obj::~Fast_obj() { }

Dynamic Fast_obj::__CreateEmpty() { return  new Fast_obj; }
hx::ObjectPtr< Fast_obj > Fast_obj::__new(::Xml x)
{  hx::ObjectPtr< Fast_obj > _result_ = new Fast_obj();
	_result_->__construct(x);
	return _result_;}

Dynamic Fast_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fast_obj > _result_ = new Fast_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Fast_obj::Fast_obj()
{
}

void Fast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fast);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_END_CLASS();
}

void Fast_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
}

Dynamic Fast_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { return att; }
		if (HX_FIELD_EQ(inName,"has") ) { return has; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hasNode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fast_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast< ::haxe::xml::_Fast::AttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast< ::haxe::xml::_Fast::HasAttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::haxe::xml::_Fast::NodeAccess >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::xml::_Fast::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast< ::haxe::xml::_Fast::HasNodeAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("att","\x21","\x00","\x4a","\x00"));
	outFields->push(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Fast_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeAccess*/ ,(int)offsetof(Fast_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeListAccess*/ ,(int)offsetof(Fast_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsObject /*::haxe::xml::_Fast::AttribAccess*/ ,(int)offsetof(Fast_obj,att),HX_HCSTRING("att","\x21","\x00","\x4a","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasAttribAccess*/ ,(int)offsetof(Fast_obj,has),HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasNodeAccess*/ ,(int)offsetof(Fast_obj,hasNode),HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("att","\x21","\x00","\x4a","\x00"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#endif

hx::Class Fast_obj::__mClass;

void Fast_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Fast","\xfb","\x99","\x91","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fast_obj >;
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
