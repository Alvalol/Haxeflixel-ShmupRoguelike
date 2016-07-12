#include <hxcpp.h>

#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroupIterator_obj::__construct(cpp::ArrayBase GroupMembers,Dynamic filter)
{
HX_STACK_FRAME("flixel.group.FlxTypedGroupIterator","new",0xa7153fe6,"flixel.group.FlxTypedGroupIterator.new","flixel/group/FlxGroup.hx",871,0x1e89d58e)
HX_STACK_THIS(this)
HX_STACK_ARG(GroupMembers,"GroupMembers")
HX_STACK_ARG(filter,"filter")
{
	HX_STACK_LINE(872)
	this->_groupMembers = GroupMembers;
	HX_STACK_LINE(873)
	this->_filter = filter;
	HX_STACK_LINE(874)
	this->_cursor = (int)0;
	HX_STACK_LINE(875)
	int tmp = this->_groupMembers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(875)
	this->_length = tmp;
}
;
	return null();
}

//FlxTypedGroupIterator_obj::~FlxTypedGroupIterator_obj() { }

Dynamic FlxTypedGroupIterator_obj::__CreateEmpty() { return  new FlxTypedGroupIterator_obj; }
hx::ObjectPtr< FlxTypedGroupIterator_obj > FlxTypedGroupIterator_obj::__new(cpp::ArrayBase GroupMembers,Dynamic filter)
{  hx::ObjectPtr< FlxTypedGroupIterator_obj > _result_ = new FlxTypedGroupIterator_obj();
	_result_->__construct(GroupMembers,filter);
	return _result_;}

Dynamic FlxTypedGroupIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroupIterator_obj > _result_ = new FlxTypedGroupIterator_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic FlxTypedGroupIterator_obj::next( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroupIterator","next",0x8b82aaad,"flixel.group.FlxTypedGroupIterator.next","flixel/group/FlxGroup.hx",879,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(880)
	bool tmp = this->hasNext();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(880)
	if ((tmp)){
		HX_STACK_LINE(880)
		int tmp2 = (this->_cursor)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		tmp1 = this->_groupMembers->__GetItem(tmp2);
	}
	else{
		HX_STACK_LINE(880)
		tmp1 = null();
	}
	HX_STACK_LINE(880)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,next,return )

bool FlxTypedGroupIterator_obj::hasNext( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroupIterator","hasNext",0x559d4ff3,"flixel.group.FlxTypedGroupIterator.hasNext","flixel/group/FlxGroup.hx",884,0x1e89d58e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(885)
	while((true)){
		HX_STACK_LINE(885)
		int tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(885)
		int tmp1 = this->_length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(885)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(885)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(885)
		if ((tmp2)){
			HX_STACK_LINE(885)
			int tmp4 = this->_cursor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(885)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(885)
			Dynamic tmp6 = this->_groupMembers->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(885)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(885)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(885)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(885)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(885)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(885)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(885)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(885)
			if ((tmp13)){
				HX_STACK_LINE(885)
				Dynamic tmp14 = this->_filter_dyn();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(885)
				Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(885)
				Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(885)
				bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(885)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(885)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(885)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(885)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(885)
				if ((tmp21)){
					HX_STACK_LINE(885)
					int tmp22 = this->_cursor;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(885)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(885)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(885)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(885)
					Dynamic tmp26 = this->_groupMembers->__GetItem(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(885)
					Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(885)
					Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(885)
					Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(885)
					Dynamic tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(885)
					Dynamic tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(885)
					Dynamic tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(885)
					bool tmp33 = this->_filter(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(885)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(885)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(885)
					bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(885)
					bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(885)
					bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(885)
					bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(885)
					tmp3 = !(tmp39);
				}
				else{
					HX_STACK_LINE(885)
					tmp3 = false;
				}
			}
			else{
				HX_STACK_LINE(885)
				tmp3 = true;
			}
		}
		else{
			HX_STACK_LINE(885)
			tmp3 = false;
		}
		HX_STACK_LINE(885)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(885)
		if ((tmp4)){
			HX_STACK_LINE(885)
			break;
		}
		HX_STACK_LINE(887)
		(this->_cursor)++;
	}
	HX_STACK_LINE(889)
	int tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(889)
	int tmp1 = this->_length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(889)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(889)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,hasNext,return )


FlxTypedGroupIterator_obj::FlxTypedGroupIterator_obj()
{
}

void FlxTypedGroupIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroupIterator);
	HX_MARK_MEMBER_NAME(_groupMembers,"_groupMembers");
	HX_MARK_MEMBER_NAME(_filter,"_filter");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_END_CLASS();
}

void FlxTypedGroupIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_groupMembers,"_groupMembers");
	HX_VISIT_MEMBER_NAME(_filter,"_filter");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_length,"_length");
}

Dynamic FlxTypedGroupIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { return _filter; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { return _groupMembers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroupIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { _groupMembers=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroupIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_groupMembers","\x39","\xaa","\xf1","\x6f"));
	outFields->push(HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"));
	outFields->push(HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxTypedGroupIterator_obj,_groupMembers),HX_HCSTRING("_groupMembers","\x39","\xaa","\xf1","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedGroupIterator_obj,_filter),HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3")},
	{hx::fsInt,(int)offsetof(FlxTypedGroupIterator_obj,_cursor),HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad")},
	{hx::fsInt,(int)offsetof(FlxTypedGroupIterator_obj,_length),HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_groupMembers","\x39","\xaa","\xf1","\x6f"),
	HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3"),
	HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"),
	HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroupIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroupIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedGroupIterator_obj::__mClass;

void FlxTypedGroupIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.group.FlxTypedGroupIterator","\xf4","\x14","\xfa","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedGroupIterator_obj >;
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

} // end namespace flixel
} // end namespace group
