#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace _system{

Void FlxLinkedList_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxLinkedList","new",0xf2c6bf4e,"flixel.system.FlxLinkedList.new","flixel/system/FlxLinkedList.hx",11,0xa1edd602)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(65)
	this->exists = true;
}
;
	return null();
}

//FlxLinkedList_obj::~FlxLinkedList_obj() { }

Dynamic FlxLinkedList_obj::__CreateEmpty() { return  new FlxLinkedList_obj; }
hx::ObjectPtr< FlxLinkedList_obj > FlxLinkedList_obj::__new()
{  hx::ObjectPtr< FlxLinkedList_obj > _result_ = new FlxLinkedList_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxLinkedList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxLinkedList_obj > _result_ = new FlxLinkedList_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxLinkedList_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxLinkedList_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxLinkedList_obj >(this); }
Void FlxLinkedList_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxLinkedList","destroy",0x9f662ae8,"flixel.system.FlxLinkedList.destroy","flixel/system/FlxLinkedList.hx",76,0xa1edd602)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		if ((tmp1)){
			HX_STACK_LINE(79)
			return null();
		}
		HX_STACK_LINE(81)
		this->object = null();
		HX_STACK_LINE(82)
		::flixel::_system::FlxLinkedList tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		if ((tmp3)){
			HX_STACK_LINE(84)
			::flixel::_system::FlxLinkedList tmp4 = this->next;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			tmp4->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		}
		HX_STACK_LINE(86)
		this->exists = false;
		HX_STACK_LINE(89)
		::flixel::_system::FlxLinkedList tmp4 = ::flixel::_system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		this->next = tmp4;
		HX_STACK_LINE(90)
		::flixel::_system::FlxLinkedList_obj::_cachedListsHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(91)
		(::flixel::_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,destroy,(void))

int FlxLinkedList_obj::_NUM_CACHED_FLX_LIST;

::flixel::_system::FlxLinkedList FlxLinkedList_obj::_cachedListsHead;

::flixel::_system::FlxLinkedList FlxLinkedList_obj::recycle( ){
	HX_STACK_FRAME("flixel.system.FlxLinkedList","recycle",0xb26c0e01,"flixel.system.FlxLinkedList.recycle","flixel/system/FlxLinkedList.hx",24,0xa1edd602)
	HX_STACK_LINE(25)
	::flixel::_system::FlxLinkedList tmp = ::flixel::_system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(27)
		::flixel::_system::FlxLinkedList tmp2 = ::flixel::_system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		::flixel::_system::FlxLinkedList cachedList = tmp2;		HX_STACK_VAR(cachedList,"cachedList");
		HX_STACK_LINE(28)
		::flixel::_system::FlxLinkedList tmp3 = ::flixel::_system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::flixel::_system::FlxLinkedList_obj::_cachedListsHead = tmp3->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		HX_STACK_LINE(29)
		(::flixel::_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST)--;
		HX_STACK_LINE(31)
		cachedList->__FieldRef(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")) = true;
		HX_STACK_LINE(32)
		cachedList->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		HX_STACK_LINE(33)
		::flixel::_system::FlxLinkedList tmp4 = cachedList;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		return tmp4;
	}
	else{
		HX_STACK_LINE(36)
		::flixel::_system::FlxLinkedList tmp2 = ::flixel::_system::FlxLinkedList_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		return tmp2;
	}
	HX_STACK_LINE(25)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,recycle,return )

Void FlxLinkedList_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.FlxLinkedList","clearCache",0x48ebc447,"flixel.system.FlxLinkedList.clearCache","flixel/system/FlxLinkedList.hx",44,0xa1edd602)
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			::flixel::_system::FlxLinkedList tmp = ::flixel::_system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			if ((tmp2)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(48)
			::flixel::_system::FlxLinkedList tmp3 = ::flixel::_system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			::flixel::_system::FlxLinkedList node = tmp3;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(49)
			::flixel::_system::FlxLinkedList tmp4 = ::flixel::_system::FlxLinkedList_obj::_cachedListsHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			::flixel::_system::FlxLinkedList_obj::_cachedListsHead = tmp4->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(50)
			node->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = null();
			HX_STACK_LINE(51)
			node->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		}
		HX_STACK_LINE(53)
		::flixel::_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,clearCache,(void))


FlxLinkedList_obj::FlxLinkedList_obj()
{
}

void FlxLinkedList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxLinkedList);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_END_CLASS();
}

void FlxLinkedList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(exists,"exists");
}

Dynamic FlxLinkedList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxLinkedList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { outValue = recycle_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { outValue = _cachedListsHead; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { outValue = _NUM_CACHED_FLX_LIST; return true;  }
	}
	return false;
}

Dynamic FlxLinkedList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::_system::FlxLinkedList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxLinkedList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { _cachedListsHead=ioValue.Cast< ::flixel::_system::FlxLinkedList >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { _NUM_CACHED_FLX_LIST=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxLinkedList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxLinkedList_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(int)offsetof(FlxLinkedList_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(FlxLinkedList_obj,exists),HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,HX_HCSTRING("_NUM_CACHED_FLX_LIST","\x90","\x95","\x35","\x46")},
	{hx::fsObject /*::flixel::_system::FlxLinkedList*/ ,(void *) &FlxLinkedList_obj::_cachedListsHead,HX_HCSTRING("_cachedListsHead","\x54","\x10","\xc6","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::_cachedListsHead,"_cachedListsHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::_cachedListsHead,"_cachedListsHead");
};

#endif

hx::Class FlxLinkedList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_NUM_CACHED_FLX_LIST","\x90","\x95","\x35","\x46"),
	HX_HCSTRING("_cachedListsHead","\x54","\x10","\xc6","\x7b"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	::String(null()) };

void FlxLinkedList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxLinkedList","\x5c","\xc0","\x4d","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxLinkedList_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxLinkedList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxLinkedList_obj >;
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

void FlxLinkedList_obj::__boot()
{
	_NUM_CACHED_FLX_LIST= (int)0;
}

} // end namespace flixel
} // end namespace system
