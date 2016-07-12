#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

Void FlxBaseGamepadList_obj::__construct(int status,::flixel::input::gamepad::FlxGamepad gamepad)
{
HX_STACK_FRAME("flixel.input.gamepad.lists.FlxBaseGamepadList","new",0x1c38506a,"flixel.input.gamepad.lists.FlxBaseGamepadList.new","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",13,0x249eb6c2)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(gamepad,"gamepad")
{
	HX_STACK_LINE(14)
	this->status = status;
	HX_STACK_LINE(15)
	this->gamepad = gamepad;
}
;
	return null();
}

//FlxBaseGamepadList_obj::~FlxBaseGamepadList_obj() { }

Dynamic FlxBaseGamepadList_obj::__CreateEmpty() { return  new FlxBaseGamepadList_obj; }
hx::ObjectPtr< FlxBaseGamepadList_obj > FlxBaseGamepadList_obj::__new(int status,::flixel::input::gamepad::FlxGamepad gamepad)
{  hx::ObjectPtr< FlxBaseGamepadList_obj > _result_ = new FlxBaseGamepadList_obj();
	_result_->__construct(status,gamepad);
	return _result_;}

Dynamic FlxBaseGamepadList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseGamepadList_obj > _result_ = new FlxBaseGamepadList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool FlxBaseGamepadList_obj::check( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxBaseGamepadList","check",0x83c2af52,"flixel.input.gamepad.lists.FlxBaseGamepadList.check","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",19,0x249eb6c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(20)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(20)
		int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		int tmp3 = _this->mapping->getRawID(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		int tmp4 = this->status;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		tmp = _this->checkStatusRaw(tmp3,tmp4);
	}
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseGamepadList_obj,check,return )

bool FlxBaseGamepadList_obj::checkRaw( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxBaseGamepadList","checkRaw",0xa446bdb6,"flixel.input.gamepad.lists.FlxBaseGamepadList.checkRaw","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",24,0x249eb6c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(25)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	int tmp2 = this->status;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	bool tmp3 = tmp->checkStatusRaw(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseGamepadList_obj,checkRaw,return )

bool FlxBaseGamepadList_obj::get_ANY( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxBaseGamepadList","get_ANY",0x10ccac6d,"flixel.input.gamepad.lists.FlxBaseGamepadList.get_ANY","flixel/input/gamepad/lists/FlxBaseGamepadList.hx",31,0x249eb6c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		Array< ::Dynamic > _g1 = tmp->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			if ((tmp2)){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			::flixel::input::gamepad::FlxGamepadButton tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			::flixel::input::gamepad::FlxGamepadButton button = tmp3;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(32)
			++(_g);
			HX_STACK_LINE(34)
			bool tmp4 = (button != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(34)
			if ((tmp4)){
				HX_STACK_LINE(34)
				::flixel::input::gamepad::FlxGamepad tmp6 = this->gamepad;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				::flixel::input::gamepad::FlxGamepad tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(34)
				int tmp8 = button->ID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(34)
				int tmp9 = this->status;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(34)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(34)
				int tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(34)
				int tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(34)
				tmp5 = tmp7->checkStatusRaw(tmp11,tmp12);
			}
			else{
				HX_STACK_LINE(34)
				tmp5 = false;
			}
			HX_STACK_LINE(34)
			if ((tmp5)){
				HX_STACK_LINE(36)
				return true;
			}
		}
	}
	HX_STACK_LINE(40)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseGamepadList_obj,get_ANY,return )


FlxBaseGamepadList_obj::FlxBaseGamepadList_obj()
{
}

void FlxBaseGamepadList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseGamepadList);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxBaseGamepadList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

Dynamic FlxBaseGamepadList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return get_ANY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkRaw") ) { return checkRaw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseGamepadList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseGamepadList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBaseGamepadList_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxBaseGamepadList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("checkRaw","\x00","\xa2","\xe9","\xac"),
	HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseGamepadList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseGamepadList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseGamepadList_obj::__mClass;

void FlxBaseGamepadList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxBaseGamepadList","\x78","\x93","\xa1","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseGamepadList_obj >;
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
} // end namespace gamepad
} // end namespace lists
