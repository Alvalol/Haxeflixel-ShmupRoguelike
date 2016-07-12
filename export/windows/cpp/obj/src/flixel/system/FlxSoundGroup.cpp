#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace _system{

Void FlxSoundGroup_obj::__construct(hx::Null< Float >  __o_volume)
{
HX_STACK_FRAME("flixel.system.FlxSoundGroup","new",0x8754fbe7,"flixel.system.FlxSoundGroup.new","flixel/system/FlxSoundGroup.hx",6,0x4475ef89)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_volume,"volume")
Float volume = __o_volume.Default(1);
{
	HX_STACK_LINE(11)
	this->sounds = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	Float tmp = volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->set_volume(tmp);
}
;
	return null();
}

//FlxSoundGroup_obj::~FlxSoundGroup_obj() { }

Dynamic FlxSoundGroup_obj::__CreateEmpty() { return  new FlxSoundGroup_obj; }
hx::ObjectPtr< FlxSoundGroup_obj > FlxSoundGroup_obj::__new(hx::Null< Float >  __o_volume)
{  hx::ObjectPtr< FlxSoundGroup_obj > _result_ = new FlxSoundGroup_obj();
	_result_->__construct(__o_volume);
	return _result_;}

Dynamic FlxSoundGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSoundGroup_obj > _result_ = new FlxSoundGroup_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool FlxSoundGroup_obj::add( ::flixel::_system::FlxSound sound){
	HX_STACK_FRAME("flixel.system.FlxSoundGroup","add",0x874b1da8,"flixel.system.FlxSoundGroup.add","flixel/system/FlxSoundGroup.hx",33,0x4475ef89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(34)
	::flixel::_system::FlxSound tmp = sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = this->sounds->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	if ((tmp2)){
		HX_STACK_LINE(36)
		sound->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(37)
		::flixel::_system::FlxSound tmp3 = sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		this->sounds->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(38)
		return true;
	}
	HX_STACK_LINE(40)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundGroup_obj,add,return )

bool FlxSoundGroup_obj::remove( ::flixel::_system::FlxSound sound){
	HX_STACK_FRAME("flixel.system.FlxSoundGroup","remove",0xd9901f1d,"flixel.system.FlxSoundGroup.remove","flixel/system/FlxSoundGroup.hx",49,0x4475ef89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(50)
	::flixel::_system::FlxSound tmp = sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = this->sounds->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp2)){
		HX_STACK_LINE(52)
		sound->__Field(HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"), hx::paccDynamic )(null());
		HX_STACK_LINE(53)
		::flixel::_system::FlxSound tmp3 = sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		bool tmp4 = this->sounds->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		return tmp4;
	}
	HX_STACK_LINE(55)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundGroup_obj,remove,return )

Float FlxSoundGroup_obj::set_volume( Float volume){
	HX_STACK_FRAME("flixel.system.FlxSoundGroup","set_volume",0xc13c9b70,"flixel.system.FlxSoundGroup.set_volume","flixel/system/FlxSoundGroup.hx",59,0x4475ef89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(volume,"volume")
	HX_STACK_LINE(60)
	this->volume = volume;
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Array< ::Dynamic > _g1 = this->sounds;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(61)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			if ((tmp1)){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(61)
			::flixel::_system::FlxSound tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			::flixel::_system::FlxSound sound = tmp2;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(61)
			++(_g);
			HX_STACK_LINE(63)
			sound->__Field(HX_HCSTRING("updateTransform","\x23","\xfe","\x1d","\x95"), hx::paccDynamic )();
		}
	}
	HX_STACK_LINE(65)
	Float tmp = volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundGroup_obj,set_volume,return )


FlxSoundGroup_obj::FlxSoundGroup_obj()
{
}

void FlxSoundGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundGroup);
	HX_MARK_MEMBER_NAME(sounds,"sounds");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_END_CLASS();
}

void FlxSoundGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sounds,"sounds");
	HX_VISIT_MEMBER_NAME(volume,"volume");
}

Dynamic FlxSoundGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { return sounds; }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSoundGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSoundGroup_obj,sounds),HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32")},
	{hx::fsFloat,(int)offsetof(FlxSoundGroup_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSoundGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSoundGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSoundGroup_obj::__mClass;

void FlxSoundGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxSoundGroup","\x75","\x7c","\x49","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSoundGroup_obj >;
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
} // end namespace system
