#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_states_HUD
#include <states/HUD.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void HUD_obj::__construct()
{
HX_STACK_FRAME("states.HUD","new",0x38a491dd,"states.HUD.new","states/HUD.hx",19,0x8b6a8ef4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(22)
	::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)4,(int)4,(int)0,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->_textScore = tmp;
	HX_STACK_LINE(23)
	int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	int tmp2 = (tmp1 - (int)35);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::flixel::text::FlxText tmp3 = ::flixel::text::FlxText_obj::__new(tmp2,(int)4,(int)0,null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	this->_currentHealth = tmp3;
	HX_STACK_LINE(25)
	::flixel::text::FlxText tmp4 = this->_textScore;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	this->add(tmp4);
	HX_STACK_LINE(26)
	::flixel::text::FlxText tmp5 = this->_currentHealth;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	this->add(tmp5);
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		bool Recurse = false;		HX_STACK_VAR(Recurse,"Recurse");
		HX_STACK_LINE(29)
		::flixel::group::FlxTypedGroup tmp6 = this->group;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		bool tmp7 = Recurse;		HX_STACK_VAR(tmp7,"tmp7");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 1; }
		Void run(::flixel::text::FlxText member){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","states/HUD.hx",31,0x8b6a8ef4)
			HX_STACK_ARG(member,"member")
			{
				HX_STACK_LINE(31)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					int tmp9 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(31)
					int color = tmp9;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(31)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(31)
							hx::OrEq(color,(int)16711680);
							HX_STACK_LINE(31)
							(int)255;
						}
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(31)
							hx::OrEq(color,(int)65280);
							HX_STACK_LINE(31)
							(int)255;
						}
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(31)
							hx::OrEq(color,(int)255);
							HX_STACK_LINE(31)
							(int)255;
						}
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(31)
							hx::OrEq(color,(int)83886080);
							HX_STACK_LINE(31)
							(int)5;
						}
						HX_STACK_LINE(31)
						tmp10 = color;
					}
					HX_STACK_LINE(31)
					tmp8 = tmp10;
				}
				HX_STACK_LINE(32)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					int tmp10 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					int color = tmp10;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(32)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(32)
							hx::OrEq(color,(int)0);
							HX_STACK_LINE(32)
							(int)0;
						}
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(32)
							hx::OrEq(color,(int)0);
							HX_STACK_LINE(32)
							(int)0;
						}
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(32)
							hx::OrEq(color,(int)0);
							HX_STACK_LINE(32)
							(int)0;
						}
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(32)
							hx::OrEq(color,(int)-939524096);
							HX_STACK_LINE(32)
							(int)200;
						}
						HX_STACK_LINE(32)
						tmp11 = color;
					}
					HX_STACK_LINE(32)
					tmp9 = tmp11;
				}
				HX_STACK_LINE(31)
				member->setFormat(HX_HCSTRING("assets/data/pixel-font.ttf","\x67","\x4d","\xf0","\x61"),(int)8,tmp8,null(),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,tmp9,null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(29)
		tmp6->forEachOfType(hx::ClassOf< ::flixel::text::FlxText >(), Dynamic(new _Function_2_1()),tmp7);
	}
	HX_STACK_LINE(36)
	::flixel::text::FlxText tmp6 = this->_textScore;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	tmp6->set_alignment(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
}
;
	return null();
}

//HUD_obj::~HUD_obj() { }

Dynamic HUD_obj::__CreateEmpty() { return  new HUD_obj; }
hx::ObjectPtr< HUD_obj > HUD_obj::__new()
{  hx::ObjectPtr< HUD_obj > _result_ = new HUD_obj();
	_result_->__construct();
	return _result_;}

Dynamic HUD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HUD_obj > _result_ = new HUD_obj();
	_result_->__construct();
	return _result_;}

Void HUD_obj::update( Float elapsed){
{
		HX_STACK_FRAME("states.HUD","update",0x458310ac,"states.HUD.update","states/HUD.hx",40,0x8b6a8ef4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(42)
		::flixel::text::FlxText tmp = this->_textScore;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		int tmp1 = ::Reg_obj::score;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		::String tmp3 = ::StringTools_obj::lpad(tmp2,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)5);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		tmp->set_text(tmp3);
		HX_STACK_LINE(46)
		::flixel::text::FlxText tmp4 = this->_currentHealth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		::states::PlayState tmp5 = ::Reg_obj::PS;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		int tmp6 = tmp5->player->HP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		::String tmp7 = (tmp6 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		::states::PlayState tmp8 = ::Reg_obj::PS;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		int tmp9 = tmp8->player->MAX_HP;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		tmp4->set_text(tmp10);
		HX_STACK_LINE(48)
		bool tmp11 = ::Reg_obj::pause;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		if ((tmp12)){
			HX_STACK_LINE(49)
			Float tmp13 = elapsed;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(49)
			this->super::update(tmp13);
		}
	}
return null();
}


Void HUD_obj::setCamera( ::flixel::FlxCamera cam){
{
		HX_STACK_FRAME("states.HUD","setCamera",0x68063924,"states.HUD.setCamera","states/HUD.hx",55,0x8b6a8ef4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cam,"cam")
		HX_STACK_LINE(55)
		bool Recurse = false;		HX_STACK_VAR(Recurse,"Recurse");
		HX_STACK_LINE(55)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1 = Recurse;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::flixel::FlxCamera,cam)
		int __ArgCount() const { return 1; }
		Void run(::flixel::FlxSprite member){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","states/HUD.hx",56,0x8b6a8ef4)
			HX_STACK_ARG(member,"member")
			{
				HX_STACK_LINE(57)
				member->scrollFactor->set((int)0,(int)0);
				HX_STACK_LINE(58)
				member->set_cameras(Array_obj< ::Dynamic >::__new().Add(cam));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(55)
		tmp->forEach( Dynamic(new _Function_1_1(cam)),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HUD_obj,setCamera,(void))

int HUD_obj::OFFSET;


HUD_obj::HUD_obj()
{
}

void HUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HUD);
	HX_MARK_MEMBER_NAME(_textScore,"_textScore");
	HX_MARK_MEMBER_NAME(_currentHealth,"_currentHealth");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textScore,"_textScore");
	HX_VISIT_MEMBER_NAME(_currentHealth,"_currentHealth");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HUD_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textScore") ) { return _textScore; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentHealth") ) { return _currentHealth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HUD_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_textScore") ) { _textScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentHealth") ) { _currentHealth=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_textScore","\x26","\x7f","\x69","\x6d"));
	outFields->push(HX_HCSTRING("_currentHealth","\xf6","\x99","\xb4","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HUD_obj,_textScore),HX_HCSTRING("_textScore","\x26","\x7f","\x69","\x6d")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HUD_obj,_currentHealth),HX_HCSTRING("_currentHealth","\xf6","\x99","\xb4","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &HUD_obj::OFFSET,HX_HCSTRING("OFFSET","\x93","\x43","\xc2","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_textScore","\x26","\x7f","\x69","\x6d"),
	HX_HCSTRING("_currentHealth","\xf6","\x99","\xb4","\x1e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setCamera","\xe7","\xbb","\x33","\x17"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HUD_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HUD_obj::OFFSET,"OFFSET");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HUD_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HUD_obj::OFFSET,"OFFSET");
};

#endif

hx::Class HUD_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("OFFSET","\x93","\x43","\xc2","\x12"),
	::String(null()) };

void HUD_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.HUD","\x6b","\x5f","\x6d","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HUD_obj >;
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

void HUD_obj::__boot()
{
	OFFSET= (int)4;
}

} // end namespace states
