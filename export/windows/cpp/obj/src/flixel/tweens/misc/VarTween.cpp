#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void VarTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.VarTween","new",0x19cf09e4,"flixel.tweens.misc.VarTween.new","flixel/tweens/misc/VarTween.hx",9,0x836bddcb)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(13)
	this->_propertyInfos = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(27)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	super::__construct(tmp);
}
;
	return null();
}

//VarTween_obj::~VarTween_obj() { }

Dynamic VarTween_obj::__CreateEmpty() { return  new VarTween_obj; }
hx::ObjectPtr< VarTween_obj > VarTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< VarTween_obj > _result_ = new VarTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic VarTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VarTween_obj > _result_ = new VarTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void VarTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","destroy",0xef76787e,"flixel.tweens.misc.VarTween.destroy","flixel/tweens/misc/VarTween.hx",19,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->super::destroy();
		HX_STACK_LINE(21)
		this->_object = null();
		HX_STACK_LINE(22)
		this->_properties = null();
	}
return null();
}


::flixel::tweens::misc::VarTween VarTween_obj::tween( Dynamic object,Dynamic properties,Float duration){
	HX_STACK_FRAME("flixel.tweens.misc.VarTween","tween",0xf3504cef,"flixel.tweens.misc.VarTween.tween","flixel/tweens/misc/VarTween.hx",38,0x836bddcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(50)
	this->_object = object;
	HX_STACK_LINE(51)
	this->_properties = properties;
	HX_STACK_LINE(52)
	this->duration = duration;
	HX_STACK_LINE(53)
	this->start();
	HX_STACK_LINE(54)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(VarTween_obj,tween,return )

Void VarTween_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","update",0x50d41705,"flixel.tweens.misc.VarTween.update","flixel/tweens/misc/VarTween.hx",58,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(59)
		int tmp = this->executions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(59)
			tmp2 = this->loopDelay;
		}
		else{
			HX_STACK_LINE(59)
			tmp2 = this->startDelay;
		}
		HX_STACK_LINE(59)
		Float delay = tmp2;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(61)
		Float tmp3 = this->_secondsSinceStart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Float tmp4 = delay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		if ((tmp5)){
			HX_STACK_LINE(64)
			Float tmp6 = elapsed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			this->super::update(tmp6);
		}
		else{
			HX_STACK_LINE(68)
			int tmp6 = this->_propertyInfos->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			if ((tmp7)){
				HX_STACK_LINE(72)
				this->initializeVars();
			}
			HX_STACK_LINE(75)
			Float tmp8 = elapsed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(75)
			this->super::update(tmp8);
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(77)
				cpp::ArrayBase _g1 = this->_propertyInfos;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(77)
				while((true)){
					HX_STACK_LINE(77)
					bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(77)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(77)
					if ((tmp10)){
						HX_STACK_LINE(77)
						break;
					}
					HX_STACK_LINE(77)
					Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(77)
					Dynamic info = tmp11;		HX_STACK_VAR(info,"info");
					HX_STACK_LINE(77)
					++(_g);
					HX_STACK_LINE(79)
					Dynamic tmp12 = this->_object;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(79)
					::String tmp13 = info->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(79)
					Float tmp14 = info->__Field(HX_HCSTRING("startValue","\xaf","\x57","\xcf","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(79)
					Float tmp15 = info->__Field(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(79)
					Float tmp16 = this->scale;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(79)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(79)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(79)
					::Reflect_obj::setProperty(tmp12,tmp13,tmp18);
				}
			}
		}
	}
return null();
}


Void VarTween_obj::initializeVars( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","initializeVars",0x0a5a5e18,"flixel.tweens.misc.VarTween.initializeVars","flixel/tweens/misc/VarTween.hx",85,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::String p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(87)
		Array< ::String > fields;		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(89)
		Dynamic tmp = this->_properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = ::Reflect_obj::isObject(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(91)
			Dynamic tmp2 = this->_properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			fields = ::Reflect_obj::fields(tmp2);
		}
		else{
			HX_STACK_LINE(95)
			HX_STACK_DO_THROW(HX_HCSTRING("Unsupported properties container - use an object containing key/value pairs.","\x0b","\x19","\x89","\x5b"));
		}
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp2 = (_g < fields->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(98)
				if ((tmp3)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				::String tmp4 = fields->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(98)
				::String p1 = tmp4;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(98)
				++(_g);
				HX_STACK_LINE(100)
				Dynamic tmp5 = this->_object;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				::String tmp6 = p1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				Dynamic tmp7 = ::Reflect_obj::getProperty(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(100)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(100)
				if ((tmp8)){
					HX_STACK_LINE(102)
					::String tmp9 = (HX_HCSTRING("The Object does not have the property \"","\x3c","\x1e","\xc1","\xa6") + p1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(102)
					::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(102)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(105)
				Dynamic tmp9 = this->_object;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(105)
				::String tmp10 = p1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(105)
				Dynamic tmp11 = ::Reflect_obj::getProperty(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(105)
				Dynamic a = tmp11;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(107)
				Dynamic tmp12 = a;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(107)
				bool tmp13 = ::Math_obj::isNaN(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(107)
				if ((tmp13)){
					HX_STACK_LINE(109)
					::String tmp14 = (HX_HCSTRING("The property \"","\x06","\xe3","\x80","\xa4") + p1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(109)
					::String tmp15 = (tmp14 + HX_HCSTRING("\" is not numeric.","\x66","\x4f","\x2a","\xcf"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(109)
					HX_STACK_DO_THROW(tmp15);
				}
				HX_STACK_LINE(112)
				::String tmp14 = p1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(112)
				Float tmp15 = ((Float)(a));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(112)
				Dynamic tmp16 = this->_properties;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(112)
				::String tmp17 = p1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(112)
				Dynamic tmp18 = ::Reflect_obj::getProperty(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(112)
				Dynamic tmp19 = a;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(112)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				struct _Function_3_1{
					inline static Dynamic Block( Float &tmp20,Float &tmp15,::String &tmp14){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/misc/VarTween.hx",112,0x836bddcb)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp14,false);
							__result->Add(HX_HCSTRING("startValue","\xaf","\x57","\xcf","\x4d") , tmp15,false);
							__result->Add(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4") , tmp20,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(112)
				Dynamic tmp21 = _Function_3_1::Block(tmp20,tmp15,tmp14);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(112)
				this->_propertyInfos->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VarTween_obj,initializeVars,(void))


VarTween_obj::VarTween_obj()
{
}

void VarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VarTween);
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_properties,"_properties");
	HX_MARK_MEMBER_NAME(_propertyInfos,"_propertyInfos");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_properties,"_properties");
	HX_VISIT_MEMBER_NAME(_propertyInfos,"_propertyInfos");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VarTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { return _properties; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyInfos") ) { return _propertyInfos; }
		if (HX_FIELD_EQ(inName,"initializeVars") ) { return initializeVars_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VarTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { _properties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyInfos") ) { _propertyInfos=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"));
	outFields->push(HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33"));
	outFields->push(HX_HCSTRING("_propertyInfos","\xf1","\xeb","\xad","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_object),HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_properties),HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(VarTween_obj,_propertyInfos),HX_HCSTRING("_propertyInfos","\xf1","\xeb","\xad","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33"),
	HX_HCSTRING("_propertyInfos","\xf1","\xeb","\xad","\x46"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("initializeVars","\x1c","\x71","\xd8","\x51"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#endif

hx::Class VarTween_obj::__mClass;

void VarTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.VarTween","\xf2","\x87","\x4b","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VarTween_obj >;
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
