#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FlxReplay
#include <flixel/system/replay/FlxReplay.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace _system{
namespace replay{

Void FlxReplay_obj::__construct()
{
HX_STACK_FRAME("flixel.system.replay.FlxReplay","new",0x4c74c9d1,"flixel.system.replay.FlxReplay.new","flixel/system/replay/FlxReplay.hx",52,0xb378fa20)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(53)
	this->seed = (int)0;
	HX_STACK_LINE(54)
	this->frame = (int)0;
	HX_STACK_LINE(55)
	this->frameCount = (int)0;
	HX_STACK_LINE(56)
	this->finished = false;
	HX_STACK_LINE(57)
	this->_frames = null();
	HX_STACK_LINE(58)
	this->_capacity = (int)0;
	HX_STACK_LINE(59)
	this->_marker = (int)0;
}
;
	return null();
}

//FlxReplay_obj::~FlxReplay_obj() { }

Dynamic FlxReplay_obj::__CreateEmpty() { return  new FlxReplay_obj; }
hx::ObjectPtr< FlxReplay_obj > FlxReplay_obj::__new()
{  hx::ObjectPtr< FlxReplay_obj > _result_ = new FlxReplay_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxReplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxReplay_obj > _result_ = new FlxReplay_obj();
	_result_->__construct();
	return _result_;}

Void FlxReplay_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","destroy",0xd75f32eb,"flixel.system.replay.FlxReplay.destroy","flixel/system/replay/FlxReplay.hx",66,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		bool tmp = (this->_frames == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(69)
			return null();
		}
		HX_STACK_LINE(71)
		int tmp1 = this->frameCount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		int i = tmp2;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			bool tmp3 = (i >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			if ((tmp4)){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(74)
			int tmp5 = (i)--;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			::flixel::_system::replay::FrameRecord tmp6 = this->_frames->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			tmp6->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		}
		HX_STACK_LINE(76)
		this->_frames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,destroy,(void))

Void FlxReplay_obj::create( int Seed){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","create",0x64c12a2b,"flixel.system.replay.FlxReplay.create","flixel/system/replay/FlxReplay.hx",85,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Seed,"Seed")
		HX_STACK_LINE(86)
		this->destroy();
		HX_STACK_LINE(87)
		this->init();
		HX_STACK_LINE(88)
		this->seed = Seed;
		HX_STACK_LINE(89)
		this->rewind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxReplay_obj,create,(void))

Void FlxReplay_obj::load( ::String FileContents){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","load",0x9870e395,"flixel.system.replay.FlxReplay.load","flixel/system/replay/FlxReplay.hx",99,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FileContents,"FileContents")
		HX_STACK_LINE(100)
		this->init();
		HX_STACK_LINE(102)
		Array< ::String > lines = FileContents.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(104)
		::String tmp = lines->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		this->seed = tmp1;
		HX_STACK_LINE(106)
		::String line;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(107)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(108)
		int l = lines->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			bool tmp2 = (i < l);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			if ((tmp3)){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(111)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			::String tmp5 = lines->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			line = tmp5;
			HX_STACK_LINE(112)
			bool tmp6 = (line.length > (int)3);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			if ((tmp6)){
				HX_STACK_LINE(114)
				int tmp7 = (this->frameCount)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(114)
				::flixel::_system::replay::FrameRecord tmp8 = ::flixel::_system::replay::FrameRecord_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(114)
				::String tmp9 = line;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(114)
				::flixel::_system::replay::FrameRecord tmp10 = tmp8->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(114)
				hx::IndexRef((this->_frames).mPtr,tmp7) = tmp10;
				HX_STACK_LINE(115)
				int tmp11 = this->frameCount;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(115)
				int tmp12 = this->_capacity;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(115)
				bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(115)
				if ((tmp13)){
					HX_STACK_LINE(117)
					hx::MultEq(this->_capacity,(int)2);
					HX_STACK_LINE(118)
					int tmp14 = this->_capacity;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(118)
					::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,tmp14);
				}
			}
		}
		HX_STACK_LINE(123)
		this->rewind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxReplay_obj,load,(void))

