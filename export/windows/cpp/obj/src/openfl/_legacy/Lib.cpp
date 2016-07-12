#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
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
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_ManagedStage
#include <openfl/_legacy/display/ManagedStage.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace openfl{
namespace _legacy{

Void Lib_obj::__construct()
{
	return null();
}

//Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

int Lib_obj::FULLSCREEN;

int Lib_obj::BORDERLESS;

int Lib_obj::RESIZABLE;

int Lib_obj::HARDWARE;

int Lib_obj::VSYNC;

int Lib_obj::HW_AA;

int Lib_obj::HW_AA_HIRES;

int Lib_obj::ALLOW_SHADERS;

int Lib_obj::REQUIRE_SHADERS;

int Lib_obj::DEPTH_BUFFER;

int Lib_obj::STENCIL_BUFFER;

::String Lib_obj::company;

::openfl::_legacy::display::MovieClip Lib_obj::current;

::String Lib_obj::file;

int Lib_obj::initHeight;

int Lib_obj::initWidth;

::String Lib_obj::packageName;

bool Lib_obj::silentRecreate;

::openfl::_legacy::display::Stage Lib_obj::stage;

::String Lib_obj::version;

::openfl::_legacy::display::MovieClip Lib_obj::__current;

bool Lib_obj::__isInit;

bool Lib_obj::__loadedNekoAPI;

Dynamic Lib_obj::__mainFrame;

::haxe::ds::StringMap Lib_obj::__moduleNames;

::haxe::ds::StringMap Lib_obj::__sentWarnings;

::openfl::_legacy::display::Stage Lib_obj::__stage;

Dynamic Lib_obj::__uncaughtExceptionHandler;

Dynamic Lib_obj::as( Dynamic v,::hx::Class c){
	HX_STACK_FRAME("openfl._legacy.Lib","as",0xb50de57f,"openfl._legacy.Lib.as","openfl/_legacy/Lib.hx",60,0x739f021f)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(62)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

::openfl::_legacy::display::MovieClip Lib_obj::attach( ::String name){
	HX_STACK_FRAME("openfl._legacy.Lib","attach",0x82a556d2,"openfl._legacy.Lib.attach","openfl/_legacy/Lib.hx",67,0x739f021f)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(69)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::display::MovieClip_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

Void Lib_obj::close( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","close",0x05629d4b,"openfl._legacy.Lib.close","openfl/_legacy/Lib.hx",74,0x739f021f)
		HX_STACK_LINE(76)
		::openfl::_legacy::display::Stage_obj::__exiting = true;
		HX_STACK_LINE(77)
		Dynamic tmp = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_close","\xac","\x28","\xf4","\xfb"),(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		Dynamic close = tmp;		HX_STACK_VAR(close,"close");
		HX_STACK_LINE(78)
		close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,close,(void))

Void Lib_obj::create( Dynamic onLoaded,int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< int >  __o_color,hx::Null< int >  __o_flags,::String __o_title,::openfl::_legacy::display::BitmapData icon,::hx::Class stageClass){
Float frameRate = __o_frameRate.Default(((Float)60.0));
int color = __o_color.Default(16777215);
int flags = __o_flags.Default(15);
::String title = __o_title.Default(HX_HCSTRING("OpenFL","\xb0","\xbb","\x28","\x56"));
	HX_STACK_FRAME("openfl._legacy.Lib","create",0x1ea4c209,"openfl._legacy.Lib.create","openfl/_legacy/Lib.hx",83,0x739f021f)
	HX_STACK_ARG(onLoaded,"onLoaded")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(frameRate,"frameRate")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(icon,"icon")
	HX_STACK_ARG(stageClass,"stageClass")
{
		HX_STACK_LINE(85)
		bool tmp = ::openfl::_legacy::Lib_obj::__isInit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		if ((tmp)){
			HX_STACK_LINE(87)
			bool tmp1 = ::openfl::_legacy::Lib_obj::silentRecreate;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			if ((tmp1)){
				HX_STACK_LINE(89)
				onLoaded().Cast< Void >();
				HX_STACK_LINE(90)
				return null();
			}
			HX_STACK_LINE(94)
			HX_STACK_DO_THROW(HX_HCSTRING("flash.Lib.create called multiple times. This function is automatically called by the project code.","\xc6","\x01","\xa5","\x55"));
		}
		HX_STACK_LINE(98)
		::openfl::_legacy::Lib_obj::__isInit = true;
		HX_STACK_LINE(99)
		::openfl::_legacy::Lib_obj::initWidth = width;
		HX_STACK_LINE(100)
		::openfl::_legacy::Lib_obj::initHeight = height;
		HX_STACK_LINE(102)
		Dynamic tmp1 = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_create_main_frame","\xfe","\x26","\xdb","\x30"),(int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		Dynamic create_main_frame = tmp1;		HX_STACK_VAR(create_main_frame,"create_main_frame");
		HX_STACK_LINE(130)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		int tmp4 = flags;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		::String tmp5 = title;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		bool tmp6 = (icon == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		if ((tmp6)){
			HX_STACK_LINE(130)
			tmp7 = null();
		}
		else{
			HX_STACK_LINE(130)
			tmp7 = icon->__handle;
		}

		HX_BEGIN_LOCAL_FUNC_S6(hx::LocalFunc,_Function_1_1,int,width,Float,frameRate,::hx::Class,stageClass,int,height,Dynamic,onLoaded,int,color)
		int __ArgCount() const { return 1; }
		Void run(Dynamic frameHandle){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_legacy/Lib.hx",106,0x739f021f)
			HX_STACK_ARG(frameHandle,"frameHandle")
			{
				HX_STACK_LINE(106)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(108)
					::openfl::_legacy::Lib_obj::__mainFrame = frameHandle;
					HX_STACK_LINE(109)
					Dynamic tmp8 = ::openfl::_legacy::Lib_obj::__mainFrame;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(109)
					Dynamic tmp9 = ::openfl::_legacy::Lib_obj::lime_get_frame_stage(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					Dynamic stage_handle = tmp9;		HX_STACK_VAR(stage_handle,"stage_handle");
					HX_STACK_LINE(111)
					bool tmp10 = (stageClass == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(111)
					::openfl::_legacy::display::Stage tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(111)
					if ((tmp10)){
						HX_STACK_LINE(111)
						tmp11 = ::openfl::_legacy::display::Stage_obj::__new(stage_handle,width,height);
					}
					else{
						HX_STACK_LINE(111)
						::hx::Class tmp12 = stageClass;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(111)
						tmp11 = ::Type_obj::createInstance(tmp12,cpp::ArrayBase_obj::__new().Add(stage_handle).Add(width).Add(height));
					}
					HX_STACK_LINE(111)
					::openfl::_legacy::Lib_obj::__stage = tmp11;
					HX_STACK_LINE(112)
					::openfl::_legacy::display::Stage tmp12 = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(112)
					Float tmp13 = frameRate;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(112)
					tmp12->set_frameRate(tmp13);
					HX_STACK_LINE(113)
					::openfl::_legacy::display::Stage tmp14 = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(113)
					int tmp15 = color;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(113)
					tmp14->set_opaqueBackground(tmp15);
					HX_STACK_LINE(114)
					Dynamic tmp16 = ::openfl::_legacy::Lib_obj::close_dyn();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(114)
					::openfl::_legacy::display::Stage tmp17 = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(114)
					tmp17->onQuit = tmp16;
					HX_STACK_LINE(116)
					::openfl::_legacy::display::MovieClip tmp18 = ::openfl::_legacy::Lib_obj::__current;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(116)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(116)
					if ((tmp19)){
						HX_STACK_LINE(118)
						::openfl::_legacy::display::Stage tmp20 = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(118)
						::openfl::_legacy::display::MovieClip tmp21 = ::openfl::_legacy::Lib_obj::__current;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(118)
						tmp20->addChild(tmp21);
					}
					HX_STACK_LINE(122)
					onLoaded().Cast< Void >();
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic error = __e;{
							HX_STACK_LINE(126)
							Dynamic tmp8 = error;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(126)
							::openfl::_legacy::Lib_obj::rethrow(tmp8);
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(104)
		create_main_frame( Dynamic(new _Function_1_1(width,frameRate,stageClass,height,onLoaded,color)),tmp2,tmp3,tmp4,tmp5,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Lib_obj,create,(void))

::openfl::_legacy::display::ManagedStage Lib_obj::createManagedStage( int width,int height,hx::Null< int >  __o_flags){
int flags = __o_flags.Default(0);
	HX_STACK_FRAME("openfl._legacy.Lib","createManagedStage",0x7e03c788,"openfl._legacy.Lib.createManagedStage","openfl/_legacy/Lib.hx",135,0x739f021f)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(flags,"flags")
{
		HX_STACK_LINE(137)
		::openfl::_legacy::Lib_obj::initWidth = width;
		HX_STACK_LINE(138)
		::openfl::_legacy::Lib_obj::initHeight = height;
		HX_STACK_LINE(140)
		::openfl::_legacy::display::ManagedStage tmp = ::openfl::_legacy::display::ManagedStage_obj::__new(width,height,flags);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		::openfl::_legacy::display::ManagedStage result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(141)
		::openfl::_legacy::Lib_obj::__stage = result;
		HX_STACK_LINE(143)
		::openfl::_legacy::display::ManagedStage tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,createManagedStage,return )

::String Lib_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("openfl._legacy.Lib","findHaxeLib",0x9617a559,"openfl._legacy.Lib.findHaxeLib","openfl/_legacy/Lib.hx",162,0x739f021f)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(164)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(166)
		::sys::io::Process tmp = ::sys::io::Process_obj::__new(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(library));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		::sys::io::Process proc = tmp;		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(168)
		bool tmp1 = (proc != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		if ((tmp1)){
			HX_STACK_LINE(170)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(172)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(174)
				while((true)){
					HX_STACK_LINE(176)
					::String tmp2 = stream->readLine();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(176)
					::String s = tmp2;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(178)
					::String tmp3 = s.substr((int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(178)
					bool tmp4 = (tmp3 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(178)
					if ((tmp4)){
						HX_STACK_LINE(180)
						stream->close();
						HX_STACK_LINE(181)
						proc->close();
						HX_STACK_LINE(182)
						::String tmp5 = (HX_HCSTRING("Found haxelib ","\x1f","\xa6","\x4d","\xc9") + s);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(182)
						::openfl::_legacy::Lib_obj::loaderTrace(tmp5);
						HX_STACK_LINE(183)
						::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(183)
						return tmp6;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(191)
			stream->close();
			HX_STACK_LINE(192)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(198)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,findHaxeLib,return )

Dynamic Lib_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_FRAME("openfl._legacy.Lib","load",0x87b427f3,"openfl._legacy.Lib.load","openfl/_legacy/Lib.hx",203,0x739f021f)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
{
		HX_STACK_LINE(206)
		bool tmp = (library == HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		if ((tmp)){
			HX_STACK_LINE(206)
			library = HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87");
		}
		HX_STACK_LINE(213)
		::haxe::ds::StringMap tmp1 = ::openfl::_legacy::Lib_obj::__moduleNames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		if ((tmp2)){
			HX_STACK_LINE(213)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(213)
			::openfl::_legacy::Lib_obj::__moduleNames = tmp3;
		}
		HX_STACK_LINE(214)
		::haxe::ds::StringMap tmp3 = ::openfl::_legacy::Lib_obj::__moduleNames;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		::String tmp4 = library;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(214)
		bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(214)
		if ((tmp5)){
			HX_STACK_LINE(217)
			::haxe::ds::StringMap tmp6 = ::openfl::_legacy::Lib_obj::__moduleNames;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			::String tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			::String tmp10 = method;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			int tmp11 = args;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			Dynamic tmp12 = ::cpp::Lib_obj::load(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(217)
			return tmp12;
		}
		HX_STACK_LINE(234)
		::haxe::ds::StringMap tmp6 = ::openfl::_legacy::Lib_obj::__moduleNames;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		::String tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(245)
		::String tmp9 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(245)
		::String tmp10 = library;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(245)
		::String tmp11 = method;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(245)
		int tmp12 = args;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(245)
		Dynamic tmp13 = ::openfl::_legacy::Lib_obj::tryLoad(tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(245)
		Dynamic result = tmp13;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(248)
		bool tmp14 = (result == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(248)
		if ((tmp14)){
			HX_STACK_LINE(250)
			::String tmp15 = (HX_HCSTRING(".\\","\x6e","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(250)
			::String tmp16 = library;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(250)
			::String tmp17 = method;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(250)
			int tmp18 = args;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(250)
			Dynamic tmp19 = ::openfl::_legacy::Lib_obj::tryLoad(tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(250)
			result = tmp19;
		}
		HX_STACK_LINE(254)
		bool tmp15 = (result == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(254)
		if ((tmp15)){
			HX_STACK_LINE(256)
			::String tmp16 = library;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(256)
			::String tmp17 = library;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(256)
			::String tmp18 = method;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(256)
			int tmp19 = args;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(256)
			Dynamic tmp20 = ::openfl::_legacy::Lib_obj::tryLoad(tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(256)
			result = tmp20;
		}
		HX_STACK_LINE(260)
		bool tmp16 = (result == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(260)
		if ((tmp16)){
			HX_STACK_LINE(262)
			::String tmp17 = ::openfl::_legacy::Lib_obj::sysName();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(262)
			::String tmp18 = tmp17.substr((int)7,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(262)
			::String tmp19 = tmp18.toLowerCase();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(262)
			bool tmp20 = (tmp19 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(262)
			::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(262)
			if ((tmp20)){
				HX_STACK_LINE(262)
				tmp21 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(262)
				tmp21 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
			}
			HX_STACK_LINE(262)
			::String slash = tmp21;		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(263)
			::String tmp22 = ::openfl::_legacy::Lib_obj::findHaxeLib(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(263)
			::String haxelib = tmp22;		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(265)
			bool tmp23 = (haxelib != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(265)
			if ((tmp23)){
				HX_STACK_LINE(267)
				::String tmp24 = (haxelib + slash);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(267)
				::String tmp25 = (tmp24 + HX_HCSTRING("legacy","\x49","\x7a","\x62","\x9a"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(267)
				::String tmp26 = slash;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(267)
				::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(267)
				::String tmp28 = (tmp27 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(267)
				::String tmp29 = slash;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(267)
				::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(267)
				::String tmp31 = ::openfl::_legacy::Lib_obj::sysName();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(267)
				::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(267)
				::String tmp33 = slash;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(267)
				::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(267)
				::String tmp35 = library;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(267)
				::String tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(267)
				::String tmp37 = library;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(267)
				::String tmp38 = method;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(267)
				int tmp39 = args;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(267)
				Dynamic tmp40 = ::openfl::_legacy::Lib_obj::tryLoad(tmp36,tmp37,tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(267)
				result = tmp40;
				HX_STACK_LINE(269)
				bool tmp41 = (result == null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(269)
				if ((tmp41)){
					HX_STACK_LINE(271)
					::String tmp42 = (haxelib + slash);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(271)
					::String tmp43 = (tmp42 + HX_HCSTRING("legacy","\x49","\x7a","\x62","\x9a"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(271)
					::String tmp44 = slash;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(271)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(271)
					::String tmp46 = (tmp45 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(271)
					::String tmp47 = slash;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(271)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(271)
					::String tmp49 = ::openfl::_legacy::Lib_obj::sysName();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(271)
					::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(271)
					::String tmp51 = (tmp50 + HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(271)
					::String tmp52 = slash;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(271)
					::String tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(271)
					::String tmp54 = library;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(271)
					::String tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(271)
					::String tmp56 = library;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(271)
					::String tmp57 = method;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(271)
					int tmp58 = args;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(271)
					Dynamic tmp59 = ::openfl::_legacy::Lib_obj::tryLoad(tmp55,tmp56,tmp57,tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(271)
					result = tmp59;
				}
			}
		}
		HX_STACK_LINE(279)
		Dynamic tmp17 = result;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(279)
		::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(279)
		::String tmp19 = (HX_HCSTRING("Result : ","\xe9","\x19","\x2c","\x14") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(279)
		::openfl::_legacy::Lib_obj::loaderTrace(tmp19);
		HX_STACK_LINE(289)
		Dynamic tmp20 = result;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(289)
		return tmp20;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

Void Lib_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("openfl._legacy.Lib","loaderTrace",0x37050745,"openfl._legacy.Lib.loaderTrace","openfl/_legacy/Lib.hx",294,0x739f021f)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(297)
		Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		Dynamic get_env = tmp;		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(298)
		Dynamic tmp1 = get_env(HX_HCSTRING("OPENFL_LOAD_DEBUG","\xa9","\x1b","\xff","\x9b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		bool debug = tmp2;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(303)
		bool tmp3 = debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		if ((tmp3)){
			HX_STACK_LINE(305)
			::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			::Sys_obj::println(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,loaderTrace,(void))

Void Lib_obj::notImplemented( ::String api){
{
		HX_STACK_FRAME("openfl._legacy.Lib","notImplemented",0x6d44ea7c,"openfl._legacy.Lib.notImplemented","openfl/_legacy/Lib.hx",312,0x739f021f)
		HX_STACK_ARG(api,"api")
		HX_STACK_LINE(314)
		::haxe::ds::StringMap tmp = ::openfl::_legacy::Lib_obj::__sentWarnings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		::String tmp1 = api;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		if ((tmp3)){
			HX_STACK_LINE(316)
			::haxe::ds::StringMap tmp4 = ::openfl::_legacy::Lib_obj::__sentWarnings;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			::String tmp5 = api;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			tmp4->set(tmp5,true);
			HX_STACK_LINE(318)
			::String tmp6 = (HX_HCSTRING("Warning: ","\xe2","\x3b","\x0f","\x9a") + api);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(318)
			::String tmp7 = (tmp6 + HX_HCSTRING(" is not implemented","\x1f","\x12","\xd2","\xb9"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(318)
			Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Lib.hx","\xb9","\x80","\x1c","\x19"),318,HX_HCSTRING("openfl._legacy.Lib","\xc1","\xa5","\x5c","\xfc"),HX_HCSTRING("notImplemented","\x6f","\x3a","\x1a","\x27"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(318)
			::haxe::Log_obj::trace(tmp7,tmp8);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

Void Lib_obj::rethrow( Dynamic error){
{
		HX_STACK_FRAME("openfl._legacy.Lib","rethrow",0x964500e6,"openfl._legacy.Lib.rethrow","openfl/_legacy/Lib.hx",325,0x739f021f)
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(327)
		::openfl::events::UncaughtErrorEvent tmp = ::openfl::events::UncaughtErrorEvent_obj::__new(HX_HCSTRING("uncaughtError","\xf3","\x98","\x8b","\x8b"),true,true,error);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		::openfl::events::UncaughtErrorEvent event = tmp;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(329)
		Dynamic tmp1 = ::openfl::_legacy::Lib_obj::__uncaughtExceptionHandler_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		if ((tmp2)){
			HX_STACK_LINE(329)
			::openfl::events::UncaughtErrorEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			::openfl::events::UncaughtErrorEvent tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(329)
			tmp3 = ::openfl::_legacy::Lib_obj::__uncaughtExceptionHandler(tmp5);
		}
		else{
			HX_STACK_LINE(329)
			tmp3 = false;
		}
		HX_STACK_LINE(329)
		if ((tmp3)){
			HX_STACK_LINE(331)
			return null();
		}
		HX_STACK_LINE(335)
		::openfl::_legacy::display::MovieClip tmp4 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		::openfl::events::UncaughtErrorEvents tmp5 = tmp4->loaderInfo->uncaughtErrorEvents;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		::openfl::events::UncaughtErrorEvent tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(335)
		tmp5->dispatchEvent(tmp6);
		HX_STACK_LINE(337)
		bool tmp7 = event->__getIsCancelled();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(337)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(337)
		if ((tmp8)){
			HX_STACK_LINE(339)
			::String message = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(341)
			bool tmp9 = (error != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(341)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(341)
			if ((tmp9)){
				HX_STACK_LINE(341)
				tmp10 = (error != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(341)
				tmp10 = false;
			}
			HX_STACK_LINE(341)
			if ((tmp10)){
				HX_STACK_LINE(343)
				Dynamic tmp11 = error;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(343)
				::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(343)
				::String tmp13 = (tmp12 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(343)
				message = tmp13;
			}
			HX_STACK_LINE(347)
			Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(349)
			bool tmp11 = (stack->length > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(349)
			if ((tmp11)){
				HX_STACK_LINE(351)
				::String tmp12 = ::haxe::CallStack_obj::toString(stack);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(351)
				::String tmp13 = (tmp12 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(351)
				hx::AddEq(message,tmp13);
			}
			else{
				HX_STACK_LINE(355)
				hx::AddEq(message,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(362)
			::haxe::io::Output tmp12 = ::Sys_obj::_stderr();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(362)
			::String tmp13 = message;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(362)
			::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::ofString(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(362)
			tmp12->write(tmp14);
			HX_STACK_LINE(364)
			::Sys_obj::exit((int)1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,rethrow,(void))

Void Lib_obj::setUncaughtExceptionHandler( Dynamic f){
{
		HX_STACK_FRAME("openfl._legacy.Lib","setUncaughtExceptionHandler",0x766b3585,"openfl._legacy.Lib.setUncaughtExceptionHandler","openfl/_legacy/Lib.hx",373,0x739f021f)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(373)
		::openfl::_legacy::Lib_obj::__uncaughtExceptionHandler = f;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,setUncaughtExceptionHandler,(void))

::String Lib_obj::sysName( ){
	HX_STACK_FRAME("openfl._legacy.Lib","sysName",0x1a5aa64b,"openfl._legacy.Lib.sysName","openfl/_legacy/Lib.hx",378,0x739f021f)
	HX_STACK_LINE(381)
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(381)
	Dynamic sys_string = tmp;		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(382)
	::String tmp1 = sys_string().Cast< ::String >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,sysName,return )

Dynamic Lib_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("openfl._legacy.Lib","tryLoad",0xea903954,"openfl._legacy.Lib.tryLoad","openfl/_legacy/Lib.hx",390,0x739f021f)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(392)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(395)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		::String tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(395)
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(395)
		Dynamic result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(402)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		if ((tmp4)){
			HX_STACK_LINE(404)
			::String tmp5 = (HX_HCSTRING("Got result ","\xaf","\xe9","\x02","\x45") + name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(404)
			::openfl::_legacy::Lib_obj::loaderTrace(tmp5);
			HX_STACK_LINE(405)
			::haxe::ds::StringMap tmp6 = ::openfl::_legacy::Lib_obj::__moduleNames;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(405)
			::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(405)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(405)
			tmp6->set(tmp7,tmp8);
			HX_STACK_LINE(406)
			Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(406)
			return tmp9;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(412)
				::String tmp = (HX_HCSTRING("Failed to load : ","\x1e","\xca","\x38","\x9b") + name);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(412)
				::openfl::_legacy::Lib_obj::loaderTrace(tmp);
			}
		}
	}
	HX_STACK_LINE(416)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,tryLoad,return )

Void Lib_obj::exit( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","exit",0x831a84eb,"openfl._legacy.Lib.exit","openfl/_legacy/Lib.hx",449,0x739f021f)
		HX_STACK_LINE(451)
		::openfl::_legacy::display::Stage tmp = ::openfl::_legacy::Lib_obj::get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		Dynamic quit = tmp->onQuit;		HX_STACK_VAR(quit,"quit");
		HX_STACK_LINE(453)
		bool tmp1 = (quit != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(453)
		if ((tmp1)){
			HX_STACK_LINE(463)
			quit().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,exit,(void))

Void Lib_obj::forceClose( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","forceClose",0xe34c675a,"openfl._legacy.Lib.forceClose","openfl/_legacy/Lib.hx",470,0x739f021f)
		HX_STACK_LINE(472)
		Dynamic tmp = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_terminate","\x55","\xcd","\xf0","\x34"),(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		Dynamic terminate = tmp;		HX_STACK_VAR(terminate,"terminate");
		HX_STACK_LINE(473)
		terminate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,forceClose,(void))

int Lib_obj::getTimer( ){
	HX_STACK_FRAME("openfl._legacy.Lib","getTimer",0xe6f8c79c,"openfl._legacy.Lib.getTimer","openfl/_legacy/Lib.hx",478,0x739f021f)
	HX_STACK_LINE(482)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

Void Lib_obj::getURL( ::openfl::_legacy::net::URLRequest url,::String target){
{
		HX_STACK_FRAME("openfl._legacy.Lib","getURL",0x45bda386,"openfl._legacy.Lib.getURL","openfl/_legacy/Lib.hx",487,0x739f021f)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(489)
		::String tmp = url->url;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(489)
		::openfl::_legacy::Lib_obj::lime_get_url(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

Void Lib_obj::pause( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","pause",0x7a575c89,"openfl._legacy.Lib.pause","openfl/_legacy/Lib.hx",496,0x739f021f)
		HX_STACK_LINE(496)
		::openfl::_legacy::Lib_obj::lime_pause_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,pause,(void))

Void Lib_obj::postUICallback( Dynamic inCallback){
{
		HX_STACK_FRAME("openfl._legacy.Lib","postUICallback",0xf68580a6,"openfl._legacy.Lib.postUICallback","openfl/_legacy/Lib.hx",506,0x739f021f)
		HX_STACK_ARG(inCallback,"inCallback")
		HX_STACK_LINE(506)
		inCallback().Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,postUICallback,(void))

Void Lib_obj::resume( ){
{
		HX_STACK_FRAME("openfl._legacy.Lib","resume",0xab19c4ba,"openfl._legacy.Lib.resume","openfl/_legacy/Lib.hx",514,0x739f021f)
		HX_STACK_LINE(514)
		::openfl::_legacy::Lib_obj::lime_resume_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,resume,(void))

Void Lib_obj::setIcon( ::String path){
{
		HX_STACK_FRAME("openfl._legacy.Lib","setIcon",0xab51788e,"openfl._legacy.Lib.setIcon","openfl/_legacy/Lib.hx",519,0x739f021f)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(521)
		Dynamic tmp = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_set_icon","\x02","\xfc","\x8b","\xc5"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		Dynamic set_icon = tmp;		HX_STACK_VAR(set_icon,"set_icon");
		HX_STACK_LINE(522)
		::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(522)
		set_icon(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,setIcon,(void))

Void Lib_obj::setPackage( ::String company,::String file,::String packageName,::String version){
{
		HX_STACK_FRAME("openfl._legacy.Lib","setPackage",0x98a4b591,"openfl._legacy.Lib.setPackage","openfl/_legacy/Lib.hx",527,0x739f021f)
		HX_STACK_ARG(company,"company")
		HX_STACK_ARG(file,"file")
		HX_STACK_ARG(packageName,"packageName")
		HX_STACK_ARG(version,"version")
		HX_STACK_LINE(529)
		::openfl::_legacy::Lib_obj::company = company;
		HX_STACK_LINE(530)
		::openfl::_legacy::Lib_obj::file = file;
		HX_STACK_LINE(531)
		::openfl::_legacy::Lib_obj::packageName = packageName;
		HX_STACK_LINE(532)
		::openfl::_legacy::Lib_obj::version = version;
		HX_STACK_LINE(534)
		::String tmp = company;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		::String tmp1 = file;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		::String tmp2 = packageName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(534)
		::String tmp3 = version;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		::openfl::_legacy::Lib_obj::lime_set_package(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,setPackage,(void))

Void Lib_obj::__setCurrentStage( ::openfl::_legacy::display::Stage stage){
{
		HX_STACK_FRAME("openfl._legacy.Lib","__setCurrentStage",0x3b62697a,"openfl._legacy.Lib.__setCurrentStage","openfl/_legacy/Lib.hx",541,0x739f021f)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(541)
		::openfl::_legacy::Lib_obj::__stage = stage;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,__setCurrentStage,(void))

Void Lib_obj::trace( Dynamic arg){
{
		HX_STACK_FRAME("openfl._legacy.Lib","trace",0xd31f1418,"openfl._legacy.Lib.trace","openfl/_legacy/Lib.hx",546,0x739f021f)
		HX_STACK_ARG(arg,"arg")
		HX_STACK_LINE(548)
		Dynamic tmp = arg;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Lib.hx","\xb9","\x80","\x1c","\x19"),548,HX_HCSTRING("openfl._legacy.Lib","\xc1","\xa5","\x5c","\xfc"),HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

::openfl::_legacy::display::MovieClip Lib_obj::get_current( ){
	HX_STACK_FRAME("openfl._legacy.Lib","get_current",0xdfa27223,"openfl._legacy.Lib.get_current","openfl/_legacy/Lib.hx",560,0x739f021f)
	HX_STACK_LINE(562)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::__current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(562)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(562)
	if ((tmp1)){
		HX_STACK_LINE(564)
		::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::display::MovieClip_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(564)
		::openfl::_legacy::Lib_obj::__current = tmp2;
		HX_STACK_LINE(566)
		::openfl::_legacy::display::Stage tmp3 = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(566)
		if ((tmp4)){
			HX_STACK_LINE(568)
			::openfl::_legacy::display::Stage tmp5 = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(568)
			::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::__current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(568)
			tmp5->addChild(tmp6);
		}
	}
	HX_STACK_LINE(574)
	::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::__current;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(574)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )

::openfl::_legacy::display::Stage Lib_obj::get_stage( ){
	HX_STACK_FRAME("openfl._legacy.Lib","get_stage",0x5f421228,"openfl._legacy.Lib.get_stage","openfl/_legacy/Lib.hx",579,0x739f021f)
	HX_STACK_LINE(581)
	::openfl::_legacy::display::Stage tmp = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(581)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(581)
	if ((tmp1)){
		HX_STACK_LINE(583)
		HX_STACK_DO_THROW(HX_HCSTRING("Error : stage can't be accessed until init is called","\x88","\x52","\xb6","\x4f"));
	}
	HX_STACK_LINE(587)
	::openfl::_legacy::display::Stage tmp2 = ::openfl::_legacy::Lib_obj::__stage;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(587)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_stage,return )

Dynamic Lib_obj::lime_set_package;

Dynamic Lib_obj::lime_get_frame_stage;

Dynamic Lib_obj::lime_get_url;

Dynamic Lib_obj::lime_pause_animation;

Dynamic Lib_obj::lime_resume_animation;


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { outValue = as_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file; return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { outValue = VSYNC; return true;  }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { outValue = HW_AA; return true;  }
		if (HX_FIELD_EQ(inName,"stage") ) { outValue = inCallProp == hx::paccAlways ? get_stage() : stage; return true; }
		if (HX_FIELD_EQ(inName,"close") ) { outValue = close_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { outValue = attach_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { outValue = company; return true;  }
		if (HX_FIELD_EQ(inName,"current") ) { outValue = inCallProp == hx::paccAlways ? get_current() : current; return true; }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version; return true;  }
		if (HX_FIELD_EQ(inName,"__stage") ) { outValue = __stage; return true;  }
		if (HX_FIELD_EQ(inName,"rethrow") ) { outValue = rethrow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sysName") ) { outValue = sysName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { outValue = tryLoad_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setIcon") ) { outValue = setIcon_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { outValue = HARDWARE; return true;  }
		if (HX_FIELD_EQ(inName,"__isInit") ) { outValue = __isInit; return true;  }
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { outValue = RESIZABLE; return true;  }
		if (HX_FIELD_EQ(inName,"initWidth") ) { outValue = initWidth; return true;  }
		if (HX_FIELD_EQ(inName,"__current") ) { outValue = __current; return true;  }
		if (HX_FIELD_EQ(inName,"get_stage") ) { outValue = get_stage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { outValue = FULLSCREEN; return true;  }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { outValue = BORDERLESS; return true;  }
		if (HX_FIELD_EQ(inName,"initHeight") ) { outValue = initHeight; return true;  }
		if (HX_FIELD_EQ(inName,"forceClose") ) { outValue = forceClose_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPackage") ) { outValue = setPackage_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { outValue = HW_AA_HIRES; return true;  }
		if (HX_FIELD_EQ(inName,"packageName") ) { outValue = packageName; return true;  }
		if (HX_FIELD_EQ(inName,"__mainFrame") ) { outValue = __mainFrame; return true;  }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { outValue = findHaxeLib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { outValue = loaderTrace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_current") ) { outValue = get_current_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { outValue = DEPTH_BUFFER; return true;  }
		if (HX_FIELD_EQ(inName,"lime_get_url") ) { outValue = lime_get_url; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { outValue = ALLOW_SHADERS; return true;  }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = __moduleNames; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { outValue = STENCIL_BUFFER; return true;  }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { outValue = silentRecreate; return true;  }
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = __sentWarnings; return true;  }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { outValue = REQUIRE_SHADERS; return true;  }
		if (HX_FIELD_EQ(inName,"__loadedNekoAPI") ) { outValue = __loadedNekoAPI; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_set_package") ) { outValue = lime_set_package; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setCurrentStage") ) { outValue = __setCurrentStage_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createManagedStage") ) { outValue = createManagedStage_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_get_frame_stage") ) { outValue = lime_get_frame_stage; return true;  }
		if (HX_FIELD_EQ(inName,"lime_pause_animation") ) { outValue = lime_pause_animation; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_resume_animation") ) { outValue = lime_resume_animation; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__uncaughtExceptionHandler") ) { outValue = __uncaughtExceptionHandler; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setUncaughtExceptionHandler") ) { outValue = setUncaughtExceptionHandler_dyn(); return true;  }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { VSYNC=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { HW_AA=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=ioValue.Cast< ::openfl::_legacy::display::Stage >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { company=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::openfl::_legacy::display::MovieClip >(); return true; }
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__stage") ) { __stage=ioValue.Cast< ::openfl::_legacy::display::Stage >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"__isInit") ) { __isInit=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { RESIZABLE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { initWidth=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"__current") ) { __current=ioValue.Cast< ::openfl::_legacy::display::MovieClip >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { FULLSCREEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { BORDERLESS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { initHeight=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { HW_AA_HIRES=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"packageName") ) { packageName=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__mainFrame") ) { __mainFrame=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { DEPTH_BUFFER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_get_url") ) { lime_get_url=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { ALLOW_SHADERS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { STENCIL_BUFFER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { silentRecreate=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { __sentWarnings=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { REQUIRE_SHADERS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"__loadedNekoAPI") ) { __loadedNekoAPI=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_set_package") ) { lime_set_package=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_get_frame_stage") ) { lime_get_frame_stage=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_pause_animation") ) { lime_pause_animation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_resume_animation") ) { lime_resume_animation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__uncaughtExceptionHandler") ) { __uncaughtExceptionHandler=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Lib_obj::FULLSCREEN,HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb")},
	{hx::fsInt,(void *) &Lib_obj::BORDERLESS,HX_HCSTRING("BORDERLESS","\x45","\xba","\x7a","\x09")},
	{hx::fsInt,(void *) &Lib_obj::RESIZABLE,HX_HCSTRING("RESIZABLE","\x4b","\xa7","\xa8","\xa4")},
	{hx::fsInt,(void *) &Lib_obj::HARDWARE,HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")},
	{hx::fsInt,(void *) &Lib_obj::VSYNC,HX_HCSTRING("VSYNC","\xb1","\x65","\x96","\xbb")},
	{hx::fsInt,(void *) &Lib_obj::HW_AA,HX_HCSTRING("HW_AA","\x50","\xa3","\xa3","\xae")},
	{hx::fsInt,(void *) &Lib_obj::HW_AA_HIRES,HX_HCSTRING("HW_AA_HIRES","\x70","\x13","\x75","\x95")},
	{hx::fsInt,(void *) &Lib_obj::ALLOW_SHADERS,HX_HCSTRING("ALLOW_SHADERS","\x78","\x9c","\xd4","\x9c")},
	{hx::fsInt,(void *) &Lib_obj::REQUIRE_SHADERS,HX_HCSTRING("REQUIRE_SHADERS","\x54","\xb7","\x32","\x63")},
	{hx::fsInt,(void *) &Lib_obj::DEPTH_BUFFER,HX_HCSTRING("DEPTH_BUFFER","\x1c","\x84","\x06","\x89")},
	{hx::fsInt,(void *) &Lib_obj::STENCIL_BUFFER,HX_HCSTRING("STENCIL_BUFFER","\x43","\x1c","\x95","\x64")},
	{hx::fsString,(void *) &Lib_obj::company,HX_HCSTRING("company","\x3d","\x15","\x69","\x83")},
	{hx::fsObject /*::openfl::_legacy::display::MovieClip*/ ,(void *) &Lib_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsString,(void *) &Lib_obj::file,HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsInt,(void *) &Lib_obj::initHeight,HX_HCSTRING("initHeight","\x17","\x63","\x91","\x06")},
	{hx::fsInt,(void *) &Lib_obj::initWidth,HX_HCSTRING("initWidth","\xd6","\xd0","\xf4","\xe5")},
	{hx::fsString,(void *) &Lib_obj::packageName,HX_HCSTRING("packageName","\xf1","\x04","\xad","\x04")},
	{hx::fsBool,(void *) &Lib_obj::silentRecreate,HX_HCSTRING("silentRecreate","\xa4","\x62","\xe5","\x0f")},
	{hx::fsObject /*::openfl::_legacy::display::Stage*/ ,(void *) &Lib_obj::stage,HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsString,(void *) &Lib_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::openfl::_legacy::display::MovieClip*/ ,(void *) &Lib_obj::__current,HX_HCSTRING("__current","\x19","\xed","\x31","\x4d")},
	{hx::fsBool,(void *) &Lib_obj::__isInit,HX_HCSTRING("__isInit","\x3a","\x6b","\x51","\x0b")},
	{hx::fsBool,(void *) &Lib_obj::__loadedNekoAPI,HX_HCSTRING("__loadedNekoAPI","\x1a","\x25","\x3e","\xec")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::__mainFrame,HX_HCSTRING("__mainFrame","\x14","\x8a","\x53","\x4e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Lib_obj::__moduleNames,HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Lib_obj::__sentWarnings,HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19")},
	{hx::fsObject /*::openfl::_legacy::display::Stage*/ ,(void *) &Lib_obj::__stage,HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::__uncaughtExceptionHandler,HX_HCSTRING("__uncaughtExceptionHandler","\x10","\x6f","\xb7","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::lime_set_package,HX_HCSTRING("lime_set_package","\x3f","\x23","\x66","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::lime_get_frame_stage,HX_HCSTRING("lime_get_frame_stage","\x19","\x55","\xf8","\x98")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::lime_get_url,HX_HCSTRING("lime_get_url","\x9c","\x01","\x76","\x11")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::lime_pause_animation,HX_HCSTRING("lime_pause_animation","\xd1","\x64","\xc2","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::lime_resume_animation,HX_HCSTRING("lime_resume_animation","\x5c","\x1e","\xb8","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_MARK_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_MARK_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::company,"company");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::file,"file");
	HX_MARK_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_MARK_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_MARK_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_MARK_MEMBER_NAME(Lib_obj::silentRecreate,"silentRecreate");
	HX_MARK_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Lib_obj::version,"version");
	HX_MARK_MEMBER_NAME(Lib_obj::__current,"__current");
	HX_MARK_MEMBER_NAME(Lib_obj::__isInit,"__isInit");
	HX_MARK_MEMBER_NAME(Lib_obj::__loadedNekoAPI,"__loadedNekoAPI");
	HX_MARK_MEMBER_NAME(Lib_obj::__mainFrame,"__mainFrame");
	HX_MARK_MEMBER_NAME(Lib_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
	HX_MARK_MEMBER_NAME(Lib_obj::__stage,"__stage");
	HX_MARK_MEMBER_NAME(Lib_obj::__uncaughtExceptionHandler,"__uncaughtExceptionHandler");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_set_package,"lime_set_package");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_get_frame_stage,"lime_get_frame_stage");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_get_url,"lime_get_url");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_pause_animation,"lime_pause_animation");
	HX_MARK_MEMBER_NAME(Lib_obj::lime_resume_animation,"lime_resume_animation");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_VISIT_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_VISIT_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_VISIT_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::company,"company");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::file,"file");
	HX_VISIT_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_VISIT_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_VISIT_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_VISIT_MEMBER_NAME(Lib_obj::silentRecreate,"silentRecreate");
	HX_VISIT_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Lib_obj::__current,"__current");
	HX_VISIT_MEMBER_NAME(Lib_obj::__isInit,"__isInit");
	HX_VISIT_MEMBER_NAME(Lib_obj::__loadedNekoAPI,"__loadedNekoAPI");
	HX_VISIT_MEMBER_NAME(Lib_obj::__mainFrame,"__mainFrame");
	HX_VISIT_MEMBER_NAME(Lib_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
	HX_VISIT_MEMBER_NAME(Lib_obj::__stage,"__stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::__uncaughtExceptionHandler,"__uncaughtExceptionHandler");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_set_package,"lime_set_package");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_get_frame_stage,"lime_get_frame_stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_get_url,"lime_get_url");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_pause_animation,"lime_pause_animation");
	HX_VISIT_MEMBER_NAME(Lib_obj::lime_resume_animation,"lime_resume_animation");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb"),
	HX_HCSTRING("BORDERLESS","\x45","\xba","\x7a","\x09"),
	HX_HCSTRING("RESIZABLE","\x4b","\xa7","\xa8","\xa4"),
	HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),
	HX_HCSTRING("VSYNC","\xb1","\x65","\x96","\xbb"),
	HX_HCSTRING("HW_AA","\x50","\xa3","\xa3","\xae"),
	HX_HCSTRING("HW_AA_HIRES","\x70","\x13","\x75","\x95"),
	HX_HCSTRING("ALLOW_SHADERS","\x78","\x9c","\xd4","\x9c"),
	HX_HCSTRING("REQUIRE_SHADERS","\x54","\xb7","\x32","\x63"),
	HX_HCSTRING("DEPTH_BUFFER","\x1c","\x84","\x06","\x89"),
	HX_HCSTRING("STENCIL_BUFFER","\x43","\x1c","\x95","\x64"),
	HX_HCSTRING("company","\x3d","\x15","\x69","\x83"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("initHeight","\x17","\x63","\x91","\x06"),
	HX_HCSTRING("initWidth","\xd6","\xd0","\xf4","\xe5"),
	HX_HCSTRING("packageName","\xf1","\x04","\xad","\x04"),
	HX_HCSTRING("silentRecreate","\xa4","\x62","\xe5","\x0f"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("__current","\x19","\xed","\x31","\x4d"),
	HX_HCSTRING("__isInit","\x3a","\x6b","\x51","\x0b"),
	HX_HCSTRING("__loadedNekoAPI","\x1a","\x25","\x3e","\xec"),
	HX_HCSTRING("__mainFrame","\x14","\x8a","\x53","\x4e"),
	HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28"),
	HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19"),
	HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"),
	HX_HCSTRING("__uncaughtExceptionHandler","\x10","\x6f","\xb7","\x9e"),
	HX_HCSTRING("as","\xf2","\x54","\x00","\x00"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createManagedStage","\xfb","\x8c","\x8b","\xd8"),
	HX_HCSTRING("findHaxeLib","\x86","\x2f","\x53","\x08"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loaderTrace","\x72","\x91","\x40","\xa9"),
	HX_HCSTRING("notImplemented","\x6f","\x3a","\x1a","\x27"),
	HX_HCSTRING("rethrow","\x93","\xb0","\x2a","\xf6"),
	HX_HCSTRING("setUncaughtExceptionHandler","\xb2","\xa9","\xb6","\xc2"),
	HX_HCSTRING("sysName","\xf8","\x55","\x40","\x7a"),
	HX_HCSTRING("tryLoad","\x01","\xe9","\x75","\x4a"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("forceClose","\xcd","\x01","\x38","\xdf"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("postUICallback","\x99","\xd0","\x5a","\xb0"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("setPackage","\x04","\x50","\x90","\x94"),
	HX_HCSTRING("__setCurrentStage","\x67","\x53","\x27","\x6d"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	HX_HCSTRING("get_current","\x50","\xfc","\xdd","\x51"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("lime_set_package","\x3f","\x23","\x66","\xc4"),
	HX_HCSTRING("lime_get_frame_stage","\x19","\x55","\xf8","\x98"),
	HX_HCSTRING("lime_get_url","\x9c","\x01","\x76","\x11"),
	HX_HCSTRING("lime_pause_animation","\xd1","\x64","\xc2","\x88"),
	HX_HCSTRING("lime_resume_animation","\x5c","\x1e","\xb8","\x40"),
	::String(null()) };

void Lib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Lib","\xc1","\xa5","\x5c","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
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

void Lib_obj::__boot()
{
	FULLSCREEN= (int)1;
	BORDERLESS= (int)2;
	RESIZABLE= (int)4;
	HARDWARE= (int)8;
	VSYNC= (int)16;
	HW_AA= (int)32;
	HW_AA_HIRES= (int)96;
	ALLOW_SHADERS= (int)128;
	REQUIRE_SHADERS= (int)256;
	DEPTH_BUFFER= (int)512;
	STENCIL_BUFFER= (int)1024;
	silentRecreate= false;
	__current= null();
	__isInit= false;
	__mainFrame= null();
	__moduleNames= null();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/Lib.hx",55,0x739f021f)
		{
			HX_STACK_LINE(55)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(55)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			return tmp1;
		}
		return null();
	}
};
	__sentWarnings= _Function_0_1::Block();
	__stage= null();
	__uncaughtExceptionHandler= null();
	lime_set_package= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_set_package","\x9d","\xd2","\x4a","\x02"),(int)4);
	lime_get_frame_stage= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_get_frame_stage","\x77","\x0b","\x0b","\xd8"),(int)1);
	lime_get_url= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_get_url","\xfa","\x29","\x7c","\xad"),(int)1);
	lime_pause_animation= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_pause_animation","\x2f","\x1b","\xd5","\xc7"),(int)0);
	lime_resume_animation= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_resume_animation","\x3e","\xfa","\x04","\x32"),(int)0);
}

} // end namespace openfl
} // end namespace _legacy
