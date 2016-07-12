#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
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
namespace flixel{
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

//FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > _result_ = new FlxCollision_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > _result_ = new FlxCollision_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::geom::Point FlxCollision_obj::pointA;

::openfl::_legacy::geom::Point FlxCollision_obj::pointB;

::openfl::_legacy::geom::Point FlxCollision_obj::centerA;

::openfl::_legacy::geom::Point FlxCollision_obj::centerB;

::openfl::_legacy::geom::Matrix FlxCollision_obj::matrixA;

::openfl::_legacy::geom::Matrix FlxCollision_obj::matrixB;

::openfl::_legacy::geom::Matrix FlxCollision_obj::testMatrix;

::openfl::_legacy::geom::Rectangle FlxCollision_obj::boundsA;

::openfl::_legacy::geom::Rectangle FlxCollision_obj::boundsB;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",45,0x8c8a7b84)
	HX_STACK_ARG(Contact,"Contact")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(47)
		bool tmp = (Contact->angle != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(47)
			tmp2 = (Target->angle != (int)0);
		}
		else{
			HX_STACK_LINE(47)
			tmp2 = true;
		}
		HX_STACK_LINE(47)
		bool considerRotation = tmp2;		HX_STACK_VAR(considerRotation,"considerRotation");
		HX_STACK_LINE(49)
		bool tmp3 = (Camera != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::flixel::FlxCamera tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		if ((tmp3)){
			HX_STACK_LINE(49)
			tmp4 = Camera;
		}
		else{
			HX_STACK_LINE(49)
			tmp4 = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(49)
		Camera = tmp4;
		HX_STACK_LINE(51)
		Float tmp5 = Contact->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		Float tmp7 = Contact->scrollFactor->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		Float tmp11 = Contact->offset->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		::openfl::_legacy::geom::Point tmp13 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		tmp13->x = tmp12;
		HX_STACK_LINE(52)
		Float tmp14 = Contact->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(52)
		Float tmp15 = Camera->scroll->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(52)
		Float tmp16 = Contact->scrollFactor->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(52)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(52)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(52)
		Float tmp19 = (tmp14 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(52)
		Float tmp20 = Contact->offset->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(52)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(52)
		::openfl::_legacy::geom::Point tmp22 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(52)
		tmp22->y = tmp21;
		HX_STACK_LINE(54)
		Float tmp23 = Target->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(54)
		Float tmp24 = Camera->scroll->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(54)
		Float tmp25 = Target->scrollFactor->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(54)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(54)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(54)
		Float tmp28 = (tmp23 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(54)
		Float tmp29 = Target->offset->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(54)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(54)
		::openfl::_legacy::geom::Point tmp31 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(54)
		tmp31->x = tmp30;
		HX_STACK_LINE(55)
		Float tmp32 = Target->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(55)
		Float tmp33 = Camera->scroll->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(55)
		Float tmp34 = Target->scrollFactor->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(55)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(55)
		int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(55)
		Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(55)
		Float tmp38 = Target->offset->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(55)
		Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(55)
		::openfl::_legacy::geom::Point tmp40 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(55)
		tmp40->y = tmp39;
		HX_STACK_LINE(57)
		bool tmp41 = considerRotation;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(57)
		if ((tmp41)){
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::flixel::math::FlxPoint _this = Contact->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(60)
				::openfl::_legacy::geom::Point tmp42 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(60)
				::openfl::_legacy::geom::Point FlashPoint = tmp42;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(60)
				bool tmp43 = (FlashPoint == null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(60)
				if ((tmp43)){
					HX_STACK_LINE(60)
					::openfl::_legacy::geom::Point tmp44 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(60)
					FlashPoint = tmp44;
				}
				HX_STACK_LINE(60)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(60)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(60)
				FlashPoint;
			}
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				::flixel::math::FlxPoint _this = Target->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(61)
				::openfl::_legacy::geom::Point tmp42 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(61)
				::openfl::_legacy::geom::Point FlashPoint = tmp42;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(61)
				bool tmp43 = (FlashPoint == null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(61)
				if ((tmp43)){
					HX_STACK_LINE(61)
					::openfl::_legacy::geom::Point tmp44 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(61)
					FlashPoint = tmp44;
				}
				HX_STACK_LINE(61)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(61)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(61)
				FlashPoint;
			}
			HX_STACK_LINE(64)
			::openfl::_legacy::geom::Point tmp42 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(64)
			Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(64)
			::openfl::_legacy::geom::Point tmp44 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(64)
			Float tmp45 = tmp44->x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(64)
			Float tmp46 = (tmp43 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(64)
			::openfl::_legacy::geom::Point tmp47 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(64)
			Float tmp48 = tmp47->get_length();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(64)
			Float tmp49 = (tmp46 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(64)
			::openfl::_legacy::geom::Rectangle tmp50 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(64)
			tmp50->x = tmp49;
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Point tmp51 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(65)
			Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Point tmp53 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(65)
			Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(65)
			Float tmp55 = (tmp52 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Point tmp56 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(65)
			Float tmp57 = tmp56->get_length();		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(65)
			Float tmp58 = (tmp55 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Rectangle tmp59 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(65)
			tmp59->y = tmp58;
			HX_STACK_LINE(66)
			::openfl::_legacy::geom::Point tmp60 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(66)
			Float tmp61 = tmp60->get_length();		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(66)
			Float tmp62 = (tmp61 * (int)2);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(66)
			::openfl::_legacy::geom::Rectangle tmp63 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(66)
			tmp63->width = tmp62;
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Rectangle tmp64 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Rectangle tmp65 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(67)
			tmp65->height = tmp64->width;
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp66 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(69)
			Float tmp67 = tmp66->x;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp68 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(69)
			Float tmp69 = tmp68->x;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(69)
			Float tmp70 = (tmp67 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp71 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(69)
			Float tmp72 = tmp71->get_length();		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(69)
			Float tmp73 = (tmp70 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle tmp74 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(69)
			tmp74->x = tmp73;
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Point tmp75 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(70)
			Float tmp76 = tmp75->y;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Point tmp77 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(70)
			Float tmp78 = tmp77->y;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(70)
			Float tmp79 = (tmp76 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Point tmp80 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(70)
			Float tmp81 = tmp80->get_length();		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(70)
			Float tmp82 = (tmp79 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Rectangle tmp83 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(70)
			tmp83->y = tmp82;
			HX_STACK_LINE(71)
			::openfl::_legacy::geom::Point tmp84 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(71)
			Float tmp85 = tmp84->get_length();		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(71)
			Float tmp86 = (tmp85 * (int)2);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(71)
			::openfl::_legacy::geom::Rectangle tmp87 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(71)
			tmp87->width = tmp86;
			HX_STACK_LINE(72)
			::openfl::_legacy::geom::Rectangle tmp88 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(72)
			::openfl::_legacy::geom::Rectangle tmp89 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(72)
			tmp89->height = tmp88->width;
		}
		else{
			HX_STACK_LINE(76)
			::openfl::_legacy::geom::Point tmp42 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(76)
			::openfl::_legacy::geom::Rectangle tmp43 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(76)
			tmp43->x = tmp42->x;
			HX_STACK_LINE(77)
			::openfl::_legacy::geom::Point tmp44 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(77)
			::openfl::_legacy::geom::Rectangle tmp45 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(77)
			tmp45->y = tmp44->y;
			HX_STACK_LINE(78)
			::openfl::_legacy::geom::Rectangle tmp46 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(78)
			tmp46->width = Contact->frameWidth;
			HX_STACK_LINE(79)
			::openfl::_legacy::geom::Rectangle tmp47 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(79)
			tmp47->height = Contact->frameHeight;
			HX_STACK_LINE(81)
			::openfl::_legacy::geom::Point tmp48 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(81)
			::openfl::_legacy::geom::Rectangle tmp49 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(81)
			tmp49->x = tmp48->x;
			HX_STACK_LINE(82)
			::openfl::_legacy::geom::Point tmp50 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(82)
			::openfl::_legacy::geom::Rectangle tmp51 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(82)
			tmp51->y = tmp50->y;
			HX_STACK_LINE(83)
			::openfl::_legacy::geom::Rectangle tmp52 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(83)
			tmp52->width = Target->frameWidth;
			HX_STACK_LINE(84)
			::openfl::_legacy::geom::Rectangle tmp53 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(84)
			tmp53->height = Target->frameHeight;
		}
		HX_STACK_LINE(87)
		::openfl::_legacy::geom::Rectangle tmp42 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(87)
		::openfl::_legacy::geom::Rectangle tmp43 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(87)
		::openfl::_legacy::geom::Rectangle tmp44 = tmp42->intersection(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(87)
		::openfl::_legacy::geom::Rectangle intersect = tmp44;		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(89)
		bool tmp45 = intersect->isEmpty();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(89)
		bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(89)
		bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(89)
		bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(89)
		if ((tmp47)){
			HX_STACK_LINE(89)
			tmp48 = (intersect->width < (int)1);
		}
		else{
			HX_STACK_LINE(89)
			tmp48 = true;
		}
		HX_STACK_LINE(89)
		bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(89)
		bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(89)
		if ((tmp49)){
			HX_STACK_LINE(89)
			tmp50 = (intersect->height < (int)1);
		}
		else{
			HX_STACK_LINE(89)
			tmp50 = true;
		}
		HX_STACK_LINE(89)
		if ((tmp50)){
			HX_STACK_LINE(91)
			return false;
		}
		HX_STACK_LINE(95)
		::openfl::_legacy::geom::Matrix tmp51 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(95)
		tmp51->identity();
		HX_STACK_LINE(96)
		::openfl::_legacy::geom::Matrix tmp52 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(96)
		Float tmp53 = intersect->x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(96)
		::openfl::_legacy::geom::Rectangle tmp54 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(96)
		Float tmp55 = tmp54->x;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(96)
		Float tmp56 = (tmp53 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(96)
		Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(96)
		Float tmp58 = intersect->y;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(96)
		::openfl::_legacy::geom::Rectangle tmp59 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(96)
		Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(96)
		Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(96)
		Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(96)
		tmp52->translate(tmp57,tmp62);
		HX_STACK_LINE(98)
		::openfl::_legacy::geom::Matrix tmp63 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(98)
		tmp63->identity();
		HX_STACK_LINE(99)
		::openfl::_legacy::geom::Matrix tmp64 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(99)
		Float tmp65 = intersect->x;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(99)
		::openfl::_legacy::geom::Rectangle tmp66 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(99)
		Float tmp67 = tmp66->x;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(99)
		Float tmp68 = (tmp65 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(99)
		Float tmp69 = -(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(99)
		Float tmp70 = intersect->y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(99)
		::openfl::_legacy::geom::Rectangle tmp71 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(99)
		Float tmp72 = tmp71->y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(99)
		Float tmp73 = (tmp70 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(99)
		Float tmp74 = -(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(99)
		tmp64->translate(tmp69,tmp74);
		HX_STACK_LINE(101)
		bool tmp75 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(101)
		if ((tmp75)){
			HX_STACK_LINE(103)
			Contact->drawFrame(null());
			HX_STACK_LINE(104)
			Target->drawFrame(null());
		}
		HX_STACK_LINE(107)
		::openfl::_legacy::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(108)
		::openfl::_legacy::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(110)
		Float tmp76 = intersect->width;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(110)
		int tmp77 = ::Std_obj::_int(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(110)
		int overlapWidth = tmp77;		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(111)
		Float tmp78 = intersect->height;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(111)
		int tmp79 = ::Std_obj::_int(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(111)
		int overlapHeight = tmp79;		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(114)
		bool tmp80 = considerRotation;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(114)
		if ((tmp80)){
			HX_STACK_LINE(116)
			::openfl::_legacy::geom::Matrix tmp81 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(116)
			tmp81->identity();
			HX_STACK_LINE(119)
			::openfl::_legacy::geom::Matrix tmp82 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(119)
			Float tmp83 = Contact->origin->x;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(119)
			Float tmp84 = -(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(119)
			Float tmp85 = Contact->origin->y;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(119)
			Float tmp86 = -(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(119)
			tmp82->translate(tmp84,tmp86);
			HX_STACK_LINE(122)
			::openfl::_legacy::geom::Matrix tmp87 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(122)
			Float tmp88 = Contact->angle;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(122)
			Float tmp89 = ::Math_obj::PI;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(122)
			Float tmp90 = (Float(tmp89) / Float((int)180));		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(122)
			Float tmp91 = (tmp88 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(122)
			tmp87->rotate(tmp91);
			HX_STACK_LINE(125)
			::openfl::_legacy::geom::Matrix tmp92 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(125)
			::openfl::_legacy::geom::Rectangle tmp93 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(125)
			Float tmp94 = tmp93->width;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(125)
			Float tmp95 = (Float(tmp94) / Float((int)2));		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(125)
			::openfl::_legacy::geom::Rectangle tmp96 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(125)
			Float tmp97 = tmp96->height;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(125)
			Float tmp98 = (Float(tmp97) / Float((int)2));		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(125)
			tmp92->translate(tmp95,tmp98);
			HX_STACK_LINE(128)
			::openfl::_legacy::geom::Rectangle tmp99 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(128)
			Float tmp100 = tmp99->width;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(128)
			int tmp101 = ::Math_obj::floor(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(128)
			::openfl::_legacy::geom::Rectangle tmp102 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(128)
			Float tmp103 = tmp102->height;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(128)
			int tmp104 = ::Math_obj::floor(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(128)
			::openfl::_legacy::display::BitmapData tmp105 = ::flixel::util::FlxBitmapDataPool_obj::get(tmp101,tmp104,true,(int)0,false);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(128)
			::openfl::_legacy::display::BitmapData testA2 = tmp105;		HX_STACK_VAR(testA2,"testA2");
			HX_STACK_LINE(131)
			::openfl::_legacy::display::BitmapData tmp106 = testA;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(131)
			::openfl::_legacy::geom::Matrix tmp107 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(131)
			testA2->draw(tmp106,tmp107,null(),null(),null(),false);
			HX_STACK_LINE(132)
			testA = testA2;
			HX_STACK_LINE(135)
			::openfl::_legacy::geom::Matrix tmp108 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(135)
			tmp108->identity();
			HX_STACK_LINE(136)
			::openfl::_legacy::geom::Matrix tmp109 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(136)
			Float tmp110 = Target->origin->x;		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(136)
			Float tmp111 = -(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(136)
			Float tmp112 = Target->origin->y;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(136)
			Float tmp113 = -(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(136)
			tmp109->translate(tmp111,tmp113);
			HX_STACK_LINE(137)
			::openfl::_legacy::geom::Matrix tmp114 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(137)
			Float tmp115 = Target->angle;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(137)
			Float tmp116 = ::Math_obj::PI;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(137)
			Float tmp117 = (Float(tmp116) / Float((int)180));		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(137)
			Float tmp118 = (tmp115 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(137)
			tmp114->rotate(tmp118);
			HX_STACK_LINE(138)
			::openfl::_legacy::geom::Matrix tmp119 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(138)
			::openfl::_legacy::geom::Rectangle tmp120 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(138)
			Float tmp121 = tmp120->width;		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(138)
			Float tmp122 = (Float(tmp121) / Float((int)2));		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(138)
			::openfl::_legacy::geom::Rectangle tmp123 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(138)
			Float tmp124 = tmp123->height;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(138)
			Float tmp125 = (Float(tmp124) / Float((int)2));		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(138)
			tmp119->translate(tmp122,tmp125);
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Rectangle tmp126 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(140)
			Float tmp127 = tmp126->width;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(140)
			int tmp128 = ::Math_obj::floor(tmp127);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Rectangle tmp129 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(140)
			Float tmp130 = tmp129->height;		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(140)
			int tmp131 = ::Math_obj::floor(tmp130);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(140)
			::openfl::_legacy::display::BitmapData tmp132 = ::flixel::util::FlxBitmapDataPool_obj::get(tmp128,tmp131,true,(int)0,false);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(140)
			::openfl::_legacy::display::BitmapData testB2 = tmp132;		HX_STACK_VAR(testB2,"testB2");
			HX_STACK_LINE(141)
			::openfl::_legacy::display::BitmapData tmp133 = testB;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(141)
			::openfl::_legacy::geom::Matrix tmp134 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(141)
			testB2->draw(tmp133,tmp134,null(),null(),null(),false);
			HX_STACK_LINE(142)
			testB = testB2;
		}
		HX_STACK_LINE(145)
		::openfl::_legacy::geom::Matrix tmp81 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(145)
		Float tmp82 = tmp81->tx;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(145)
		Float tmp83 = -(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(145)
		int tmp84 = ::Std_obj::_int(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(145)
		::openfl::_legacy::geom::Rectangle tmp85 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(145)
		tmp85->x = tmp84;
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Matrix tmp86 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(146)
		Float tmp87 = tmp86->ty;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(146)
		Float tmp88 = -(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(146)
		int tmp89 = ::Std_obj::_int(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Rectangle tmp90 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(146)
		tmp90->y = tmp89;
		HX_STACK_LINE(147)
		::openfl::_legacy::geom::Rectangle tmp91 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(147)
		tmp91->width = overlapWidth;
		HX_STACK_LINE(148)
		::openfl::_legacy::geom::Rectangle tmp92 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(148)
		tmp92->height = overlapHeight;
		HX_STACK_LINE(150)
		::openfl::_legacy::geom::Matrix tmp93 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(150)
		Float tmp94 = tmp93->tx;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(150)
		Float tmp95 = -(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(150)
		int tmp96 = ::Std_obj::_int(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(150)
		::openfl::_legacy::geom::Rectangle tmp97 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(150)
		tmp97->x = tmp96;
		HX_STACK_LINE(151)
		::openfl::_legacy::geom::Matrix tmp98 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(151)
		Float tmp99 = tmp98->ty;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(151)
		Float tmp100 = -(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(151)
		int tmp101 = ::Std_obj::_int(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(151)
		::openfl::_legacy::geom::Rectangle tmp102 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(151)
		tmp102->y = tmp101;
		HX_STACK_LINE(152)
		::openfl::_legacy::geom::Rectangle tmp103 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(152)
		tmp103->width = overlapWidth;
		HX_STACK_LINE(153)
		::openfl::_legacy::geom::Rectangle tmp104 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(153)
		tmp104->height = overlapHeight;
		HX_STACK_LINE(155)
		::openfl::_legacy::geom::Rectangle tmp105 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(155)
		::openfl::_legacy::utils::ByteArray tmp106 = testA->getPixels(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(155)
		::openfl::_legacy::utils::ByteArray pixelsA = tmp106;		HX_STACK_VAR(pixelsA,"pixelsA");
		HX_STACK_LINE(156)
		::openfl::_legacy::geom::Rectangle tmp107 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(156)
		::openfl::_legacy::utils::ByteArray tmp108 = testB->getPixels(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(156)
		::openfl::_legacy::utils::ByteArray pixelsB = tmp108;		HX_STACK_VAR(pixelsB,"pixelsB");
		HX_STACK_LINE(158)
		bool hit = false;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(161)
		int alphaA = (int)0;		HX_STACK_VAR(alphaA,"alphaA");
		HX_STACK_LINE(162)
		int alphaB = (int)0;		HX_STACK_VAR(alphaB,"alphaB");
		HX_STACK_LINE(163)
		int tmp109 = (overlapWidth * overlapHeight);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(163)
		int overlapPixels = tmp109;		HX_STACK_VAR(overlapPixels,"overlapPixels");
		HX_STACK_LINE(164)
		int alphaIdx = (int)0;		HX_STACK_VAR(alphaIdx,"alphaIdx");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(167)
			Float tmp110 = (Float(overlapPixels) / Float((int)2));		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(167)
			int tmp111 = ::Math_obj::ceil(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(167)
			int _g = tmp111;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				bool tmp112 = (_g1 < _g);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(167)
				bool tmp113 = !(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(167)
				if ((tmp113)){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				int tmp114 = (_g1)++;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(167)
				int i = tmp114;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(169)
				int tmp115 = (int(i) << int((int)3));		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(169)
				alphaIdx = tmp115;
				HX_STACK_LINE(170)
				int tmp116 = pixelsB->position = alphaIdx;		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(170)
				pixelsA->position = tmp116;
				HX_STACK_LINE(171)
				bool tmp117 = (pixelsA->position < pixelsA->length);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(171)
				int tmp118;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(171)
				if ((tmp117)){
					HX_STACK_LINE(171)
					int tmp119 = (pixelsA->position)++;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(171)
					int pos = tmp119;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(171)
					tmp118 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(171)
					tmp118 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(171)
				alphaA = tmp118;
				HX_STACK_LINE(172)
				bool tmp119 = (pixelsB->position < pixelsB->length);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(172)
				int tmp120;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(172)
				if ((tmp119)){
					HX_STACK_LINE(172)
					int tmp121 = (pixelsB->position)++;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(172)
					int pos = tmp121;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(172)
					tmp120 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(172)
					tmp120 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(172)
				alphaB = tmp120;
				HX_STACK_LINE(174)
				bool tmp121 = (alphaA >= AlphaTolerance);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(174)
				bool tmp122;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(174)
				if ((tmp121)){
					HX_STACK_LINE(174)
					tmp122 = (alphaB >= AlphaTolerance);
				}
				else{
					HX_STACK_LINE(174)
					tmp122 = false;
				}
				HX_STACK_LINE(174)
				if ((tmp122)){
					HX_STACK_LINE(176)
					hit = true;
					HX_STACK_LINE(177)
					break;
				}
			}
		}
		HX_STACK_LINE(181)
		bool tmp110 = hit;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(181)
		bool tmp111 = !(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(181)
		if ((tmp111)){
			HX_STACK_LINE(184)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			int tmp112 = (int(overlapPixels) >> int((int)1));		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(184)
			int _g = tmp112;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				bool tmp113 = (_g1 < _g);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(184)
				bool tmp114 = !(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(184)
				if ((tmp114)){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				int tmp115 = (_g1)++;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(184)
				int i = tmp115;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(186)
				int tmp116 = (int(i) << int((int)3));		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(186)
				int tmp117 = (tmp116 + (int)4);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(186)
				alphaIdx = tmp117;
				HX_STACK_LINE(187)
				int tmp118 = pixelsB->position = alphaIdx;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(187)
				pixelsA->position = tmp118;
				HX_STACK_LINE(188)
				bool tmp119 = (pixelsA->position < pixelsA->length);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(188)
				int tmp120;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(188)
				if ((tmp119)){
					HX_STACK_LINE(188)
					int tmp121 = (pixelsA->position)++;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(188)
					int pos = tmp121;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(188)
					tmp120 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(188)
					tmp120 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(188)
				alphaA = tmp120;
				HX_STACK_LINE(189)
				bool tmp121 = (pixelsB->position < pixelsB->length);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(189)
				int tmp122;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(189)
				if ((tmp121)){
					HX_STACK_LINE(189)
					int tmp123 = (pixelsB->position)++;		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(189)
					int pos = tmp123;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(189)
					tmp122 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(189)
					tmp122 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(189)
				alphaB = tmp122;
				HX_STACK_LINE(191)
				bool tmp123 = (alphaA >= AlphaTolerance);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(191)
				bool tmp124;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(191)
				if ((tmp123)){
					HX_STACK_LINE(191)
					tmp124 = (alphaB >= AlphaTolerance);
				}
				else{
					HX_STACK_LINE(191)
					tmp124 = false;
				}
				HX_STACK_LINE(191)
				if ((tmp124)){
					HX_STACK_LINE(193)
					hit = true;
					HX_STACK_LINE(194)
					break;
				}
			}
		}
		HX_STACK_LINE(199)
		bool tmp112 = considerRotation;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(199)
		if ((tmp112)){
			HX_STACK_LINE(201)
			::openfl::_legacy::display::BitmapData tmp113 = testA;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(201)
			::flixel::util::FlxBitmapDataPool_obj::put(tmp113);
			HX_STACK_LINE(202)
			::openfl::_legacy::display::BitmapData tmp114 = testB;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(202)
			::flixel::util::FlxBitmapDataPool_obj::put(tmp114);
		}
		HX_STACK_LINE(205)
		bool tmp113 = hit;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(205)
		return tmp113;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",218,0x8c8a7b84)
	HX_STACK_ARG(PointX,"PointX")
	HX_STACK_ARG(PointY,"PointY")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
{
		HX_STACK_LINE(220)
		int tmp = PointX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		int tmp1 = PointY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		Float tmp2 = Target->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		Float tmp4 = Target->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		Float tmp6 = Target->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(220)
		Float tmp8 = Target->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		bool tmp10 = ::flixel::math::FlxMath_obj::pointInCoordinates(tmp,tmp1,tmp3,tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		bool tmp11 = (tmp10 == false);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(220)
		if ((tmp11)){
			HX_STACK_LINE(222)
			return false;
		}
		HX_STACK_LINE(225)
		bool tmp12 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(225)
		if ((tmp12)){
			HX_STACK_LINE(227)
			Target->drawFrame(null());
		}
		HX_STACK_LINE(231)
		::openfl::_legacy::display::BitmapData test = Target->framePixels;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(233)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				Float tmp15 = (PointX - Target->x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(233)
				int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(233)
				Float tmp17 = (PointY - Target->y);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(233)
				int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(233)
				int tmp19 = test->getPixel32(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(233)
				int Value = tmp19;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(233)
				int tmp20 = Value;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(233)
				tmp14 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(tmp20);
			}
			HX_STACK_LINE(233)
			int this1 = tmp14;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(233)
			int tmp15 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(233)
			tmp13 = (int(tmp15) & int((int)255));
		}
		HX_STACK_LINE(233)
		int pixelAlpha = tmp13;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(235)
		bool tmp14 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(235)
		if ((tmp14)){
			HX_STACK_LINE(237)
			Float tmp15 = (pixelAlpha * Target->alpha);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(237)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(237)
			pixelAlpha = tmp16;
		}
		HX_STACK_LINE(241)
		bool tmp15 = (pixelAlpha >= AlphaTolerance);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(241)
		if ((tmp15)){
			HX_STACK_LINE(243)
			return true;
		}
		else{
			HX_STACK_LINE(247)
			return false;
		}
		HX_STACK_LINE(241)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxTypedGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_PlaceOutside,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool PlaceOutside = __o_PlaceOutside.Default(true);
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",261,0x8c8a7b84)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(PlaceOutside,"PlaceOutside")
	HX_STACK_ARG(Thickness,"Thickness")
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds")
{
		HX_STACK_LINE(262)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(263)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(264)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(265)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(267)
		bool tmp = PlaceOutside;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			Float tmp1 = (Camera->x - Thickness);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(269)
			Float tmp3 = (Camera->y + Thickness);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(269)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(269)
			int tmp5 = Thickness;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			int tmp6 = Camera->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			int tmp7 = (Thickness * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(269)
			::flixel::tile::FlxTileblock tmp9 = ::flixel::tile::FlxTileblock_obj::__new(tmp2,tmp4,tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(269)
			left = tmp9;
			HX_STACK_LINE(270)
			Float tmp10 = (Camera->x + Camera->width);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(270)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(270)
			Float tmp12 = (Camera->y + Thickness);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(270)
			int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(270)
			int tmp14 = Thickness;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(270)
			int tmp15 = Camera->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(270)
			int tmp16 = (Thickness * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(270)
			int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(270)
			::flixel::tile::FlxTileblock tmp18 = ::flixel::tile::FlxTileblock_obj::__new(tmp11,tmp13,tmp14,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(270)
			right = tmp18;
			HX_STACK_LINE(271)
			Float tmp19 = (Camera->x - Thickness);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(271)
			int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(271)
			Float tmp21 = (Camera->y - Thickness);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(271)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(271)
			int tmp23 = Camera->width;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(271)
			int tmp24 = (Thickness * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(271)
			int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(271)
			int tmp26 = Thickness;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(271)
			::flixel::tile::FlxTileblock tmp27 = ::flixel::tile::FlxTileblock_obj::__new(tmp20,tmp22,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(271)
			top = tmp27;
			HX_STACK_LINE(272)
			Float tmp28 = (Camera->x - Thickness);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(272)
			int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(272)
			int tmp30 = Camera->height;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(272)
			int tmp31 = Camera->width;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(272)
			int tmp32 = (Thickness * (int)2);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(272)
			int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(272)
			int tmp34 = Thickness;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(272)
			::flixel::tile::FlxTileblock tmp35 = ::flixel::tile::FlxTileblock_obj::__new(tmp29,tmp30,tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(272)
			bottom = tmp35;
			HX_STACK_LINE(274)
			bool tmp36 = AdjustWorldBounds;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(274)
			if ((tmp36)){
				HX_STACK_LINE(276)
				::flixel::math::FlxRect tmp37 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(276)
				::flixel::math::FlxRect _this = tmp37;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(276)
				Float tmp38 = (Camera->x - Thickness);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(276)
				_this->x = tmp38;
				HX_STACK_LINE(276)
				Float tmp39 = (Camera->y - Thickness);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(276)
				_this->y = tmp39;
				HX_STACK_LINE(276)
				int tmp40 = Camera->width;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(276)
				int tmp41 = (Thickness * (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(276)
				int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(276)
				_this->width = tmp42;
				HX_STACK_LINE(276)
				int tmp43 = Camera->height;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(276)
				int tmp44 = (Thickness * (int)2);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(276)
				int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(276)
				_this->height = tmp45;
				HX_STACK_LINE(276)
				_this;
			}
		}
		else{
			HX_STACK_LINE(281)
			Float tmp1 = Camera->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(281)
			int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(281)
			Float tmp3 = (Camera->y + Thickness);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(281)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			int tmp5 = Thickness;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(281)
			int tmp6 = Camera->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(281)
			int tmp7 = (Thickness * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(281)
			int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(281)
			::flixel::tile::FlxTileblock tmp9 = ::flixel::tile::FlxTileblock_obj::__new(tmp2,tmp4,tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(281)
			left = tmp9;
			HX_STACK_LINE(282)
			Float tmp10 = (Camera->x + Camera->width);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(282)
			int tmp11 = Thickness;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(282)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(282)
			int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(282)
			Float tmp14 = (Camera->y + Thickness);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(282)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(282)
			int tmp16 = Thickness;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(282)
			int tmp17 = Camera->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(282)
			int tmp18 = (Thickness * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(282)
			int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(282)
			::flixel::tile::FlxTileblock tmp20 = ::flixel::tile::FlxTileblock_obj::__new(tmp13,tmp15,tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(282)
			right = tmp20;
			HX_STACK_LINE(283)
			Float tmp21 = Camera->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(283)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(283)
			Float tmp23 = Camera->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(283)
			int tmp24 = ::Math_obj::floor(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(283)
			int tmp25 = Camera->width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(283)
			int tmp26 = Thickness;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(283)
			::flixel::tile::FlxTileblock tmp27 = ::flixel::tile::FlxTileblock_obj::__new(tmp22,tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(283)
			top = tmp27;
			HX_STACK_LINE(284)
			Float tmp28 = Camera->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(284)
			int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(284)
			int tmp30 = (Camera->height - Thickness);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(284)
			int tmp31 = Camera->width;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(284)
			int tmp32 = Thickness;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(284)
			::flixel::tile::FlxTileblock tmp33 = ::flixel::tile::FlxTileblock_obj::__new(tmp29,tmp30,tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(284)
			bottom = tmp33;
			HX_STACK_LINE(286)
			bool tmp34 = AdjustWorldBounds;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(286)
			if ((tmp34)){
				HX_STACK_LINE(288)
				::flixel::math::FlxRect tmp35 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(288)
				::flixel::math::FlxRect _this = tmp35;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(288)
				_this->x = Camera->x;
				HX_STACK_LINE(288)
				_this->y = Camera->y;
				HX_STACK_LINE(288)
				_this->width = Camera->width;
				HX_STACK_LINE(288)
				_this->height = Camera->height;
				HX_STACK_LINE(288)
				_this;
			}
		}
		HX_STACK_LINE(292)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		::flixel::group::FlxTypedGroup result = tmp1;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(294)
		::flixel::tile::FlxTileblock tmp2 = left;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		result->add(tmp2);
		HX_STACK_LINE(295)
		::flixel::tile::FlxTileblock tmp3 = right;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		result->add(tmp3);
		HX_STACK_LINE(296)
		::flixel::tile::FlxTileblock tmp4 = top;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		result->add(tmp4);
		HX_STACK_LINE(297)
		::flixel::tile::FlxTileblock tmp5 = bottom;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		result->add(tmp5);
		HX_STACK_LINE(299)
		::flixel::group::FlxTypedGroup tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(299)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

bool FlxCollision_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { outValue = pointA; return true;  }
		if (HX_FIELD_EQ(inName,"pointB") ) { outValue = pointB; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { outValue = centerA; return true;  }
		if (HX_FIELD_EQ(inName,"centerB") ) { outValue = centerB; return true;  }
		if (HX_FIELD_EQ(inName,"matrixA") ) { outValue = matrixA; return true;  }
		if (HX_FIELD_EQ(inName,"matrixB") ) { outValue = matrixB; return true;  }
		if (HX_FIELD_EQ(inName,"boundsA") ) { outValue = boundsA; return true;  }
		if (HX_FIELD_EQ(inName,"boundsB") ) { outValue = boundsB; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { outValue = testMatrix; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { outValue = createCameraWall_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { outValue = pixelPerfectCheck_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { outValue = pixelPerfectPointCheck_dyn(); return true;  }
	}
	return false;
}

bool FlxCollision_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=ioValue.Cast< ::openfl::_legacy::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=ioValue.Cast< ::openfl::_legacy::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=ioValue.Cast< ::openfl::_legacy::geom::Matrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::pointA,HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::pointB,HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::centerA,HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::centerB,HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxCollision_obj::matrixA,HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxCollision_obj::matrixB,HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxCollision_obj::testMatrix,HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxCollision_obj::boundsA,HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxCollision_obj::boundsB,HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#endif

hx::Class FlxCollision_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7"),
	HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7"),
	HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19"),
	HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19"),
	HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93"),
	HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93"),
	HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4"),
	HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3"),
	HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3"),
	HX_HCSTRING("pixelPerfectCheck","\x21","\x18","\xe0","\xff"),
	HX_HCSTRING("pixelPerfectPointCheck","\x5f","\xf0","\x41","\xdf"),
	HX_HCSTRING("createCameraWall","\x6b","\x04","\x3e","\xea"),
	::String(null()) };

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxCollision","\x1a","\xc3","\x9f","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCollision_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCollision_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxCollision_obj >;
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

void FlxCollision_obj::__boot()
{
	pointA= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	pointB= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	centerA= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	centerB= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	matrixA= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	matrixB= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	testMatrix= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	boundsA= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	boundsB= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
