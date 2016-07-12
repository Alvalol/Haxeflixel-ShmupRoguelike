#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace ui{

Void FlxButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxButton","new",0x776c1d8e,"flixel.ui.FlxButton.new","flixel/ui/FlxButton.hx",55,0xc64cf442)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(56)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Dynamic tmp2 = OnClick;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		Array< ::Dynamic > _g1 = this->labelOffsets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			if ((tmp4)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			::flixel::math::FlxPoint tmp5 = _g1->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(58)
			++(_g);
			HX_STACK_LINE(60)
			Float tmp6 = (point->x - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			Float tmp7 = (point->y + (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			point->set(tmp6,tmp7);
		}
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		bool tmp3 = (Text != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		if ((tmp3)){
			HX_STACK_LINE(63)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			::flixel::math::FlxPoint tmp5 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(63)
			::flixel::math::FlxPoint tmp9 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(63)
			::String tmp12 = Text;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			::flixel::text::FlxText tmp13 = ::flixel::text::FlxText_obj::__new(tmp7,tmp11,(int)80,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			this->set_label(tmp13);
			HX_STACK_LINE(63)
			::flixel::text::FlxText tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(63)
			tmp14->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
			HX_STACK_LINE(63)
			::flixel::text::FlxText tmp15 = this->label;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(63)
			int tmp16 = this->status;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(63)
			Float tmp17 = this->labelAlphas->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(63)
			tmp15->set_alpha(tmp17);
			HX_STACK_LINE(63)
			::flixel::text::FlxText tmp18 = this->label;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(63)
			tmp18->drawFrame(true);
		}
	}
}
;
	return null();
}

//FlxButton_obj::~FlxButton_obj() { }

Dynamic FlxButton_obj::__CreateEmpty() { return  new FlxButton_obj; }
hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{  hx::ObjectPtr< FlxButton_obj > _result_ = new FlxButton_obj();
	_result_->__construct(__o_X,__o_Y,Text,OnClick);
	return _result_;}

Dynamic FlxButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxButton_obj > _result_ = new FlxButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxButton_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.ui.FlxButton","resetHelpers",0x0b952648,"flixel.ui.FlxButton.resetHelpers","flixel/ui/FlxButton.hx",70,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->super::resetHelpers();
		HX_STACK_LINE(73)
		::flixel::text::FlxText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(75)
			::flixel::text::FlxText tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			::flixel::text::FlxText tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			int tmp6 = tmp5->frameWidth = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			tmp2->set_fieldWidth(tmp6);
			HX_STACK_LINE(76)
			::flixel::text::FlxText tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			::flixel::text::FlxText tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			Dynamic tmp9 = tmp8->_defaultFormat->size;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(76)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(76)
			tmp7->set_size(tmp10);
		}
	}
return null();
}


Void FlxButton_obj::initLabel( ::String Text){
{
		HX_STACK_FRAME("flixel.ui.FlxButton","initLabel",0xd1ec8c72,"flixel.ui.FlxButton.initLabel","flixel/ui/FlxButton.hx",81,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(82)
		bool tmp = (Text != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		if ((tmp)){
			HX_STACK_LINE(84)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			::flixel::math::FlxPoint tmp2 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			::flixel::math::FlxPoint tmp6 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			::String tmp9 = Text;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(84)
			::flixel::text::FlxText tmp10 = ::flixel::text::FlxText_obj::__new(tmp4,tmp8,(int)80,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			this->set_label(tmp10);
			HX_STACK_LINE(85)
			::flixel::text::FlxText tmp11 = this->label;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(85)
			tmp11->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
			HX_STACK_LINE(86)
			::flixel::text::FlxText tmp12 = this->label;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			int tmp13 = this->status;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			Float tmp14 = this->labelAlphas->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(86)
			tmp12->set_alpha(tmp14);
			HX_STACK_LINE(87)
			::flixel::text::FlxText tmp15 = this->label;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			tmp15->drawFrame(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,initLabel,(void))

::String FlxButton_obj::get_text( ){
	HX_STACK_FRAME("flixel.ui.FlxButton","get_text",0x7dcfb448,"flixel.ui.FlxButton.get_text","flixel/ui/FlxButton.hx",92,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	::flixel::text::FlxText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	if ((tmp1)){
		HX_STACK_LINE(93)
		::flixel::text::FlxText tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		tmp2 = tmp3->text;
	}
	else{
		HX_STACK_LINE(93)
		tmp2 = null();
	}
	HX_STACK_LINE(93)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButton_obj,get_text,return )

::String FlxButton_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.ui.FlxButton","set_text",0x2c2d0dbc,"flixel.ui.FlxButton.set_text","flixel/ui/FlxButton.hx",97,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(98)
	::flixel::text::FlxText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	if ((tmp1)){
		HX_STACK_LINE(100)
		bool tmp2 = (Text != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		if ((tmp2)){
			HX_STACK_LINE(100)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			::flixel::math::FlxPoint tmp4 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			::flixel::math::FlxPoint tmp8 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			::String tmp11 = Text;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			::flixel::text::FlxText tmp12 = ::flixel::text::FlxText_obj::__new(tmp6,tmp10,(int)80,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			this->set_label(tmp12);
			HX_STACK_LINE(100)
			::flixel::text::FlxText tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			tmp13->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
			HX_STACK_LINE(100)
			::flixel::text::FlxText tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			int tmp15 = this->status;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			Float tmp16 = this->labelAlphas->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			tmp14->set_alpha(tmp16);
			HX_STACK_LINE(100)
			::flixel::text::FlxText tmp17 = this->label;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(100)
			tmp17->drawFrame(true);
		}
	}
	else{
		HX_STACK_LINE(104)
		::flixel::text::FlxText tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		::String tmp3 = Text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		tmp2->set_text(tmp3);
	}
	HX_STACK_LINE(106)
	::String tmp2 = Text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,set_text,return )

int FlxButton_obj::NORMAL;

int FlxButton_obj::HIGHLIGHT;

int FlxButton_obj::PRESSED;


FlxButton_obj::FlxButton_obj()
{
}

Dynamic FlxButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initLabel") ) { return initLabel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxButton_obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsInt,(void *) &FlxButton_obj::HIGHLIGHT,HX_HCSTRING("HIGHLIGHT","\x14","\xc6","\x58","\xe8")},
	{hx::fsInt,(void *) &FlxButton_obj::PRESSED,HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resetHelpers","\x36","\x89","\x3d","\x32"),
	HX_HCSTRING("initLabel","\xc4","\x28","\x41","\x8b"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#endif

hx::Class FlxButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("HIGHLIGHT","\x14","\xc6","\x58","\xe8"),
	HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9"),
	::String(null()) };

void FlxButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxButton","\x9c","\xfe","\xd6","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxButton_obj >;
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

void FlxButton_obj::__boot()
{
	NORMAL= (int)0;
	HIGHLIGHT= (int)1;
	PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace ui
