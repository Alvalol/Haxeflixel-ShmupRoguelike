#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
namespace haxe{

Void Timer_obj::__construct(Float time)
{
HX_STACK_FRAME("haxe.Timer","new",0x4136b0cf,"haxe.Timer.new","haxe/Timer.hx",210,0x1a690682)
HX_STACK_THIS(this)
HX_STACK_ARG(time,"time")
{
	HX_STACK_LINE(212)
	this->mTime = time;
	HX_STACK_LINE(213)
	::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(214)
	Float tmp = ::haxe::Timer_obj::getMS();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	Float tmp1 = this->mTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	this->mFireAt = tmp2;
	HX_STACK_LINE(215)
	this->mRunning = true;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float time)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(time);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_FRAME("haxe.Timer","run",0x4139c7ba,"haxe.Timer.run","haxe/Timer.hx",257,0x1a690682)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("haxe.Timer","stop",0xd1fd70b3,"haxe.Timer.stop","haxe/Timer.hx",275,0x1a690682)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		bool tmp = this->mRunning;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		if ((tmp)){
			HX_STACK_LINE(279)
			this->mRunning = false;
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(281)
				int tmp1 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(281)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(281)
				while((true)){
					HX_STACK_LINE(281)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(281)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(281)
					if ((tmp3)){
						HX_STACK_LINE(281)
						break;
					}
					HX_STACK_LINE(281)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(281)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(283)
					::haxe::Timer tmp5 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(283)
					bool tmp6 = (tmp5 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(283)
					if ((tmp6)){
						HX_STACK_LINE(285)
						::haxe::Timer_obj::sRunningTimers[i] = null();
						HX_STACK_LINE(286)
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Void Timer_obj::__check( Float inTime){
{
		HX_STACK_FRAME("haxe.Timer","__check",0xb5623597,"haxe.Timer.__check","haxe/Timer.hx",297,0x1a690682)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTime,"inTime")
		HX_STACK_LINE(299)
		Float tmp = inTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		Float tmp1 = this->mFireAt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		if ((tmp2)){
			HX_STACK_LINE(301)
			Float tmp3 = this->mTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			hx::AddEq(this->mFireAt,tmp3);
			HX_STACK_LINE(302)
			this->run();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,__check,(void))

Array< ::Dynamic > Timer_obj::sRunningTimers;

::haxe::Timer Timer_obj::delay( Dynamic f,int time){
	HX_STACK_FRAME("haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","haxe/Timer.hx",220,0x1a690682)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(222)
	::haxe::Timer tmp = ::haxe::Timer_obj::__new(time);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	::haxe::Timer t = tmp;		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::Timer,t,Dynamic,f)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/Timer.hx",224,0x1a690682)
		{
			HX_STACK_LINE(226)
			t->stop();
			HX_STACK_LINE(227)
			f().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(224)
	t->run =  Dynamic(new _Function_1_1(t,f));
	HX_STACK_LINE(231)
	::haxe::Timer tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::getMS( ){
	HX_STACK_FRAME("haxe.Timer","getMS",0xf90fafab,"haxe.Timer.getMS","haxe/Timer.hx",236,0x1a690682)
	HX_STACK_LINE(239)
	Float tmp = ::haxe::Timer_obj::lime_time_stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,getMS,return )

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_FRAME("haxe.Timer","measure",0x42373f4d,"haxe.Timer.measure","haxe/Timer.hx",247,0x1a690682)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(249)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	Float t0 = tmp;		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(250)
	Dynamic tmp1 = f();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	Dynamic r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(251)
	Float tmp2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	Float tmp3 = t0;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	::String tmp5 = (tmp4 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(251)
	Dynamic tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(251)
	::haxe::Log_obj::trace(tmp5,tmp6);
	HX_STACK_LINE(252)
	Dynamic tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(252)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::stamp( ){
	HX_STACK_FRAME("haxe.Timer","stamp",0xebba8a32,"haxe.Timer.stamp","haxe/Timer.hx",264,0x1a690682)
	HX_STACK_LINE(267)
	Float tmp = ::haxe::Timer_obj::lime_time_stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )

Void Timer_obj::__checkTimers( ){
{
		HX_STACK_FRAME("haxe.Timer","__checkTimers",0xb7078205,"haxe.Timer.__checkTimers","haxe/Timer.hx",309,0x1a690682)
		HX_STACK_LINE(311)
		Float tmp = ::haxe::Timer_obj::getMS();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(312)
		bool foundNull = false;		HX_STACK_VAR(foundNull,"foundNull");
		HX_STACK_LINE(313)
		::haxe::Timer timer;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(315)
			int tmp1 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(315)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(315)
			while((true)){
				HX_STACK_LINE(315)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(315)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(315)
				if ((tmp3)){
					HX_STACK_LINE(315)
					break;
				}
				HX_STACK_LINE(315)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(315)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(317)
				::haxe::Timer tmp5 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(317)
				timer = tmp5;
				HX_STACK_LINE(319)
				bool tmp6 = (timer != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(319)
				if ((tmp6)){
					HX_STACK_LINE(321)
					Float tmp7 = now;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(321)
					timer->__check(tmp7);
				}
				HX_STACK_LINE(325)
				bool tmp7 = foundNull;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(325)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(325)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(325)
				if ((tmp8)){
					HX_STACK_LINE(325)
					::haxe::Timer tmp10 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(325)
					::haxe::Timer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(325)
					tmp9 = (tmp11 == null());
				}
				else{
					HX_STACK_LINE(325)
					tmp9 = true;
				}
				HX_STACK_LINE(325)
				foundNull = tmp9;
			}
		}
		HX_STACK_LINE(329)
		bool tmp1 = foundNull;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		if ((tmp1)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			bool run(::haxe::Timer val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/Timer.hx",331,0x1a690682)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(331)
					bool tmp2 = (val != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(331)
					return tmp2;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(331)
			::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_2_1()));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,__checkTimers,(void))

Float Timer_obj::__nextWake( Float limit){
	HX_STACK_FRAME("haxe.Timer","__nextWake",0x0e101148,"haxe.Timer.__nextWake","haxe/Timer.hx",339,0x1a690682)
	HX_STACK_ARG(limit,"limit")
	HX_STACK_LINE(341)
	Float tmp = ::haxe::Timer_obj::getMS();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	Float now = tmp;		HX_STACK_VAR(now,"now");
	HX_STACK_LINE(342)
	Float sleep;		HX_STACK_VAR(sleep,"sleep");
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(344)
		Array< ::Dynamic > _g1 = ::haxe::Timer_obj::sRunningTimers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(344)
		while((true)){
			HX_STACK_LINE(344)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(344)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(344)
			if ((tmp2)){
				HX_STACK_LINE(344)
				break;
			}
			HX_STACK_LINE(344)
			::haxe::Timer tmp3 = _g1->__get(_g).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			::haxe::Timer timer = tmp3;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(344)
			++(_g);
			HX_STACK_LINE(346)
			bool tmp4 = (timer == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(346)
			if ((tmp4)){
				HX_STACK_LINE(347)
				continue;
			}
			HX_STACK_LINE(349)
			Float tmp5 = (timer->mFireAt - now);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			sleep = tmp5;
			HX_STACK_LINE(351)
			bool tmp6 = (sleep < limit);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			if ((tmp6)){
				HX_STACK_LINE(353)
				limit = sleep;
				HX_STACK_LINE(355)
				bool tmp7 = (limit < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(355)
				if ((tmp7)){
					HX_STACK_LINE(357)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(365)
	Float tmp1 = (limit * ((Float)0.001));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(365)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,__nextWake,return )

Dynamic Timer_obj::lime_time_stamp;


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mTime,"mTime");
	HX_VISIT_MEMBER_NAME(mFireAt,"mFireAt");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(run,"run");
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { return mTime; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return mFireAt; }
		if (HX_FIELD_EQ(inName,"__check") ) { return __check_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return mRunning; }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMS") ) { outValue = getMS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { outValue = measure_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__nextWake") ) { outValue = __nextWake_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__checkTimers") ) { outValue = __checkTimers_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { outValue = sRunningTimers; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_time_stamp") ) { outValue = lime_time_stamp; return true;  }
	}
	return false;
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_time_stamp") ) { lime_time_stamp=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"));
	outFields->push(HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"));
	outFields->push(HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Timer_obj,mTime),HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa")},
	{hx::fsFloat,(int)offsetof(Timer_obj,mFireAt),HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72")},
	{hx::fsBool,(int)offsetof(Timer_obj,mRunning),HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_HCSTRING("run","\x4b","\xe7","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Timer_obj::sRunningTimers,HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Timer_obj::lime_time_stamp,HX_HCSTRING("lime_time_stamp","\x3b","\x9f","\x6b","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"),
	HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"),
	HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__check","\xa8","\xf1","\x14","\xb0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_MARK_MEMBER_NAME(Timer_obj::lime_time_stamp,"lime_time_stamp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_VISIT_MEMBER_NAME(Timer_obj::lime_time_stamp,"lime_time_stamp");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("getMS","\x7c","\x95","\x60","\x91"),
	HX_HCSTRING("measure","\x5e","\xfb","\xe9","\x3c"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("__checkTimers","\xd6","\x20","\x5c","\x49"),
	HX_HCSTRING("__nextWake","\xd7","\x75","\xf7","\x9d"),
	HX_HCSTRING("lime_time_stamp","\x3b","\x9f","\x6b","\x12"),
	::String(null()) };

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Timer","\x5d","\x9d","\x24","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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

void Timer_obj::__boot()
{
	sRunningTimers= Array_obj< ::Dynamic >::__new();
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/Timer.hx",379,0x1a690682)
		{
			HX_STACK_LINE(379)
			Dynamic tmp = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_time_stamp","\x9d","\x85","\xd0","\xec"),(int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(379)
			return tmp;
		}
		return null();
	}
};
	lime_time_stamp= _Function_0_1::Block();
}

} // end namespace haxe
