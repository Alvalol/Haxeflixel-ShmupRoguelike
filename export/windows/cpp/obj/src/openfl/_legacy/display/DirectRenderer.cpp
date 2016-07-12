#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void DirectRenderer_obj::__construct(::String __o_type)
{
HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","new",0x7a9bf82e,"openfl._legacy.display.DirectRenderer.new","openfl/_legacy/display/DirectRenderer.hx",13,0x206ed89f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
::String type = __o_type.Default(HX_HCSTRING("DirectRenderer","\xac","\x31","\xba","\xef"));
{
	HX_STACK_LINE(15)
	Dynamic tmp = ::openfl::_legacy::display::DirectRenderer_obj::lime_direct_renderer_create();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(17)
	::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	Dynamic tmp3 = this->__stage_onAddedToStage_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	this->addEventListener(tmp2,tmp3,null(),null(),null());
	HX_STACK_LINE(18)
	::String tmp4 = ::openfl::_legacy::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	Dynamic tmp5 = this->__stage_onRemovedFromStage_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(18)
	this->addEventListener(tmp4,tmp5,null(),null(),null());
}
;
	return null();
}

//DirectRenderer_obj::~DirectRenderer_obj() { }

Dynamic DirectRenderer_obj::__CreateEmpty() { return  new DirectRenderer_obj; }
hx::ObjectPtr< DirectRenderer_obj > DirectRenderer_obj::__new(::String __o_type)
{  hx::ObjectPtr< DirectRenderer_obj > _result_ = new DirectRenderer_obj();
	_result_->__construct(__o_type);
	return _result_;}

Dynamic DirectRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectRenderer_obj > _result_ = new DirectRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DirectRenderer_obj::dispose( ){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","dispose",0x36bfa76d,"openfl._legacy.display.DirectRenderer.dispose","openfl/_legacy/display/DirectRenderer.hx",23,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::String tmp = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		Dynamic tmp1 = this->__stage_onAddedToStage_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		this->removeEventListener(tmp,tmp1,null());
		HX_STACK_LINE(26)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		Dynamic tmp3 = this->__stage_onRemovedFromStage_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		this->removeEventListener(tmp2,tmp3,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DirectRenderer_obj,dispose,(void))

HX_BEGIN_DEFAULT_FUNC(__default_render,DirectRenderer_obj)
Void run(::openfl::_legacy::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","render",0x775d9848,"openfl._legacy.display.DirectRenderer.render","openfl/_legacy/display/DirectRenderer.hx",31,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void DirectRenderer_obj::__onRender( Dynamic rect){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","__onRender",0x1cc162e7,"openfl._legacy.display.DirectRenderer.__onRender","openfl/_legacy/display/DirectRenderer.hx",38,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(40)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		if ((tmp1)){
			HX_STACK_LINE(40)
			::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new(rect->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			this->render(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,__onRender,(void))

Void DirectRenderer_obj::__stage_onAddedToStage( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","__stage_onAddedToStage",0x9b3079d5,"openfl._legacy.display.DirectRenderer.__stage_onAddedToStage","openfl/_legacy/display/DirectRenderer.hx",52,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(54)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		Dynamic tmp1 = this->__onRender_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		::openfl::_legacy::display::DirectRenderer_obj::lime_direct_renderer_set(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,__stage_onAddedToStage,(void))

Void DirectRenderer_obj::__stage_onRemovedFromStage( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","__stage_onRemovedFromStage",0xd2f719a6,"openfl._legacy.display.DirectRenderer.__stage_onRemovedFromStage","openfl/_legacy/display/DirectRenderer.hx",59,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(61)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		::openfl::_legacy::display::DirectRenderer_obj::lime_direct_renderer_set(tmp,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,__stage_onRemovedFromStage,(void))

Dynamic DirectRenderer_obj::lime_direct_renderer_create;

Dynamic DirectRenderer_obj::lime_direct_renderer_set;


DirectRenderer_obj::DirectRenderer_obj()
{
	render = new __default_render(this);
}

void DirectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectRenderer);
	HX_MARK_MEMBER_NAME(render,"render");
	::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(render,"render");
	::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DirectRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onRender") ) { return __onRender_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__stage_onAddedToStage") ) { return __stage_onAddedToStage_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__stage_onRemovedFromStage") ) { return __stage_onRemovedFromStage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DirectRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_set") ) { outValue = lime_direct_renderer_set; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_create") ) { outValue = lime_direct_renderer_create; return true;  }
	}
	return false;
}

Dynamic DirectRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DirectRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_set") ) { lime_direct_renderer_set=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_create") ) { lime_direct_renderer_create=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DirectRenderer_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &DirectRenderer_obj::lime_direct_renderer_create,HX_HCSTRING("lime_direct_renderer_create","\x8c","\x0c","\x94","\x60")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DirectRenderer_obj::lime_direct_renderer_set,HX_HCSTRING("lime_direct_renderer_set","\x12","\xdc","\x62","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("__onRender","\xf5","\xd4","\x0e","\x88"),
	HX_HCSTRING("__stage_onAddedToStage","\xe3","\xc8","\x67","\xce"),
	HX_HCSTRING("__stage_onRemovedFromStage","\xb4","\x07","\x1e","\x25"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_create,"lime_direct_renderer_create");
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_set,"lime_direct_renderer_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_create,"lime_direct_renderer_create");
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_set,"lime_direct_renderer_set");
};

#endif

hx::Class DirectRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_direct_renderer_create","\x8c","\x0c","\x94","\x60"),
	HX_HCSTRING("lime_direct_renderer_set","\x12","\xdc","\x62","\x8c"),
	::String(null()) };

void DirectRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.DirectRenderer","\x3c","\x09","\x1d","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DirectRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &DirectRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DirectRenderer_obj >;
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

void DirectRenderer_obj::__boot()
{
	lime_direct_renderer_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_direct_renderer_create","\xee","\xfd","\x69","\xe5"),(int)0);
	lime_direct_renderer_set= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_direct_renderer_set","\x70","\x19","\xb3","\xc9"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
