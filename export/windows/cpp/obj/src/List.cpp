#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif

Void List_obj::__construct()
{
HX_STACK_FRAME("List","new",0xed890070,"List.new","C:\\HaxeToolkit\\haxe\\std/List.hx",41,0x1e139e47)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(41)
	this->length = (int)0;
}
;
	return null();
}

//List_obj::~List_obj() { }

Dynamic List_obj::__CreateEmpty() { return  new List_obj; }
hx::ObjectPtr< List_obj > List_obj::__new()
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct();
	return _result_;}

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< List_obj > _result_ = new List_obj();
	_result_->__construct();
	return _result_;}

Void List_obj::add( Dynamic item){
{
		HX_STACK_FRAME("List","add",0xed7f2231,"List.add","C:\\HaxeToolkit\\haxe\\std/List.hx",49,0x1e139e47)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(50)
		cpp::ArrayBase x = cpp::ArrayBase_obj::__new().Add(item);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(51)
		bool tmp = (this->h == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		if ((tmp)){
			HX_STACK_LINE(52)
			this->h = x;
		}
		else{
			HX_STACK_LINE(54)
			hx::IndexRef((this->q).mPtr,(int)1) = x;
		}
		HX_STACK_LINE(55)
		this->q = x;
		HX_STACK_LINE(56)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,add,(void))

Void List_obj::push( Dynamic item){
{
		HX_STACK_FRAME("List","push",0xebb5efca,"List.push","C:\\HaxeToolkit\\haxe\\std/List.hx",64,0x1e139e47)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(68)
		cpp::ArrayBase x = cpp::ArrayBase_obj::__new().Add(item).Add(this->h);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(70)
		this->h = x;
		HX_STACK_LINE(71)
		bool tmp = (this->q == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(72)
			this->q = x;
		}
		HX_STACK_LINE(73)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,push,(void))

bool List_obj::isEmpty( ){
	HX_STACK_FRAME("List","isEmpty",0xaa565653,"List.isEmpty","C:\\HaxeToolkit\\haxe\\std/List.hx",114,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	bool tmp = (this->h == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,isEmpty,return )

bool List_obj::remove( Dynamic v){
	HX_STACK_FRAME("List","remove",0x4b44d634,"List.remove","C:\\HaxeToolkit\\haxe\\std/List.hx",138,0x1e139e47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(139)
	cpp::ArrayBase prev = null();		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(140)
	cpp::ArrayBase l = this->h;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(141)
	while((true)){
		HX_STACK_LINE(141)
		bool tmp = (l != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(141)
			break;
		}
		HX_STACK_LINE(142)
		Dynamic tmp2 = l->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		if ((tmp4)){
			HX_STACK_LINE(143)
			bool tmp5 = (prev == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			if ((tmp5)){
				HX_STACK_LINE(144)
				Dynamic tmp6 = l->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(144)
				this->h = tmp6;
			}
			else{
				HX_STACK_LINE(146)
				Dynamic tmp6 = l->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(146)
				hx::IndexRef((prev).mPtr,(int)1) = tmp6;
			}
			HX_STACK_LINE(147)
			bool tmp6 = (this->q == l);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			if ((tmp6)){
				HX_STACK_LINE(148)
				this->q = prev;
			}
			HX_STACK_LINE(149)
			(this->length)--;
			HX_STACK_LINE(150)
			return true;
		}
		HX_STACK_LINE(152)
		prev = l;
		HX_STACK_LINE(153)
		Dynamic tmp5 = l->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		l = tmp5;
	}
	HX_STACK_LINE(155)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,remove,return )


List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"q") ) { return q; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic List_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(List_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(List_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(List_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(List_obj::__mClass,"__mClass");
};

#endif

hx::Class List_obj::__mClass;

void List_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("List","\x7e","\x48","\x8c","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< List_obj >;
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

