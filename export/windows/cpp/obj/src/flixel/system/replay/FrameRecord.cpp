#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
namespace flixel{
namespace _system{
namespace replay{

Void FrameRecord_obj::__construct()
{
HX_STACK_FRAME("flixel.system.replay.FrameRecord","new",0xf4a8b736,"flixel.system.replay.FrameRecord.new","flixel/system/replay/FrameRecord.hx",25,0xc059da9b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->frame = (int)0;
	HX_STACK_LINE(27)
	this->keys = null();
	HX_STACK_LINE(28)
	this->mouse = null();
}
;
	return null();
}

//FrameRecord_obj::~FrameRecord_obj() { }

Dynamic FrameRecord_obj::__CreateEmpty() { return  new FrameRecord_obj; }
hx::ObjectPtr< FrameRecord_obj > FrameRecord_obj::__new()
{  hx::ObjectPtr< FrameRecord_obj > _result_ = new FrameRecord_obj();
	_result_->__construct();
	return _result_;}

Dynamic FrameRecord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameRecord_obj > _result_ = new FrameRecord_obj();
	_result_->__construct();
	return _result_;}

::flixel::_system::replay::FrameRecord FrameRecord_obj::create( Float Frame,Array< ::Dynamic > Keys,::flixel::_system::replay::MouseRecord Mouse){
	HX_STACK_FRAME("flixel.system.replay.FrameRecord","create",0x88c1e9e6,"flixel.system.replay.FrameRecord.create","flixel/system/replay/FrameRecord.hx",39,0xc059da9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(Keys,"Keys")
	HX_STACK_ARG(Mouse,"Mouse")
	HX_STACK_LINE(40)
	Float tmp = Frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	this->frame = tmp1;
	HX_STACK_LINE(41)
	this->keys = Keys;
	HX_STACK_LINE(42)
	this->mouse = Mouse;
	HX_STACK_LINE(44)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FrameRecord_obj,create,return )

Void FrameRecord_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.replay.FrameRecord","destroy",0x340636d0,"flixel.system.replay.FrameRecord.destroy","flixel/system/replay/FrameRecord.hx",51,0xc059da9b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->keys = null();
		HX_STACK_LINE(53)
		this->mouse = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FrameRecord_obj,destroy,(void))

::String FrameRecord_obj::save( ){
	HX_STACK_FRAME("flixel.system.replay.FrameRecord","save",0x22429fa7,"flixel.system.replay.FrameRecord.save","flixel/system/replay/FrameRecord.hx",61,0xc059da9b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	int tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::String tmp1 = (tmp + HX_HCSTRING("k","\x6b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	::String output = tmp1;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(64)
	bool tmp2 = (this->keys != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(66)
		::flixel::_system::replay::CodeValuePair object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(67)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(68)
		int tmp3 = this->keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		int l = tmp3;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(69)
		while((true)){
			HX_STACK_LINE(69)
			bool tmp4 = (i < l);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			if ((tmp5)){
				HX_STACK_LINE(69)
				break;
			}
			HX_STACK_LINE(71)
			bool tmp6 = (i > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			if ((tmp6)){
				HX_STACK_LINE(73)
				hx::AddEq(output,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(75)
			int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			::flixel::_system::replay::CodeValuePair tmp8 = this->keys->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(75)
			object = tmp8;
			HX_STACK_LINE(76)
			::String tmp9 = (object->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(76)
			int tmp10 = object->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(76)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(76)
			hx::AddEq(output,tmp11);
		}
	}
	HX_STACK_LINE(80)
	hx::AddEq(output,HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	HX_STACK_LINE(81)
	::flixel::_system::replay::MouseRecord tmp3 = this->mouse;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	if ((tmp4)){
		HX_STACK_LINE(83)
		::flixel::_system::replay::MouseRecord tmp5 = this->mouse;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		int tmp6 = tmp5->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::String tmp7 = (tmp6 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		::flixel::_system::replay::MouseRecord tmp8 = this->mouse;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		int tmp9 = tmp8->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		::String tmp11 = (tmp10 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		::flixel::_system::replay::MouseRecord tmp12 = this->mouse;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		int tmp13 = tmp12->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(83)
		::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(83)
		::String tmp15 = (tmp14 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(83)
		::flixel::_system::replay::MouseRecord tmp16 = this->mouse;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(83)
		int tmp17 = tmp16->__Field(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(83)
		::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(83)
		hx::AddEq(output,tmp18);
	}
	HX_STACK_LINE(86)
	::String tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(FrameRecord_obj,save,return )

::flixel::_system::replay::FrameRecord FrameRecord_obj::load( ::String Data){
	HX_STACK_FRAME("flixel.system.replay.FrameRecord","load",0x1dacae90,"flixel.system.replay.FrameRecord.load","flixel/system/replay/FrameRecord.hx",94,0xc059da9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(95)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(96)
	int l;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(99)
	Array< ::String > array = Data.split(HX_HCSTRING("k","\x6b","\x00","\x00","\x00"));		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(100)
	::String tmp = array->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	this->frame = tmp1;
	HX_STACK_LINE(103)
	::String tmp2 = array->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	array = tmp2.split(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	HX_STACK_LINE(104)
	::String tmp3 = array->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	::String keyData = tmp3;		HX_STACK_VAR(keyData,"keyData");
	HX_STACK_LINE(105)
	::String tmp4 = array->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	::String mouseData = tmp4;		HX_STACK_VAR(mouseData,"mouseData");
	HX_STACK_LINE(108)
	bool tmp5 = (keyData.length > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(108)
	if ((tmp5)){
		HX_STACK_LINE(111)
		array = keyData.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
		HX_STACK_LINE(114)
		Array< ::String > keyPair;		HX_STACK_VAR(keyPair,"keyPair");
		HX_STACK_LINE(115)
		i = (int)0;
		HX_STACK_LINE(116)
		l = array->length;
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			bool tmp6 = (i < l);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(117)
			if ((tmp7)){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(119)
			int tmp8 = (i)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			::String tmp9 = array->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(119)
			keyPair = tmp9.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
			HX_STACK_LINE(120)
			bool tmp10 = (keyPair->length == (int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			if ((tmp10)){
				HX_STACK_LINE(122)
				bool tmp11 = (this->keys == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(122)
				if ((tmp11)){
					HX_STACK_LINE(124)
					this->keys = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(126)
				::String tmp12 = keyPair->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(126)
				Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(126)
				::String tmp14 = keyPair->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(126)
				Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(126)
				::flixel::_system::replay::CodeValuePair tmp16 = ::flixel::_system::replay::CodeValuePair_obj::__new(tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(126)
				this->keys->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp16);
			}
		}
	}
	HX_STACK_LINE(132)
	bool tmp6 = (mouseData.length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(132)
	if ((tmp6)){
		HX_STACK_LINE(134)
		array = mouseData.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
		HX_STACK_LINE(135)
		bool tmp7 = (array->length >= (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		if ((tmp7)){
			HX_STACK_LINE(137)
			::String tmp8 = array->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			::String tmp10 = array->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(137)
			::String tmp12 = array->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(137)
			Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			::String tmp14 = array->__get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(137)
			::flixel::_system::replay::MouseRecord tmp16 = ::flixel::_system::replay::MouseRecord_obj::__new(tmp9,tmp11,tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(137)
			this->mouse = tmp16;
		}
	}
	HX_STACK_LINE(141)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FrameRecord_obj,load,return )


FrameRecord_obj::FrameRecord_obj()
{
}

void FrameRecord_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameRecord);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	HX_MARK_END_CLASS();
}

void FrameRecord_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(mouse,"mouse");
}

Dynamic FrameRecord_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameRecord_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::flixel::_system::replay::MouseRecord >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FrameRecord_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FrameRecord_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{hx::fsObject /*::flixel::_system::replay::MouseRecord*/ ,(int)offsetof(FrameRecord_obj,mouse),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameRecord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameRecord_obj::__mClass,"__mClass");
};

#endif

hx::Class FrameRecord_obj::__mClass;

void FrameRecord_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.replay.FrameRecord","\x44","\xa4","\x0b","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrameRecord_obj >;
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
} // end namespace replay