::String FlxReplay_obj::save( ){
	HX_STACK_FRAME("flixel.system.replay.FlxReplay","save",0x9d06d4ac,"flixel.system.replay.FlxReplay.save","flixel/system/replay/FlxReplay.hx",132,0xb378fa20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	int tmp = this->frameCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	if ((tmp1)){
		HX_STACK_LINE(135)
		return null();
	}
	HX_STACK_LINE(137)
	int tmp2 = this->seed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	::String output = tmp3;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(138)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(139)
	while((true)){
		HX_STACK_LINE(139)
		int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		int tmp5 = this->frameCount;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(139)
		if ((tmp7)){
			HX_STACK_LINE(139)
			break;
		}
		HX_STACK_LINE(141)
		int tmp8 = (i)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		::flixel::_system::replay::FrameRecord tmp9 = this->_frames->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		::String tmp10 = tmp9->__Field(HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		::String tmp11 = (tmp10 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		hx::AddEq(output,tmp11);
	}
	HX_STACK_LINE(143)
	::String tmp4 = output;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,save,return )

Void FlxReplay_obj::recordFrame( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","recordFrame",0x1269564d,"flixel.system.replay.FlxReplay.recordFrame","flixel/system/replay/FlxReplay.hx",150,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		bool continueFrame = true;		HX_STACK_VAR(continueFrame,"continueFrame");
		HX_STACK_LINE(154)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		Array< ::Dynamic > keysRecord = tmp->record();		HX_STACK_VAR(keysRecord,"keysRecord");
		HX_STACK_LINE(155)
		bool tmp1 = (keysRecord == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp1)){
			HX_STACK_LINE(155)
			continueFrame = false;
		}
		HX_STACK_LINE(159)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		::flixel::_system::replay::MouseRecord tmp3 = tmp2->record();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		::flixel::_system::replay::MouseRecord mouseRecord = tmp3;		HX_STACK_VAR(mouseRecord,"mouseRecord");
		HX_STACK_LINE(160)
		bool tmp4 = (mouseRecord == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		if ((tmp4)){
			HX_STACK_LINE(160)
			continueFrame = false;
		}
		HX_STACK_LINE(163)
		bool tmp5 = continueFrame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		if ((tmp5)){
			HX_STACK_LINE(165)
			(this->frame)++;
			HX_STACK_LINE(166)
			return null();
		}
		HX_STACK_LINE(169)
		::flixel::_system::replay::FrameRecord tmp6 = ::flixel::_system::replay::FrameRecord_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		int tmp7 = (this->frame)++;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		::flixel::_system::replay::FrameRecord tmp8 = tmp6->__Field(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"), hx::paccDynamic )(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		::flixel::_system::replay::FrameRecord frameRecorded = tmp8;		HX_STACK_VAR(frameRecorded,"frameRecorded");
		HX_STACK_LINE(171)
		frameRecorded->__FieldRef(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")) = mouseRecord;
		HX_STACK_LINE(174)
		frameRecorded->__FieldRef(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")) = keysRecord;
		HX_STACK_LINE(177)
		int tmp9 = (this->frameCount)++;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(177)
		::flixel::_system::replay::FrameRecord tmp10 = frameRecorded;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		hx::IndexRef((this->_frames).mPtr,tmp9) = tmp10;
		HX_STACK_LINE(179)
		int tmp11 = this->frameCount;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(179)
		int tmp12 = this->_capacity;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(179)
		bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(179)
		if ((tmp13)){
			HX_STACK_LINE(181)
			hx::MultEq(this->_capacity,(int)2);
			HX_STACK_LINE(182)
			int tmp14 = this->_capacity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(182)
			::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,recordFrame,(void))

Void FlxReplay_obj::playNextFrame( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","playNextFrame",0x34ad7657,"flixel.system.replay.FlxReplay.playNextFrame","flixel/system/replay/FlxReplay.hx",190,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		::flixel::_system::frontEnds::InputFrontEnd tmp = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		tmp->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )();
		HX_STACK_LINE(193)
		int tmp1 = this->_marker;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		int tmp2 = this->frameCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(195)
			this->finished = true;
			HX_STACK_LINE(196)
			return null();
		}
		HX_STACK_LINE(198)
		int tmp4 = this->_marker;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		::flixel::_system::replay::FrameRecord tmp5 = this->_frames->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		int tmp6 = tmp5->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		int tmp7 = (this->frame)++;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		if ((tmp8)){
			HX_STACK_LINE(200)
			return null();
		}
		HX_STACK_LINE(203)
		int tmp9 = (this->_marker)++;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(203)
		::flixel::_system::replay::FrameRecord tmp10 = this->_frames->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(203)
		::flixel::_system::replay::FrameRecord fr = tmp10;		HX_STACK_VAR(fr,"fr");
		HX_STACK_LINE(206)
		bool tmp11 = (fr->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(206)
		if ((tmp11)){
			HX_STACK_LINE(208)
			::flixel::input::keyboard::FlxKeyboard tmp12 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(208)
			tmp12->playback(fr->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic ));
		}
		HX_STACK_LINE(213)
		bool tmp12 = (fr->__Field(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(213)
		if ((tmp12)){
			HX_STACK_LINE(215)
			::flixel::input::mouse::FlxMouse tmp13 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(215)
			::flixel::_system::replay::MouseRecord tmp14 = fr->__Field(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(215)
			tmp13->playback(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,playNextFrame,(void))

Void FlxReplay_obj::rewind( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","rewind",0xf3d1ed2a,"flixel.system.replay.FlxReplay.rewind","flixel/system/replay/FlxReplay.hx",224,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		this->_marker = (int)0;
		HX_STACK_LINE(226)
		this->frame = (int)0;
		HX_STACK_LINE(227)
		this->finished = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,rewind,(void))

Void FlxReplay_obj::init( ){
{
		HX_STACK_FRAME("flixel.system.replay.FlxReplay","init",0x9674847f,"flixel.system.replay.FlxReplay.init","flixel/system/replay/FlxReplay.hx",234,0xb378fa20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->_capacity = (int)100;
		HX_STACK_LINE(236)
		this->_frames = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(237)
		int tmp = this->_capacity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,tmp);
		HX_STACK_LINE(238)
		this->frameCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,init,(void))


FlxReplay_obj::FlxReplay_obj()
{
}

void FlxReplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxReplay);
	HX_MARK_MEMBER_NAME(seed,"seed");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_END_CLASS();
}

void FlxReplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(seed,"seed");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
}

Dynamic FlxReplay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { return seed; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"rewind") ) { return rewind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { return _capacity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"recordFrame") ) { return recordFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playNextFrame") ) { return playNextFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxReplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { seed=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { _capacity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxReplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("seed","\x71","\x85","\x50","\x4c"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a"));
	outFields->push(HX_HCSTRING("_capacity","\x99","\xf8","\x50","\x0b"));
	outFields->push(HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxReplay_obj,seed),HX_HCSTRING("seed","\x71","\x85","\x50","\x4c")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,frameCount),HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d")},
	{hx::fsBool,(int)offsetof(FlxReplay_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxReplay_obj,_frames),HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,_capacity),HX_HCSTRING("_capacity","\x99","\xf8","\x50","\x0b")},
	{hx::fsInt,(int)offsetof(FlxReplay_obj,_marker),HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("seed","\x71","\x85","\x50","\x4c"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a"),
	HX_HCSTRING("_capacity","\x99","\xf8","\x50","\x0b"),
	HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("recordFrame","\xdc","\x03","\x98","\xba"),
	HX_HCSTRING("playNextFrame","\xa6","\xe5","\x0d","\x48"),
	HX_HCSTRING("rewind","\xfb","\x29","\x20","\x0b"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxReplay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxReplay_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxReplay_obj::__mClass;

void FlxReplay_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.replay.FlxReplay","\x5f","\x8d","\x5d","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxReplay_obj >;
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
} // end namespace replay
