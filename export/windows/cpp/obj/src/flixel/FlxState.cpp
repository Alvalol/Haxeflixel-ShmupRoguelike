#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{

Void FlxState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("flixel.FlxState","new",0x7e613e23,"flixel.FlxState.new","flixel/FlxState.hx",11,0xdf96844c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(48)
	this->_requestSubStateReset = false;
	HX_STACK_LINE(28)
	this->destroySubStates = true;
	HX_STACK_LINE(23)
	this->persistentDraw = true;
	HX_STACK_LINE(17)
	this->persistentUpdate = false;
	HX_STACK_LINE(11)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//FlxState_obj::~FlxState_obj() { }

Dynamic FlxState_obj::__CreateEmpty() { return  new FlxState_obj; }
hx::ObjectPtr< FlxState_obj > FlxState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxState_obj > _result_ = new FlxState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxState_obj > _result_ = new FlxState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxState_obj::create( ){
{
		HX_STACK_FRAME("flixel.FlxState","create",0x1148b519,"flixel.FlxState.create","flixel/FlxState.hx",54,0xdf96844c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

Void FlxState_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxState","draw",0x1022c8e1,"flixel.FlxState.draw","flixel/FlxState.hx",57,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		bool tmp = this->persistentDraw;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(58)
			::flixel::FlxSubState tmp3 = this->subState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			::flixel::FlxSubState tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			tmp2 = (tmp4 == null());
		}
		else{
			HX_STACK_LINE(58)
			tmp2 = true;
		}
		HX_STACK_LINE(58)
		if ((tmp2)){
			HX_STACK_LINE(60)
			this->super::draw();
		}
		HX_STACK_LINE(63)
		::flixel::FlxSubState tmp3 = this->subState;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		if ((tmp4)){
			HX_STACK_LINE(65)
			::flixel::FlxSubState tmp5 = this->subState;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			tmp5->draw();
		}
	}
return null();
}


Void FlxState_obj::openSubState( ::flixel::FlxSubState SubState){
{
		HX_STACK_FRAME("flixel.FlxState","openSubState",0x3d5ea838,"flixel.FlxState.openSubState","flixel/FlxState.hx",70,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(SubState,"SubState")
		HX_STACK_LINE(71)
		this->_requestSubStateReset = true;
		HX_STACK_LINE(72)
		this->_requestedSubState = SubState;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,openSubState,(void))

Void FlxState_obj::closeSubState( ){
{
		HX_STACK_FRAME("flixel.FlxState","closeSubState",0x519577cc,"flixel.FlxState.closeSubState","flixel/FlxState.hx",80,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->_requestSubStateReset = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,closeSubState,(void))

Void FlxState_obj::resetSubState( ){
{
		HX_STACK_FRAME("flixel.FlxState","resetSubState",0x772d18e3,"flixel.FlxState.resetSubState","flixel/FlxState.hx",87,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::flixel::FlxSubState tmp = this->subState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(91)
			::flixel::FlxSubState tmp2 = this->subState;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			Dynamic tmp3 = tmp2->closeCallback;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			if ((tmp4)){
				HX_STACK_LINE(93)
				::flixel::FlxSubState tmp5 = this->subState;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				tmp5->closeCallback();
			}
			HX_STACK_LINE(95)
			bool tmp5 = this->destroySubStates;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			if ((tmp5)){
				HX_STACK_LINE(97)
				::flixel::FlxSubState tmp6 = this->subState;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(97)
				tmp6->destroy();
			}
		}
		HX_STACK_LINE(102)
		::flixel::FlxSubState tmp2 = this->_requestedSubState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		this->subState = tmp2;
		HX_STACK_LINE(103)
		this->_requestedSubState = null();
		HX_STACK_LINE(105)
		::flixel::FlxSubState tmp3 = this->subState;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		if ((tmp4)){
			HX_STACK_LINE(108)
			bool tmp5 = this->persistentUpdate;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			if ((tmp6)){
				HX_STACK_LINE(110)
				::flixel::_system::frontEnds::InputFrontEnd tmp7 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(110)
				tmp7->__Field(HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"), hx::paccDynamic )();
			}
			HX_STACK_LINE(113)
			::flixel::FlxSubState tmp7 = this->subState;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			bool tmp8 = tmp7->_created;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			if ((tmp9)){
				HX_STACK_LINE(115)
				::flixel::FlxSubState tmp10 = this->subState;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(115)
				tmp10->_created = true;
				HX_STACK_LINE(116)
				::flixel::FlxSubState tmp11 = this->subState;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(116)
				tmp11->_parentState = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(117)
				::flixel::FlxSubState tmp12 = this->subState;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(117)
				tmp12->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,resetSubState,(void))

Void FlxState_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxState","destroy",0x2171383d,"flixel.FlxState.destroy","flixel/FlxState.hx",123,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		::flixel::FlxSubState tmp = this->subState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(126)
			::flixel::FlxSubState tmp2 = this->subState;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			tmp2->destroy();
			HX_STACK_LINE(127)
			this->subState = null();
		}
		HX_STACK_LINE(129)
		this->super::destroy();
	}
return null();
}


bool FlxState_obj::switchTo( ::flixel::FlxState nextState){
	HX_STACK_FRAME("flixel.FlxState","switchTo",0x5e95c7ec,"flixel.FlxState.switchTo","flixel/FlxState.hx",140,0xdf96844c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nextState,"nextState")
	HX_STACK_LINE(140)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,switchTo,return )

Void FlxState_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.FlxState","onFocusLost",0x8c2b4d80,"flixel.FlxState.onFocusLost","flixel/FlxState.hx",147,0xdf96844c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

Void FlxState_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.FlxState","onFocus",0x97b2097c,"flixel.FlxState.onFocus","flixel/FlxState.hx",153,0xdf96844c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

Void FlxState_obj::onResize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxState","onResize",0x38e71fd0,"flixel.FlxState.onResize","flixel/FlxState.hx",161,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,onResize,(void))

Void FlxState_obj::tryUpdate( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxState","tryUpdate",0xc75023a7,"flixel.FlxState.tryUpdate","flixel/FlxState.hx",165,0xdf96844c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(166)
		bool tmp = this->persistentUpdate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		if ((tmp1)){
			HX_STACK_LINE(166)
			::flixel::FlxSubState tmp3 = this->subState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			::flixel::FlxSubState tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			tmp2 = (tmp4 == null());
		}
		else{
			HX_STACK_LINE(166)
			tmp2 = true;
		}
		HX_STACK_LINE(166)
		if ((tmp2)){
			HX_STACK_LINE(168)
			Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			this->update(tmp3);
		}
		HX_STACK_LINE(171)
		bool tmp3 = this->_requestSubStateReset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		if ((tmp3)){
			HX_STACK_LINE(173)
			this->_requestSubStateReset = false;
			HX_STACK_LINE(174)
			this->resetSubState();
		}
		else{
			HX_STACK_LINE(176)
			::flixel::FlxSubState tmp4 = this->subState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			if ((tmp5)){
				HX_STACK_LINE(178)
				::flixel::FlxSubState tmp6 = this->subState;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(178)
				Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				tmp6->tryUpdate(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,tryUpdate,(void))

int FlxState_obj::get_bgColor( ){
	HX_STACK_FRAME("flixel.FlxState","get_bgColor",0xc8234a38,"flixel.FlxState.get_bgColor","flixel/FlxState.hx",183,0xdf96844c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	::flixel::_system::frontEnds::CameraFrontEnd tmp = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	int tmp1 = tmp->__Field(HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

int FlxState_obj::set_bgColor( int Value){
	HX_STACK_FRAME("flixel.FlxState","set_bgColor",0xd2905144,"flixel.FlxState.set_bgColor","flixel/FlxState.hx",188,0xdf96844c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(189)
	::flixel::_system::frontEnds::CameraFrontEnd tmp = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	int tmp2 = tmp->__Field(HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )


FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_MARK_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_MARK_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_MARK_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	HX_VISIT_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_VISIT_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_VISIT_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return get_bgColor(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { return subState; }
		if (HX_FIELD_EQ(inName,"switchTo") ) { return switchTo_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return tryUpdate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openSubState") ) { return openSubState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return closeSubState_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSubState") ) { return resetSubState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { return persistentDraw; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { return persistentUpdate; }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { return destroySubStates; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { return _requestedSubState; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { return _requestSubStateReset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return set_bgColor(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { persistentDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { persistentUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { destroySubStates=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { _requestedSubState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { _requestSubStateReset=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50"));
	outFields->push(HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2"));
	outFields->push(HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9"));
	outFields->push(HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff"));
	outFields->push(HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentUpdate),HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50")},
	{hx::fsBool,(int)offsetof(FlxState_obj,persistentDraw),HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2")},
	{hx::fsBool,(int)offsetof(FlxState_obj,destroySubStates),HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,subState),HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9")},
	{hx::fsObject /*::flixel::FlxSubState*/ ,(int)offsetof(FlxState_obj,_requestedSubState),HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff")},
	{hx::fsBool,(int)offsetof(FlxState_obj,_requestSubStateReset),HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50"),
	HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2"),
	HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e"),
	HX_HCSTRING("subState","\x71","\xcc","\x2a","\xf9"),
	HX_HCSTRING("_requestedSubState","\xc0","\x34","\x35","\xff"),
	HX_HCSTRING("_requestSubStateReset","\xae","\x08","\x1f","\x03"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("openSubState","\x5b","\x66","\x48","\x37"),
	HX_HCSTRING("closeSubState","\x49","\x18","\x32","\x04"),
	HX_HCSTRING("resetSubState","\x60","\xb9","\xc9","\x29"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("switchTo","\x8f","\xf8","\xd6","\x0d"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("tryUpdate","\xa4","\x81","\x19","\x71"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxState","\xb1","\xf0","\x80","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxState_obj >;
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
