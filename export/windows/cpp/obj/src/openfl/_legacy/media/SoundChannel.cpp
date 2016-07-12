#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_media_AudioThreadState
#include <openfl/_legacy/media/AudioThreadState.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_InternalAudioType
#include <openfl/_legacy/media/InternalAudioType.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace _legacy{
namespace media{

Void SoundChannel_obj::__construct(Dynamic handle,hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::openfl::media::SoundTransform soundTransform)
{
HX_STACK_FRAME("openfl._legacy.media.SoundChannel","new",0xd9ab3474,"openfl._legacy.media.SoundChannel.new","openfl/_legacy/media/SoundChannel.hx",26,0xd2a8ca59)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(__o_startTime,"startTime")
HX_STACK_ARG(__o_loops,"loops")
HX_STACK_ARG(soundTransform,"soundTransform")
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
{
	HX_STACK_LINE(55)
	this->__addedToThread = false;
	HX_STACK_LINE(54)
	this->__thread_completed = false;
	HX_STACK_LINE(44)
	this->__dynamicBytes = null();
	HX_STACK_LINE(40)
	this->__pitch = ((Float)1);
	HX_STACK_LINE(62)
	super::__construct(null());
	HX_STACK_LINE(64)
	bool tmp = (soundTransform != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	if ((tmp)){
		HX_STACK_LINE(66)
		::openfl::media::SoundTransform tmp1 = soundTransform->clone();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		this->__transform = tmp1;
	}
	HX_STACK_LINE(70)
	bool tmp1 = (handle != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(72)
		Dynamic tmp2 = handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		Float tmp3 = startTime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		int tmp4 = loops;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		::openfl::media::SoundTransform tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		Dynamic tmp6 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_create(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		this->__handle = tmp6;
	}
	HX_STACK_LINE(76)
	Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	if ((tmp3)){
		HX_STACK_LINE(78)
		::openfl::_legacy::media::SoundChannel_obj::__incompleteList->push(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(Dynamic handle,hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::openfl::media::SoundTransform soundTransform)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(handle,__o_startTime,__o_loops,soundTransform);
	return _result_;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void SoundChannel_obj::stop( ){
{
		HX_STACK_FRAME("openfl._legacy.media.SoundChannel","stop",0x9f7c1d6e,"openfl._legacy.media.SoundChannel.stop","openfl/_legacy/media/SoundChannel.hx",106,0xd2a8ca59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		::openfl::_legacy::media::Sound tmp = this->__soundInstance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		if ((tmp1)){
			HX_STACK_LINE(110)
			::openfl::_legacy::media::Sound tmp3 = this->__soundInstance;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			::openfl::_legacy::media::Sound tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			::openfl::_legacy::media::InternalAudioType tmp5 = tmp4->__audioType;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			tmp2 = (tmp5 == ::openfl::_legacy::media::InternalAudioType_obj::MUSIC);
		}
		else{
			HX_STACK_LINE(110)
			tmp2 = false;
		}
		HX_STACK_LINE(110)
		if ((tmp2)){
			HX_STACK_LINE(112)
			::openfl::_legacy::media::AudioThreadState tmp3 = ::openfl::_legacy::media::SoundChannel_obj::__audioState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			if ((tmp4)){
				HX_STACK_LINE(113)
				::openfl::_legacy::media::AudioThreadState tmp5 = ::openfl::_legacy::media::SoundChannel_obj::__audioState;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(113)
				tmp5->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(120)
		Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_stop(tmp3);
		HX_STACK_LINE(121)
		this->__handle = null();
		HX_STACK_LINE(122)
		this->__soundInstance = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

bool SoundChannel_obj::__checkComplete( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__checkComplete",0x93bbc895,"openfl._legacy.media.SoundChannel.__checkComplete","openfl/_legacy/media/SoundChannel.hx",126,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	if ((tmp1)){
		HX_STACK_LINE(130)
		::openfl::_legacy::events::EventDispatcher tmp2 = this->__dataProvider;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		if ((tmp3)){
			HX_STACK_LINE(130)
			Dynamic tmp5 = this->__handle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(130)
			tmp4 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_needs_data(tmp7);
		}
		else{
			HX_STACK_LINE(130)
			tmp4 = false;
		}
		HX_STACK_LINE(130)
		if ((tmp4)){
			HX_STACK_LINE(132)
			::openfl::events::SampleDataEvent tmp5 = ::openfl::events::SampleDataEvent_obj::__new(HX_HCSTRING("sampleData","\x74","\x3f","\x0b","\x5e"),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			::openfl::events::SampleDataEvent request = tmp5;		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(133)
			Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			Float tmp7 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_get_data_position(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			request->position = tmp7;
			HX_STACK_LINE(135)
			::openfl::_legacy::utils::ByteArray tmp8 = this->__dynamicBytes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(135)
			int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(135)
			bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(135)
			if ((tmp10)){
				HX_STACK_LINE(137)
				Dynamic tmp11 = this->__handle;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(137)
				::openfl::_legacy::utils::ByteArray tmp12 = this->__dynamicBytes;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(137)
				::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_add_data(tmp11,tmp12);
			}
			HX_STACK_LINE(141)
			::openfl::_legacy::events::EventDispatcher tmp11 = this->__dataProvider;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(141)
			::openfl::events::SampleDataEvent tmp12 = request;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(141)
			tmp11->dispatchEvent(tmp12);
			HX_STACK_LINE(142)
			this->__dynamicBytes = request->data;
		}
		HX_STACK_LINE(148)
		bool tmp5 = this->__addedToThread;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		if ((tmp6)){
			HX_STACK_LINE(148)
			::openfl::_legacy::media::Sound tmp8 = this->__soundInstance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			::openfl::_legacy::media::Sound tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(148)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(148)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(148)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(148)
			if ((tmp12)){
				HX_STACK_LINE(148)
				::openfl::_legacy::media::Sound tmp13 = this->__soundInstance;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(148)
				::openfl::_legacy::media::Sound tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(148)
				::openfl::_legacy::media::Sound tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(148)
				::openfl::_legacy::media::InternalAudioType tmp16 = tmp15->__audioType;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				tmp7 = (tmp16 == ::openfl::_legacy::media::InternalAudioType_obj::MUSIC);
			}
			else{
				HX_STACK_LINE(148)
				tmp7 = false;
			}
		}
		else{
			HX_STACK_LINE(148)
			tmp7 = true;
		}
		HX_STACK_LINE(148)
		if ((tmp7)){
			HX_STACK_LINE(150)
			::openfl::_legacy::media::AudioThreadState tmp8 = ::openfl::_legacy::media::SoundChannel_obj::__audioState;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			if ((tmp9)){
				HX_STACK_LINE(152)
				::openfl::_legacy::media::AudioThreadState tmp10 = ::openfl::_legacy::media::AudioThreadState_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				::openfl::_legacy::media::SoundChannel_obj::__audioState = tmp10;
				HX_STACK_LINE(154)
				::openfl::_legacy::media::SoundChannel_obj::__audioThreadRunning = true;
				HX_STACK_LINE(155)
				::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle = false;
				HX_STACK_LINE(157)
				::cpp::vm::Thread tmp11 = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(157)
				::openfl::_legacy::media::AudioThreadState tmp12 = ::openfl::_legacy::media::SoundChannel_obj::__audioState;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(157)
				tmp12->mainThread = tmp11;
				HX_STACK_LINE(158)
				Dynamic tmp13 = ::openfl::_legacy::media::SoundChannel_obj::__checkCompleteBackgroundThread_dyn();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(158)
				::cpp::vm::Thread tmp14 = ::cpp::vm::Thread_obj::create(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(158)
				::openfl::_legacy::media::AudioThreadState tmp15 = ::openfl::_legacy::media::SoundChannel_obj::__audioState;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(158)
				tmp15->audioThread = tmp14;
			}
			HX_STACK_LINE(162)
			bool tmp10 = this->__addedToThread;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(162)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(162)
			if ((tmp11)){
				HX_STACK_LINE(164)
				::openfl::_legacy::media::AudioThreadState tmp12 = ::openfl::_legacy::media::SoundChannel_obj::__audioState;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(164)
				tmp12->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(165)
				this->__addedToThread = true;
			}
			HX_STACK_LINE(169)
			bool tmp12 = this->__thread_completed;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(169)
			return tmp12;
		}
		else{
			HX_STACK_LINE(175)
			bool tmp8 = this->__runCheckComplete();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			if ((tmp8)){
				HX_STACK_LINE(177)
				return true;
			}
		}
		HX_STACK_LINE(181)
		return false;
	}
	else{
		HX_STACK_LINE(185)
		return true;
	}
	HX_STACK_LINE(128)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__checkComplete,return )

bool SoundChannel_obj::__runCheckComplete( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__runCheckComplete",0x2cebb8e2,"openfl._legacy.media.SoundChannel.__runCheckComplete","openfl/_legacy/media/SoundChannel.hx",244,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	bool tmp1 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_is_complete(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	if ((tmp1)){
		HX_STACK_LINE(248)
		this->__soundInstance = null();
		HX_STACK_LINE(249)
		this->__handle = null();
		HX_STACK_LINE(251)
		::openfl::_legacy::events::EventDispatcher tmp2 = this->__dataProvider;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		if ((tmp3)){
			HX_STACK_LINE(253)
			(::openfl::_legacy::media::SoundChannel_obj::__dynamicSoundCount)--;
		}
		HX_STACK_LINE(257)
		::String tmp4 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		::openfl::_legacy::events::Event tmp5 = ::openfl::_legacy::events::Event_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		::openfl::_legacy::events::Event completeEvent = tmp5;		HX_STACK_VAR(completeEvent,"completeEvent");
		HX_STACK_LINE(258)
		::openfl::_legacy::events::Event tmp6 = completeEvent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		this->dispatchEvent(tmp6);
		HX_STACK_LINE(260)
		return true;
	}
	HX_STACK_LINE(264)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__runCheckComplete,return )

Float SoundChannel_obj::get_leftPeak( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","get_leftPeak",0xe6d74f3b,"openfl._legacy.media.SoundChannel.get_leftPeak","openfl/_legacy/media/SoundChannel.hx",276,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	Float tmp1 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_get_left(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_leftPeak,return )

Float SoundChannel_obj::get_rightPeak( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","get_rightPeak",0xf5dbcd06,"openfl._legacy.media.SoundChannel.get_rightPeak","openfl/_legacy/media/SoundChannel.hx",277,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	Float tmp1 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_get_right(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_rightPeak,return )

Float SoundChannel_obj::get_pitch( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","get_pitch",0x9cf1c32b,"openfl._legacy.media.SoundChannel.get_pitch","openfl/_legacy/media/SoundChannel.hx",278,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	Float tmp = this->__pitch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_pitch,return )

Float SoundChannel_obj::set_pitch( Float value){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","set_pitch",0x8042af37,"openfl._legacy.media.SoundChannel.set_pitch","openfl/_legacy/media/SoundChannel.hx",279,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(279)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_set_pitch(tmp,tmp1);
	HX_STACK_LINE(279)
	Float tmp2 = this->__pitch = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_pitch,return )

Float SoundChannel_obj::get_position( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","get_position",0x6081ce1e,"openfl._legacy.media.SoundChannel.get_position","openfl/_legacy/media/SoundChannel.hx",280,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	Float tmp1 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_get_position(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","set_position",0x757af192,"openfl._legacy.media.SoundChannel.set_position","openfl/_legacy/media/SoundChannel.hx",281,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(281)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	Float tmp1 = this->get_position();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	Float tmp2 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_set_position(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

::openfl::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","get_soundTransform",0x5ed521d2,"openfl._legacy.media.SoundChannel.get_soundTransform","openfl/_legacy/media/SoundChannel.hx",284,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	::openfl::media::SoundTransform tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	if ((tmp1)){
		HX_STACK_LINE(288)
		::openfl::media::SoundTransform tmp2 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		this->__transform = tmp2;
	}
	HX_STACK_LINE(292)
	::openfl::media::SoundTransform tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(292)
	::openfl::media::SoundTransform tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(292)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

::openfl::media::SoundTransform SoundChannel_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","set_soundTransform",0x3b845446,"openfl._legacy.media.SoundChannel.set_soundTransform","openfl/_legacy/media/SoundChannel.hx",297,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(298)
	::openfl::media::SoundTransform tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	if ((tmp1)){
		HX_STACK_LINE(299)
		::openfl::media::SoundTransform tmp2 = value->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		this->__transform = tmp2;
	}
	else{
		HX_STACK_LINE(302)
		::openfl::media::SoundTransform tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		tmp2->leftToLeft = value->leftToLeft;
		HX_STACK_LINE(303)
		::openfl::media::SoundTransform tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		tmp3->leftToRight = value->leftToRight;
		HX_STACK_LINE(304)
		::openfl::media::SoundTransform tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(304)
		tmp4->pan = value->pan;
		HX_STACK_LINE(305)
		::openfl::media::SoundTransform tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(305)
		tmp5->rightToLeft = value->rightToLeft;
		HX_STACK_LINE(306)
		::openfl::media::SoundTransform tmp6 = this->__transform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		tmp6->rightToRight = value->rightToRight;
		HX_STACK_LINE(307)
		::openfl::media::SoundTransform tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(307)
		tmp7->volume = value->volume;
	}
	HX_STACK_LINE(311)
	Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(311)
	::openfl::media::SoundTransform tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(311)
	::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_set_transform(tmp2,tmp3);
	HX_STACK_LINE(313)
	::openfl::media::SoundTransform tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(313)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

int SoundChannel_obj::__dynamicSoundCount;

Array< ::Dynamic > SoundChannel_obj::__incompleteList;

::openfl::_legacy::media::AudioThreadState SoundChannel_obj::__audioState;

bool SoundChannel_obj::__audioThreadIsIdle;

bool SoundChannel_obj::__audioThreadRunning;

::openfl::_legacy::media::SoundChannel SoundChannel_obj::createDynamic( Dynamic handle,::openfl::media::SoundTransform soundTransform,::openfl::_legacy::events::EventDispatcher dataProvider){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","createDynamic",0x9db53cf7,"openfl._legacy.media.SoundChannel.createDynamic","openfl/_legacy/media/SoundChannel.hx",85,0xd2a8ca59)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(soundTransform,"soundTransform")
	HX_STACK_ARG(dataProvider,"dataProvider")
	HX_STACK_LINE(87)
	::openfl::_legacy::media::SoundChannel tmp = ::openfl::_legacy::media::SoundChannel_obj::__new(null(),(int)0,(int)0,soundTransform);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::openfl::_legacy::media::SoundChannel result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(89)
	result->__dataProvider = dataProvider;
	HX_STACK_LINE(90)
	result->__handle = handle;
	HX_STACK_LINE(91)
	::openfl::_legacy::media::SoundChannel tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::openfl::_legacy::media::SoundChannel_obj::__incompleteList->push(tmp1);
	HX_STACK_LINE(93)
	(::openfl::_legacy::media::SoundChannel_obj::__dynamicSoundCount)++;
	HX_STACK_LINE(96)
	::openfl::events::SampleDataEvent tmp2 = ::openfl::events::SampleDataEvent_obj::__new(HX_HCSTRING("sampleData","\x74","\x3f","\x0b","\x5e"),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	::openfl::events::SampleDataEvent request = tmp2;		HX_STACK_VAR(request,"request");
	HX_STACK_LINE(97)
	Dynamic tmp3 = handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Float tmp4 = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_get_data_position(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	request->position = tmp4;
	HX_STACK_LINE(98)
	::openfl::events::SampleDataEvent tmp5 = request;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	dataProvider->dispatchEvent(tmp5);
	HX_STACK_LINE(99)
	result->__dynamicBytes = request->data;
	HX_STACK_LINE(101)
	::openfl::_legacy::media::SoundChannel tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(101)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SoundChannel_obj,createDynamic,return )

Void SoundChannel_obj::__checkCompleteBackgroundThread( ){
{
		HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__checkCompleteBackgroundThread",0x2100080d,"openfl._legacy.media.SoundChannel.__checkCompleteBackgroundThread","openfl/_legacy/media/SoundChannel.hx",194,0xd2a8ca59)
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			bool tmp = ::openfl::_legacy::media::SoundChannel_obj::__audioThreadRunning;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(196)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(196)
			if ((tmp1)){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(198)
			bool tmp2 = ::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			if ((tmp3)){
				HX_STACK_LINE(200)
				::openfl::_legacy::media::AudioThreadState tmp4 = ::openfl::_legacy::media::SoundChannel_obj::__audioState;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				tmp4->updateComplete();
				HX_STACK_LINE(202)
				::Sys_obj::sleep(((Float)0.01));
			}
			else{
				HX_STACK_LINE(206)
				::Sys_obj::sleep(((Float)0.2));
			}
		}
		HX_STACK_LINE(212)
		::openfl::_legacy::media::SoundChannel_obj::__audioThreadRunning = false;
		HX_STACK_LINE(213)
		::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__checkCompleteBackgroundThread,(void))

bool SoundChannel_obj::__completePending( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__completePending",0x2ceb4892,"openfl._legacy.media.SoundChannel.__completePending","openfl/_legacy/media/SoundChannel.hx",220,0xd2a8ca59)
	HX_STACK_LINE(222)
	int tmp = ::openfl::_legacy::media::SoundChannel_obj::__incompleteList->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__completePending,return )

Void SoundChannel_obj::__pollComplete( ){
{
		HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__pollComplete",0x2d7d41a4,"openfl._legacy.media.SoundChannel.__pollComplete","openfl/_legacy/media/SoundChannel.hx",227,0xd2a8ca59)
		HX_STACK_LINE(229)
		int tmp = ::openfl::_legacy::media::SoundChannel_obj::__incompleteList->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		int i = tmp;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(231)
		while((true)){
			HX_STACK_LINE(231)
			int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			if ((tmp3)){
				HX_STACK_LINE(231)
				break;
			}
			HX_STACK_LINE(233)
			::openfl::_legacy::media::SoundChannel tmp4 = ::openfl::_legacy::media::SoundChannel_obj::__incompleteList->__get(i).StaticCast< ::openfl::_legacy::media::SoundChannel >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			bool tmp5 = tmp4->__checkComplete();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			if ((tmp5)){
				HX_STACK_LINE(235)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				::openfl::_legacy::media::SoundChannel_obj::__incompleteList->splice(tmp6,(int)1);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__pollComplete,(void))

Dynamic SoundChannel_obj::lime_sound_channel_is_complete;

Dynamic SoundChannel_obj::lime_sound_channel_get_left;

Dynamic SoundChannel_obj::lime_sound_channel_get_right;

Dynamic SoundChannel_obj::lime_sound_channel_get_position;

Dynamic SoundChannel_obj::lime_sound_channel_set_position;

Dynamic SoundChannel_obj::lime_sound_channel_get_data_position;

Dynamic SoundChannel_obj::lime_sound_channel_stop;

Dynamic SoundChannel_obj::lime_sound_channel_create;

Dynamic SoundChannel_obj::lime_sound_channel_set_transform;

Dynamic SoundChannel_obj::lime_sound_channel_set_pitch;

Dynamic SoundChannel_obj::lime_sound_channel_needs_data;

Dynamic SoundChannel_obj::lime_sound_channel_add_data;


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__pitch,"__pitch");
	HX_MARK_MEMBER_NAME(__soundInstance,"__soundInstance");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__dynamicBytes,"__dynamicBytes");
	HX_MARK_MEMBER_NAME(__thread_completed,"__thread_completed");
	HX_MARK_MEMBER_NAME(__addedToThread,"__addedToThread");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__pitch,"__pitch");
	HX_VISIT_MEMBER_NAME(__soundInstance,"__soundInstance");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__dynamicBytes,"__dynamicBytes");
	HX_VISIT_MEMBER_NAME(__thread_completed,"__thread_completed");
	HX_VISIT_MEMBER_NAME(__addedToThread,"__addedToThread");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == hx::paccAlways) return get_pitch(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__pitch") ) { return __pitch; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return inCallProp == hx::paccAlways ? get_leftPeak() : leftPeak; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return inCallProp == hx::paccAlways ? get_rightPeak() : rightPeak; }
		if (HX_FIELD_EQ(inName,"get_pitch") ) { return get_pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return set_pitch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_leftPeak") ) { return get_leftPeak_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_rightPeak") ) { return get_rightPeak_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return get_soundTransform(); }
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { return __dataProvider; }
		if (HX_FIELD_EQ(inName,"__dynamicBytes") ) { return __dynamicBytes; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundInstance") ) { return __soundInstance; }
		if (HX_FIELD_EQ(inName,"__addedToThread") ) { return __addedToThread; }
		if (HX_FIELD_EQ(inName,"__checkComplete") ) { return __checkComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__thread_completed") ) { return __thread_completed; }
		if (HX_FIELD_EQ(inName,"__runCheckComplete") ) { return __runCheckComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SoundChannel_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__audioState") ) { outValue = __audioState; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createDynamic") ) { outValue = createDynamic_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pollComplete") ) { outValue = __pollComplete_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { outValue = __incompleteList; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__completePending") ) { outValue = __completePending_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { outValue = __dynamicSoundCount; return true;  }
		if (HX_FIELD_EQ(inName,"__audioThreadIsIdle") ) { outValue = __audioThreadIsIdle; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__audioThreadRunning") ) { outValue = __audioThreadRunning; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_stop") ) { outValue = lime_sound_channel_stop; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create") ) { outValue = lime_sound_channel_create; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_left") ) { outValue = lime_sound_channel_get_left; return true;  }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_add_data") ) { outValue = lime_sound_channel_add_data; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_right") ) { outValue = lime_sound_channel_get_right; return true;  }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_pitch") ) { outValue = lime_sound_channel_set_pitch; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_needs_data") ) { outValue = lime_sound_channel_needs_data; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_is_complete") ) { outValue = lime_sound_channel_is_complete; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__checkCompleteBackgroundThread") ) { outValue = __checkCompleteBackgroundThread_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_position") ) { outValue = lime_sound_channel_get_position; return true;  }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_position") ) { outValue = lime_sound_channel_set_position; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_transform") ) { outValue = lime_sound_channel_set_transform; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_data_position") ) { outValue = lime_sound_channel_get_data_position; return true;  }
	}
	return false;
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == hx::paccAlways) return set_pitch(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__pitch") ) { __pitch=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return set_soundTransform(inValue); }
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { __dataProvider=inValue.Cast< ::openfl::_legacy::events::EventDispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dynamicBytes") ) { __dynamicBytes=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundInstance") ) { __soundInstance=inValue.Cast< ::openfl::_legacy::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__addedToThread") ) { __addedToThread=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__thread_completed") ) { __thread_completed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SoundChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__audioState") ) { __audioState=ioValue.Cast< ::openfl::_legacy::media::AudioThreadState >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { __incompleteList=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { __dynamicSoundCount=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"__audioThreadIsIdle") ) { __audioThreadIsIdle=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__audioThreadRunning") ) { __audioThreadRunning=ioValue.Cast< bool >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_stop") ) { lime_sound_channel_stop=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create") ) { lime_sound_channel_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_left") ) { lime_sound_channel_get_left=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_add_data") ) { lime_sound_channel_add_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_right") ) { lime_sound_channel_get_right=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_pitch") ) { lime_sound_channel_set_pitch=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_needs_data") ) { lime_sound_channel_needs_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_is_complete") ) { lime_sound_channel_is_complete=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_position") ) { lime_sound_channel_get_position=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_position") ) { lime_sound_channel_set_position=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_set_transform") ) { lime_sound_channel_set_transform=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_data_position") ) { lime_sound_channel_get_data_position=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"));
	outFields->push(HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"));
	outFields->push(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("__dataProvider","\x9b","\xc0","\xf0","\xaf"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__pitch","\xa0","\x14","\xff","\x2c"));
	outFields->push(HX_HCSTRING("__soundInstance","\x64","\x88","\xb1","\x7e"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__dynamicBytes","\x8c","\xcf","\x02","\x95"));
	outFields->push(HX_HCSTRING("__thread_completed","\xb6","\x4b","\x02","\x55"));
	outFields->push(HX_HCSTRING("__addedToThread","\x65","\xac","\xa2","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5")},
	{hx::fsObject /*::openfl::_legacy::events::EventDispatcher*/ ,(int)offsetof(SoundChannel_obj,__dataProvider),HX_HCSTRING("__dataProvider","\x9b","\xc0","\xf0","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundChannel_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,__pitch),HX_HCSTRING("__pitch","\xa0","\x14","\xff","\x2c")},
	{hx::fsObject /*::openfl::_legacy::media::Sound*/ ,(int)offsetof(SoundChannel_obj,__soundInstance),HX_HCSTRING("__soundInstance","\x64","\x88","\xb1","\x7e")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(SoundChannel_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(SoundChannel_obj,__dynamicBytes),HX_HCSTRING("__dynamicBytes","\x8c","\xcf","\x02","\x95")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,__thread_completed),HX_HCSTRING("__thread_completed","\xb6","\x4b","\x02","\x55")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,__addedToThread),HX_HCSTRING("__addedToThread","\x65","\xac","\xa2","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SoundChannel_obj::__dynamicSoundCount,HX_HCSTRING("__dynamicSoundCount","\xbf","\x1a","\x93","\xf2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &SoundChannel_obj::__incompleteList,HX_HCSTRING("__incompleteList","\x3c","\x44","\x82","\xc1")},
	{hx::fsObject /*::openfl::_legacy::media::AudioThreadState*/ ,(void *) &SoundChannel_obj::__audioState,HX_HCSTRING("__audioState","\x7b","\x20","\xf8","\x5b")},
	{hx::fsBool,(void *) &SoundChannel_obj::__audioThreadIsIdle,HX_HCSTRING("__audioThreadIsIdle","\x5e","\x65","\xef","\xed")},
	{hx::fsBool,(void *) &SoundChannel_obj::__audioThreadRunning,HX_HCSTRING("__audioThreadRunning","\xbf","\x8c","\xee","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_is_complete,HX_HCSTRING("lime_sound_channel_is_complete","\x98","\xc6","\xab","\xb3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_get_left,HX_HCSTRING("lime_sound_channel_get_left","\xa6","\xbd","\xed","\x02")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_get_right,HX_HCSTRING("lime_sound_channel_get_right","\x5d","\x41","\x25","\x04")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_get_position,HX_HCSTRING("lime_sound_channel_get_position","\xc8","\x11","\x6d","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_set_position,HX_HCSTRING("lime_sound_channel_set_position","\x3c","\x35","\x66","\x91")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_get_data_position,HX_HCSTRING("lime_sound_channel_get_data_position","\x1f","\x4b","\x6e","\x06")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_stop,HX_HCSTRING("lime_sound_channel_stop","\x18","\xa7","\xe6","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_create,HX_HCSTRING("lime_sound_channel_create","\x92","\x8f","\x06","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_set_transform,HX_HCSTRING("lime_sound_channel_set_transform","\x79","\x99","\x49","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_set_pitch,HX_HCSTRING("lime_sound_channel_set_pitch","\x4d","\xdd","\xb2","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_needs_data,HX_HCSTRING("lime_sound_channel_needs_data","\x22","\x75","\xcc","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::lime_sound_channel_add_data,HX_HCSTRING("lime_sound_channel_add_data","\x5e","\x22","\x27","\x17")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"),
	HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"),
	HX_HCSTRING("__dataProvider","\x9b","\xc0","\xf0","\xaf"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__pitch","\xa0","\x14","\xff","\x2c"),
	HX_HCSTRING("__soundInstance","\x64","\x88","\xb1","\x7e"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__dynamicBytes","\x8c","\xcf","\x02","\x95"),
	HX_HCSTRING("__thread_completed","\xb6","\x4b","\x02","\x55"),
	HX_HCSTRING("__addedToThread","\x65","\xac","\xa2","\xce"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__checkComplete","\x81","\x96","\xd4","\xef"),
	HX_HCSTRING("__runCheckComplete","\x76","\x66","\x8f","\x8c"),
	HX_HCSTRING("get_leftPeak","\xcf","\xd5","\x69","\x06"),
	HX_HCSTRING("get_rightPeak","\xf2","\x07","\x7f","\x76"),
	HX_HCSTRING("get_pitch","\x17","\x18","\x4a","\x06"),
	HX_HCSTRING("set_pitch","\x23","\x04","\x9b","\xe9"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__audioState,"__audioState");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__audioThreadIsIdle,"__audioThreadIsIdle");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__audioThreadRunning,"__audioThreadRunning");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_is_complete,"lime_sound_channel_is_complete");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_left,"lime_sound_channel_get_left");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_right,"lime_sound_channel_get_right");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_position,"lime_sound_channel_get_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_position,"lime_sound_channel_set_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_data_position,"lime_sound_channel_get_data_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_stop,"lime_sound_channel_stop");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_create,"lime_sound_channel_create");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_transform,"lime_sound_channel_set_transform");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_pitch,"lime_sound_channel_set_pitch");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_needs_data,"lime_sound_channel_needs_data");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_add_data,"lime_sound_channel_add_data");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__audioState,"__audioState");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__audioThreadIsIdle,"__audioThreadIsIdle");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__audioThreadRunning,"__audioThreadRunning");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_is_complete,"lime_sound_channel_is_complete");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_left,"lime_sound_channel_get_left");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_right,"lime_sound_channel_get_right");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_position,"lime_sound_channel_get_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_position,"lime_sound_channel_set_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_data_position,"lime_sound_channel_get_data_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_stop,"lime_sound_channel_stop");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_create,"lime_sound_channel_create");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_transform,"lime_sound_channel_set_transform");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_set_pitch,"lime_sound_channel_set_pitch");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_needs_data,"lime_sound_channel_needs_data");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_add_data,"lime_sound_channel_add_data");
};

#endif

hx::Class SoundChannel_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__dynamicSoundCount","\xbf","\x1a","\x93","\xf2"),
	HX_HCSTRING("__incompleteList","\x3c","\x44","\x82","\xc1"),
	HX_HCSTRING("__audioState","\x7b","\x20","\xf8","\x5b"),
	HX_HCSTRING("__audioThreadIsIdle","\x5e","\x65","\xef","\xed"),
	HX_HCSTRING("__audioThreadRunning","\xbf","\x8c","\xee","\xda"),
	HX_HCSTRING("createDynamic","\xe3","\x77","\x58","\x1e"),
	HX_HCSTRING("__checkCompleteBackgroundThread","\xf9","\x6d","\x08","\x25"),
	HX_HCSTRING("__completePending","\x7e","\x69","\x44","\x5b"),
	HX_HCSTRING("__pollComplete","\x38","\x95","\xad","\x3b"),
	HX_HCSTRING("lime_sound_channel_is_complete","\x98","\xc6","\xab","\xb3"),
	HX_HCSTRING("lime_sound_channel_get_left","\xa6","\xbd","\xed","\x02"),
	HX_HCSTRING("lime_sound_channel_get_right","\x5d","\x41","\x25","\x04"),
	HX_HCSTRING("lime_sound_channel_get_position","\xc8","\x11","\x6d","\x7c"),
	HX_HCSTRING("lime_sound_channel_set_position","\x3c","\x35","\x66","\x91"),
	HX_HCSTRING("lime_sound_channel_get_data_position","\x1f","\x4b","\x6e","\x06"),
	HX_HCSTRING("lime_sound_channel_stop","\x18","\xa7","\xe6","\xfb"),
	HX_HCSTRING("lime_sound_channel_create","\x92","\x8f","\x06","\x2d"),
	HX_HCSTRING("lime_sound_channel_set_transform","\x79","\x99","\x49","\x1d"),
	HX_HCSTRING("lime_sound_channel_set_pitch","\x4d","\xdd","\xb2","\xc0"),
	HX_HCSTRING("lime_sound_channel_needs_data","\x22","\x75","\xcc","\xf6"),
	HX_HCSTRING("lime_sound_channel_add_data","\x5e","\x22","\x27","\x17"),
	::String(null()) };

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.media.SoundChannel","\x82","\x2a","\xfb","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SoundChannel_obj::__GetStatic;
	__mClass->mSetStaticField = &SoundChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundChannel_obj >;
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

void SoundChannel_obj::__boot()
{
	__dynamicSoundCount= (int)0;
	__incompleteList= Array_obj< ::Dynamic >::__new();
	__audioThreadIsIdle= true;
	__audioThreadRunning= false;
	lime_sound_channel_is_complete= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_is_complete","\x76","\x5e","\x29","\xaf"),(int)1);
	lime_sound_channel_get_left= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_get_left","\x08","\xaf","\xc3","\x87"),(int)1);
	lime_sound_channel_get_right= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_get_right","\xbb","\x85","\x82","\xba"),(int)1);
	lime_sound_channel_get_position= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_get_position","\x2a","\x5c","\xd4","\x8e"),(int)1);
	lime_sound_channel_set_position= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_set_position","\x9e","\x7f","\xcd","\xa3"),(int)2);
	lime_sound_channel_get_data_position= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_get_data_position","\x7d","\x1d","\x54","\x76"),(int)1);
	lime_sound_channel_stop= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_stop","\x7a","\xbf","\x0b","\x7f"),(int)1);
	lime_sound_channel_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_create","\x74","\x04","\xec","\x95"),(int)4);
	lime_sound_channel_set_transform= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_set_transform","\xd7","\x64","\x43","\x25"),(int)2);
	lime_sound_channel_set_pitch= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_set_pitch","\xab","\x21","\x10","\x77"),(int)2);
	lime_sound_channel_needs_data= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_needs_data","\x04","\x03","\x0b","\xd2"),(int)1);
	lime_sound_channel_add_data= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_add_data","\xc0","\x13","\xfd","\x9b"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace media
