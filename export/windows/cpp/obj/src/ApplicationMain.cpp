#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageAlign
#include <openfl/_legacy/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#include <openfl/_legacy/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::display::Sprite ApplicationMain_obj::barA;

::openfl::_legacy::display::Sprite ApplicationMain_obj::barB;

::openfl::_legacy::display::Sprite ApplicationMain_obj::container;

int ApplicationMain_obj::forceHeight;

int ApplicationMain_obj::forceWidth;

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",27,0x0780ded5)
		HX_STACK_LINE(29)
		::openfl::_legacy::Lib_obj::setPackage(HX_HCSTRING("Alvarop","\xdd","\x26","\x3b","\xef"),HX_HCSTRING("untitled shmup","\x18","\x47","\x56","\xce"),HX_HCSTRING("com.example.myapp","\x84","\x30","\x57","\xc1"),HX_HCSTRING("0.0.1","\x35","\x3d","\xc8","\xc1"));
		HX_STACK_LINE(133)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		tmp = ::openfl::_legacy::Lib_obj::HARDWARE;
		HX_STACK_LINE(134)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		tmp1 = ::openfl::_legacy::Lib_obj::ALLOW_SHADERS;
		HX_STACK_LINE(133)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		tmp3 = (int)0;
		HX_STACK_LINE(133)
		int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		tmp5 = (int)0;
		HX_STACK_LINE(133)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		tmp7 = (int)0;
		HX_STACK_LINE(133)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(138)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		tmp9 = ::openfl::_legacy::Lib_obj::RESIZABLE;
		HX_STACK_LINE(133)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(139)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(139)
		tmp11 = (int)0;
		HX_STACK_LINE(133)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		tmp13 = ::openfl::_legacy::Lib_obj::VSYNC;
		HX_STACK_LINE(133)
		int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(141)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(141)
		tmp15 = (int)0;
		HX_STACK_LINE(133)
		int tmp16 = (int(tmp14) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(142)
		bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(142)
		int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(142)
		if ((tmp17)){
			HX_STACK_LINE(142)
			tmp18 = ::openfl::_legacy::Lib_obj::HW_AA_HIRES;
		}
		else{
			HX_STACK_LINE(142)
			tmp18 = (int)0;
		}
		HX_STACK_LINE(133)
		int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(143)
		bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(143)
		int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(143)
		if ((tmp20)){
			HX_STACK_LINE(143)
			tmp21 = ::openfl::_legacy::Lib_obj::HW_AA;
		}
		else{
			HX_STACK_LINE(143)
			tmp21 = (int)0;
		}
		HX_STACK_LINE(133)
		int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ApplicationMain.hx",52,0x0780ded5)
			{
				HX_STACK_LINE(54)
				::openfl::_legacy::display::MovieClip tmp23 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(54)
				::openfl::_legacy::display::Stage tmp24 = tmp23->get_stage();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(54)
				tmp24->set_align(::openfl::_legacy::display::StageAlign_obj::TOP_LEFT);
				HX_STACK_LINE(55)
				::openfl::_legacy::display::MovieClip tmp25 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(55)
				::openfl::_legacy::display::Stage tmp26 = tmp25->get_stage();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(55)
				tmp26->set_scaleMode(::openfl::_legacy::display::StageScaleMode_obj::NO_SCALE);
				HX_STACK_LINE(56)
				::openfl::_legacy::display::LoaderInfo tmp27 = ::openfl::_legacy::display::LoaderInfo_obj::create(null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(56)
				::openfl::_legacy::display::MovieClip tmp28 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(56)
				tmp28->loaderInfo = tmp27;
				HX_STACK_LINE(78)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(80)
					::String tmp29 = ::Sys_obj::executablePath();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(80)
					::String tmp30 = ::haxe::io::Path_obj::directory(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(80)
					::String currentPath = tmp30;		HX_STACK_VAR(currentPath,"currentPath");
					HX_STACK_LINE(81)
					::String tmp31 = currentPath;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(81)
					::Sys_obj::setCwd(tmp31);
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
						}
					}
				}
				HX_STACK_LINE(98)
				::openfl::_legacy::Assets_obj::initialize();
				HX_STACK_LINE(100)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(102)
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(102)
					while((true)){
						HX_STACK_LINE(102)
						bool tmp29 = (_g < _g1->length);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(102)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(102)
						if ((tmp30)){
							HX_STACK_LINE(102)
							break;
						}
						HX_STACK_LINE(102)
						::String tmp31 = _g1->__get(_g);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(102)
						::String methodName = tmp31;		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(102)
						++(_g);
						HX_STACK_LINE(104)
						bool tmp32 = (methodName == HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(104)
						if ((tmp32)){
							HX_STACK_LINE(106)
							hasMain = true;
							HX_STACK_LINE(107)
							break;
						}
					}
				}
				HX_STACK_LINE(113)
				bool tmp29 = hasMain;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(113)
				if ((tmp29)){
					HX_STACK_LINE(115)
					Dynamic tmp30 = ::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(115)
					::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),tmp30,cpp::ArrayBase_obj::__new());
				}
				else{
					HX_STACK_LINE(119)
					::DocumentClass tmp30 = ::Type_obj::createInstance(hx::ClassOf< ::DocumentClass >(),cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(119)
					::DocumentClass instance = tmp30;		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(121)
					::DocumentClass tmp31 = instance;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(121)
					bool tmp32 = ::Std_obj::is(tmp31,hx::ClassOf< ::openfl::_legacy::display::DisplayObject >());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(121)
					if ((tmp32)){
						HX_STACK_LINE(123)
						::openfl::_legacy::display::MovieClip tmp33 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(123)
						::openfl::_legacy::display::DisplayObject tmp34 = ((::openfl::_legacy::display::DisplayObject)(instance));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(123)
						tmp33->addChild(tmp34);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(52)
		::openfl::_legacy::Lib_obj::create( Dynamic(new _Function_1_1()),(int)640,(int)576,(int)60,(int)0,tmp22,HX_HCSTRING("untitled shmup","\x18","\x47","\x56","\xce"),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { outValue = barA; return true;  }
		if (HX_FIELD_EQ(inName,"barB") ) { outValue = barB; return true;  }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { outValue = container; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { outValue = forceWidth; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { outValue = forceHeight; return true;  }
	}
	return false;
}

bool ApplicationMain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { barA=ioValue.Cast< ::openfl::_legacy::display::Sprite >(); return true; }
		if (HX_FIELD_EQ(inName,"barB") ) { barB=ioValue.Cast< ::openfl::_legacy::display::Sprite >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=ioValue.Cast< ::openfl::_legacy::display::Sprite >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { forceWidth=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { forceHeight=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &ApplicationMain_obj::barA,HX_HCSTRING("barA","\x0e","\xe7","\x10","\x41")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &ApplicationMain_obj::barB,HX_HCSTRING("barB","\x0f","\xe7","\x10","\x41")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &ApplicationMain_obj::container,HX_HCSTRING("container","\x41","\x75","\x73","\xbf")},
	{hx::fsInt,(void *) &ApplicationMain_obj::forceHeight,HX_HCSTRING("forceHeight","\x32","\xf0","\xc3","\x65")},
	{hx::fsInt,(void *) &ApplicationMain_obj::forceWidth,HX_HCSTRING("forceWidth","\x1b","\xa0","\x37","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#endif

hx::Class ApplicationMain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("barA","\x0e","\xe7","\x10","\x41"),
	HX_HCSTRING("barB","\x0f","\xe7","\x10","\x41"),
	HX_HCSTRING("container","\x41","\x75","\x73","\xbf"),
	HX_HCSTRING("forceHeight","\x32","\xf0","\xc3","\x65"),
	HX_HCSTRING("forceWidth","\x1b","\xa0","\x37","\x61"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationMain_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplicationMain_obj >;
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

