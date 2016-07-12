#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace util{

Void FlxDestroyUtil_obj::__construct()
{
	return null();
}

//FlxDestroyUtil_obj::~FlxDestroyUtil_obj() { }

Dynamic FlxDestroyUtil_obj::__CreateEmpty() { return  new FlxDestroyUtil_obj; }
hx::ObjectPtr< FlxDestroyUtil_obj > FlxDestroyUtil_obj::__new()
{  hx::ObjectPtr< FlxDestroyUtil_obj > _result_ = new FlxDestroyUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxDestroyUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDestroyUtil_obj > _result_ = new FlxDestroyUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxDestroyUtil_obj::destroy( ::flixel::util::IFlxDestroyable object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroy",0xd7e4dd50,"flixel.util.FlxDestroyUtil.destroy","flixel/util/FlxDestroyUtil.hx",17,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(18)
	bool tmp = (object != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	if ((tmp)){
		HX_STACK_LINE(20)
		object->destroy();
	}
	HX_STACK_LINE(22)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroy,return )

cpp::ArrayBase FlxDestroyUtil_obj::destroyArray( cpp::ArrayBase array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroyArray",0xa1a3be29,"flixel.util.FlxDestroyUtil.destroyArray","flixel/util/FlxDestroyUtil.hx",32,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(33)
	bool tmp = (array != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	if ((tmp)){
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while((true)){
				HX_STACK_LINE(35)
				bool tmp1 = (_g < array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(35)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				if ((tmp2)){
					HX_STACK_LINE(35)
					break;
				}
				HX_STACK_LINE(35)
				Dynamic tmp3 = array->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				Dynamic e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(35)
				++(_g);
				HX_STACK_LINE(36)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);
			}
		}
		HX_STACK_LINE(37)
		int tmp1 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp1);
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroyArray,return )

Dynamic FlxDestroyUtil_obj::put( ::flixel::util::IFlxPooled object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","put",0xdd93b025,"flixel.util.FlxDestroyUtil.put","flixel/util/FlxDestroyUtil.hx",49,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(50)
	bool tmp = (object != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(52)
		object->put();
	}
	HX_STACK_LINE(54)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,put,return )

cpp::ArrayBase FlxDestroyUtil_obj::putArray( cpp::ArrayBase array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","putArray",0x60ff8734,"flixel.util.FlxDestroyUtil.putArray","flixel/util/FlxDestroyUtil.hx",65,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(66)
	bool tmp = (array != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	if ((tmp)){
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp1 = (_g < array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(68)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(68)
				if ((tmp2)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				Dynamic tmp3 = array->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				Dynamic e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(68)
				++(_g);
				HX_STACK_LINE(69)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				::flixel::util::FlxDestroyUtil_obj::put(tmp4);
			}
		}
		HX_STACK_LINE(70)
		int tmp1 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp1);
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,putArray,return )

::openfl::_legacy::display::BitmapData FlxDestroyUtil_obj::dispose( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","dispose",0x6eab30f5,"flixel.util.FlxDestroyUtil.dispose","flixel/util/FlxDestroyUtil.hx",83,0xaf22421a)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(84)
	bool tmp = (bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(86)
		bitmapData->dispose();
	}
	HX_STACK_LINE(88)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,dispose,return )

::openfl::_legacy::display::BitmapData FlxDestroyUtil_obj::disposeIfNotEqual( ::openfl::_legacy::display::BitmapData bitmapData,Float width,Float height){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","disposeIfNotEqual",0x591337f3,"flixel.util.FlxDestroyUtil.disposeIfNotEqual","flixel/util/FlxDestroyUtil.hx",95,0xaf22421a)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(96)
	bool tmp = (bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	if ((tmp)){
		HX_STACK_LINE(96)
		int tmp2 = bitmapData->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		Float tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		if ((tmp10)){
			HX_STACK_LINE(96)
			int tmp11 = bitmapData->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(96)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(96)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(96)
			Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(96)
			tmp1 = (tmp13 != tmp14);
		}
		else{
			HX_STACK_LINE(96)
			tmp1 = true;
		}
	}
	else{
		HX_STACK_LINE(96)
		tmp1 = false;
	}
	HX_STACK_LINE(96)
	if ((tmp1)){
		HX_STACK_LINE(98)
		bitmapData->dispose();
		HX_STACK_LINE(99)
		return null();
	}
	else{
		HX_STACK_LINE(101)
		bool tmp2 = (bitmapData != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		if ((tmp2)){
			HX_STACK_LINE(103)
			::openfl::_legacy::display::BitmapData tmp3 = bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			return tmp3;
		}
	}
	HX_STACK_LINE(106)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDestroyUtil_obj,disposeIfNotEqual,return )

Dynamic FlxDestroyUtil_obj::removeChild( ::openfl::_legacy::display::DisplayObjectContainer parent,Dynamic child){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","removeChild",0x08da1a0e,"flixel.util.FlxDestroyUtil.removeChild","flixel/util/FlxDestroyUtil.hx",110,0xaf22421a)
	HX_STACK_ARG(parent,"parent")
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(111)
	bool tmp = (parent != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	if ((tmp1)){
		HX_STACK_LINE(111)
		tmp2 = (child != null());
	}
	else{
		HX_STACK_LINE(111)
		tmp2 = false;
	}
	HX_STACK_LINE(111)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	if ((tmp2)){
		HX_STACK_LINE(111)
		Dynamic tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		tmp3 = parent->contains(tmp5);
	}
	else{
		HX_STACK_LINE(111)
		tmp3 = false;
	}
	HX_STACK_LINE(111)
	if ((tmp3)){
		HX_STACK_LINE(113)
		Dynamic tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		parent->removeChild(tmp4);
	}
	HX_STACK_LINE(115)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxDestroyUtil_obj,removeChild,return )


FlxDestroyUtil_obj::FlxDestroyUtil_obj()
{
}

bool FlxDestroyUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { outValue = put_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putArray") ) { outValue = putArray_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { outValue = removeChild_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyArray") ) { outValue = destroyArray_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disposeIfNotEqual") ) { outValue = disposeIfNotEqual_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxDestroyUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("destroyArray","\x3f","\x66","\x8f","\x17"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putArray","\x4a","\xec","\x83","\x21"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("disposeIfNotEqual","\x1d","\x80","\xc0","\x4f"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	::String(null()) };

void FlxDestroyUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxDestroyUtil","\xc4","\xca","\x9f","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDestroyUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxDestroyUtil_obj >;
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
