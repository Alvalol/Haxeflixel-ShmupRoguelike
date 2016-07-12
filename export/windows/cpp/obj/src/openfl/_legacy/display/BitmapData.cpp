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
#ifndef INCLUDED_openfl__legacy_Memory
#include <openfl/_legacy/Memory.h>
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
#ifndef INCLUDED_openfl__legacy_display_OptimizedPerlin
#include <openfl/_legacy/display/OptimizedPerlin.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
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
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode)
{
HX_STACK_FRAME("openfl._legacy.display.BitmapData","new",0x5b5492db,"openfl._legacy.display.BitmapData.new","openfl/_legacy/display/BitmapData.hx",52,0x0b92a012)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
HX_STACK_ARG(gpuMode,"gpuMode")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(54)
	this->__transparent = transparent;
	HX_STACK_LINE(56)
	bool tmp = (width < (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	if ((tmp1)){
		HX_STACK_LINE(56)
		tmp2 = (height < (int)1);
	}
	else{
		HX_STACK_LINE(56)
		tmp2 = true;
	}
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(58)
		this->__handle = null();
	}
	else{
		HX_STACK_LINE(62)
		int flags = (int)2;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(63)
		bool tmp3 = transparent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		if ((tmp3)){
			HX_STACK_LINE(63)
			hx::OrEq(flags,(int)1);
		}
		HX_STACK_LINE(64)
		int tmp4 = hx::UShr(fillColor,(int)24);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		int alpha = tmp4;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(66)
		bool tmp5 = transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		if ((tmp5)){
			HX_STACK_LINE(66)
			tmp6 = (alpha == (int)0);
		}
		else{
			HX_STACK_LINE(66)
			tmp6 = false;
		}
		HX_STACK_LINE(66)
		if ((tmp6)){
			HX_STACK_LINE(68)
			fillColor = (int)0;
		}
		HX_STACK_LINE(72)
		int tmp7 = width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		int tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		int tmp9 = flags;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		int tmp10 = (int(fillColor) & int((int)16777215));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(72)
		int tmp11 = alpha;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(72)
		Dynamic tmp12 = gpuMode;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(72)
		Dynamic tmp13 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_create(tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		this->__handle = tmp13;
	}
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor,gpuMode);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::display::IBitmapDrawable_obj)) return operator ::openfl::_legacy::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::_legacy::display::IBitmapDrawable_obj *()
	{ return new ::openfl::_legacy::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::openfl::_legacy::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","applyFilter",0x67c01541,"openfl._legacy.display.BitmapData.applyFilter","openfl/_legacy/display/BitmapData.hx",79,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(81)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		Dynamic tmp1 = sourceBitmapData->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		::openfl::_legacy::geom::Rectangle tmp2 = sourceRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::openfl::_legacy::geom::Point tmp3 = destPoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		::openfl::_legacy::filters::BitmapFilter tmp4 = filter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_apply_filter(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

Void BitmapData_obj::clear( int color){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","clear",0xf6ee08c8,"openfl._legacy.display.BitmapData.clear","openfl/_legacy/display/BitmapData.hx",86,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(88)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		int tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_clear(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,clear,(void))

::openfl::_legacy::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","clone",0xf6f5aa98,"openfl._legacy.display.BitmapData.clone","openfl/_legacy/display/BitmapData.hx",93,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	bool tmp = this->get_transparent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	::openfl::_legacy::display::BitmapData tmp1 = ::openfl::_legacy::display::BitmapData_obj::__new((int)0,(int)0,tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::openfl::_legacy::display::BitmapData bitmapData = tmp1;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(96)
	Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	Dynamic tmp3 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_clone(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	bitmapData->__handle = tmp3;
	HX_STACK_LINE(97)
	::openfl::_legacy::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","colorTransform",0xda4c00ee,"openfl._legacy.display.BitmapData.colorTransform","openfl/_legacy/display/BitmapData.hx",102,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(104)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::openfl::_legacy::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		::openfl::_legacy::geom::ColorTransform tmp2 = colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_color_transform(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","copyChannel",0xc976b309,"openfl._legacy.display.BitmapData.copyChannel","openfl/_legacy/display/BitmapData.hx",109,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(111)
		Dynamic tmp = sourceBitmapData->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::openfl::_legacy::geom::Rectangle tmp1 = sourceRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		::openfl::_legacy::geom::Point tmp3 = destPoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		int tmp4 = sourceChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		int tmp5 = destChannel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_copy_channel(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::openfl::_legacy::display::BitmapData alphaBitmapData,::openfl::_legacy::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","copyPixels",0xfd26a7a7,"openfl._legacy.display.BitmapData.copyPixels","openfl/_legacy/display/BitmapData.hx",116,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(118)
		Dynamic tmp = sourceBitmapData->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::openfl::_legacy::geom::Rectangle tmp1 = sourceRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		::openfl::_legacy::geom::Point tmp3 = destPoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		bool tmp4 = mergeAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_copy(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::createHardwareSurface( ){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","createHardwareSurface",0xf9cbaa04,"openfl._legacy.display.BitmapData.createHardwareSurface","openfl/_legacy/display/BitmapData.hx",131,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_create_hardware_surface(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,createHardwareSurface,(void))

Void BitmapData_obj::destroyHardwareSurface( ){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","destroyHardwareSurface",0x81fceaf0,"openfl._legacy.display.BitmapData.destroyHardwareSurface","openfl/_legacy/display/BitmapData.hx",138,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_destroy_hardware_surface(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,destroyHardwareSurface,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","dispose",0x251f9c9a,"openfl._legacy.display.BitmapData.dispose","openfl/_legacy/display/BitmapData.hx",146,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(150)
			Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_dispose(tmp2);
		}
		HX_STACK_LINE(154)
		this->__handle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::_legacy::display::IBitmapDrawable source,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::openfl::_legacy::display::BlendMode blendMode,::openfl::_legacy::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","draw",0x88199529,"openfl._legacy.display.BitmapData.draw","openfl/_legacy/display/BitmapData.hx",159,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(161)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::openfl::_legacy::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		::openfl::_legacy::geom::ColorTransform tmp2 = colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		::openfl::_legacy::display::BlendMode tmp3 = blendMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		::openfl::_legacy::geom::Rectangle tmp5 = clipRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		bool tmp6 = smoothing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		source->__drawToSurface(tmp,tmp1,tmp2,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

Void BitmapData_obj::dumpBits( ){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","dumpBits",0xc5a0adff,"openfl._legacy.display.BitmapData.dumpBits","openfl/_legacy/display/BitmapData.hx",166,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_dump_bits(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dumpBits,(void))

::openfl::_legacy::utils::ByteArray BitmapData_obj::encode( Dynamic rectOrFormat,Dynamic __o_compressorOrQuality,::openfl::_legacy::utils::ByteArray byteArray){
Dynamic compressorOrQuality = __o_compressorOrQuality.Default(((Float)0.9));
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","encode",0x0b95ae7b,"openfl._legacy.display.BitmapData.encode","openfl/_legacy/display/BitmapData.hx",173,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rectOrFormat,"rectOrFormat")
	HX_STACK_ARG(compressorOrQuality,"compressorOrQuality")
	HX_STACK_ARG(byteArray,"byteArray")
{
		HX_STACK_LINE(178)
		Dynamic tmp = rectOrFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		if ((tmp1)){
			HX_STACK_LINE(180)
			::String format = ((::String)(rectOrFormat));		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(181)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			tmp2 = hx::TCast< ::Float >::cast(compressorOrQuality);
			HX_STACK_LINE(181)
			Float quality = tmp2;		HX_STACK_VAR(quality,"quality");
			HX_STACK_LINE(183)
			Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			::String tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			Float tmp5 = quality;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			::openfl::_legacy::utils::ByteArray tmp6 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_encode(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			return tmp6;
		}
		else{
			HX_STACK_LINE(187)
			bool tmp2 = (rectOrFormat == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			if ((tmp2)){
				HX_STACK_LINE(187)
				::openfl::_legacy::utils::ByteArray tmp3 = byteArray = null();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(187)
				return tmp3;
			}
			HX_STACK_LINE(189)
			Dynamic tmp3 = compressorOrQuality;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			if ((tmp4)){
				HX_STACK_LINE(191)
				Dynamic tmp5 = this->__handle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(191)
				::openfl::_legacy::utils::ByteArray tmp6 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_encode(tmp5,HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),(int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(191)
				::openfl::_legacy::utils::ByteArray tmp7 = byteArray = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(191)
				return tmp7;
			}
			else{
				HX_STACK_LINE(193)
				Dynamic tmp5 = compressorOrQuality;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(193)
				if ((tmp6)){
					HX_STACK_LINE(195)
					Dynamic tmp7 = this->__handle;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					::openfl::display::JPEGEncoderOptions tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(195)
					tmp8 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressorOrQuality);
					HX_STACK_LINE(195)
					int tmp9 = tmp8->quality;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(195)
					Float tmp10 = (Float(tmp9) / Float((int)100));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(195)
					::openfl::_legacy::utils::ByteArray tmp11 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_encode(tmp7,HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(195)
					::openfl::_legacy::utils::ByteArray tmp12 = byteArray = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(195)
					return tmp12;
				}
			}
			HX_STACK_LINE(199)
			::openfl::_legacy::utils::ByteArray tmp5 = byteArray = null();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			return tmp5;
		}
		HX_STACK_LINE(178)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::_legacy::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","fillRect",0x9b9ea4ec,"openfl._legacy.display.BitmapData.fillRect","openfl/_legacy/display/BitmapData.hx",220,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(222)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		::openfl::_legacy::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		int tmp2 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		int tmp3 = hx::UShr(color,(int)24);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_fill(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::fillRectEx( ::openfl::_legacy::geom::Rectangle rect,int color,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","fillRectEx",0xbc42f47f,"openfl._legacy.display.BitmapData.fillRectEx","openfl/_legacy/display/BitmapData.hx",227,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(229)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		::openfl::_legacy::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		int tmp2 = color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		int tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_fill(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fillRectEx,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","floodFill",0x3358d41c,"openfl._legacy.display.BitmapData.floodFill","openfl/_legacy/display/BitmapData.hx",234,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(236)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_flood_fill(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::_legacy::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","generateFilterRect",0xb6e56c76,"openfl._legacy.display.BitmapData.generateFilterRect","openfl/_legacy/display/BitmapData.hx",275,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(277)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	::openfl::_legacy::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(278)
	::openfl::_legacy::geom::Rectangle tmp1 = sourceRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	::openfl::_legacy::filters::BitmapFilter tmp2 = filter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	::openfl::_legacy::geom::Rectangle tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_generate_filter_rect(tmp1,tmp2,tmp3);
	HX_STACK_LINE(279)
	::openfl::_legacy::geom::Rectangle tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::openfl::_legacy::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","getColorBoundsRect",0xb935ed6b,"openfl._legacy.display.BitmapData.getColorBoundsRect","openfl/_legacy/display/BitmapData.hx",284,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(286)
		::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		::openfl::_legacy::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(287)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		int tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		bool tmp4 = findColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		::openfl::_legacy::geom::Rectangle tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_get_color_bounds_rect(tmp1,tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(288)
		::openfl::_legacy::geom::Rectangle tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(288)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","getPixel",0x516035b5,"openfl._legacy.display.BitmapData.getPixel","openfl/_legacy/display/BitmapData.hx",293,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(295)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(295)
	int tmp3 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_get_pixel(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","getPixel32",0x9220f994,"openfl._legacy.display.BitmapData.getPixel32","openfl/_legacy/display/BitmapData.hx",300,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(312)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	int tmp3 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_get_pixel32(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(312)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::openfl::_legacy::utils::ByteArray BitmapData_obj::getPixels( ::openfl::_legacy::geom::Rectangle rect){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","getPixels",0xe2cec91e,"openfl._legacy.display.BitmapData.getPixels","openfl/_legacy/display/BitmapData.hx",317,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(319)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	::openfl::_legacy::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	::openfl::_legacy::utils::ByteArray tmp2 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_get_pixels(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(319)
	::openfl::_legacy::utils::ByteArray result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(320)
	bool tmp3 = (result != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	if ((tmp3)){
		HX_STACK_LINE(320)
		result->position = result->length;
	}
	HX_STACK_LINE(321)
	::openfl::_legacy::utils::ByteArray tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(321)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Array< int > BitmapData_obj::getVector( ::openfl::_legacy::geom::Rectangle rect){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","getVector",0xed828ab4,"openfl._legacy.display.BitmapData.getVector","openfl/_legacy/display/BitmapData.hx",343,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(345)
	Float tmp = (rect->width * rect->height);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	int pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(346)
	bool tmp2 = (pixels < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(346)
	if ((tmp2)){
		HX_STACK_LINE(346)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(348)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(349)
	int tmp3 = (pixels - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(349)
	result[tmp3] = (int)0;
	HX_STACK_LINE(352)
	Dynamic tmp4 = this->__handle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(352)
	::openfl::_legacy::geom::Rectangle tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(352)
	::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_get_array(tmp4,tmp5,result);
	HX_STACK_LINE(359)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","lock",0x8d610510,"openfl._legacy.display.BitmapData.lock","openfl/_legacy/display/BitmapData.hx",389,0x0b92a012)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","merge",0xb45939f3,"openfl._legacy.display.BitmapData.merge","openfl/_legacy/display/BitmapData.hx",396,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(398)
		bool tmp = (sourceBitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		if ((tmp)){
			HX_STACK_LINE(398)
			return null();
		}
		HX_STACK_LINE(400)
		Float tmp1 = sourceRect->width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		int sw = tmp2;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(401)
		Float tmp3 = sourceRect->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(401)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		int sh = tmp4;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(403)
		::openfl::_legacy::geom::Rectangle tmp5 = sourceRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		::openfl::_legacy::utils::ByteArray tmp6 = sourceBitmapData->getPixels(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		::openfl::_legacy::utils::ByteArray sourcePixels = tmp6;		HX_STACK_VAR(sourcePixels,"sourcePixels");
		HX_STACK_LINE(404)
		bool tmp7 = (sourcePixels == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		if ((tmp7)){
			HX_STACK_LINE(404)
			return null();
		}
		HX_STACK_LINE(405)
		sourcePixels->position = (int)0;
		HX_STACK_LINE(407)
		::openfl::_legacy::geom::Rectangle tmp8 = ::openfl::_legacy::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(407)
		::openfl::_legacy::geom::Rectangle destRect = tmp8;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(408)
		::openfl::_legacy::geom::Rectangle tmp9 = destRect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(408)
		::openfl::_legacy::utils::ByteArray tmp10 = this->getPixels(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(408)
		::openfl::_legacy::utils::ByteArray destPixels = tmp10;		HX_STACK_VAR(destPixels,"destPixels");
		HX_STACK_LINE(409)
		bool tmp11 = (destPixels == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(409)
		if ((tmp11)){
			HX_STACK_LINE(409)
			return null();
		}
		HX_STACK_LINE(410)
		destPixels->position = (int)0;
		HX_STACK_LINE(412)
		int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
		HX_STACK_LINE(412)
		int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
		HX_STACK_LINE(412)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(412)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(412)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(412)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(412)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(412)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(412)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(412)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(412)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(414)
			int tmp12 = (sh * sw);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(414)
			int _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(414)
			while((true)){
				HX_STACK_LINE(414)
				bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(414)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(414)
				if ((tmp14)){
					HX_STACK_LINE(414)
					break;
				}
				HX_STACK_LINE(414)
				int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(414)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(416)
				int tmp16 = sourcePixels->readUnsignedInt();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(416)
				sourcePixel = tmp16;
				HX_STACK_LINE(417)
				int tmp17 = destPixels->readUnsignedInt();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(417)
				destPixel = tmp17;
				HX_STACK_LINE(419)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					int tmp19 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(419)
					int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(419)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(419)
					int tmp22 = redMultiplier;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(419)
					int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(419)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(419)
					int tmp25 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(419)
					int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(419)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(419)
					int tmp28 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(419)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(419)
					int tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(419)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(419)
					int tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(419)
					int _int = tmp32;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(419)
					bool tmp33 = (_int < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(419)
					if ((tmp33)){
						HX_STACK_LINE(419)
						tmp18 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(419)
						tmp18 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(419)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					int _int = (int)256;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(419)
					bool tmp20 = (_int < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(419)
					if ((tmp20)){
						HX_STACK_LINE(419)
						tmp19 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(419)
						tmp19 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(419)
				Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(419)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(419)
				a = tmp21;
				HX_STACK_LINE(420)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					int tmp23 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(420)
					int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(420)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(420)
					int tmp26 = redMultiplier;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(420)
					int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(420)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(420)
					int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(420)
					int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(420)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(420)
					int tmp32 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(420)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(420)
					int tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(420)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(420)
					int tmp36 = (tmp28 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(420)
					int _int = tmp36;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(420)
					bool tmp37 = (_int < (int)0);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(420)
					if ((tmp37)){
						HX_STACK_LINE(420)
						tmp22 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(420)
						tmp22 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(420)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					int _int = (int)256;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(420)
					bool tmp24 = (_int < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(420)
					if ((tmp24)){
						HX_STACK_LINE(420)
						tmp23 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(420)
						tmp23 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(420)
				Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(420)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(420)
				r = tmp25;
				HX_STACK_LINE(421)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					int tmp27 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(421)
					int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(421)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(421)
					int tmp30 = redMultiplier;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(421)
					int tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(421)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(421)
					int tmp33 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(421)
					int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(421)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(421)
					int tmp36 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(421)
					int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(421)
					int tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(421)
					int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(421)
					int tmp40 = (tmp32 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(421)
					int _int = tmp40;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(421)
					bool tmp41 = (_int < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(421)
					if ((tmp41)){
						HX_STACK_LINE(421)
						tmp26 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(421)
						tmp26 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(421)
				Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					int _int = (int)256;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(421)
					bool tmp28 = (_int < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(421)
					if ((tmp28)){
						HX_STACK_LINE(421)
						tmp27 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(421)
						tmp27 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(421)
				Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(421)
				int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(421)
				g = tmp29;
				HX_STACK_LINE(422)
				Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					int tmp31 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(422)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(422)
					int tmp33 = redMultiplier;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(422)
					int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(422)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(422)
					int tmp36 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(422)
					int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(422)
					int tmp38 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(422)
					int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(422)
					int tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(422)
					int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(422)
					int tmp42 = (tmp35 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(422)
					int _int = tmp42;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(422)
					bool tmp43 = (_int < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(422)
					if ((tmp43)){
						HX_STACK_LINE(422)
						tmp30 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(422)
						tmp30 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(422)
				Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					int _int = (int)256;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(422)
					bool tmp32 = (_int < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(422)
					if ((tmp32)){
						HX_STACK_LINE(422)
						tmp31 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(422)
						tmp31 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(422)
				Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(422)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(422)
				b = tmp33;
				HX_STACK_LINE(424)
				bool tmp34 = (a > (int)255);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(424)
				bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(424)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(424)
				bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(424)
				if ((tmp36)){
					HX_STACK_LINE(424)
					tmp37 = (r > (int)255);
				}
				else{
					HX_STACK_LINE(424)
					tmp37 = true;
				}
				HX_STACK_LINE(424)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(424)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(424)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(424)
				if ((tmp39)){
					HX_STACK_LINE(424)
					tmp40 = (g > (int)255);
				}
				else{
					HX_STACK_LINE(424)
					tmp40 = true;
				}
				HX_STACK_LINE(424)
				bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(424)
				bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(424)
				if ((tmp41)){
					HX_STACK_LINE(424)
					tmp42 = (b > (int)255);
				}
				else{
					HX_STACK_LINE(424)
					tmp42 = true;
				}
				HX_STACK_LINE(424)
				if ((tmp42)){
					HX_STACK_LINE(426)
					::String tmp43 = (a + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(426)
					int tmp44 = r;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(426)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(426)
					::String tmp46 = (tmp45 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(426)
					int tmp47 = g;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(426)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(426)
					::String tmp49 = (tmp48 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(426)
					int tmp50 = b;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(426)
					::String tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(426)
					Dynamic tmp52 = hx::SourceInfo(HX_HCSTRING("BitmapData.hx","\x85","\x76","\x3a","\x0a"),426,HX_HCSTRING("openfl._legacy.display.BitmapData","\x69","\x89","\x8d","\x97"),HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(426)
					::haxe::Log_obj::trace(tmp51,tmp52);
				}
				HX_STACK_LINE(430)
				int tmp43 = (int(a) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(430)
				int tmp44 = (int(r) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(430)
				int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(430)
				int tmp46 = (int(g) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(430)
				int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(430)
				int tmp48 = b;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(430)
				int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(430)
				color = tmp49;
				HX_STACK_LINE(432)
				int tmp50 = (i * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(432)
				destPixels->position = tmp50;
				HX_STACK_LINE(433)
				int tmp51 = color;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(433)
				destPixels->writeUnsignedInt(tmp51);
			}
		}
		HX_STACK_LINE(437)
		destPixels->position = (int)0;
		HX_STACK_LINE(438)
		::openfl::_legacy::geom::Rectangle tmp12 = destRect;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(438)
		::openfl::_legacy::utils::ByteArray tmp13 = destPixels;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(438)
		this->setPixels(tmp12,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::multiplyAlpha( ){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","multiplyAlpha",0xfe41bcd5,"openfl._legacy.display.BitmapData.multiplyAlpha","openfl/_legacy/display/BitmapData.hx",443,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_LINE(445)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_multiply_alpha(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,multiplyAlpha,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","noise",0x4e5526d5,"openfl._legacy.display.BitmapData.noise","openfl/_legacy/display/BitmapData.hx",450,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(452)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(452)
		int tmp1 = randomSeed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		int tmp2 = low;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		int tmp3 = high;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(452)
		int tmp4 = channelOptions;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(452)
		bool tmp5 = grayScale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(452)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_noise(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","paletteMap",0xc0e401c6,"openfl._legacy.display.BitmapData.paletteMap","openfl/_legacy/display/BitmapData.hx",457,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(459)
		Float tmp = sourceRect->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(459)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		int sw = tmp1;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(460)
		Float tmp2 = sourceRect->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(460)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(460)
		int sh = tmp3;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(462)
		::openfl::_legacy::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		::openfl::_legacy::utils::ByteArray tmp5 = sourceBitmapData->getPixels(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(462)
		::openfl::_legacy::utils::ByteArray pixels = tmp5;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(463)
		pixels->position = (int)0;
		HX_STACK_LINE(465)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(465)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(465)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(465)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(465)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(465)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(465)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(465)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(465)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(465)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(467)
			int tmp6 = (sh * sw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(467)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			while((true)){
				HX_STACK_LINE(467)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(467)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(467)
				if ((tmp8)){
					HX_STACK_LINE(467)
					break;
				}
				HX_STACK_LINE(467)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(467)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(469)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(469)
				pixelValue = tmp10;
				HX_STACK_LINE(471)
				bool tmp11 = (alphaArray == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(471)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(471)
				if ((tmp11)){
					HX_STACK_LINE(471)
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(471)
					int tmp13 = (int(pixelValue) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(471)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(471)
					tmp12 = alphaArray->__get(tmp14);
				}
				HX_STACK_LINE(471)
				c1 = tmp12;
				HX_STACK_LINE(472)
				bool tmp13 = (redArray == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(472)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(472)
				if ((tmp13)){
					HX_STACK_LINE(472)
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(472)
					int tmp15 = (int(pixelValue) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(472)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(472)
					tmp14 = redArray->__get(tmp16);
				}
				HX_STACK_LINE(472)
				c2 = tmp14;
				HX_STACK_LINE(473)
				bool tmp15 = (greenArray == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(473)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(473)
				if ((tmp15)){
					HX_STACK_LINE(473)
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(473)
					int tmp17 = (int(pixelValue) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(473)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(473)
					tmp16 = greenArray->__get(tmp18);
				}
				HX_STACK_LINE(473)
				c3 = tmp16;
				HX_STACK_LINE(474)
				bool tmp17 = (blueArray == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(474)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(474)
				if ((tmp17)){
					HX_STACK_LINE(474)
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(474)
					int tmp19 = (int(pixelValue) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(474)
					tmp18 = blueArray->__get(tmp19);
				}
				HX_STACK_LINE(474)
				c4 = tmp18;
				HX_STACK_LINE(476)
				int tmp19 = (int(c1) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(476)
				int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(476)
				int tmp21 = (int(c2) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(476)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(476)
				int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(476)
				int tmp24 = (int(c3) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(476)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(476)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(476)
				int tmp27 = (int(c4) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(476)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(476)
				int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(476)
				a = tmp29;
				HX_STACK_LINE(477)
				bool tmp30 = (a > (int)255);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(477)
				if ((tmp30)){
					HX_STACK_LINE(477)
					(a == (int)255);
				}
				HX_STACK_LINE(479)
				int tmp31 = (int(c1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(479)
				int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(479)
				int tmp33 = (int(c2) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(479)
				int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(479)
				int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(479)
				int tmp36 = (int(c3) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(479)
				int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(479)
				int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(479)
				int tmp39 = (int(c4) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(479)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(479)
				int tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(479)
				r = tmp41;
				HX_STACK_LINE(480)
				bool tmp42 = (r > (int)255);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(480)
				if ((tmp42)){
					HX_STACK_LINE(480)
					(r == (int)255);
				}
				HX_STACK_LINE(482)
				int tmp43 = (int(c1) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(482)
				int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(482)
				int tmp45 = (int(c2) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(482)
				int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(482)
				int tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(482)
				int tmp48 = (int(c3) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(482)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(482)
				int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(482)
				int tmp51 = (int(c4) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(482)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(482)
				int tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(482)
				g = tmp53;
				HX_STACK_LINE(483)
				bool tmp54 = (g > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(483)
				if ((tmp54)){
					HX_STACK_LINE(483)
					(g == (int)255);
				}
				HX_STACK_LINE(485)
				int tmp55 = (int(c1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(485)
				int tmp56 = (int(c2) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(485)
				int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(485)
				int tmp58 = (int(c3) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(485)
				int tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(485)
				int tmp60 = (int(c4) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(485)
				int tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(485)
				b = tmp61;
				HX_STACK_LINE(486)
				bool tmp62 = (b > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(486)
				if ((tmp62)){
					HX_STACK_LINE(486)
					(b == (int)255);
				}
				HX_STACK_LINE(488)
				int tmp63 = (int(a) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(488)
				int tmp64 = (int(r) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(488)
				int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(488)
				int tmp66 = (int(g) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(488)
				int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(488)
				int tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(488)
				int tmp69 = (int(tmp67) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(488)
				color = tmp69;
				HX_STACK_LINE(490)
				int tmp70 = (i * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(490)
				pixels->position = tmp70;
				HX_STACK_LINE(491)
				int tmp71 = color;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(491)
				pixels->writeUnsignedInt(tmp71);
			}
		}
		HX_STACK_LINE(495)
		pixels->position = (int)0;
		HX_STACK_LINE(496)
		::openfl::_legacy::geom::Rectangle tmp6 = ::openfl::_legacy::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(496)
		::openfl::_legacy::geom::Rectangle destRect = tmp6;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(497)
		::openfl::_legacy::geom::Rectangle tmp7 = destRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		::openfl::_legacy::utils::ByteArray tmp8 = pixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","perlinNoise",0x3288b9e1,"openfl._legacy.display.BitmapData.perlinNoise","openfl/_legacy/display/BitmapData.hx",502,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(504)
		::openfl::_legacy::display::OptimizedPerlin tmp = ::openfl::_legacy::display::OptimizedPerlin_obj::__new(randomSeed,numOctaves,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		::openfl::_legacy::display::OptimizedPerlin perlin = tmp;		HX_STACK_VAR(perlin,"perlin");
		HX_STACK_LINE(505)
		Float tmp1 = baseX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		Float tmp2 = baseY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(505)
		perlin->fill(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,(int)0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","scroll",0x59169472,"openfl._legacy.display.BitmapData.scroll","openfl/_legacy/display/BitmapData.hx",517,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(519)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(519)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(519)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(519)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_scroll(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setFlags( int flags){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","setFlags",0x3fa5f3ea,"openfl._legacy.display.BitmapData.setFlags","openfl/_legacy/display/BitmapData.hx",524,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_LINE(527)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		int tmp1 = flags;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(527)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_set_flags(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFlags,(void))

Void BitmapData_obj::setFormat( int format){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","setFormat",0x37045534,"openfl._legacy.display.BitmapData.setFormat","openfl/_legacy/display/BitmapData.hx",532,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(534)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_set_format(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFormat,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","setPixel",0xffbd8f29,"openfl._legacy.display.BitmapData.setPixel","openfl/_legacy/display/BitmapData.hx",539,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(541)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(541)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(541)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(541)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(541)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_set_pixel(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","setPixel32",0x959e9808,"openfl._legacy.display.BitmapData.setPixel32","openfl/_legacy/display/BitmapData.hx",546,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(548)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(548)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(548)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_set_pixel32(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::utils::ByteArray pixels){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","setPixels",0xc61fb52a,"openfl._legacy.display.BitmapData.setPixels","openfl/_legacy/display/BitmapData.hx",553,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(555)
		Float tmp = (rect->width * rect->height);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(555)
		Float tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(555)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(555)
		int size = tmp2;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(556)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(556)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(556)
		pixels->checkData(tmp4);
		HX_STACK_LINE(557)
		Dynamic tmp5 = this->__handle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(557)
		::openfl::_legacy::geom::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(557)
		::openfl::_legacy::utils::ByteArray tmp7 = pixels;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(557)
		int tmp8 = pixels->position;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_set_bytes(tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(558)
		hx::AddEq(pixels->position,size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::_legacy::geom::Rectangle rect,Array< int > pixels){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","setVector",0xd0d376c0,"openfl._legacy.display.BitmapData.setVector","openfl/_legacy/display/BitmapData.hx",563,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(565)
		Float tmp = (rect->width * rect->height);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		int count = tmp1;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(566)
		bool tmp2 = (pixels->length < count);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(566)
		if ((tmp2)){
			HX_STACK_LINE(566)
			return null();
		}
		HX_STACK_LINE(569)
		Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(569)
		::openfl::_legacy::geom::Rectangle tmp4 = rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(569)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_set_array(tmp3,tmp4,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","threshold",0x0e721466,"openfl._legacy.display.BitmapData.threshold","openfl/_legacy/display/BitmapData.hx",585,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(587)
		bool tmp = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(587)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(587)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(587)
		if ((tmp1)){
			HX_STACK_LINE(587)
			::openfl::_legacy::geom::Rectangle tmp3 = this->get_rect();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(587)
			::openfl::_legacy::geom::Rectangle tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(587)
			::openfl::_legacy::geom::Rectangle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(587)
			::openfl::_legacy::geom::Rectangle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(587)
			::openfl::_legacy::geom::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(587)
			tmp2 = sourceRect->equals(tmp7);
		}
		else{
			HX_STACK_LINE(587)
			tmp2 = false;
		}
		HX_STACK_LINE(587)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(587)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(587)
		if ((tmp3)){
			HX_STACK_LINE(587)
			tmp4 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(587)
			tmp4 = false;
		}
		HX_STACK_LINE(587)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(587)
		if ((tmp4)){
			HX_STACK_LINE(587)
			tmp5 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(587)
			tmp5 = false;
		}
		HX_STACK_LINE(587)
		if ((tmp5)){
			HX_STACK_LINE(589)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(591)
			int tmp6 = (int(threshold) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(591)
			int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(591)
			int tmp8 = (int(threshold) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(591)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(591)
			int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(591)
			int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(591)
			int tmp12 = (int(threshold) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(591)
			int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(591)
			int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(591)
			int tmp16 = (int(threshold) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(591)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(591)
			int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(591)
			threshold = tmp18;
			HX_STACK_LINE(592)
			int tmp19 = (int(color) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(592)
			int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(592)
			int tmp21 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(592)
			int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(592)
			int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(592)
			int tmp24 = (int(tmp20) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(592)
			int tmp25 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(592)
			int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(592)
			int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(592)
			int tmp28 = (int(tmp24) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(592)
			int tmp29 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(592)
			int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(592)
			int tmp31 = (int(tmp28) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(592)
			color = tmp31;
			HX_STACK_LINE(594)
			::openfl::_legacy::utils::ByteArray tmp32 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(594)
			::openfl::_legacy::utils::ByteArray memory = tmp32;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(595)
			int tmp33 = this->get_width();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(595)
			int tmp34 = this->get_height();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(595)
			int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(595)
			int tmp36 = (tmp35 * (int)4);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(595)
			memory->setLength(tmp36);
			HX_STACK_LINE(596)
			::openfl::_legacy::geom::Rectangle tmp37 = this->get_rect();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(596)
			::openfl::_legacy::utils::ByteArray tmp38 = this->getPixels(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(596)
			memory = tmp38;
			HX_STACK_LINE(597)
			memory->position = (int)0;
			HX_STACK_LINE(598)
			::openfl::_legacy::utils::ByteArray tmp39 = memory;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(598)
			::openfl::_legacy::Memory_obj::select(tmp39);
			HX_STACK_LINE(600)
			int tmp40 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(600)
			int thresholdMask = tmp40;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(602)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(602)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(602)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(602)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(602)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(602)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(604)
			{
				HX_STACK_LINE(604)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(604)
				int tmp41 = this->get_height();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(604)
				int _g = tmp41;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(604)
				while((true)){
					HX_STACK_LINE(604)
					bool tmp42 = (_g1 < _g);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(604)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(604)
					if ((tmp43)){
						HX_STACK_LINE(604)
						break;
					}
					HX_STACK_LINE(604)
					int tmp44 = (_g1)++;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(604)
					int yy = tmp44;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(606)
					int tmp45 = this->get_width();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(606)
					int tmp46 = yy;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(606)
					int tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(606)
					width_yy = tmp47;
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(608)
						int tmp48 = this->get_width();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(608)
						int _g2 = tmp48;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(608)
						while((true)){
							HX_STACK_LINE(608)
							bool tmp49 = (_g3 < _g2);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(608)
							bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(608)
							if ((tmp50)){
								HX_STACK_LINE(608)
								break;
							}
							HX_STACK_LINE(608)
							int tmp51 = (_g3)++;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(608)
							int xx = tmp51;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(610)
							int tmp52 = (width_yy + xx);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(610)
							int tmp53 = (tmp52 * (int)4);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(610)
							position = tmp53;
							HX_STACK_LINE(611)
							int tmp54 = position;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(611)
							int tmp55 = ::openfl::_legacy::Memory_obj::getI32(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(611)
							pixelValue = tmp55;
							HX_STACK_LINE(612)
							int tmp56 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(612)
							pixelMask = tmp56;
							HX_STACK_LINE(614)
							int tmp57 = pixelMask;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(614)
							int tmp58 = thresholdMask;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(614)
							int tmp59 = ::openfl::_legacy::display::BitmapData_obj::__ucompare(tmp57,tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(614)
							i = tmp59;
							HX_STACK_LINE(615)
							test = false;
							HX_STACK_LINE(617)
							bool tmp60 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(617)
							if ((tmp60)){
								HX_STACK_LINE(617)
								bool tmp61 = (i == (int)0);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(617)
								test = tmp61;
							}
							else{
								HX_STACK_LINE(618)
								bool tmp61 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(618)
								if ((tmp61)){
									HX_STACK_LINE(618)
									bool tmp62 = (i == (int)-1);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(618)
									test = tmp62;
								}
								else{
									HX_STACK_LINE(619)
									bool tmp62 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(619)
									if ((tmp62)){
										HX_STACK_LINE(619)
										bool tmp63 = (i == (int)1);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(619)
										test = tmp63;
									}
									else{
										HX_STACK_LINE(620)
										bool tmp63 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(620)
										if ((tmp63)){
											HX_STACK_LINE(620)
											bool tmp64 = (i != (int)0);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(620)
											test = tmp64;
										}
										else{
											HX_STACK_LINE(621)
											bool tmp64 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(621)
											if ((tmp64)){
												HX_STACK_LINE(621)
												bool tmp65 = (i == (int)0);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(621)
												bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(621)
												bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(621)
												if ((tmp66)){
													HX_STACK_LINE(621)
													tmp67 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(621)
													tmp67 = true;
												}
												HX_STACK_LINE(621)
												test = tmp67;
											}
											else{
												HX_STACK_LINE(622)
												bool tmp65 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(622)
												if ((tmp65)){
													HX_STACK_LINE(622)
													bool tmp66 = (i == (int)0);		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(622)
													bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(622)
													bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(622)
													if ((tmp67)){
														HX_STACK_LINE(622)
														tmp68 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(622)
														tmp68 = true;
													}
													HX_STACK_LINE(622)
													test = tmp68;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(624)
							bool tmp61 = test;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(624)
							if ((tmp61)){
								HX_STACK_LINE(626)
								int tmp62 = position;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(626)
								int tmp63 = color;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(626)
								::openfl::_legacy::Memory_obj::setI32(tmp62,tmp63);
								HX_STACK_LINE(627)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(635)
			memory->position = (int)0;
			HX_STACK_LINE(636)
			::openfl::_legacy::geom::Rectangle tmp41 = this->get_rect();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(636)
			::openfl::_legacy::utils::ByteArray tmp42 = memory;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(636)
			this->setPixels(tmp41,tmp42);
			HX_STACK_LINE(637)
			::openfl::_legacy::Memory_obj::select(null());
			HX_STACK_LINE(638)
			int tmp43 = hits;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(638)
			return tmp43;
		}
		else{
			HX_STACK_LINE(642)
			Float tmp6 = sourceRect->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(642)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(642)
			int sx = tmp7;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(643)
			Float tmp8 = sourceRect->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(643)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(643)
			int sy = tmp9;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(644)
			int tmp10 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(644)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(644)
			int sw = tmp11;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(645)
			int tmp12 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(645)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(645)
			int sh = tmp13;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(647)
			Float tmp14 = destPoint->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(647)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(647)
			int dx = tmp15;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(648)
			Float tmp16 = destPoint->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(648)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(648)
			int dy = tmp17;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(650)
			int tmp18 = this->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(650)
			int tmp19 = sw;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(650)
			int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(650)
			int tmp21 = dx;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(650)
			int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(650)
			int bw = tmp22;		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(651)
			int tmp23 = this->get_height();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(651)
			int tmp24 = sh;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(651)
			int tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(651)
			int tmp26 = dy;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(651)
			int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(651)
			int bh = tmp27;		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(653)
			bool tmp28 = (bw < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(653)
			int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(653)
			if ((tmp28)){
				HX_STACK_LINE(653)
				int tmp30 = sw;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(653)
				int tmp31 = this->get_width();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(653)
				int tmp32 = sw;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(653)
				int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(653)
				int tmp34 = dx;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(653)
				int tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(653)
				tmp29 = (tmp30 + tmp35);
			}
			else{
				HX_STACK_LINE(653)
				tmp29 = sw;
			}
			HX_STACK_LINE(653)
			int dw = tmp29;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(654)
			bool tmp30 = (bw < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(654)
			int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(654)
			if ((tmp30)){
				HX_STACK_LINE(654)
				int tmp32 = sh;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(654)
				int tmp33 = this->get_height();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(654)
				int tmp34 = sh;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(654)
				int tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(654)
				int tmp36 = dy;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(654)
				int tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(654)
				tmp31 = (tmp32 + tmp37);
			}
			else{
				HX_STACK_LINE(654)
				tmp31 = sh;
			}
			HX_STACK_LINE(654)
			int dh = tmp31;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(656)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(658)
			int tmp32 = (int(threshold) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(658)
			int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(658)
			int tmp34 = (int(threshold) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(658)
			int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(658)
			int tmp36 = (int(tmp35) << int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(658)
			int tmp37 = (int(tmp33) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(658)
			int tmp38 = (int(threshold) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(658)
			int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(658)
			int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(658)
			int tmp41 = (int(tmp37) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(658)
			int tmp42 = (int(threshold) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(658)
			int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(658)
			int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(658)
			threshold = tmp44;
			HX_STACK_LINE(659)
			int tmp45 = (int(color) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(659)
			int tmp46 = (int(tmp45) << int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(659)
			int tmp47 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(659)
			int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(659)
			int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(659)
			int tmp50 = (int(tmp46) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(659)
			int tmp51 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(659)
			int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(659)
			int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(659)
			int tmp54 = (int(tmp50) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(659)
			int tmp55 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(659)
			int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(659)
			int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(659)
			color = tmp57;
			HX_STACK_LINE(661)
			int tmp58 = (sw * sh);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(661)
			int tmp59 = (tmp58 * (int)4);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(661)
			int canvasMemory = tmp59;		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(662)
			int sourceMemory = (int)0;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(664)
			bool tmp60 = copySource;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(664)
			if ((tmp60)){
				HX_STACK_LINE(666)
				int tmp61 = (sw * sh);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(666)
				int tmp62 = (tmp61 * (int)4);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(666)
				sourceMemory = tmp62;
			}
			HX_STACK_LINE(670)
			int tmp61 = (canvasMemory + sourceMemory);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(670)
			int totalMemory = tmp61;		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(671)
			::openfl::_legacy::utils::ByteArray tmp62 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(671)
			::openfl::_legacy::utils::ByteArray memory = tmp62;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(672)
			int tmp63 = totalMemory;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(672)
			memory->setLength(tmp63);
			HX_STACK_LINE(673)
			memory->position = (int)0;
			HX_STACK_LINE(674)
			::openfl::_legacy::display::BitmapData tmp64 = sourceBitmapData->clone();		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(674)
			::openfl::_legacy::display::BitmapData bitmapData = tmp64;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(675)
			::openfl::_legacy::geom::Rectangle tmp65 = sourceRect;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(675)
			::openfl::_legacy::utils::ByteArray tmp66 = bitmapData->getPixels(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(675)
			::openfl::_legacy::utils::ByteArray pixels = tmp66;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(676)
			::openfl::_legacy::utils::ByteArray tmp67 = pixels;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(676)
			memory->writeBytes(tmp67,null(),null());
			HX_STACK_LINE(677)
			memory->position = canvasMemory;
			HX_STACK_LINE(679)
			bool tmp68 = copySource;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(679)
			if ((tmp68)){
				HX_STACK_LINE(681)
				::openfl::_legacy::utils::ByteArray tmp69 = pixels;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(681)
				memory->writeBytes(tmp69,null(),null());
			}
			HX_STACK_LINE(685)
			memory->position = (int)0;
			HX_STACK_LINE(686)
			::openfl::_legacy::utils::ByteArray tmp69 = memory;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(686)
			::openfl::_legacy::Memory_obj::select(tmp69);
			HX_STACK_LINE(688)
			int tmp70 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(688)
			int thresholdMask = tmp70;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(690)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(690)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(690)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(690)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(690)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(692)
				while((true)){
					HX_STACK_LINE(692)
					bool tmp71 = (_g < dh);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(692)
					bool tmp72 = !(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(692)
					if ((tmp72)){
						HX_STACK_LINE(692)
						break;
					}
					HX_STACK_LINE(692)
					int tmp73 = (_g)++;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(692)
					int yy = tmp73;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(694)
					{
						HX_STACK_LINE(694)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(694)
						while((true)){
							HX_STACK_LINE(694)
							bool tmp74 = (_g1 < dw);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(694)
							bool tmp75 = !(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(694)
							if ((tmp75)){
								HX_STACK_LINE(694)
								break;
							}
							HX_STACK_LINE(694)
							int tmp76 = (_g1)++;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(694)
							int xx = tmp76;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(696)
							int tmp77 = (xx + sx);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(696)
							int tmp78 = (yy + sy);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(696)
							int tmp79 = sw;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(696)
							int tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(696)
							int tmp81 = (tmp77 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(696)
							int tmp82 = (tmp81 * (int)4);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(696)
							position = tmp82;
							HX_STACK_LINE(697)
							int tmp83 = position;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(697)
							int tmp84 = ::openfl::_legacy::Memory_obj::getI32(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(697)
							pixelValue = tmp84;
							HX_STACK_LINE(698)
							int tmp85 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(698)
							pixelMask = tmp85;
							HX_STACK_LINE(700)
							int tmp86 = pixelMask;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(700)
							int tmp87 = thresholdMask;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(700)
							int tmp88 = ::openfl::_legacy::display::BitmapData_obj::__ucompare(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(700)
							i = tmp88;
							HX_STACK_LINE(701)
							test = false;
							HX_STACK_LINE(703)
							bool tmp89 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(703)
							if ((tmp89)){
								HX_STACK_LINE(703)
								bool tmp90 = (i == (int)0);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(703)
								test = tmp90;
							}
							else{
								HX_STACK_LINE(704)
								bool tmp90 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(704)
								if ((tmp90)){
									HX_STACK_LINE(704)
									bool tmp91 = (i == (int)-1);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(704)
									test = tmp91;
								}
								else{
									HX_STACK_LINE(705)
									bool tmp91 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(705)
									if ((tmp91)){
										HX_STACK_LINE(705)
										bool tmp92 = (i == (int)1);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(705)
										test = tmp92;
									}
									else{
										HX_STACK_LINE(706)
										bool tmp92 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(706)
										if ((tmp92)){
											HX_STACK_LINE(706)
											bool tmp93 = (i != (int)0);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(706)
											test = tmp93;
										}
										else{
											HX_STACK_LINE(707)
											bool tmp93 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(707)
											if ((tmp93)){
												HX_STACK_LINE(707)
												bool tmp94 = (i == (int)0);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(707)
												bool tmp95 = !(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(707)
												bool tmp96;		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(707)
												if ((tmp95)){
													HX_STACK_LINE(707)
													tmp96 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(707)
													tmp96 = true;
												}
												HX_STACK_LINE(707)
												test = tmp96;
											}
											else{
												HX_STACK_LINE(708)
												bool tmp94 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(708)
												if ((tmp94)){
													HX_STACK_LINE(708)
													bool tmp95 = (i == (int)0);		HX_STACK_VAR(tmp95,"tmp95");
													HX_STACK_LINE(708)
													bool tmp96 = !(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
													HX_STACK_LINE(708)
													bool tmp97;		HX_STACK_VAR(tmp97,"tmp97");
													HX_STACK_LINE(708)
													if ((tmp96)){
														HX_STACK_LINE(708)
														tmp97 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(708)
														tmp97 = true;
													}
													HX_STACK_LINE(708)
													test = tmp97;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(710)
							bool tmp90 = test;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(710)
							if ((tmp90)){
								HX_STACK_LINE(712)
								int tmp91 = position;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(712)
								int tmp92 = color;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(712)
								::openfl::_legacy::Memory_obj::setI32(tmp91,tmp92);
								HX_STACK_LINE(713)
								(hits)++;
							}
							else{
								HX_STACK_LINE(715)
								bool tmp91 = copySource;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(715)
								if ((tmp91)){
									HX_STACK_LINE(717)
									int tmp92 = position;		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(717)
									int tmp93 = (canvasMemory + position);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(717)
									int tmp94 = ::openfl::_legacy::Memory_obj::getI32(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(717)
									::openfl::_legacy::Memory_obj::setI32(tmp92,tmp94);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(725)
			memory->position = (int)0;
			HX_STACK_LINE(726)
			::openfl::_legacy::geom::Rectangle tmp71 = sourceRect;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(726)
			::openfl::_legacy::utils::ByteArray tmp72 = memory;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(726)
			bitmapData->setPixels(tmp71,tmp72);
			HX_STACK_LINE(727)
			::openfl::_legacy::display::BitmapData tmp73 = bitmapData;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(727)
			::openfl::_legacy::geom::Rectangle tmp74 = bitmapData->get_rect();		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(727)
			::openfl::_legacy::geom::Point tmp75 = destPoint;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(727)
			this->copyPixels(tmp73,tmp74,tmp75,null(),null(),null());
			HX_STACK_LINE(728)
			::openfl::_legacy::Memory_obj::select(null());
			HX_STACK_LINE(729)
			int tmp76 = hits;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(729)
			return tmp76;
		}
		HX_STACK_LINE(587)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::_legacy::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","unlock",0x773e5f29,"openfl._legacy.display.BitmapData.unlock","openfl/_legacy/display/BitmapData.hx",736,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::unmultiplyAlpha( ){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","unmultiplyAlpha",0x662ed79c,"openfl._legacy.display.BitmapData.unmultiplyAlpha","openfl/_legacy/display/BitmapData.hx",743,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_LINE(745)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(745)
		::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_unmultiply_alpha(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,unmultiplyAlpha,(void))

Void BitmapData_obj::__drawToSurface( Dynamic surface,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode,::openfl::_legacy::geom::Rectangle clipRect,bool smoothing){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","__drawToSurface",0xb14ef929,"openfl._legacy.display.BitmapData.__drawToSurface","openfl/_legacy/display/BitmapData.hx",750,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_ARG(smoothing,"smoothing")
		HX_STACK_LINE(752)
		Dynamic tmp = surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(752)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(752)
		::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(752)
		::openfl::_legacy::geom::ColorTransform tmp3 = colorTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(752)
		::String tmp4 = blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(752)
		::openfl::_legacy::geom::Rectangle tmp5 = clipRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(752)
		bool tmp6 = smoothing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(752)
		::openfl::_legacy::display::BitmapData_obj::lime_render_surface_to_surface(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,__drawToSurface,(void))

Void BitmapData_obj::__loadFromBytes( ::openfl::_legacy::utils::ByteArray bytes,::openfl::_legacy::utils::ByteArray rawAlpha){
{
		HX_STACK_FRAME("openfl._legacy.display.BitmapData","__loadFromBytes",0xb9d10b76,"openfl._legacy.display.BitmapData.__loadFromBytes","openfl/_legacy/display/BitmapData.hx",764,0x0b92a012)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_LINE(766)
		::openfl::_legacy::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(766)
		::openfl::_legacy::utils::ByteArray tmp1 = rawAlpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(766)
		Dynamic tmp2 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(766)
		this->__handle = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__loadFromBytes,(void))

bool BitmapData_obj::get_premultipliedAlpha( ){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","get_premultipliedAlpha",0x700c9dd6,"openfl._legacy.display.BitmapData.get_premultipliedAlpha","openfl/_legacy/display/BitmapData.hx",832,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_LINE(832)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(832)
	bool tmp1 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_get_prem_alpha(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(832)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_premultipliedAlpha,return )

bool BitmapData_obj::set_premultipliedAlpha( bool value){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","set_premultipliedAlpha",0xa3b81a4a,"openfl._legacy.display.BitmapData.set_premultipliedAlpha","openfl/_legacy/display/BitmapData.hx",833,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(833)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(833)
	::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_set_prem_alpha(tmp,tmp1);
	HX_STACK_LINE(833)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(833)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,set_premultipliedAlpha,return )

::openfl::_legacy::geom::Rectangle BitmapData_obj::get_rect( ){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","get_rect",0xfa476852,"openfl._legacy.display.BitmapData.get_rect","openfl/_legacy/display/BitmapData.hx",834,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_LINE(834)
	int tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(834)
	int tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(834)
	::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(834)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_rect,return )

int BitmapData_obj::get_width( ){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","get_width",0xe7da6318,"openfl._legacy.display.BitmapData.get_width","openfl/_legacy/display/BitmapData.hx",835,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_LINE(835)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(835)
	int tmp1 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(835)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_width,return )

int BitmapData_obj::get_height( ){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","get_height",0xad8bca95,"openfl._legacy.display.BitmapData.get_height","openfl/_legacy/display/BitmapData.hx",836,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_LINE(836)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	int tmp1 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(836)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_height,return )

bool BitmapData_obj::get_transparent( ){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","get_transparent",0x2133f1e4,"openfl._legacy.display.BitmapData.get_transparent","openfl/_legacy/display/BitmapData.hx",837,0x0b92a012)
	HX_STACK_THIS(this)
	HX_STACK_LINE(837)
	bool tmp = this->__transparent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(837)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_transparent,return )

int BitmapData_obj::CLEAR;

int BitmapData_obj::BLACK;

int BitmapData_obj::WHITE;

int BitmapData_obj::RED;

int BitmapData_obj::GREEN;

int BitmapData_obj::BLUE;

::String BitmapData_obj::PNG;

::String BitmapData_obj::JPG;

int BitmapData_obj::TRANSPARENT;

int BitmapData_obj::HARDWARE;

int BitmapData_obj::FORMAT_8888;

int BitmapData_obj::FORMAT_4444;

int BitmapData_obj::FORMAT_565;

int BitmapData_obj::createColor( int rgb,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","createColor",0x1a67de42,"openfl._legacy.display.BitmapData.createColor","openfl/_legacy/display/BitmapData.hx",123,0x0b92a012)
	HX_STACK_ARG(rgb,"rgb")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(125)
		int tmp = rgb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		int tmp1 = (int(alpha) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,createColor,return )

int BitmapData_obj::extractAlpha( int argb){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","extractAlpha",0x58ba4c82,"openfl._legacy.display.BitmapData.extractAlpha","openfl/_legacy/display/BitmapData.hx",206,0x0b92a012)
	HX_STACK_ARG(argb,"argb")
	HX_STACK_LINE(208)
	int tmp = hx::UShr(argb,(int)24);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractAlpha,return )

int BitmapData_obj::extractColor( int argb){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","extractColor",0x81801687,"openfl._legacy.display.BitmapData.extractColor","openfl/_legacy/display/BitmapData.hx",213,0x0b92a012)
	HX_STACK_ARG(argb,"argb")
	HX_STACK_LINE(215)
	int tmp = (int(argb) & int((int)16777215));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractColor,return )

::openfl::_legacy::utils::ByteArray BitmapData_obj::getRGBAPixels( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","getRGBAPixels",0x20e79d52,"openfl._legacy.display.BitmapData.getRGBAPixels","openfl/_legacy/display/BitmapData.hx",326,0x0b92a012)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(328)
	int tmp = bitmapData->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	int tmp1 = bitmapData->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	bool tmp2 = bitmapData->get_transparent();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp,tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(328)
	::openfl::_legacy::display::BitmapData rgbaData = tmp3;		HX_STACK_VAR(rgbaData,"rgbaData");
	HX_STACK_LINE(330)
	::openfl::_legacy::geom::Rectangle tmp4 = bitmapData->get_rect();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(330)
	::openfl::_legacy::geom::Rectangle rect = tmp4;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(331)
	::openfl::_legacy::geom::Point tmp5 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(331)
	::openfl::_legacy::geom::Point point = tmp5;		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(333)
	::openfl::_legacy::display::BitmapData tmp6 = bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(333)
	::openfl::_legacy::geom::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(333)
	::openfl::_legacy::geom::Point tmp8 = point;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(333)
	rgbaData->copyChannel(tmp6,tmp7,tmp8,(int)2,(int)1);
	HX_STACK_LINE(334)
	::openfl::_legacy::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(334)
	::openfl::_legacy::geom::Rectangle tmp10 = rect;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(334)
	::openfl::_legacy::geom::Point tmp11 = point;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(334)
	rgbaData->copyChannel(tmp9,tmp10,tmp11,(int)4,(int)2);
	HX_STACK_LINE(335)
	::openfl::_legacy::display::BitmapData tmp12 = bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(335)
	::openfl::_legacy::geom::Rectangle tmp13 = rect;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(335)
	::openfl::_legacy::geom::Point tmp14 = point;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(335)
	rgbaData->copyChannel(tmp12,tmp13,tmp14,(int)8,(int)4);
	HX_STACK_LINE(336)
	::openfl::_legacy::display::BitmapData tmp15 = bitmapData;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(336)
	::openfl::_legacy::geom::Rectangle tmp16 = rect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(336)
	::openfl::_legacy::geom::Point tmp17 = point;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(336)
	rgbaData->copyChannel(tmp15,tmp16,tmp17,(int)1,(int)8);
	HX_STACK_LINE(338)
	::openfl::_legacy::geom::Rectangle tmp18 = rect;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(338)
	::openfl::_legacy::utils::ByteArray tmp19 = rgbaData->getPixels(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(338)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getRGBAPixels,return )

::openfl::_legacy::display::BitmapData BitmapData_obj::load( ::String filename,hx::Null< int >  __o_format){
int format = __o_format.Default(0);
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","load",0x8d61034b,"openfl._legacy.display.BitmapData.load","openfl/_legacy/display/BitmapData.hx",364,0x0b92a012)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(366)
		::openfl::_legacy::display::BitmapData tmp = ::openfl::_legacy::display::BitmapData_obj::__new((int)0,(int)0,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		::openfl::_legacy::display::BitmapData result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(367)
		::String tmp1 = filename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		int tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		Dynamic tmp3 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(367)
		result->__handle = tmp3;
		HX_STACK_LINE(368)
		::openfl::_legacy::display::BitmapData tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,load,return )

::openfl::_legacy::display::BitmapData BitmapData_obj::loadFromBytes( ::openfl::_legacy::utils::ByteArray bytes,::openfl::_legacy::utils::ByteArray rawAlpha){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","loadFromBytes",0x87ab8dd6,"openfl._legacy.display.BitmapData.loadFromBytes","openfl/_legacy/display/BitmapData.hx",373,0x0b92a012)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_LINE(375)
	::openfl::_legacy::display::BitmapData tmp = ::openfl::_legacy::display::BitmapData_obj::__new((int)0,(int)0,true,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	::openfl::_legacy::display::BitmapData result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		::openfl::_legacy::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		::openfl::_legacy::utils::ByteArray tmp2 = rawAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		Dynamic tmp3 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		result->__handle = tmp3;
	}
	HX_STACK_LINE(377)
	::openfl::_legacy::display::BitmapData tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromBytes,return )

::openfl::_legacy::display::BitmapData BitmapData_obj::loadFromHaxeBytes( ::haxe::io::Bytes bytes,::haxe::io::Bytes rawAlpha){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","loadFromHaxeBytes",0x45aa9150,"openfl._legacy.display.BitmapData.loadFromHaxeBytes","openfl/_legacy/display/BitmapData.hx",382,0x0b92a012)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_LINE(384)
	::haxe::io::Bytes tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	::openfl::_legacy::utils::ByteArray tmp1 = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	bool tmp2 = (rawAlpha == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(384)
	::openfl::_legacy::utils::ByteArray tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(384)
	if ((tmp2)){
		HX_STACK_LINE(384)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(384)
		::haxe::io::Bytes tmp4 = rawAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		tmp3 = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(tmp4);
	}
	HX_STACK_LINE(384)
	::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::loadFromBytes(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(384)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromHaxeBytes,return )

bool BitmapData_obj::sameValue( int a,int b){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","sameValue",0x23f2aae6,"openfl._legacy.display.BitmapData.sameValue","openfl/_legacy/display/BitmapData.hx",510,0x0b92a012)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(512)
	bool tmp = (a == b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(512)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,sameValue,return )

int BitmapData_obj::__flipPixel( int pixel){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","__flipPixel",0x2e4bcef4,"openfl._legacy.display.BitmapData.__flipPixel","openfl/_legacy/display/BitmapData.hx",757,0x0b92a012)
	HX_STACK_ARG(pixel,"pixel")
	HX_STACK_LINE(759)
	int tmp = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(759)
	int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(759)
	int tmp2 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(759)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(759)
	int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(759)
	int tmp5 = (int(tmp1) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(759)
	int tmp6 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(759)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(759)
	int tmp8 = (int(tmp7) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(759)
	int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(759)
	int tmp10 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(759)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(759)
	int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(759)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipPixel,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl._legacy.display.BitmapData","__ucompare",0x056806d5,"openfl._legacy.display.BitmapData.__ucompare","openfl/_legacy/display/BitmapData.hx",771,0x0b92a012)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(773)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(774)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(776)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(776)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(776)
	tmp1 = tmp3;
	HX_STACK_LINE(777)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(777)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(777)
	tmp2 = tmp5;
	HX_STACK_LINE(779)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(779)
	if ((tmp6)){
		HX_STACK_LINE(781)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(781)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(781)
		if ((tmp7)){
			HX_STACK_LINE(781)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(781)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(781)
		return tmp8;
	}
	else{
		HX_STACK_LINE(785)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(785)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(785)
		tmp1 = tmp8;
		HX_STACK_LINE(786)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(786)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(786)
		tmp2 = tmp10;
		HX_STACK_LINE(788)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(788)
		if ((tmp11)){
			HX_STACK_LINE(790)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(790)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(790)
			if ((tmp12)){
				HX_STACK_LINE(790)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(790)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(790)
			return tmp13;
		}
		else{
			HX_STACK_LINE(794)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(794)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(794)
			tmp1 = tmp13;
			HX_STACK_LINE(795)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(795)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(795)
			tmp2 = tmp15;
			HX_STACK_LINE(797)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(797)
			if ((tmp16)){
				HX_STACK_LINE(799)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(799)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(799)
				if ((tmp17)){
					HX_STACK_LINE(799)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(799)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(799)
				return tmp18;
			}
			else{
				HX_STACK_LINE(803)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(803)
				tmp1 = tmp17;
				HX_STACK_LINE(804)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(804)
				tmp2 = tmp18;
				HX_STACK_LINE(806)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(806)
				if ((tmp19)){
					HX_STACK_LINE(808)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(808)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(808)
					if ((tmp20)){
						HX_STACK_LINE(808)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(808)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(808)
					return tmp21;
				}
				else{
					HX_STACK_LINE(812)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(779)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )

Dynamic BitmapData_obj::lime_bitmap_data_create;

Dynamic BitmapData_obj::lime_bitmap_data_load;

Dynamic BitmapData_obj::lime_bitmap_data_from_bytes;

Dynamic BitmapData_obj::lime_bitmap_data_clear;

Dynamic BitmapData_obj::lime_bitmap_data_clone;

Dynamic BitmapData_obj::lime_bitmap_data_apply_filter;

Dynamic BitmapData_obj::lime_bitmap_data_color_transform;

Dynamic BitmapData_obj::lime_bitmap_data_copy;

Dynamic BitmapData_obj::lime_bitmap_data_copy_channel;

Dynamic BitmapData_obj::lime_bitmap_data_fill;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixels;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel32;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel_rgba;

Dynamic BitmapData_obj::lime_bitmap_data_get_array;

Dynamic BitmapData_obj::lime_bitmap_data_get_color_bounds_rect;

Dynamic BitmapData_obj::lime_bitmap_data_scroll;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel32;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel_rgba;

Dynamic BitmapData_obj::lime_bitmap_data_set_bytes;

Dynamic BitmapData_obj::lime_bitmap_data_set_format;

Dynamic BitmapData_obj::lime_bitmap_data_set_array;

Dynamic BitmapData_obj::lime_bitmap_data_create_hardware_surface;

Dynamic BitmapData_obj::lime_bitmap_data_destroy_hardware_surface;

Dynamic BitmapData_obj::lime_bitmap_data_dispose;

Dynamic BitmapData_obj::lime_bitmap_data_generate_filter_rect;

Dynamic BitmapData_obj::lime_render_surface_to_surface;

Dynamic BitmapData_obj::lime_bitmap_data_height;

Dynamic BitmapData_obj::lime_bitmap_data_width;

Dynamic BitmapData_obj::lime_bitmap_data_get_transparent;

Dynamic BitmapData_obj::lime_bitmap_data_set_flags;

Dynamic BitmapData_obj::lime_bitmap_data_encode;

Dynamic BitmapData_obj::lime_bitmap_data_dump_bits;

Dynamic BitmapData_obj::lime_bitmap_data_flood_fill;

Dynamic BitmapData_obj::lime_bitmap_data_noise;

Dynamic BitmapData_obj::lime_bitmap_data_unmultiply_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_multiply_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_get_prem_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_set_prem_alpha;


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp == hx::paccAlways ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"dumpBits") ) { return dumpBits_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlags") ) { return setFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRectEx") ) { return fillRectEx_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return inCallProp == hx::paccAlways ? get_transparent() : transparent; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { return multiplyAlpha_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { return unmultiplyAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawToSurface") ) { return __drawToSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"__loadFromBytes") ) { return __loadFromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { if (inCallProp == hx::paccAlways) return get_premultipliedAlpha(); }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createHardwareSurface") ) { return createHardwareSurface_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"destroyHardwareSurface") ) { return destroyHardwareSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultipliedAlpha") ) { return get_premultipliedAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultipliedAlpha") ) { return set_premultipliedAlpha_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sameValue") ) { outValue = sameValue_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__ucompare") ) { outValue = __ucompare_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createColor") ) { outValue = createColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__flipPixel") ) { outValue = __flipPixel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extractAlpha") ) { outValue = extractAlpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"extractColor") ) { outValue = extractColor_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRGBAPixels") ) { outValue = getRGBAPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadFromHaxeBytes") ) { outValue = loadFromHaxeBytes_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_load") ) { outValue = lime_bitmap_data_load; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy") ) { outValue = lime_bitmap_data_copy; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_fill") ) { outValue = lime_bitmap_data_fill; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clear") ) { outValue = lime_bitmap_data_clear; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clone") ) { outValue = lime_bitmap_data_clone; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_width") ) { outValue = lime_bitmap_data_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_noise") ) { outValue = lime_bitmap_data_noise; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create") ) { outValue = lime_bitmap_data_create; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_scroll") ) { outValue = lime_bitmap_data_scroll; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_height") ) { outValue = lime_bitmap_data_height; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_encode") ) { outValue = lime_bitmap_data_encode; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dispose") ) { outValue = lime_bitmap_data_dispose; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel") ) { outValue = lime_bitmap_data_get_pixel; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_array") ) { outValue = lime_bitmap_data_get_array; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel") ) { outValue = lime_bitmap_data_set_pixel; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_bytes") ) { outValue = lime_bitmap_data_set_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_array") ) { outValue = lime_bitmap_data_set_array; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_flags") ) { outValue = lime_bitmap_data_set_flags; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dump_bits") ) { outValue = lime_bitmap_data_dump_bits; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_from_bytes") ) { outValue = lime_bitmap_data_from_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixels") ) { outValue = lime_bitmap_data_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_format") ) { outValue = lime_bitmap_data_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_flood_fill") ) { outValue = lime_bitmap_data_flood_fill; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel32") ) { outValue = lime_bitmap_data_get_pixel32; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel32") ) { outValue = lime_bitmap_data_set_pixel32; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_apply_filter") ) { outValue = lime_bitmap_data_apply_filter; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy_channel") ) { outValue = lime_bitmap_data_copy_channel; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_render_surface_to_surface") ) { outValue = lime_render_surface_to_surface; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel_rgba") ) { outValue = lime_bitmap_data_get_pixel_rgba; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel_rgba") ) { outValue = lime_bitmap_data_set_pixel_rgba; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_multiply_alpha") ) { outValue = lime_bitmap_data_multiply_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_prem_alpha") ) { outValue = lime_bitmap_data_get_prem_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_prem_alpha") ) { outValue = lime_bitmap_data_set_prem_alpha; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_color_transform") ) { outValue = lime_bitmap_data_color_transform; return true;  }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_transparent") ) { outValue = lime_bitmap_data_get_transparent; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_unmultiply_alpha") ) { outValue = lime_bitmap_data_unmultiply_alpha; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_generate_filter_rect") ) { outValue = lime_bitmap_data_generate_filter_rect; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_color_bounds_rect") ) { outValue = lime_bitmap_data_get_color_bounds_rect; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create_hardware_surface") ) { outValue = lime_bitmap_data_create_hardware_surface; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_destroy_hardware_surface") ) { outValue = lime_bitmap_data_destroy_hardware_surface; return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { if (inCallProp == hx::paccAlways) return set_premultipliedAlpha(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_load") ) { lime_bitmap_data_load=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy") ) { lime_bitmap_data_copy=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_fill") ) { lime_bitmap_data_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clear") ) { lime_bitmap_data_clear=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clone") ) { lime_bitmap_data_clone=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_width") ) { lime_bitmap_data_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_noise") ) { lime_bitmap_data_noise=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create") ) { lime_bitmap_data_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_scroll") ) { lime_bitmap_data_scroll=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_height") ) { lime_bitmap_data_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_encode") ) { lime_bitmap_data_encode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dispose") ) { lime_bitmap_data_dispose=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel") ) { lime_bitmap_data_get_pixel=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_array") ) { lime_bitmap_data_get_array=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel") ) { lime_bitmap_data_set_pixel=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_bytes") ) { lime_bitmap_data_set_bytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_array") ) { lime_bitmap_data_set_array=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_flags") ) { lime_bitmap_data_set_flags=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dump_bits") ) { lime_bitmap_data_dump_bits=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_from_bytes") ) { lime_bitmap_data_from_bytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixels") ) { lime_bitmap_data_get_pixels=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_format") ) { lime_bitmap_data_set_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_flood_fill") ) { lime_bitmap_data_flood_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel32") ) { lime_bitmap_data_get_pixel32=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel32") ) { lime_bitmap_data_set_pixel32=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_apply_filter") ) { lime_bitmap_data_apply_filter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy_channel") ) { lime_bitmap_data_copy_channel=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_render_surface_to_surface") ) { lime_render_surface_to_surface=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel_rgba") ) { lime_bitmap_data_get_pixel_rgba=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel_rgba") ) { lime_bitmap_data_set_pixel_rgba=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_multiply_alpha") ) { lime_bitmap_data_multiply_alpha=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_prem_alpha") ) { lime_bitmap_data_get_prem_alpha=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_prem_alpha") ) { lime_bitmap_data_set_prem_alpha=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_color_transform") ) { lime_bitmap_data_color_transform=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_transparent") ) { lime_bitmap_data_get_transparent=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_unmultiply_alpha") ) { lime_bitmap_data_unmultiply_alpha=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_generate_filter_rect") ) { lime_bitmap_data_generate_filter_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_color_bounds_rect") ) { lime_bitmap_data_get_color_bounds_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create_hardware_surface") ) { lime_bitmap_data_create_hardware_surface=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_destroy_hardware_surface") ) { lime_bitmap_data_destroy_hardware_surface=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("premultipliedAlpha","\x28","\x8e","\x5c","\x1a"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__transparent),HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BitmapData_obj::CLEAR,HX_HCSTRING("CLEAR","\x6d","\xa9","\x49","\xc6")},
	{hx::fsInt,(void *) &BitmapData_obj::BLACK,HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32")},
	{hx::fsInt,(void *) &BitmapData_obj::WHITE,HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47")},
	{hx::fsInt,(void *) &BitmapData_obj::RED,HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{hx::fsInt,(void *) &BitmapData_obj::GREEN,HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17")},
	{hx::fsInt,(void *) &BitmapData_obj::BLUE,HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b")},
	{hx::fsString,(void *) &BitmapData_obj::PNG,HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00")},
	{hx::fsString,(void *) &BitmapData_obj::JPG,HX_HCSTRING("JPG","\xc1","\x6c","\x38","\x00")},
	{hx::fsInt,(void *) &BitmapData_obj::TRANSPARENT,HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8")},
	{hx::fsInt,(void *) &BitmapData_obj::HARDWARE,HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")},
	{hx::fsInt,(void *) &BitmapData_obj::FORMAT_8888,HX_HCSTRING("FORMAT_8888","\x48","\x7b","\x79","\x56")},
	{hx::fsInt,(void *) &BitmapData_obj::FORMAT_4444,HX_HCSTRING("FORMAT_4444","\x48","\x94","\xd1","\x53")},
	{hx::fsInt,(void *) &BitmapData_obj::FORMAT_565,HX_HCSTRING("FORMAT_565","\x6c","\x4e","\xc8","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_create,HX_HCSTRING("lime_bitmap_data_create","\x4b","\x52","\x59","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_load,HX_HCSTRING("lime_bitmap_data_load","\xb5","\xc3","\x38","\x8d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_from_bytes,HX_HCSTRING("lime_bitmap_data_from_bytes","\x65","\x1f","\xf2","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_clear,HX_HCSTRING("lime_bitmap_data_clear","\x1e","\xa5","\xde","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_clone,HX_HCSTRING("lime_bitmap_data_clone","\xee","\x46","\xe6","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_apply_filter,HX_HCSTRING("lime_bitmap_data_apply_filter","\x38","\x26","\xf4","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_color_transform,HX_HCSTRING("lime_bitmap_data_color_transform","\x21","\x87","\x88","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_copy,HX_HCSTRING("lime_bitmap_data_copy","\x44","\xe5","\x45","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_copy_channel,HX_HCSTRING("lime_bitmap_data_copy_channel","\x88","\x23","\xdd","\xd5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_fill,HX_HCSTRING("lime_bitmap_data_fill","\x12","\xf8","\x3c","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_pixels,HX_HCSTRING("lime_bitmap_data_get_pixels","\xc5","\x9d","\xf4","\x83")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_pixel,HX_HCSTRING("lime_bitmap_data_get_pixel","\xee","\xf2","\xff","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_pixel32,HX_HCSTRING("lime_bitmap_data_get_pixel32","\x0d","\x37","\x15","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_pixel_rgba,HX_HCSTRING("lime_bitmap_data_get_pixel_rgba","\xe5","\x9a","\x9c","\xac")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_array,HX_HCSTRING("lime_bitmap_data_get_array","\x01","\x9a","\xeb","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_color_bounds_rect,HX_HCSTRING("lime_bitmap_data_get_color_bounds_rect","\xba","\xaa","\xf3","\xe3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_scroll,HX_HCSTRING("lime_bitmap_data_scroll","\x5c","\xc3","\xae","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_pixel,HX_HCSTRING("lime_bitmap_data_set_pixel","\xfa","\xde","\x50","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_pixel32,HX_HCSTRING("lime_bitmap_data_set_pixel32","\x19","\x3e","\x82","\xfc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_pixel_rgba,HX_HCSTRING("lime_bitmap_data_set_pixel_rgba","\x59","\x83","\xbc","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_bytes,HX_HCSTRING("lime_bitmap_data_set_bytes","\xdf","\x20","\x45","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_format,HX_HCSTRING("lime_bitmap_data_set_format","\x43","\xdc","\x56","\xf8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_array,HX_HCSTRING("lime_bitmap_data_set_array","\x0d","\x86","\x3c","\x42")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_create_hardware_surface,HX_HCSTRING("lime_bitmap_data_create_hardware_surface","\x0a","\xe2","\xc0","\xcb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_destroy_hardware_surface,HX_HCSTRING("lime_bitmap_data_destroy_hardware_surface","\x8a","\xfd","\xf8","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_dispose,HX_HCSTRING("lime_bitmap_data_dispose","\x70","\x7a","\xb0","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_generate_filter_rect,HX_HCSTRING("lime_bitmap_data_generate_filter_rect","\x90","\x4e","\xab","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_render_surface_to_surface,HX_HCSTRING("lime_render_surface_to_surface","\xda","\x75","\xe9","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_height,HX_HCSTRING("lime_bitmap_data_height","\x36","\xf3","\x95","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_width,HX_HCSTRING("lime_bitmap_data_width","\x97","\xe9","\xe5","\x55")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_transparent,HX_HCSTRING("lime_bitmap_data_get_transparent","\xba","\x95","\x37","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_flags,HX_HCSTRING("lime_bitmap_data_set_flags","\xbb","\x43","\x39","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_encode,HX_HCSTRING("lime_bitmap_data_encode","\x65","\xdd","\x2d","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_dump_bits,HX_HCSTRING("lime_bitmap_data_dump_bits","\x42","\x0d","\xd2","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_flood_fill,HX_HCSTRING("lime_bitmap_data_flood_fill","\xb3","\x46","\x72","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_noise,HX_HCSTRING("lime_bitmap_data_noise","\x2b","\xc3","\x45","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_unmultiply_alpha,HX_HCSTRING("lime_bitmap_data_unmultiply_alpha","\xeb","\x37","\xa7","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_multiply_alpha,HX_HCSTRING("lime_bitmap_data_multiply_alpha","\x12","\x56","\x11","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_get_prem_alpha,HX_HCSTRING("lime_bitmap_data_get_prem_alpha","\xa1","\x93","\x3f","\x15")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::lime_bitmap_data_set_prem_alpha,HX_HCSTRING("lime_bitmap_data_set_prem_alpha","\x15","\x7c","\x5f","\x35")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("createHardwareSurface","\xc9","\xac","\x29","\x88"),
	HX_HCSTRING("destroyHardwareSurface","\x8b","\x54","\xe1","\x85"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("dumpBits","\x5a","\x4e","\xbb","\x96"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("fillRectEx","\x9a","\xa1","\x8a","\x01"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setFlags","\x45","\x94","\xc0","\x10"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("__drawToSurface","\x2e","\xea","\xb6","\x73"),
	HX_HCSTRING("__loadFromBytes","\x7b","\xfc","\x38","\x7c"),
	HX_HCSTRING("get_premultipliedAlpha","\x71","\x07","\xf1","\x73"),
	HX_HCSTRING("set_premultipliedAlpha","\xe5","\x83","\x9c","\xa7"),
	HX_HCSTRING("get_rect","\xad","\x08","\x62","\xcb"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_transparent","\xe9","\xe2","\x9b","\xe3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::CLEAR,"CLEAR");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(BitmapData_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(BitmapData_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::PNG,"PNG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::JPG,"JPG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(BitmapData_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_8888,"FORMAT_8888");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_4444,"FORMAT_4444");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_565,"FORMAT_565");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create,"lime_bitmap_data_create");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_load,"lime_bitmap_data_load");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_from_bytes,"lime_bitmap_data_from_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clear,"lime_bitmap_data_clear");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clone,"lime_bitmap_data_clone");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_apply_filter,"lime_bitmap_data_apply_filter");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_color_transform,"lime_bitmap_data_color_transform");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy,"lime_bitmap_data_copy");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy_channel,"lime_bitmap_data_copy_channel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_fill,"lime_bitmap_data_fill");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixels,"lime_bitmap_data_get_pixels");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel,"lime_bitmap_data_get_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel32,"lime_bitmap_data_get_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel_rgba,"lime_bitmap_data_get_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_array,"lime_bitmap_data_get_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_color_bounds_rect,"lime_bitmap_data_get_color_bounds_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_scroll,"lime_bitmap_data_scroll");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel,"lime_bitmap_data_set_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel32,"lime_bitmap_data_set_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel_rgba,"lime_bitmap_data_set_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_bytes,"lime_bitmap_data_set_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_format,"lime_bitmap_data_set_format");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_array,"lime_bitmap_data_set_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create_hardware_surface,"lime_bitmap_data_create_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_destroy_hardware_surface,"lime_bitmap_data_destroy_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dispose,"lime_bitmap_data_dispose");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_generate_filter_rect,"lime_bitmap_data_generate_filter_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_render_surface_to_surface,"lime_render_surface_to_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_height,"lime_bitmap_data_height");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_width,"lime_bitmap_data_width");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_transparent,"lime_bitmap_data_get_transparent");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_flags,"lime_bitmap_data_set_flags");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_encode,"lime_bitmap_data_encode");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dump_bits,"lime_bitmap_data_dump_bits");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_flood_fill,"lime_bitmap_data_flood_fill");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_noise,"lime_bitmap_data_noise");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_unmultiply_alpha,"lime_bitmap_data_unmultiply_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_multiply_alpha,"lime_bitmap_data_multiply_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_prem_alpha,"lime_bitmap_data_get_prem_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_prem_alpha,"lime_bitmap_data_set_prem_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::CLEAR,"CLEAR");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::PNG,"PNG");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::JPG,"JPG");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_8888,"FORMAT_8888");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_4444,"FORMAT_4444");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_565,"FORMAT_565");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create,"lime_bitmap_data_create");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_load,"lime_bitmap_data_load");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_from_bytes,"lime_bitmap_data_from_bytes");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clear,"lime_bitmap_data_clear");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clone,"lime_bitmap_data_clone");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_apply_filter,"lime_bitmap_data_apply_filter");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_color_transform,"lime_bitmap_data_color_transform");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy,"lime_bitmap_data_copy");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy_channel,"lime_bitmap_data_copy_channel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_fill,"lime_bitmap_data_fill");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixels,"lime_bitmap_data_get_pixels");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel,"lime_bitmap_data_get_pixel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel32,"lime_bitmap_data_get_pixel32");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel_rgba,"lime_bitmap_data_get_pixel_rgba");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_array,"lime_bitmap_data_get_array");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_color_bounds_rect,"lime_bitmap_data_get_color_bounds_rect");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_scroll,"lime_bitmap_data_scroll");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel,"lime_bitmap_data_set_pixel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel32,"lime_bitmap_data_set_pixel32");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel_rgba,"lime_bitmap_data_set_pixel_rgba");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_bytes,"lime_bitmap_data_set_bytes");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_format,"lime_bitmap_data_set_format");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_array,"lime_bitmap_data_set_array");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create_hardware_surface,"lime_bitmap_data_create_hardware_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_destroy_hardware_surface,"lime_bitmap_data_destroy_hardware_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dispose,"lime_bitmap_data_dispose");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_generate_filter_rect,"lime_bitmap_data_generate_filter_rect");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_render_surface_to_surface,"lime_render_surface_to_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_height,"lime_bitmap_data_height");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_width,"lime_bitmap_data_width");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_transparent,"lime_bitmap_data_get_transparent");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_flags,"lime_bitmap_data_set_flags");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_encode,"lime_bitmap_data_encode");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dump_bits,"lime_bitmap_data_dump_bits");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_flood_fill,"lime_bitmap_data_flood_fill");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_noise,"lime_bitmap_data_noise");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_unmultiply_alpha,"lime_bitmap_data_unmultiply_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_multiply_alpha,"lime_bitmap_data_multiply_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_prem_alpha,"lime_bitmap_data_get_prem_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_prem_alpha,"lime_bitmap_data_set_prem_alpha");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLEAR","\x6d","\xa9","\x49","\xc6"),
	HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32"),
	HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47"),
	HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),
	HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),
	HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),
	HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00"),
	HX_HCSTRING("JPG","\xc1","\x6c","\x38","\x00"),
	HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8"),
	HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),
	HX_HCSTRING("FORMAT_8888","\x48","\x7b","\x79","\x56"),
	HX_HCSTRING("FORMAT_4444","\x48","\x94","\xd1","\x53"),
	HX_HCSTRING("FORMAT_565","\x6c","\x4e","\xc8","\x1a"),
	HX_HCSTRING("createColor","\xc7","\xa8","\xd7","\x73"),
	HX_HCSTRING("extractAlpha","\x5d","\xb6","\x1b","\x41"),
	HX_HCSTRING("extractColor","\x62","\x80","\xe1","\x69"),
	HX_HCSTRING("getRGBAPixels","\x17","\xd3","\xc2","\x8d"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromHaxeBytes","\x95","\x8d","\xb4","\x66"),
	HX_HCSTRING("sameValue","\x2b","\x5a","\x24","\x4a"),
	HX_HCSTRING("__flipPixel","\x79","\x99","\xbb","\x87"),
	HX_HCSTRING("__ucompare","\xf0","\xb3","\xaf","\x4a"),
	HX_HCSTRING("lime_bitmap_data_create","\x4b","\x52","\x59","\x03"),
	HX_HCSTRING("lime_bitmap_data_load","\xb5","\xc3","\x38","\x8d"),
	HX_HCSTRING("lime_bitmap_data_from_bytes","\x65","\x1f","\xf2","\xce"),
	HX_HCSTRING("lime_bitmap_data_clear","\x1e","\xa5","\xde","\xd3"),
	HX_HCSTRING("lime_bitmap_data_clone","\xee","\x46","\xe6","\xd3"),
	HX_HCSTRING("lime_bitmap_data_apply_filter","\x38","\x26","\xf4","\x12"),
	HX_HCSTRING("lime_bitmap_data_color_transform","\x21","\x87","\x88","\x74"),
	HX_HCSTRING("lime_bitmap_data_copy","\x44","\xe5","\x45","\x87"),
	HX_HCSTRING("lime_bitmap_data_copy_channel","\x88","\x23","\xdd","\xd5"),
	HX_HCSTRING("lime_bitmap_data_fill","\x12","\xf8","\x3c","\x89"),
	HX_HCSTRING("lime_bitmap_data_get_pixels","\xc5","\x9d","\xf4","\x83"),
	HX_HCSTRING("lime_bitmap_data_get_pixel","\xee","\xf2","\xff","\xfb"),
	HX_HCSTRING("lime_bitmap_data_get_pixel32","\x0d","\x37","\x15","\xf2"),
	HX_HCSTRING("lime_bitmap_data_get_pixel_rgba","\xe5","\x9a","\x9c","\xac"),
	HX_HCSTRING("lime_bitmap_data_get_array","\x01","\x9a","\xeb","\x5e"),
	HX_HCSTRING("lime_bitmap_data_get_color_bounds_rect","\xba","\xaa","\xf3","\xe3"),
	HX_HCSTRING("lime_bitmap_data_scroll","\x5c","\xc3","\xae","\xce"),
	HX_HCSTRING("lime_bitmap_data_set_pixel","\xfa","\xde","\x50","\xdf"),
	HX_HCSTRING("lime_bitmap_data_set_pixel32","\x19","\x3e","\x82","\xfc"),
	HX_HCSTRING("lime_bitmap_data_set_pixel_rgba","\x59","\x83","\xbc","\xcc"),
	HX_HCSTRING("lime_bitmap_data_set_bytes","\xdf","\x20","\x45","\xda"),
	HX_HCSTRING("lime_bitmap_data_set_format","\x43","\xdc","\x56","\xf8"),
	HX_HCSTRING("lime_bitmap_data_set_array","\x0d","\x86","\x3c","\x42"),
	HX_HCSTRING("lime_bitmap_data_create_hardware_surface","\x0a","\xe2","\xc0","\xcb"),
	HX_HCSTRING("lime_bitmap_data_destroy_hardware_surface","\x8a","\xfd","\xf8","\xe2"),
	HX_HCSTRING("lime_bitmap_data_dispose","\x70","\x7a","\xb0","\x94"),
	HX_HCSTRING("lime_bitmap_data_generate_filter_rect","\x90","\x4e","\xab","\x6f"),
	HX_HCSTRING("lime_render_surface_to_surface","\xda","\x75","\xe9","\xfe"),
	HX_HCSTRING("lime_bitmap_data_height","\x36","\xf3","\x95","\x89"),
	HX_HCSTRING("lime_bitmap_data_width","\x97","\xe9","\xe5","\x55"),
	HX_HCSTRING("lime_bitmap_data_get_transparent","\xba","\x95","\x37","\x5e"),
	HX_HCSTRING("lime_bitmap_data_set_flags","\xbb","\x43","\x39","\x1f"),
	HX_HCSTRING("lime_bitmap_data_encode","\x65","\xdd","\x2d","\x81"),
	HX_HCSTRING("lime_bitmap_data_dump_bits","\x42","\x0d","\xd2","\xf0"),
	HX_HCSTRING("lime_bitmap_data_flood_fill","\xb3","\x46","\x72","\x69"),
	HX_HCSTRING("lime_bitmap_data_noise","\x2b","\xc3","\x45","\x2b"),
	HX_HCSTRING("lime_bitmap_data_unmultiply_alpha","\xeb","\x37","\xa7","\xcf"),
	HX_HCSTRING("lime_bitmap_data_multiply_alpha","\x12","\x56","\x11","\x21"),
	HX_HCSTRING("lime_bitmap_data_get_prem_alpha","\xa1","\x93","\x3f","\x15"),
	HX_HCSTRING("lime_bitmap_data_set_prem_alpha","\x15","\x7c","\x5f","\x35"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.BitmapData","\x69","\x89","\x8d","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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

void BitmapData_obj::__boot()
{
	CLEAR= (int)0;
	BLACK= (int)-16777216;
	WHITE= (int)-16777216;
	RED= (int)-65536;
	GREEN= (int)-16711936;
	BLUE= (int)-16776961;
	PNG= HX_HCSTRING("png","\xa9","\x5c","\x55","\x00");
	JPG= HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00");
	TRANSPARENT= (int)1;
	HARDWARE= (int)2;
	FORMAT_8888= (int)0;
	FORMAT_4444= (int)1;
	FORMAT_565= (int)2;
	lime_bitmap_data_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_create","\xad","\x6a","\x7e","\x86"),(int)-1);
	lime_bitmap_data_load= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_load","\x97","\x9f","\x85","\x7e"),(int)2);
	lime_bitmap_data_from_bytes= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_from_bytes","\xc7","\x10","\xc8","\x53"),(int)2);
	lime_bitmap_data_clear= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_clear","\xfc","\x2e","\xd2","\x05"),(int)2);
	lime_bitmap_data_clone= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_clone","\xcc","\xd0","\xd9","\x05"),(int)1);
	lime_bitmap_data_apply_filter= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_apply_filter","\x1a","\xb4","\x32","\xee"),(int)5);
	lime_bitmap_data_color_transform= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_color_transform","\x7f","\x52","\x82","\x7c"),(int)3);
	lime_bitmap_data_copy= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_copy","\x26","\xc1","\x92","\x78"),(int)5);
	lime_bitmap_data_copy_channel= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_copy_channel","\x6a","\xb1","\x1b","\xb1"),(int)-1);
	lime_bitmap_data_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_fill","\xf4","\xd3","\x89","\x7a"),(int)4);
	lime_bitmap_data_get_pixels= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_pixels","\x27","\x8f","\xca","\x08"),(int)2);
	lime_bitmap_data_get_pixel= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_pixel","\xcc","\xc3","\xe0","\x5b"),(int)3);
	lime_bitmap_data_get_pixel32= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_pixel32","\x6b","\x7b","\x72","\xa8"),(int)3);
	lime_bitmap_data_get_pixel_rgba= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_pixel_rgba","\x47","\xe5","\x03","\xbf"),(int)3);
	lime_bitmap_data_get_array= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_array","\xdf","\x6a","\xcc","\xbe"),(int)3);
	lime_bitmap_data_get_color_bounds_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_color_bounds_rect","\x98","\x50","\xb9","\x76"),(int)5);
	lime_bitmap_data_scroll= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_scroll","\xbe","\xdb","\xd3","\x51"),(int)3);
	lime_bitmap_data_set_pixel= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_pixel","\xd8","\xaf","\x31","\x3f"),(int)4);
	lime_bitmap_data_set_pixel32= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_pixel32","\x77","\x82","\xdf","\xb2"),(int)4);
	lime_bitmap_data_set_pixel_rgba= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_pixel_rgba","\xbb","\xcd","\x23","\xdf"),(int)4);
	lime_bitmap_data_set_bytes= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_bytes","\xbd","\xf1","\x25","\x3a"),(int)4);
	lime_bitmap_data_set_format= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_format","\xa5","\xcd","\x2c","\x7d"),(int)2);
	lime_bitmap_data_set_array= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_array","\xeb","\x56","\x1d","\xa2"),(int)3);
	lime_bitmap_data_create_hardware_surface= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_create_hardware_surface","\x68","\x3b","\xa2","\xd7"),(int)1);
	lime_bitmap_data_destroy_hardware_surface= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_destroy_hardware_surface","\x6c","\xd6","\x45","\x3c"),(int)1);
	lime_bitmap_data_dispose= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_dispose","\xce","\xb7","\x00","\xd2"),(int)1);
	lime_bitmap_data_generate_filter_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_generate_filter_rect","\x72","\x8e","\xdd","\xe8"),(int)3);
	lime_render_surface_to_surface= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_render_surface_to_surface","\xb8","\x0d","\x67","\xfa"),(int)-1);
	lime_bitmap_data_height= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_height","\x98","\x0b","\xbb","\x0c"),(int)1);
	lime_bitmap_data_width= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_width","\x75","\x73","\xd9","\x87"),(int)1);
	lime_bitmap_data_get_transparent= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_transparent","\x18","\x61","\x31","\x66"),(int)1);
	lime_bitmap_data_set_flags= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_flags","\x99","\x14","\x1a","\x7f"),(int)2);
	lime_bitmap_data_encode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_encode","\xc7","\xf5","\x52","\x04"),(int)3);
	lime_bitmap_data_dump_bits= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_dump_bits","\x20","\xde","\xb2","\x50"),(int)1);
	lime_bitmap_data_flood_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_flood_fill","\x15","\x38","\x48","\xee"),(int)4);
	lime_bitmap_data_noise= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_noise","\x09","\x4d","\x39","\x5d"),(int)-1);
	lime_bitmap_data_unmultiply_alpha= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_unmultiply_alpha","\xcd","\x5e","\x3f","\xc2"),(int)1);
	lime_bitmap_data_multiply_alpha= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_multiply_alpha","\x74","\xa0","\x78","\x33"),(int)1);
	lime_bitmap_data_get_prem_alpha= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_get_prem_alpha","\x03","\xde","\xa6","\x27"),(int)1);
	lime_bitmap_data_set_prem_alpha= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_bitmap_data_set_prem_alpha","\x77","\xc6","\xc6","\x47"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
