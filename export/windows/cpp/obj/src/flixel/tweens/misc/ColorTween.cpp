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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void ColorTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.ColorTween","new",0x82c0df68,"flixel.tweens.misc.ColorTween.new","flixel/tweens/misc/ColorTween.hx",11,0xe14ed287)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(11)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
}
;
	return null();
}

//ColorTween_obj::~ColorTween_obj() { }

Dynamic ColorTween_obj::__CreateEmpty() { return  new ColorTween_obj; }
hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< ColorTween_obj > _result_ = new ColorTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTween_obj > _result_ = new ColorTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ColorTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","destroy",0x7f5b6002,"flixel.tweens.misc.ColorTween.destroy","flixel/tweens/misc/ColorTween.hx",26,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::destroy();
		HX_STACK_LINE(28)
		this->sprite = null();
	}
return null();
}


::flixel::tweens::misc::ColorTween ColorTween_obj::tween( Float Duration,int FromColor,int ToColor,::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.tweens.misc.ColorTween","tween",0xdc858b73,"flixel.tweens.misc.ColorTween.tween","flixel/tweens/misc/ColorTween.hx",41,0xe14ed287)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(42)
	int tmp = this->startColor = FromColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	this->color = tmp;
	HX_STACK_LINE(43)
	this->endColor = ToColor;
	HX_STACK_LINE(44)
	this->duration = Duration;
	HX_STACK_LINE(45)
	this->sprite = Sprite;
	HX_STACK_LINE(46)
	this->start();
	HX_STACK_LINE(47)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(ColorTween_obj,tween,return )

Void ColorTween_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","update",0x76358c01,"flixel.tweens.misc.ColorTween.update","flixel/tweens/misc/ColorTween.hx",51,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(52)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		this->super::update(tmp);
		HX_STACK_LINE(53)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int tmp2 = this->startColor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			int Color1 = tmp2;		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(53)
			int tmp3 = this->endColor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			int Color2 = tmp3;		HX_STACK_VAR(Color2,"Color2");
			HX_STACK_LINE(53)
			Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Float Factor = tmp4;		HX_STACK_VAR(Factor,"Factor");
			HX_STACK_LINE(53)
			int tmp5 = (int(Color2) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			int tmp7 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			int tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			Float tmp10 = Factor;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			int tmp12 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(53)
			int r = tmp15;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(53)
			int tmp16 = (int(Color2) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(53)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(53)
			int tmp18 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(53)
			int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(53)
			int tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(53)
			Float tmp21 = Factor;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(53)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(53)
			int tmp23 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(53)
			int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(53)
			Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(53)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(53)
			int g = tmp26;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(53)
			int tmp27 = (int(Color2) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(53)
			int tmp28 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(53)
			int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(53)
			Float tmp30 = Factor;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(53)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(53)
			int tmp32 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(53)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(53)
			int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(53)
			int b = tmp34;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(53)
			int tmp35 = (int(Color2) >> int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(53)
			int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(53)
			int tmp37 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(53)
			int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(53)
			int tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(53)
			Float tmp40 = Factor;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(53)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(53)
			int tmp42 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(53)
			int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(53)
			Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(53)
			int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(53)
			int a = tmp45;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int tmp46 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(53)
				int color = tmp46;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(53)
				int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						hx::AndEq(color,(int)-16711681);
						HX_STACK_LINE(53)
						bool tmp48 = (r > (int)255);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(53)
						int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(53)
						if ((tmp48)){
							HX_STACK_LINE(53)
							tmp49 = (int)255;
						}
						else{
							HX_STACK_LINE(53)
							bool tmp50 = (r < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(53)
							if ((tmp50)){
								HX_STACK_LINE(53)
								tmp49 = (int)0;
							}
							else{
								HX_STACK_LINE(53)
								tmp49 = r;
							}
						}
						HX_STACK_LINE(53)
						int tmp50 = (int(tmp49) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(53)
						hx::OrEq(color,tmp50);
						HX_STACK_LINE(53)
						r;
					}
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						hx::AndEq(color,(int)-65281);
						HX_STACK_LINE(53)
						bool tmp48 = (g > (int)255);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(53)
						int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(53)
						if ((tmp48)){
							HX_STACK_LINE(53)
							tmp49 = (int)255;
						}
						else{
							HX_STACK_LINE(53)
							bool tmp50 = (g < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(53)
							if ((tmp50)){
								HX_STACK_LINE(53)
								tmp49 = (int)0;
							}
							else{
								HX_STACK_LINE(53)
								tmp49 = g;
							}
						}
						HX_STACK_LINE(53)
						int tmp50 = (int(tmp49) << int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(53)
						hx::OrEq(color,tmp50);
						HX_STACK_LINE(53)
						g;
					}
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						hx::AndEq(color,(int)-256);
						HX_STACK_LINE(53)
						bool tmp48 = (b > (int)255);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(53)
						int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(53)
						if ((tmp48)){
							HX_STACK_LINE(53)
							tmp49 = (int)255;
						}
						else{
							HX_STACK_LINE(53)
							bool tmp50 = (b < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(53)
							if ((tmp50)){
								HX_STACK_LINE(53)
								tmp49 = (int)0;
							}
							else{
								HX_STACK_LINE(53)
								tmp49 = b;
							}
						}
						HX_STACK_LINE(53)
						hx::OrEq(color,tmp49);
						HX_STACK_LINE(53)
						b;
					}
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						hx::AndEq(color,(int)16777215);
						HX_STACK_LINE(53)
						bool tmp48 = (a > (int)255);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(53)
						int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(53)
						if ((tmp48)){
							HX_STACK_LINE(53)
							tmp49 = (int)255;
						}
						else{
							HX_STACK_LINE(53)
							bool tmp50 = (a < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(53)
							if ((tmp50)){
								HX_STACK_LINE(53)
								tmp49 = (int)0;
							}
							else{
								HX_STACK_LINE(53)
								tmp49 = a;
							}
						}
						HX_STACK_LINE(53)
						int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(53)
						hx::OrEq(color,tmp50);
						HX_STACK_LINE(53)
						a;
					}
					HX_STACK_LINE(53)
					tmp47 = color;
				}
				HX_STACK_LINE(53)
				tmp1 = tmp47;
			}
		}
		HX_STACK_LINE(53)
		this->color = tmp1;
		HX_STACK_LINE(55)
		::flixel::FlxSprite tmp2 = this->sprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		if ((tmp3)){
			HX_STACK_LINE(57)
			::flixel::FlxSprite tmp4 = this->sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			int tmp5 = this->color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			tmp4->set_color(tmp5);
			HX_STACK_LINE(58)
			::flixel::FlxSprite tmp6 = this->sprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			int tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			int tmp9 = (int(tmp8) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(58)
			Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(58)
			tmp6->set_alpha(tmp11);
		}
	}
return null();
}



ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(startColor,"startColor");
	HX_MARK_MEMBER_NAME(endColor,"endColor");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(startColor,"startColor");
	HX_VISIT_MEMBER_NAME(endColor,"endColor");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { return endColor; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { return startColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { endColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { startColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("startColor","\xa1","\x49","\x73","\x66"));
	outFields->push(HX_HCSTRING("endColor","\x88","\x03","\x5a","\x48"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ColorTween_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,startColor),HX_HCSTRING("startColor","\xa1","\x49","\x73","\x66")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,endColor),HX_HCSTRING("endColor","\x88","\x03","\x5a","\x48")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ColorTween_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("startColor","\xa1","\x49","\x73","\x66"),
	HX_HCSTRING("endColor","\x88","\x03","\x5a","\x48"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.ColorTween","\x76","\x4b","\xbb","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTween_obj >;
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
} // end namespace tweens
} // end namespace misc
