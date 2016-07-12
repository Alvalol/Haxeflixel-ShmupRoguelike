#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
namespace haxe{
namespace ds{

Void EnumValueMap_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.EnumValueMap","new",0x9ce29655,"haxe.ds.EnumValueMap.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/EnumValueMap.hx",31,0x67888762)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	super::__construct();
}
;
	return null();
}

//EnumValueMap_obj::~EnumValueMap_obj() { }

Dynamic EnumValueMap_obj::__CreateEmpty() { return  new EnumValueMap_obj; }
hx::ObjectPtr< EnumValueMap_obj > EnumValueMap_obj::__new()
{  hx::ObjectPtr< EnumValueMap_obj > _result_ = new EnumValueMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic EnumValueMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnumValueMap_obj > _result_ = new EnumValueMap_obj();
	_result_->__construct();
	return _result_;}

hx::Object *EnumValueMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::IMap_obj)) return operator ::haxe::IMap_obj *();
	return super::__ToInterface(inType);
}

EnumValueMap_obj::operator ::haxe::IMap_obj *()
	{ return new ::haxe::IMap_delegate_< EnumValueMap_obj >(this); }
int EnumValueMap_obj::compare( Dynamic _tmp_k1,Dynamic _tmp_k2){
	HX_STACK_FRAME("haxe.ds.EnumValueMap","compare",0x806a7d1a,"haxe.ds.EnumValueMap.compare","C:\\HaxeToolkit\\haxe\\std/haxe/ds/EnumValueMap.hx",33,0x67888762)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_k1,"_tmp_k1")
	HX_STACK_ARG(_tmp_k2,"_tmp_k2")
	HX_STACK_LINE(34)
	Dynamic k1 = _tmp_k1;		HX_STACK_VAR(k1,"k1");
	HX_STACK_LINE(34)
	Dynamic k2 = _tmp_k2;		HX_STACK_VAR(k2,"k2");
	HX_STACK_LINE(34)
	int tmp = k1->__Index();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = k2->__Index();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	int d = tmp2;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(35)
	bool tmp3 = (d != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp3)){
		HX_STACK_LINE(35)
		int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		return tmp4;
	}
	HX_STACK_LINE(36)
	Dynamic tmp4 = k1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	cpp::ArrayBase p1 = ::Type_obj::enumParameters(tmp4);		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(37)
	Dynamic tmp5 = k2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	cpp::ArrayBase p2 = ::Type_obj::enumParameters(tmp5);		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(38)
	bool tmp6 = (p1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(38)
	if ((tmp6)){
		HX_STACK_LINE(38)
		tmp7 = (p2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);
	}
	else{
		HX_STACK_LINE(38)
		tmp7 = false;
	}
	HX_STACK_LINE(38)
	if ((tmp7)){
		HX_STACK_LINE(38)
		return (int)0;
	}
	HX_STACK_LINE(39)
	int tmp8 = this->compareArgs(p1,p2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	return tmp8;
}


int EnumValueMap_obj::compareArgs( cpp::ArrayBase a1,cpp::ArrayBase a2){
	HX_STACK_FRAME("haxe.ds.EnumValueMap","compareArgs",0x37a5cb97,"haxe.ds.EnumValueMap.compareArgs","C:\\HaxeToolkit\\haxe\\std/haxe/ds/EnumValueMap.hx",42,0x67888762)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a1,"a1")
	HX_STACK_ARG(a2,"a2")
	HX_STACK_LINE(43)
	int tmp = (a1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - a2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int ld = tmp;		HX_STACK_VAR(ld,"ld");
	HX_STACK_LINE(44)
	bool tmp1 = (ld != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	if ((tmp1)){
		HX_STACK_LINE(44)
		int tmp2 = ld;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		return tmp2;
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		int _g = a1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		while((true)){
			HX_STACK_LINE(45)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			if ((tmp3)){
				HX_STACK_LINE(45)
				break;
			}
			HX_STACK_LINE(45)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(46)
			Dynamic tmp5 = a1->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			Dynamic tmp6 = a2->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			int tmp7 = this->compareArg(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			int d = tmp7;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(47)
			bool tmp8 = (d != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			if ((tmp8)){
				HX_STACK_LINE(47)
				int tmp9 = d;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(49)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(EnumValueMap_obj,compareArgs,return )

int EnumValueMap_obj::compareArg( Dynamic v1,Dynamic v2){
	HX_STACK_FRAME("haxe.ds.EnumValueMap","compareArg",0xcee2e55c,"haxe.ds.EnumValueMap.compareArg","C:\\HaxeToolkit\\haxe\\std/haxe/ds/EnumValueMap.hx",52,0x67888762)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v1,"v1")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(53)
	Dynamic tmp = v1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2 = ::Reflect_obj::isEnumValue(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(53)
		Dynamic tmp4 = v2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		tmp3 = ::Reflect_obj::isEnumValue(tmp5);
	}
	else{
		HX_STACK_LINE(53)
		tmp3 = false;
	}
	HX_STACK_LINE(53)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	if ((tmp3)){
		HX_STACK_LINE(54)
		Dynamic tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		Dynamic tmp6 = v2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		tmp4 = this->compare(tmp5,tmp6);
	}
	else{
		HX_STACK_LINE(55)
		Dynamic tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		if ((tmp7)){
			HX_STACK_LINE(55)
			Dynamic tmp9 = v2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			tmp8 = ::Std_obj::is(tmp10,hx::ClassOf< Array<int> >());
		}
		else{
			HX_STACK_LINE(55)
			tmp8 = false;
		}
		HX_STACK_LINE(55)
		if ((tmp8)){
			HX_STACK_LINE(56)
			Dynamic tmp9 = v1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			Dynamic tmp10 = v2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			tmp4 = this->compareArgs(tmp9,tmp10);
		}
		else{
			HX_STACK_LINE(58)
			Dynamic tmp9 = v1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			Dynamic tmp10 = v2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(58)
			tmp4 = ::Reflect_obj::compare(tmp9,tmp10);
		}
	}
	HX_STACK_LINE(53)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(EnumValueMap_obj,compareArg,return )


EnumValueMap_obj::EnumValueMap_obj()
{
}

Dynamic EnumValueMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compareArg") ) { return compareArg_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compareArgs") ) { return compareArgs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("compareArgs","\xa2","\x88","\x40","\xb6"),
	HX_HCSTRING("compareArg","\xb1","\xd2","\x97","\x0e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumValueMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumValueMap_obj::__mClass,"__mClass");
};

#endif

hx::Class EnumValueMap_obj::__mClass;

void EnumValueMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.EnumValueMap","\xe3","\xc7","\x41","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnumValueMap_obj >;
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
} // end namespace ds
