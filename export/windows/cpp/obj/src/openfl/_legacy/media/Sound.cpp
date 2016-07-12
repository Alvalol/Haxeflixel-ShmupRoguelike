#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl__legacy_media_InternalAudioType
#include <openfl/_legacy/media/InternalAudioType.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif
namespace openfl{
namespace _legacy{
namespace media{

Void Sound_obj::__construct(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{
HX_STACK_FRAME("openfl._legacy.media.Sound","new",0xac494db3,"openfl._legacy.media.Sound.new","openfl/_legacy/media/Sound.hx",45,0xdb1efaa0)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
HX_STACK_ARG(__o_forcePlayAsMusic,"forcePlayAsMusic")
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(47)
	super::__construct(null());
	HX_STACK_LINE(49)
	bool tmp = forcePlayAsMusic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::openfl::_legacy::media::InternalAudioType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp)){
		HX_STACK_LINE(49)
		tmp1 = ::openfl::_legacy::media::InternalAudioType_obj::MUSIC;
	}
	else{
		HX_STACK_LINE(49)
		tmp1 = ::openfl::_legacy::media::InternalAudioType_obj::SOUND;
	}
	HX_STACK_LINE(49)
	this->__audioType = tmp1;
	HX_STACK_LINE(51)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(52)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(53)
	this->__loading = false;
	HX_STACK_LINE(54)
	this->__dynamicSound = false;
	HX_STACK_LINE(56)
	bool tmp2 = (stream != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(58)
		::openfl::_legacy::net::URLRequest tmp3 = stream;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::openfl::media::SoundLoaderContext tmp4 = context;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		bool tmp5 = forcePlayAsMusic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		this->load(tmp3,tmp4,tmp5);
	}
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(stream,context,__o_forcePlayAsMusic);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Sound_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl._legacy.media.Sound","addEventListener",0xf036769a,"openfl._legacy.media.Sound.addEventListener","openfl/_legacy/media/Sound.hx",65,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(67)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		bool tmp2 = useCapture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		int tmp3 = priority;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		bool tmp4 = useWeakReference;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		this->super::addEventListener(tmp,tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(69)
		bool tmp5 = (type == HX_HCSTRING("sampleData","\x74","\x3f","\x0b","\x5e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		if ((tmp5)){
			HX_STACK_LINE(71)
			Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			if ((tmp7)){
				HX_STACK_LINE(73)
				HX_STACK_DO_THROW(HX_HCSTRING("Can't use dynamic sound once file loaded","\x98","\x42","\xab","\x4b"));
			}
			HX_STACK_LINE(77)
			this->__dynamicSound = true;
			HX_STACK_LINE(78)
			this->__loading = false;
		}
	}
return null();
}


Void Sound_obj::close( ){
{
		HX_STACK_FRAME("openfl._legacy.media.Sound","close",0xfab0cfcb,"openfl._legacy.media.Sound.close","openfl/_legacy/media/Sound.hx",85,0xdb1efaa0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(89)
			Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			::openfl::_legacy::media::Sound_obj::lime_sound_close(tmp2);
		}
		HX_STACK_LINE(93)
		this->__handle = (int)0;
		HX_STACK_LINE(94)
		this->__loading = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::load( ::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_FRAME("openfl._legacy.media.Sound","load",0x128fc573,"openfl._legacy.media.Sound.load","openfl/_legacy/media/Sound.hx",110,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stream,"stream")
	HX_STACK_ARG(context,"context")
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic")
{
		HX_STACK_LINE(112)
		this->bytesLoaded = (int)0;
		HX_STACK_LINE(113)
		this->bytesTotal = (int)0;
		HX_STACK_LINE(115)
		::String tmp = stream->url;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		bool tmp1 = forcePlayAsMusic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		Dynamic tmp2 = ::openfl::_legacy::media::Sound_obj::lime_sound_from_file(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		this->__handle = tmp2;
		HX_STACK_LINE(117)
		Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		if ((tmp4)){
			HX_STACK_LINE(119)
			::String tmp5 = (HX_HCSTRING("Error: Could not load \"","\x42","\x96","\xd0","\xbd") + stream->url);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),119,HX_HCSTRING("openfl._legacy.media.Sound","\x41","\xf8","\x25","\x4a"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			::haxe::Log_obj::trace(tmp6,tmp7);
			HX_STACK_LINE(120)
			::openfl::events::IOErrorEvent tmp8 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(120)
			this->dispatchEvent(tmp8);
		}
		else{
			HX_STACK_LINE(124)
			this->url = stream->url;
			HX_STACK_LINE(125)
			this->__loading = true;
			HX_STACK_LINE(126)
			this->__checkLoading();
			HX_STACK_LINE(127)
			this->__loading = false;
			HX_STACK_LINE(128)
			::String tmp5 = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			::openfl::_legacy::events::Event tmp6 = ::openfl::_legacy::events::Event_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			this->dispatchEvent(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,load,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::openfl::_legacy::utils::ByteArray bytes,int length,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_FRAME("openfl._legacy.media.Sound","loadCompressedDataFromByteArray",0x906313a9,"openfl._legacy.media.Sound.loadCompressedDataFromByteArray","openfl/_legacy/media/Sound.hx",136,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic")
{
		HX_STACK_LINE(138)
		this->bytesLoaded = length;
		HX_STACK_LINE(139)
		this->bytesTotal = length;
		HX_STACK_LINE(141)
		::haxe::io::Bytes tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		tmp = hx::TCast< ::haxe::io::Bytes >::cast(bytes);
		HX_STACK_LINE(141)
		int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		bool tmp2 = forcePlayAsMusic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		Dynamic tmp3 = ::openfl::_legacy::media::Sound_obj::lime_sound_from_data(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		this->__handle = tmp3;
		HX_STACK_LINE(143)
		Dynamic tmp4 = this->__handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		if ((tmp5)){
			HX_STACK_LINE(145)
			::String tmp6 = (HX_HCSTRING("Could not load buffer with length: ","\xb4","\xa8","\x96","\xd0") + length);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			HX_STACK_DO_THROW(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::loadPCMFromByteArray( ::openfl::_legacy::utils::ByteArray bytes,int samples,::String __o_format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
::String format = __o_format.Default(HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"));
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(((Float)44100.0));
	HX_STACK_FRAME("openfl._legacy.media.Sound","loadPCMFromByteArray",0x1758a6c0,"openfl._legacy.media.Sound.loadPCMFromByteArray","openfl/_legacy/media/Sound.hx",152,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(stereo,"stereo")
	HX_STACK_ARG(sampleRate,"sampleRate")
{
		HX_STACK_LINE(154)
		::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		::openfl::_legacy::utils::ByteArray wav = tmp;		HX_STACK_VAR(wav,"wav");
		HX_STACK_LINE(155)
		::String tmp1 = ::openfl::utils::_Endian::Endian_Impl__obj::toString(((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		wav->set_endian(tmp1);
		HX_STACK_LINE(157)
		::String tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		::String _switch_1 = (tmp2);
		if (  ( _switch_1==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
			HX_STACK_LINE(159)
			tmp3 = (int)3;
		}
		else if (  ( _switch_1==HX_HCSTRING("short","\x7c","\x84","\x27","\x7c"))){
			HX_STACK_LINE(160)
			tmp3 = (int)1;
		}
		else  {
			HX_STACK_LINE(161)
			::String tmp4 = (HX_HCSTRING("Unsupported format ","\x7e","\x06","\x66","\xfe") + format);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			HX_STACK_DO_THROW(tmp5);
		}
;
;
		HX_STACK_LINE(157)
		int audioFormat = tmp3;		HX_STACK_VAR(audioFormat,"audioFormat");
		HX_STACK_LINE(165)
		bool tmp4 = stereo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		if ((tmp4)){
			HX_STACK_LINE(165)
			tmp5 = (int)2;
		}
		else{
			HX_STACK_LINE(165)
			tmp5 = (int)1;
		}
		HX_STACK_LINE(165)
		int numChannels = tmp5;		HX_STACK_VAR(numChannels,"numChannels");
		HX_STACK_LINE(166)
		Float tmp6 = sampleRate;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		int sampleRate1 = tmp7;		HX_STACK_VAR(sampleRate1,"sampleRate1");
		HX_STACK_LINE(167)
		::String tmp8 = format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(167)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(167)
		::String _switch_2 = (tmp8);
		if (  ( _switch_2==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
			HX_STACK_LINE(169)
			tmp9 = (int)32;
		}
		else if (  ( _switch_2==HX_HCSTRING("short","\x7c","\x84","\x27","\x7c"))){
			HX_STACK_LINE(170)
			tmp9 = (int)16;
		}
		else  {
			HX_STACK_LINE(171)
			::String tmp10 = (HX_HCSTRING("Unsupported format ","\x7e","\x06","\x66","\xfe") + format);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(171)
			::openfl::errors::Error tmp11 = ::openfl::errors::Error_obj::__new(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			HX_STACK_DO_THROW(tmp11);
		}
;
;
		HX_STACK_LINE(167)
		int bitsPerSample = tmp9;		HX_STACK_VAR(bitsPerSample,"bitsPerSample");
		HX_STACK_LINE(175)
		int tmp10 = (sampleRate1 * numChannels);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		int tmp11 = bitsPerSample;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		Float tmp13 = (Float(tmp12) / Float((int)8));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(175)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(175)
		int byteRate = tmp14;		HX_STACK_VAR(byteRate,"byteRate");
		HX_STACK_LINE(176)
		int tmp15 = (numChannels * bitsPerSample);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(176)
		Float tmp16 = (Float(tmp15) / Float((int)8));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(176)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(176)
		int blockAlign = tmp17;		HX_STACK_VAR(blockAlign,"blockAlign");
		HX_STACK_LINE(177)
		Float tmp18 = (Float(bytes->length) / Float(blockAlign));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(177)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(177)
		int numSamples = tmp19;		HX_STACK_VAR(numSamples,"numSamples");
		HX_STACK_LINE(179)
		wav->writeUTFBytes(HX_HCSTRING("RIFF","\xb7","\x20","\x6b","\x36"));
		HX_STACK_LINE(180)
		int tmp20 = ((int)36 + bytes->length);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(180)
		wav->writeInt(tmp20);
		HX_STACK_LINE(181)
		wav->writeUTFBytes(HX_HCSTRING("WAVE","\xb9","\x2d","\xb3","\x39"));
		HX_STACK_LINE(182)
		wav->writeUTFBytes(HX_HCSTRING("fmt ","\x33","\xde","\xbe","\x43"));
		HX_STACK_LINE(183)
		wav->writeInt((int)16);
		HX_STACK_LINE(184)
		int tmp21 = audioFormat;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(184)
		wav->writeShort(tmp21);
		HX_STACK_LINE(185)
		int tmp22 = numChannels;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(185)
		wav->writeShort(tmp22);
		HX_STACK_LINE(186)
		int tmp23 = sampleRate1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(186)
		wav->writeInt(tmp23);
		HX_STACK_LINE(187)
		int tmp24 = byteRate;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(187)
		wav->writeInt(tmp24);
		HX_STACK_LINE(188)
		int tmp25 = blockAlign;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(188)
		wav->writeShort(tmp25);
		HX_STACK_LINE(189)
		int tmp26 = bitsPerSample;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(189)
		wav->writeShort(tmp26);
		HX_STACK_LINE(190)
		wav->writeUTFBytes(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
		HX_STACK_LINE(191)
		int tmp27 = bytes->length;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(191)
		wav->writeInt(tmp27);
		HX_STACK_LINE(192)
		::openfl::_legacy::utils::ByteArray tmp28 = bytes;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(192)
		int tmp29 = bytes->length;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(192)
		wav->writeBytes(tmp28,(int)0,tmp29);
		HX_STACK_LINE(194)
		wav->position = (int)0;
		HX_STACK_LINE(195)
		::openfl::_legacy::utils::ByteArray tmp30 = wav;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(195)
		int tmp31 = wav->length;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(195)
		this->loadCompressedDataFromByteArray(tmp30,tmp31,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

::openfl::_legacy::media::SoundChannel Sound_obj::play( hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::openfl::media::SoundTransform soundTransform){
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
	HX_STACK_FRAME("openfl._legacy.media.Sound","play",0x15325941,"openfl._legacy.media.Sound.play","openfl/_legacy/media/Sound.hx",200,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startTime,"startTime")
	HX_STACK_ARG(loops,"loops")
	HX_STACK_ARG(soundTransform,"soundTransform")
{
		HX_STACK_LINE(202)
		this->__checkLoading();
		HX_STACK_LINE(204)
		bool tmp = this->__dynamicSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		if ((tmp)){
			HX_STACK_LINE(206)
			::openfl::events::SampleDataEvent tmp1 = ::openfl::events::SampleDataEvent_obj::__new(HX_HCSTRING("sampleData","\x74","\x3f","\x0b","\x5e"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(206)
			::openfl::events::SampleDataEvent request = tmp1;		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(207)
			::openfl::events::SampleDataEvent tmp2 = request;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			this->dispatchEvent(tmp2);
			HX_STACK_LINE(209)
			int tmp3 = request->data->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(209)
			bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			if ((tmp4)){
				HX_STACK_LINE(211)
				::openfl::_legacy::utils::ByteArray tmp5 = request->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(211)
				::openfl::media::SoundTransform tmp6 = soundTransform;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(211)
				Dynamic tmp7 = ::openfl::_legacy::media::Sound_obj::lime_sound_channel_create_dynamic(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(211)
				this->__handle = tmp7;
			}
			HX_STACK_LINE(215)
			Dynamic tmp5 = this->__handle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(215)
			if ((tmp6)){
				HX_STACK_LINE(217)
				::openfl::_legacy::media::SoundChannel tmp7 = ::openfl::_legacy::media::SoundChannel_obj::__new(null(),startTime,loops,soundTransform);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(217)
				::openfl::_legacy::media::SoundChannel channel = tmp7;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(218)
				channel->__soundInstance = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(220)
				::openfl::_legacy::media::SoundChannel tmp8 = channel;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(220)
				return tmp8;
			}
			HX_STACK_LINE(224)
			Dynamic tmp7 = this->__handle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			::openfl::media::SoundTransform tmp8 = soundTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			::openfl::_legacy::media::SoundChannel tmp9 = ::openfl::_legacy::media::SoundChannel_obj::createDynamic(tmp7,tmp8,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			::openfl::_legacy::media::SoundChannel result = tmp9;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(225)
			this->__handle = null();
			HX_STACK_LINE(226)
			::openfl::_legacy::media::SoundChannel tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(226)
			return tmp10;
		}
		else{
			HX_STACK_LINE(230)
			Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			if ((tmp3)){
				HX_STACK_LINE(230)
				tmp4 = this->__loading;
			}
			else{
				HX_STACK_LINE(230)
				tmp4 = true;
			}
			HX_STACK_LINE(230)
			if ((tmp4)){
				HX_STACK_LINE(232)
				::openfl::_legacy::media::SoundChannel tmp5 = ::openfl::_legacy::media::SoundChannel_obj::__new(null(),startTime,loops,soundTransform);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				::openfl::_legacy::media::SoundChannel channel = tmp5;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(233)
				channel->__soundInstance = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(235)
				::openfl::_legacy::media::SoundChannel tmp6 = channel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				return tmp6;
			}
			HX_STACK_LINE(239)
			Dynamic tmp5 = this->__handle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			Float tmp6 = startTime;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			int tmp7 = loops;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			::openfl::media::SoundTransform tmp8 = soundTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			::openfl::_legacy::media::SoundChannel tmp9 = ::openfl::_legacy::media::SoundChannel_obj::__new(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(239)
			::openfl::_legacy::media::SoundChannel channel = tmp9;		HX_STACK_VAR(channel,"channel");
			HX_STACK_LINE(240)
			channel->__soundInstance = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(242)
			::openfl::_legacy::media::SoundChannel tmp10 = channel;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(242)
			return tmp10;
		}
		HX_STACK_LINE(204)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

Void Sound_obj::__checkLoading( ){
{
		HX_STACK_FRAME("openfl._legacy.media.Sound","__checkLoading",0xfefc3741,"openfl._legacy.media.Sound.__checkLoading","openfl/_legacy/media/Sound.hx",249,0xdb1efaa0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		bool tmp = this->__dynamicSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		if ((tmp3)){
			HX_STACK_LINE(251)
			tmp4 = this->__loading;
		}
		else{
			HX_STACK_LINE(251)
			tmp4 = false;
		}
		HX_STACK_LINE(251)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		if ((tmp4)){
			HX_STACK_LINE(251)
			Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(251)
			tmp5 = false;
		}
		HX_STACK_LINE(251)
		if ((tmp5)){
			HX_STACK_LINE(253)
			Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(253)
			Dynamic tmp7 = ::openfl::_legacy::media::Sound_obj::lime_sound_get_status(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(253)
			Dynamic status = tmp7;		HX_STACK_VAR(status,"status");
			HX_STACK_LINE(255)
			bool tmp8 = (status == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(255)
			if ((tmp8)){
				HX_STACK_LINE(257)
				HX_STACK_DO_THROW(HX_HCSTRING("Could not get sound status","\x79","\x41","\xe1","\xc3"));
			}
			HX_STACK_LINE(261)
			this->bytesLoaded = status->__Field(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"), hx::paccDynamic );
			HX_STACK_LINE(262)
			this->bytesTotal = status->__Field(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"), hx::paccDynamic );
			HX_STACK_LINE(263)
			int tmp9 = this->bytesLoaded;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(263)
			int tmp10 = this->bytesTotal;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(263)
			bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(263)
			this->__loading = tmp11;
			HX_STACK_LINE(265)
			bool tmp12 = (status->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(265)
			if ((tmp12)){
				HX_STACK_LINE(267)
				HX_STACK_DO_THROW(status->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic ));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,__checkLoading,(void))

Void Sound_obj::__onError( ::String msg){
{
		HX_STACK_FRAME("openfl._legacy.media.Sound","__onError",0x92dc789c,"openfl._legacy.media.Sound.__onError","openfl/_legacy/media/Sound.hx",276,0xdb1efaa0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(278)
		::openfl::events::IOErrorEvent tmp = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),true,false,msg,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		this->dispatchEvent(tmp);
		HX_STACK_LINE(279)
		this->__handle = null();
		HX_STACK_LINE(280)
		this->__loading = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,__onError,(void))

::openfl::media::ID3Info Sound_obj::get_id3( ){
	HX_STACK_FRAME("openfl._legacy.media.Sound","get_id3",0x51feef62,"openfl._legacy.media.Sound.get_id3","openfl/_legacy/media/Sound.hx",292,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	this->__checkLoading();
	HX_STACK_LINE(296)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	if ((tmp2)){
		HX_STACK_LINE(296)
		tmp3 = this->__loading;
	}
	else{
		HX_STACK_LINE(296)
		tmp3 = true;
	}
	HX_STACK_LINE(296)
	if ((tmp3)){
		HX_STACK_LINE(298)
		::openfl::media::ID3Info tmp4 = ::openfl::media::ID3Info_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		return tmp4;
	}
	HX_STACK_LINE(302)
	::openfl::media::ID3Info tmp4 = ::openfl::media::ID3Info_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(302)
	::openfl::media::ID3Info id3 = tmp4;		HX_STACK_VAR(id3,"id3");
	HX_STACK_LINE(303)
	Dynamic tmp5 = this->__handle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(303)
	::openfl::media::ID3Info tmp6 = id3;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(303)
	::openfl::_legacy::media::Sound_obj::lime_sound_get_id3(tmp5,tmp6);
	HX_STACK_LINE(304)
	::openfl::media::ID3Info tmp7 = id3;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(304)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

bool Sound_obj::get_isBuffering( ){
	HX_STACK_FRAME("openfl._legacy.media.Sound","get_isBuffering",0x33178c02,"openfl._legacy.media.Sound.get_isBuffering","openfl/_legacy/media/Sound.hx",309,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	this->__checkLoading();
	HX_STACK_LINE(312)
	bool tmp = this->__loading;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	if ((tmp)){
		HX_STACK_LINE(312)
		Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		tmp1 = (tmp3 == null());
	}
	else{
		HX_STACK_LINE(312)
		tmp1 = false;
	}
	HX_STACK_LINE(312)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_isBuffering,return )

Float Sound_obj::get_length( ){
	HX_STACK_FRAME("openfl._legacy.media.Sound","get_length",0xa94e27bc,"openfl._legacy.media.Sound.get_length","openfl/_legacy/media/Sound.hx",317,0xdb1efaa0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(319)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(319)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(319)
	if ((tmp2)){
		HX_STACK_LINE(319)
		tmp3 = this->__loading;
	}
	else{
		HX_STACK_LINE(319)
		tmp3 = true;
	}
	HX_STACK_LINE(319)
	if ((tmp3)){
		HX_STACK_LINE(321)
		return (int)0;
	}
	HX_STACK_LINE(325)
	Dynamic tmp4 = this->__handle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(325)
	Float tmp5 = ::openfl::_legacy::media::Sound_obj::lime_sound_get_length(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(325)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

Dynamic Sound_obj::lime_sound_from_file;

Dynamic Sound_obj::lime_sound_from_data;

Dynamic Sound_obj::lime_sound_get_id3;

Dynamic Sound_obj::lime_sound_get_length;

Dynamic Sound_obj::lime_sound_close;

Dynamic Sound_obj::lime_sound_get_status;

Dynamic Sound_obj::lime_sound_channel_create_dynamic;


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(id3,"id3");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(__audioType,"__audioType");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__loading,"__loading");
	HX_MARK_MEMBER_NAME(__dynamicSound,"__dynamicSound");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(id3,"id3");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(__audioType,"__audioType");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__loading,"__loading");
	HX_VISIT_MEMBER_NAME(__dynamicSound,"__dynamicSound");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { return inCallProp == hx::paccAlways ? get_id3() : id3; }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return get_id3_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__loading") ) { return __loading; }
		if (HX_FIELD_EQ(inName,"__onError") ) { return __onError_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return inCallProp == hx::paccAlways ? get_isBuffering() : isBuffering; }
		if (HX_FIELD_EQ(inName,"__audioType") ) { return __audioType; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dynamicSound") ) { return __dynamicSound; }
		if (HX_FIELD_EQ(inName,"__checkLoading") ) { return __checkLoading_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isBuffering") ) { return get_isBuffering_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_sound_close") ) { outValue = lime_sound_close; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_sound_get_id3") ) { outValue = lime_sound_get_id3; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_sound_from_file") ) { outValue = lime_sound_from_file; return true;  }
		if (HX_FIELD_EQ(inName,"lime_sound_from_data") ) { outValue = lime_sound_from_data; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_sound_get_length") ) { outValue = lime_sound_get_length; return true;  }
		if (HX_FIELD_EQ(inName,"lime_sound_get_status") ) { outValue = lime_sound_get_status; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create_dynamic") ) { outValue = lime_sound_channel_create_dynamic; return true;  }
	}
	return false;
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { id3=inValue.Cast< ::openfl::media::ID3Info >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__loading") ) { __loading=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__audioType") ) { __audioType=inValue.Cast< ::openfl::_legacy::media::InternalAudioType >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dynamicSound") ) { __dynamicSound=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_sound_close") ) { lime_sound_close=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_sound_get_id3") ) { lime_sound_get_id3=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_sound_from_file") ) { lime_sound_from_file=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_from_data") ) { lime_sound_from_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_sound_get_length") ) { lime_sound_get_length=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_get_status") ) { lime_sound_get_status=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create_dynamic") ) { lime_sound_channel_create_dynamic=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"));
	outFields->push(HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("__audioType","\x90","\x03","\xeb","\x9a"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__loading","\x5c","\x1f","\x41","\x8a"));
	outFields->push(HX_HCSTRING("__dynamicSound","\xf0","\x53","\x37","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(Sound_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*::openfl::media::ID3Info*/ ,(int)offsetof(Sound_obj,id3),HX_HCSTRING("id3","\xf8","\x03","\x50","\x00")},
	{hx::fsBool,(int)offsetof(Sound_obj,isBuffering),HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90")},
	{hx::fsFloat,(int)offsetof(Sound_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsString,(int)offsetof(Sound_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::openfl::_legacy::media::InternalAudioType*/ ,(int)offsetof(Sound_obj,__audioType),HX_HCSTRING("__audioType","\x90","\x03","\xeb","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sound_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsBool,(int)offsetof(Sound_obj,__loading),HX_HCSTRING("__loading","\x5c","\x1f","\x41","\x8a")},
	{hx::fsBool,(int)offsetof(Sound_obj,__dynamicSound),HX_HCSTRING("__dynamicSound","\xf0","\x53","\x37","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_from_file,HX_HCSTRING("lime_sound_from_file","\x97","\xb9","\x87","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_from_data,HX_HCSTRING("lime_sound_from_data","\x45","\x41","\x2f","\xef")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_get_id3,HX_HCSTRING("lime_sound_get_id3","\xf5","\xfb","\x2c","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_get_length,HX_HCSTRING("lime_sound_get_length","\x09","\xf9","\x99","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_close,HX_HCSTRING("lime_sound_close","\x9e","\x81","\x30","\xb5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_get_status,HX_HCSTRING("lime_sound_get_status","\x55","\x4b","\x8e","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_channel_create_dynamic,HX_HCSTRING("lime_sound_channel_create_dynamic","\x92","\x6a","\x29","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"),
	HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("__audioType","\x90","\x03","\xeb","\x9a"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__loading","\x5c","\x1f","\x41","\x8a"),
	HX_HCSTRING("__dynamicSound","\xf0","\x53","\x37","\x58"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("__checkLoading","\xb4","\x09","\x3a","\x17"),
	HX_HCSTRING("__onError","\x09","\xbb","\xb5","\x8a"),
	HX_HCSTRING("get_id3","\x8f","\xcc","\xc4","\x26"),
	HX_HCSTRING("get_isBuffering","\x2f","\xde","\xf1","\x50"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_from_file,"lime_sound_from_file");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_from_data,"lime_sound_from_data");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_get_id3,"lime_sound_get_id3");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_get_length,"lime_sound_get_length");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_close,"lime_sound_close");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_get_status,"lime_sound_get_status");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_channel_create_dynamic,"lime_sound_channel_create_dynamic");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_from_file,"lime_sound_from_file");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_from_data,"lime_sound_from_data");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_get_id3,"lime_sound_get_id3");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_get_length,"lime_sound_get_length");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_close,"lime_sound_close");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_get_status,"lime_sound_get_status");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_channel_create_dynamic,"lime_sound_channel_create_dynamic");
};

#endif

hx::Class Sound_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_sound_from_file","\x97","\xb9","\x87","\xf0"),
	HX_HCSTRING("lime_sound_from_data","\x45","\x41","\x2f","\xef"),
	HX_HCSTRING("lime_sound_get_id3","\xf5","\xfb","\x2c","\x71"),
	HX_HCSTRING("lime_sound_get_length","\x09","\xf9","\x99","\x0a"),
	HX_HCSTRING("lime_sound_close","\x9e","\x81","\x30","\xb5"),
	HX_HCSTRING("lime_sound_get_status","\x55","\x4b","\x8e","\x71"),
	HX_HCSTRING("lime_sound_channel_create_dynamic","\x92","\x6a","\x29","\x3a"),
	::String(null()) };

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.media.Sound","\x41","\xf8","\x25","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sound_obj::__GetStatic;
	__mClass->mSetStaticField = &Sound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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

void Sound_obj::__boot()
{
	lime_sound_from_file= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_from_file","\xf5","\x6f","\x9a","\x2f"),(int)2);
	lime_sound_from_data= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_from_data","\xa3","\xf7","\x41","\x2e"),(int)3);
	lime_sound_get_id3= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_get_id3","\xd3","\xbe","\x22","\x75"),(int)2);
	lime_sound_get_length= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_get_length","\xeb","\xd4","\xe6","\xfb"),(int)1);
	lime_sound_close= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_close","\xfc","\x30","\x15","\xf3"),(int)1);
	lime_sound_get_status= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_get_status","\x37","\x27","\xdb","\x62"),(int)1);
	lime_sound_channel_create_dynamic= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_sound_channel_create_dynamic","\x74","\x91","\xc1","\x2c"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace media
