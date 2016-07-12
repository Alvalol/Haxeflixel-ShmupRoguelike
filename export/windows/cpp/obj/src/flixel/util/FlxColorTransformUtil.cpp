#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
namespace flixel{
namespace util{

Void FlxColorTransformUtil_obj::__construct()
{
	return null();
}

//FlxColorTransformUtil_obj::~FlxColorTransformUtil_obj() { }

Dynamic FlxColorTransformUtil_obj::__CreateEmpty() { return  new FlxColorTransformUtil_obj; }
hx::ObjectPtr< FlxColorTransformUtil_obj > FlxColorTransformUtil_obj::__new()
{  hx::ObjectPtr< FlxColorTransformUtil_obj > _result_ = new FlxColorTransformUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxColorTransformUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColorTransformUtil_obj > _result_ = new FlxColorTransformUtil_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::geom::ColorTransform FlxColorTransformUtil_obj::setMultipliers( ::openfl::_legacy::geom::ColorTransform transform,Float red,Float green,Float blue,Float alpha){
	HX_STACK_FRAME("flixel.util.FlxColorTransformUtil","setMultipliers",0x2ef980db,"flixel.util.FlxColorTransformUtil.setMultipliers","flixel/util/FlxColorTransformUtil.hx",9,0xf5538e7b)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_LINE(10)
	transform->redMultiplier = red;
	HX_STACK_LINE(11)
	transform->greenMultiplier = green;
	HX_STACK_LINE(12)
	transform->blueMultiplier = blue;
	HX_STACK_LINE(13)
	transform->alphaMultiplier = alpha;
	HX_STACK_LINE(15)
	::openfl::_legacy::geom::ColorTransform tmp = transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorTransformUtil_obj,setMultipliers,return )

::openfl::_legacy::geom::ColorTransform FlxColorTransformUtil_obj::setOffsets( ::openfl::_legacy::geom::ColorTransform transform,int red,int green,int blue,int alpha){
	HX_STACK_FRAME("flixel.util.FlxColorTransformUtil","setOffsets",0xbbc06809,"flixel.util.FlxColorTransformUtil.setOffsets","flixel/util/FlxColorTransformUtil.hx",20,0xf5538e7b)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_LINE(21)
	transform->redOffset = red;
	HX_STACK_LINE(22)
	transform->greenOffset = green;
	HX_STACK_LINE(23)
	transform->blueOffset = blue;
	HX_STACK_LINE(24)
	transform->alphaOffset = alpha;
	HX_STACK_LINE(26)
	::openfl::_legacy::geom::ColorTransform tmp = transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorTransformUtil_obj,setOffsets,return )

bool FlxColorTransformUtil_obj::hasRGBMultipliers( ::openfl::_legacy::geom::ColorTransform transform){
	HX_STACK_FRAME("flixel.util.FlxColorTransformUtil","hasRGBMultipliers",0xd2859e14,"flixel.util.FlxColorTransformUtil.hasRGBMultipliers","flixel/util/FlxColorTransformUtil.hx",33,0xf5538e7b)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(34)
	bool tmp = (transform->redMultiplier != (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	if ((tmp2)){
		HX_STACK_LINE(34)
		tmp3 = (transform->greenMultiplier != (int)1);
	}
	else{
		HX_STACK_LINE(34)
		tmp3 = true;
	}
	HX_STACK_LINE(34)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	if ((tmp4)){
		HX_STACK_LINE(34)
		tmp5 = (transform->blueMultiplier != (int)1);
	}
	else{
		HX_STACK_LINE(34)
		tmp5 = true;
	}
	HX_STACK_LINE(34)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBMultipliers,return )

bool FlxColorTransformUtil_obj::hasRGBAMultipliers( ::openfl::_legacy::geom::ColorTransform transform){
	HX_STACK_FRAME("flixel.util.FlxColorTransformUtil","hasRGBAMultipliers",0xfe0e906f,"flixel.util.FlxColorTransformUtil.hasRGBAMultipliers","flixel/util/FlxColorTransformUtil.hx",41,0xf5538e7b)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(42)
	::openfl::_legacy::geom::ColorTransform tmp = transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::openfl::_legacy::geom::ColorTransform tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	bool tmp2 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	if ((tmp3)){
		HX_STACK_LINE(42)
		tmp4 = (transform->alphaMultiplier != (int)1);
	}
	else{
		HX_STACK_LINE(42)
		tmp4 = true;
	}
	HX_STACK_LINE(42)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBAMultipliers,return )

bool FlxColorTransformUtil_obj::hasRGBOffsets( ::openfl::_legacy::geom::ColorTransform transform){
	HX_STACK_FRAME("flixel.util.FlxColorTransformUtil","hasRGBOffsets",0x81d534c2,"flixel.util.FlxColorTransformUtil.hasRGBOffsets","flixel/util/FlxColorTransformUtil.hx",49,0xf5538e7b)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(50)
	bool tmp = (transform->redOffset != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	if ((tmp2)){
		HX_STACK_LINE(50)
		tmp3 = (transform->greenOffset != (int)0);
	}
	else{
		HX_STACK_LINE(50)
		tmp3 = true;
	}
	HX_STACK_LINE(50)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	if ((tmp4)){
		HX_STACK_LINE(50)
		tmp5 = (transform->blueOffset != (int)0);
	}
	else{
		HX_STACK_LINE(50)
		tmp5 = true;
	}
	HX_STACK_LINE(50)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBOffsets,return )

bool FlxColorTransformUtil_obj::hasRGBAOffsets( ::openfl::_legacy::geom::ColorTransform transform){
	HX_STACK_FRAME("flixel.util.FlxColorTransformUtil","hasRGBAOffsets",0xc8891d9d,"flixel.util.FlxColorTransformUtil.hasRGBAOffsets","flixel/util/FlxColorTransformUtil.hx",57,0xf5538e7b)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(58)
	::openfl::_legacy::geom::ColorTransform tmp = transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::openfl::_legacy::geom::ColorTransform tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	bool tmp2 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	if ((tmp3)){
		HX_STACK_LINE(58)
		tmp4 = (transform->alphaOffset != (int)0);
	}
	else{
		HX_STACK_LINE(58)
		tmp4 = true;
	}
	HX_STACK_LINE(58)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBAOffsets,return )


FlxColorTransformUtil_obj::FlxColorTransformUtil_obj()
{
}

bool FlxColorTransformUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"setOffsets") ) { outValue = setOffsets_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasRGBOffsets") ) { outValue = hasRGBOffsets_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setMultipliers") ) { outValue = setMultipliers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasRGBAOffsets") ) { outValue = hasRGBAOffsets_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasRGBMultipliers") ) { outValue = hasRGBMultipliers_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasRGBAMultipliers") ) { outValue = hasRGBAMultipliers_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColorTransformUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColorTransformUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxColorTransformUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("setMultipliers","\x50","\xe5","\x6f","\x9c"),
	HX_HCSTRING("setOffsets","\xfe","\x2d","\x44","\x2a"),
	HX_HCSTRING("hasRGBMultipliers","\xbf","\xb0","\x7b","\x19"),
	HX_HCSTRING("hasRGBAMultipliers","\x64","\xd3","\x68","\xce"),
	HX_HCSTRING("hasRGBOffsets","\xed","\xd5","\x2b","\xa0"),
	HX_HCSTRING("hasRGBAOffsets","\x12","\x82","\xff","\x35"),
	::String(null()) };

void FlxColorTransformUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxColorTransformUtil","\x83","\xa4","\xea","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxColorTransformUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxColorTransformUtil_obj >;
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
} // end namespace util
