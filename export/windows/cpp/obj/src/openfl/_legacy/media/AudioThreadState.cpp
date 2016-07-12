#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_AudioThreadState
#include <openfl/_legacy/media/AudioThreadState.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
namespace openfl{
namespace _legacy{
namespace media{

Void AudioThreadState_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.media.AudioThreadState","new",0x7864e3f1,"openfl._legacy.media.AudioThreadState.new","openfl/_legacy/media/SoundChannel.hx",352,0xd2a8ca59)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(354)
	::cpp::vm::Mutex tmp = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	this->mutex = tmp;
	HX_STACK_LINE(355)
	this->channelList = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//AudioThreadState_obj::~AudioThreadState_obj() { }

Dynamic AudioThreadState_obj::__CreateEmpty() { return  new AudioThreadState_obj; }
hx::ObjectPtr< AudioThreadState_obj > AudioThreadState_obj::__new()
{  hx::ObjectPtr< AudioThreadState_obj > _result_ = new AudioThreadState_obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioThreadState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioThreadState_obj > _result_ = new AudioThreadState_obj();
	_result_->__construct();
	return _result_;}

Void AudioThreadState_obj::add( ::openfl::_legacy::media::SoundChannel channel){
{
		HX_STACK_FRAME("openfl._legacy.media.AudioThreadState","add",0x785b05b2,"openfl._legacy.media.AudioThreadState.add","openfl/_legacy/media/SoundChannel.hx",360,0xd2a8ca59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_LINE(362)
		::openfl::_legacy::media::SoundChannel tmp = channel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		bool tmp1 = ::Lambda_obj::has(this->channelList,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		if ((tmp2)){
			HX_STACK_LINE(364)
			::openfl::_legacy::media::SoundChannel tmp3 = channel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(364)
			this->channelList->push(tmp3);
			HX_STACK_LINE(365)
			::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioThreadState_obj,add,(void))

Void AudioThreadState_obj::remove( ::openfl::_legacy::media::SoundChannel channel){
{
		HX_STACK_FRAME("openfl._legacy.media.AudioThreadState","remove",0x1bfd5953,"openfl._legacy.media.AudioThreadState.remove","openfl/_legacy/media/SoundChannel.hx",372,0xd2a8ca59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_LINE(374)
		::cpp::vm::Mutex tmp = this->mutex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		tmp->acquire();
		HX_STACK_LINE(376)
		::openfl::_legacy::media::SoundChannel tmp1 = channel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		bool tmp2 = ::Lambda_obj::has(this->channelList,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		if ((tmp2)){
			HX_STACK_LINE(379)
			channel->__addedToThread = false;
			HX_STACK_LINE(382)
			channel->__thread_completed = true;
			HX_STACK_LINE(385)
			::openfl::_legacy::media::SoundChannel tmp3 = channel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			this->channelList->remove(tmp3);
			HX_STACK_LINE(388)
			int tmp4 = this->channelList->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(388)
			if ((tmp5)){
				HX_STACK_LINE(390)
				::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle = true;
			}
		}
		HX_STACK_LINE(396)
		::cpp::vm::Mutex tmp3 = this->mutex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		tmp3->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioThreadState_obj,remove,(void))

Void AudioThreadState_obj::updateComplete( ){
{
		HX_STACK_FRAME("openfl._legacy.media.AudioThreadState","updateComplete",0xf710d7f1,"openfl._legacy.media.AudioThreadState.updateComplete","openfl/_legacy/media/SoundChannel.hx",401,0xd2a8ca59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		::cpp::vm::Mutex tmp = this->mutex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(403)
		tmp->acquire();
		HX_STACK_LINE(405)
		{
			HX_STACK_LINE(405)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(405)
			Array< ::Dynamic > _g1 = this->channelList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(405)
			while((true)){
				HX_STACK_LINE(405)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(405)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(405)
				if ((tmp2)){
					HX_STACK_LINE(405)
					break;
				}
				HX_STACK_LINE(405)
				::openfl::_legacy::media::SoundChannel tmp3 = _g1->__get(_g).StaticCast< ::openfl::_legacy::media::SoundChannel >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(405)
				::openfl::_legacy::media::SoundChannel channel = tmp3;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(405)
				++(_g);
				HX_STACK_LINE(407)
				bool tmp4 = (channel != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(407)
				if ((tmp4)){
					HX_STACK_LINE(409)
					bool tmp5 = channel->__runCheckComplete();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(409)
					if ((tmp5)){
						HX_STACK_LINE(410)
						::openfl::_legacy::media::SoundChannel tmp6 = channel;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(410)
						this->remove(tmp6);
					}
				}
				else{
					HX_STACK_LINE(415)
					::openfl::_legacy::media::SoundChannel tmp5 = channel;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(415)
					this->channelList->remove(tmp5);
				}
			}
		}
		HX_STACK_LINE(421)
		::cpp::vm::Mutex tmp1 = this->mutex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		tmp1->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioThreadState_obj,updateComplete,(void))


AudioThreadState_obj::AudioThreadState_obj()
{
}

void AudioThreadState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioThreadState);
	HX_MARK_MEMBER_NAME(audioThread,"audioThread");
	HX_MARK_MEMBER_NAME(channelList,"channelList");
	HX_MARK_MEMBER_NAME(mainThread,"mainThread");
	HX_MARK_MEMBER_NAME(mutex,"mutex");
	HX_MARK_END_CLASS();
}

void AudioThreadState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audioThread,"audioThread");
	HX_VISIT_MEMBER_NAME(channelList,"channelList");
	HX_VISIT_MEMBER_NAME(mainThread,"mainThread");
	HX_VISIT_MEMBER_NAME(mutex,"mutex");
}

Dynamic AudioThreadState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { return mutex; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { return mainThread; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"audioThread") ) { return audioThread; }
		if (HX_FIELD_EQ(inName,"channelList") ) { return channelList; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateComplete") ) { return updateComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioThreadState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"audioThread") ) { audioThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channelList") ) { channelList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioThreadState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audioThread","\x40","\xac","\x69","\x5d"));
	outFields->push(HX_HCSTRING("channelList","\xc1","\x66","\x81","\x17"));
	outFields->push(HX_HCSTRING("mainThread","\xe3","\x97","\x65","\xe4"));
	outFields->push(HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(AudioThreadState_obj,audioThread),HX_HCSTRING("audioThread","\x40","\xac","\x69","\x5d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AudioThreadState_obj,channelList),HX_HCSTRING("channelList","\xc1","\x66","\x81","\x17")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(AudioThreadState_obj,mainThread),HX_HCSTRING("mainThread","\xe3","\x97","\x65","\xe4")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(AudioThreadState_obj,mutex),HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("audioThread","\x40","\xac","\x69","\x5d"),
	HX_HCSTRING("channelList","\xc1","\x66","\x81","\x17"),
	HX_HCSTRING("mainThread","\xe3","\x97","\x65","\xe4"),
	HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("updateComplete","\xe2","\xf3","\xf1","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioThreadState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioThreadState_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioThreadState_obj::__mClass;

void AudioThreadState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.media.AudioThreadState","\x7f","\x17","\x6e","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioThreadState_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace media
