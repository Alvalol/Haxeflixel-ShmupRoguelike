#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void NumTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.NumTween","new",0x5bbfa6a5,"flixel.tweens.misc.NumTween.new","flixel/tweens/misc/NumTween.hx",8,0x6392d42a)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(8)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	super::__construct(tmp);
}
;
	return null();
}

//NumTween_obj::~NumTween_obj() { }

Dynamic NumTween_obj::__CreateEmpty() { return  new NumTween_obj; }
hx::ObjectPtr< NumTween_obj > NumTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< NumTween_obj > _result_ = new NumTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic NumTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NumTween_obj > _result_ = new NumTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NumTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.NumTween","destroy",0x8c3b09bf,"flixel.tweens.misc.NumTween.destroy","flixel/tweens/misc/NumTween.hx",24,0x6392d42a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::destroy();
		HX_STACK_LINE(26)
		this->_tweenFunction = null();
	}
return null();
}


::flixel::tweens::misc::NumTween NumTween_obj::tween( Float fromValue,Float toValue,Float duration,Dynamic tweenFunction){
	HX_STACK_FRAME("flixel.tweens.misc.NumTween","tween",0x08325bf0,"flixel.tweens.misc.NumTween.tween","flixel/tweens/misc/NumTween.hx",38,0x6392d42a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fromValue,"fromValue")
	HX_STACK_ARG(toValue,"toValue")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(tweenFunction,"tweenFunction")
	HX_STACK_LINE(39)
	this->_tweenFunction = tweenFunction;
	HX_STACK_LINE(40)
	Float tmp = this->value = fromValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->_start = tmp;
	HX_STACK_LINE(41)
	Float tmp1 = toValue;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Float tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	this->_range = tmp3;
	HX_STACK_LINE(42)
	this->duration = duration;
	HX_STACK_LINE(43)
	this->start();
	HX_STACK_LINE(44)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(NumTween_obj,tween,return )

Void NumTween_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.misc.NumTween","update",0x81bf28e4,"flixel.tweens.misc.NumTween.update","flixel/tweens/misc/NumTween.hx",48,0x6392d42a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(49)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->super::update(tmp);
		HX_STACK_LINE(50)
		Float tmp1 = this->_start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		Float tmp2 = this->_range;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Float tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		this->value = tmp5;
		HX_STACK_LINE(52)
		Dynamic tmp6 = this->_tweenFunction_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		if ((tmp7)){
			HX_STACK_LINE(53)
			Float tmp8 = this->value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			this->_tweenFunction(tmp8);
		}
	}
return null();
}



NumTween_obj::NumTween_obj()
{
}

void NumTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NumTween);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_tweenFunction,"_tweenFunction");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NumTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_tweenFunction,"_tweenFunction");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NumTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tweenFunction") ) { return _tweenFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NumTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tweenFunction") ) { _tweenFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NumTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(NumTween_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NumTween_obj,_tweenFunction),HX_HCSTRING("_tweenFunction","\xe4","\xe4","\x67","\xb0")},
	{hx::fsFloat,(int)offsetof(NumTween_obj,_start),HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f")},
	{hx::fsFloat,(int)offsetof(NumTween_obj,_range),HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("_tweenFunction","\xe4","\xe4","\x67","\xb0"),
	HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"),
	HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NumTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NumTween_obj::__mClass,"__mClass");
};

#endif

hx::Class NumTween_obj::__mClass;

void NumTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.NumTween","\x33","\x70","\x9c","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NumTween_obj >;
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
} // end namespace tweens
} // end namespace misc
