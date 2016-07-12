#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace ui{
namespace _FlxButton{

Void FlxButtonEvent_obj::__construct(Dynamic Callback,::flixel::_system::FlxSound sound)
{
HX_STACK_FRAME("flixel.ui._FlxButton.FlxButtonEvent","new",0xea40fb69,"flixel.ui._FlxButton.FlxButtonEvent.new","flixel/ui/FlxButton.hx",639,0xc64cf442)
HX_STACK_THIS(this)
HX_STACK_ARG(Callback,"Callback")
HX_STACK_ARG(sound,"sound")
{
	HX_STACK_LINE(640)
	this->callback = Callback;
	HX_STACK_LINE(643)
	this->sound = sound;
}
;
	return null();
}

//FlxButtonEvent_obj::~FlxButtonEvent_obj() { }

Dynamic FlxButtonEvent_obj::__CreateEmpty() { return  new FlxButtonEvent_obj; }
hx::ObjectPtr< FlxButtonEvent_obj > FlxButtonEvent_obj::__new(Dynamic Callback,::flixel::_system::FlxSound sound)
{  hx::ObjectPtr< FlxButtonEvent_obj > _result_ = new FlxButtonEvent_obj();
	_result_->__construct(Callback,sound);
	return _result_;}

Dynamic FlxButtonEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxButtonEvent_obj > _result_ = new FlxButtonEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FlxButtonEvent_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxButtonEvent_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxButtonEvent_obj >(this); }
Void FlxButtonEvent_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui._FlxButton.FlxButtonEvent","destroy",0x72801083,"flixel.ui._FlxButton.FlxButtonEvent.destroy","flixel/ui/FlxButton.hx",651,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(652)
		this->callback = null();
		HX_STACK_LINE(655)
		::flixel::_system::FlxSound tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(655)
		::flixel::_system::FlxSound tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(655)
		this->sound = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,destroy,(void))

Void FlxButtonEvent_obj::fire( ){
{
		HX_STACK_FRAME("flixel.ui._FlxButton.FlxButtonEvent","fire",0x0954508d,"flixel.ui._FlxButton.FlxButtonEvent.fire","flixel/ui/FlxButton.hx",663,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(664)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		if ((tmp1)){
			HX_STACK_LINE(666)
			this->callback();
		}
		HX_STACK_LINE(670)
		::flixel::_system::FlxSound tmp2 = this->sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(670)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(670)
		if ((tmp3)){
			HX_STACK_LINE(672)
			::flixel::_system::FlxSound tmp4 = this->sound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(672)
			tmp4->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,fire,(void))


FlxButtonEvent_obj::FlxButtonEvent_obj()
{
}

void FlxButtonEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxButtonEvent);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_END_CLASS();
}

void FlxButtonEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(sound,"sound");
}

Dynamic FlxButtonEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxButtonEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButtonEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxButtonEvent_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(FlxButtonEvent_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxButtonEvent_obj::__mClass;

void FlxButtonEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui._FlxButton.FlxButtonEvent","\xf7","\x12","\x9b","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxButtonEvent_obj >;
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
} // end namespace ui
} // end namespace _FlxButton
