#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{

Void FlxBaseKeyList_obj::__construct(int status,::flixel::input::FlxKeyManager keyManager)
{
HX_STACK_FRAME("flixel.input.FlxBaseKeyList","new",0x83657282,"flixel.input.FlxBaseKeyList.new","flixel/input/FlxBaseKeyList.hx",12,0x0418a22c)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(keyManager,"keyManager")
{
	HX_STACK_LINE(13)
	this->status = status;
	HX_STACK_LINE(14)
	this->keyManager = keyManager;
}
;
	return null();
}

//FlxBaseKeyList_obj::~FlxBaseKeyList_obj() { }

Dynamic FlxBaseKeyList_obj::__CreateEmpty() { return  new FlxBaseKeyList_obj; }
hx::ObjectPtr< FlxBaseKeyList_obj > FlxBaseKeyList_obj::__new(int status,::flixel::input::FlxKeyManager keyManager)
{  hx::ObjectPtr< FlxBaseKeyList_obj > _result_ = new FlxBaseKeyList_obj();
	_result_->__construct(status,keyManager);
	return _result_;}

Dynamic FlxBaseKeyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseKeyList_obj > _result_ = new FlxBaseKeyList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool FlxBaseKeyList_obj::check( int keyCode){
	HX_STACK_FRAME("flixel.input.FlxBaseKeyList","check",0xea0e876a,"flixel.input.FlxBaseKeyList.check","flixel/input/FlxBaseKeyList.hx",18,0x0418a22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_LINE(19)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	int tmp1 = keyCode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	int tmp2 = this->status;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	bool tmp3 = tmp->checkStatus(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseKeyList_obj,check,return )

bool FlxBaseKeyList_obj::get_ANY( ){
	HX_STACK_FRAME("flixel.input.FlxBaseKeyList","get_ANY",0x83d0ba85,"flixel.input.FlxBaseKeyList.get_ANY","flixel/input/FlxBaseKeyList.hx",25,0x0418a22c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		Array< ::Dynamic > _g1 = tmp->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			if ((tmp2)){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			::flixel::input::FlxInput tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			::flixel::input::FlxInput key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(26)
			++(_g);
			HX_STACK_LINE(28)
			bool tmp4 = (key != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			if ((tmp4)){
				HX_STACK_LINE(30)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					int keyCode = key->ID;		HX_STACK_VAR(keyCode,"keyCode");
					HX_STACK_LINE(30)
					::flixel::input::FlxKeyManager tmp6 = this->keyManager;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					int tmp7 = keyCode;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					int tmp8 = this->status;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					tmp5 = tmp6->checkStatus(tmp7,tmp8);
				}
				HX_STACK_LINE(30)
				if ((tmp5)){
					HX_STACK_LINE(32)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(37)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseKeyList_obj,get_ANY,return )


FlxBaseKeyList_obj::FlxBaseKeyList_obj()
{
}

void FlxBaseKeyList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseKeyList);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(keyManager,"keyManager");
	HX_MARK_END_CLASS();
}

void FlxBaseKeyList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(keyManager,"keyManager");
}

Dynamic FlxBaseKeyList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { if (inCallProp == hx::paccAlways) return get_ANY(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return get_ANY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { return keyManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseKeyList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { keyManager=inValue.Cast< ::flixel::input::FlxKeyManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("keyManager","\x8e","\x32","\x49","\x82"));
	outFields->push(HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBaseKeyList_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*::flixel::input::FlxKeyManager*/ ,(int)offsetof(FlxBaseKeyList_obj,keyManager),HX_HCSTRING("keyManager","\x8e","\x32","\x49","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("keyManager","\x8e","\x32","\x49","\x82"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseKeyList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseKeyList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseKeyList_obj::__mClass;

void FlxBaseKeyList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxBaseKeyList","\x90","\xc9","\xdd","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseKeyList_obj >;
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
} // end namespace input
