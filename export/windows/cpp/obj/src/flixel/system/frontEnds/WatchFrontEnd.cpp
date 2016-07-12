#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void WatchFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","new",0xbd21d019,"flixel.system.frontEnds.WatchFrontEnd.new","flixel/system/frontEnds/WatchFrontEnd.hx",88,0xd7ade198)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//WatchFrontEnd_obj::~WatchFrontEnd_obj() { }

Dynamic WatchFrontEnd_obj::__CreateEmpty() { return  new WatchFrontEnd_obj; }
hx::ObjectPtr< WatchFrontEnd_obj > WatchFrontEnd_obj::__new()
{  hx::ObjectPtr< WatchFrontEnd_obj > _result_ = new WatchFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic WatchFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchFrontEnd_obj > _result_ = new WatchFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void WatchFrontEnd_obj::add( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","add",0xbd17f1da,"flixel.system.frontEnds.WatchFrontEnd.add","flixel/system/frontEnds/WatchFrontEnd.hx",16,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
		HX_STACK_ARG(DisplayName,"DisplayName")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(WatchFrontEnd_obj,add,(void))

Void WatchFrontEnd_obj::remove( Dynamic AnyObject,::String VariableName){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","remove",0x8d8c762b,"flixel.system.frontEnds.WatchFrontEnd.remove","flixel/system/frontEnds/WatchFrontEnd.hx",30,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,remove,(void))

Void WatchFrontEnd_obj::addQuick( ::String Name,Dynamic NewValue){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addQuick",0x8c660eb3,"flixel.system.frontEnds.WatchFrontEnd.addQuick","flixel/system/frontEnds/WatchFrontEnd.hx",45,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(NewValue,"NewValue")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addQuick,(void))

Void WatchFrontEnd_obj::removeQuick( ::String Name){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeQuick",0x15fb44c2,"flixel.system.frontEnds.WatchFrontEnd.removeQuick","flixel/system/frontEnds/WatchFrontEnd.hx",57,0xd7ade198)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeQuick,(void))

Void WatchFrontEnd_obj::addMouse( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","addMouse",0x3add9deb,"flixel.system.frontEnds.WatchFrontEnd.addMouse","flixel/system/frontEnds/WatchFrontEnd.hx",68,0xd7ade198)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,addMouse,(void))

Void WatchFrontEnd_obj::removeMouse( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.WatchFrontEnd","removeMouse",0xc472d3fa,"flixel.system.frontEnds.WatchFrontEnd.removeMouse","flixel/system/frontEnds/WatchFrontEnd.hx",78,0xd7ade198)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,removeMouse,(void))


WatchFrontEnd_obj::WatchFrontEnd_obj()
{
}

Dynamic WatchFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addQuick") ) { return addQuick_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouse") ) { return addMouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeQuick") ) { return removeQuick_dyn(); }
		if (HX_FIELD_EQ(inName,"removeMouse") ) { return removeMouse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("addQuick","\x0c","\xad","\x4a","\xd7"),
	HX_HCSTRING("removeQuick","\x09","\x64","\x21","\x5c"),
	HX_HCSTRING("addMouse","\x44","\x3c","\xc2","\x85"),
	HX_HCSTRING("removeMouse","\x41","\xf3","\x98","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class WatchFrontEnd_obj::__mClass;

void WatchFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.WatchFrontEnd","\xa7","\xcf","\xe7","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchFrontEnd_obj >;
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
} // end namespace frontEnds
