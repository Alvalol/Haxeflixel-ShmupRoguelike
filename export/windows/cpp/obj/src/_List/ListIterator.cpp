#include <hxcpp.h>

#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
namespace _List{

Void ListIterator_obj::__construct(cpp::ArrayBase head)
{
HX_STACK_FRAME("_List.ListIterator","new",0x1ee472af,"_List.ListIterator.new","C:\\HaxeToolkit\\haxe\\std/List.hx",244,0x1e139e47)
HX_STACK_THIS(this)
HX_STACK_ARG(head,"head")
{
	HX_STACK_LINE(245)
	this->head = head;
	HX_STACK_LINE(246)
	this->val = null();
}
;
	return null();
}

//ListIterator_obj::~ListIterator_obj() { }

Dynamic ListIterator_obj::__CreateEmpty() { return  new ListIterator_obj; }
hx::ObjectPtr< ListIterator_obj > ListIterator_obj::__new(cpp::ArrayBase head)
{  hx::ObjectPtr< ListIterator_obj > _result_ = new ListIterator_obj();
	_result_->__construct(head);
	return _result_;}

Dynamic ListIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListIterator_obj > _result_ = new ListIterator_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool ListIterator_obj::hasNext( ){
	HX_STACK_FRAME("_List.ListIterator","hasNext",0x25781b3c,"_List.ListIterator.hasNext","C:\\HaxeToolkit\\haxe\\std/List.hx",249,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	bool tmp = (this->head != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ListIterator_obj,hasNext,return )

Dynamic ListIterator_obj::next( ){
	HX_STACK_FRAME("_List.ListIterator","next",0xe8ffe7c4,"_List.ListIterator.next","C:\\HaxeToolkit\\haxe\\std/List.hx",253,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	Dynamic tmp = this->head->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	this->val = tmp;
	HX_STACK_LINE(255)
	Dynamic tmp1 = this->head->__GetItem((int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	this->head = tmp1;
	HX_STACK_LINE(256)
	Dynamic tmp2 = this->val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ListIterator_obj,next,return )


ListIterator_obj::ListIterator_obj()
{
}

void ListIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListIterator);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(val,"val");
	HX_MARK_END_CLASS();
}

void ListIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(val,"val");
}

Dynamic ListIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"val") ) { return val; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"val") ) { val=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("val","\xe1","\xde","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ListIterator_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListIterator_obj,val),HX_HCSTRING("val","\xe1","\xde","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("val","\xe1","\xde","\x59","\x00"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class ListIterator_obj::__mClass;

void ListIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_List.ListIterator","\x3d","\xef","\x93","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListIterator_obj >;
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

} // end namespace _List
