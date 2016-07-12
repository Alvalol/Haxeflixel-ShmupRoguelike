#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace flixel{
namespace graphics{

Void FlxGraphic_obj::__construct(::String Key,::openfl::_legacy::display::BitmapData Bitmap,Dynamic Persist)
{
HX_STACK_FRAME("flixel.graphics.FlxGraphic","new",0x02373c99,"flixel.graphics.FlxGraphic.new","flixel/graphics/FlxGraphic.hx",20,0xb3633517)
HX_STACK_THIS(this)
HX_STACK_ARG(Key,"Key")
HX_STACK_ARG(Bitmap,"Bitmap")
HX_STACK_ARG(Persist,"Persist")
{
	HX_STACK_LINE(383)
	this->_destroyOnNoUse = true;
	HX_STACK_LINE(381)
	this->_useCount = (int)0;
	HX_STACK_LINE(367)
	this->unique = false;
	HX_STACK_LINE(320)
	this->isDumped = false;
	HX_STACK_LINE(310)
	this->persist = false;
	HX_STACK_LINE(296)
	this->height = (int)0;
	HX_STACK_LINE(291)
	this->width = (int)0;
	HX_STACK_LINE(393)
	this->key = Key;
	HX_STACK_LINE(394)
	bool tmp = (Persist != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	if ((tmp)){
		HX_STACK_LINE(394)
		tmp1 = Persist;
	}
	else{
		HX_STACK_LINE(394)
		tmp1 = ::flixel::graphics::FlxGraphic_obj::defaultPersist;
	}
	HX_STACK_LINE(394)
	this->persist = tmp1;
	HX_STACK_LINE(396)
	::haxe::ds::EnumValueMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(396)
	{
		HX_STACK_LINE(396)
		::haxe::ds::EnumValueMap tmp3 = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		::haxe::ds::EnumValueMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(396)
	this->frameCollections = tmp2;
	HX_STACK_LINE(397)
	this->frameCollectionTypes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(398)
	::openfl::_legacy::display::BitmapData tmp3 = Bitmap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(398)
	this->set_bitmap(tmp3);
}
;
	return null();
}

//FlxGraphic_obj::~FlxGraphic_obj() { }

Dynamic FlxGraphic_obj::__CreateEmpty() { return  new FlxGraphic_obj; }
hx::ObjectPtr< FlxGraphic_obj > FlxGraphic_obj::__new(::String Key,::openfl::_legacy::display::BitmapData Bitmap,Dynamic Persist)
{  hx::ObjectPtr< FlxGraphic_obj > _result_ = new FlxGraphic_obj();
	_result_->__construct(Key,Bitmap,Persist);
	return _result_;}

Dynamic FlxGraphic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGraphic_obj > _result_ = new FlxGraphic_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxGraphic_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxGraphic_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxGraphic_obj >(this); }
Void FlxGraphic_obj::dump( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","dump",0xe78dc2db,"flixel.graphics.FlxGraphic.dump","flixel/graphics/FlxGraphic.hx",406,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(409)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(409)
		if ((tmp)){
			HX_STACK_LINE(411)
			::hx::Class tmp1 = this->assetsClass;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(411)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(411)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(411)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(411)
			if ((tmp3)){
				HX_STACK_LINE(411)
				::String tmp5 = this->assetsKey;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(411)
				::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(411)
				tmp4 = (tmp6 != null());
			}
			else{
				HX_STACK_LINE(411)
				tmp4 = true;
			}
			HX_STACK_LINE(411)
			if ((tmp4)){
				HX_STACK_LINE(413)
				::openfl::_legacy::display::BitmapData tmp5 = this->bitmap;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(413)
				tmp5->dumpBits();
				HX_STACK_LINE(414)
				this->isDumped = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,dump,(void))

Void FlxGraphic_obj::undump( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","undump",0xf6fcc174,"flixel.graphics.FlxGraphic.undump","flixel/graphics/FlxGraphic.hx",425,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(426)
		::openfl::_legacy::display::BitmapData tmp = this->getBitmapFromSystem();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		::openfl::_legacy::display::BitmapData newBitmap = tmp;		HX_STACK_VAR(newBitmap,"newBitmap");
		HX_STACK_LINE(427)
		bool tmp1 = (newBitmap != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		if ((tmp1)){
			HX_STACK_LINE(429)
			::openfl::_legacy::display::BitmapData tmp2 = newBitmap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			this->set_bitmap(tmp2);
		}
		HX_STACK_LINE(431)
		this->isDumped = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,undump,(void))

Void FlxGraphic_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","onContext",0x4fa62b89,"flixel.graphics.FlxGraphic.onContext","flixel/graphics/FlxGraphic.hx",439,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(441)
		bool tmp = this->isDumped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		if ((tmp)){
			HX_STACK_LINE(443)
			this->undump();
			HX_STACK_LINE(444)
			this->dump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onContext,(void))

Void FlxGraphic_obj::onAssetsReload( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","onAssetsReload",0x9c63b062,"flixel.graphics.FlxGraphic.onAssetsReload","flixel/graphics/FlxGraphic.hx",453,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(454)
		::hx::Class tmp = this->assetsClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		if ((tmp2)){
			HX_STACK_LINE(454)
			::String tmp4 = this->assetsKey;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(454)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(454)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(454)
			tmp3 = true;
		}
		HX_STACK_LINE(454)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		if ((tmp4)){
			HX_STACK_LINE(455)
			return null();
		}
		HX_STACK_LINE(457)
		bool tmp5 = this->isDumped;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		bool dumped = tmp5;		HX_STACK_VAR(dumped,"dumped");
		HX_STACK_LINE(458)
		this->undump();
		HX_STACK_LINE(459)
		bool tmp6 = dumped;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(459)
		if ((tmp6)){
			HX_STACK_LINE(460)
			this->dump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onAssetsReload,(void))

Void FlxGraphic_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","destroy",0x6c66a9b3,"flixel.graphics.FlxGraphic.destroy","flixel/graphics/FlxGraphic.hx",467,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(468)
		::openfl::_legacy::display::BitmapData tmp = this->bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(468)
		::openfl::_legacy::display::BitmapData tmp1 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(468)
		this->set_bitmap(tmp1);
		HX_STACK_LINE(469)
		bool tmp2 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(469)
		if ((tmp2)){
			HX_STACK_LINE(471)
			this->_tilesheet = null();
		}
		HX_STACK_LINE(473)
		this->key = null();
		HX_STACK_LINE(474)
		this->assetsKey = null();
		HX_STACK_LINE(475)
		this->assetsClass = null();
		HX_STACK_LINE(476)
		this->_imageFrame = null();
		HX_STACK_LINE(478)
		Array< ::Dynamic > collections;		HX_STACK_VAR(collections,"collections");
		HX_STACK_LINE(479)
		::flixel::graphics::frames::FlxFrameCollectionType collectionType;		HX_STACK_VAR(collectionType,"collectionType");
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(480)
			Array< ::Dynamic > _g1 = this->frameCollectionTypes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(480)
			while((true)){
				HX_STACK_LINE(480)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(480)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(480)
				if ((tmp4)){
					HX_STACK_LINE(480)
					break;
				}
				HX_STACK_LINE(480)
				::flixel::graphics::frames::FlxFrameCollectionType tmp5 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrameCollectionType >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(480)
				::flixel::graphics::frames::FlxFrameCollectionType collectionType1 = tmp5;		HX_STACK_VAR(collectionType1,"collectionType1");
				HX_STACK_LINE(480)
				++(_g);
				HX_STACK_LINE(482)
				::haxe::ds::EnumValueMap tmp6 = this->frameCollections;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(482)
				::flixel::graphics::frames::FlxFrameCollectionType tmp7 = collectionType1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(482)
				collections = ((Array< ::Dynamic >)(((cpp::ArrayBase)(tmp6->get(tmp7)))));
				HX_STACK_LINE(483)
				::flixel::util::FlxDestroyUtil_obj::destroyArray(collections);
			}
		}
		HX_STACK_LINE(486)
		this->frameCollections = null();
		HX_STACK_LINE(487)
		this->frameCollectionTypes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,destroy,(void))

Void FlxGraphic_obj::addFrameCollection( ::flixel::graphics::frames::FlxFramesCollection collection){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","addFrameCollection",0x06dd03b1,"flixel.graphics.FlxGraphic.addFrameCollection","flixel/graphics/FlxGraphic.hx",496,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collection,"collection")
		HX_STACK_LINE(497)
		bool tmp = (collection->type != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		if ((tmp)){
			HX_STACK_LINE(499)
			cpp::ArrayBase collections;		HX_STACK_VAR(collections,"collections");
			HX_STACK_LINE(499)
			{
				HX_STACK_LINE(499)
				::flixel::graphics::frames::FlxFrameCollectionType type = collection->type;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(499)
				::haxe::ds::EnumValueMap tmp1 = this->frameCollections;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(499)
				::flixel::graphics::frames::FlxFrameCollectionType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(499)
				cpp::ArrayBase collections1 = ((cpp::ArrayBase)(tmp1->get(tmp2)));		HX_STACK_VAR(collections1,"collections1");
				HX_STACK_LINE(499)
				bool tmp3 = (collections1 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(499)
				if ((tmp3)){
					HX_STACK_LINE(499)
					collections1 = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(499)
					::haxe::ds::EnumValueMap tmp4 = this->frameCollections;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(499)
					::flixel::graphics::frames::FlxFrameCollectionType tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(499)
					tmp4->set(tmp5,collections1);
				}
				HX_STACK_LINE(499)
				collections = collections1;
			}
			HX_STACK_LINE(500)
			::flixel::graphics::frames::FlxFramesCollection tmp1 = collection;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(500)
			collections->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,addFrameCollection,(void))

cpp::ArrayBase FlxGraphic_obj::getFramesCollections( ::flixel::graphics::frames::FlxFrameCollectionType type){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getFramesCollections",0xa4089c80,"flixel.graphics.FlxGraphic.getFramesCollections","flixel/graphics/FlxGraphic.hx",511,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(512)
	::haxe::ds::EnumValueMap tmp = this->frameCollections;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(512)
	::flixel::graphics::frames::FlxFrameCollectionType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	cpp::ArrayBase collections = ((cpp::ArrayBase)(tmp->get(tmp1)));		HX_STACK_VAR(collections,"collections");
	HX_STACK_LINE(513)
	bool tmp2 = (collections == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	if ((tmp2)){
		HX_STACK_LINE(515)
		collections = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(516)
		::haxe::ds::EnumValueMap tmp3 = this->frameCollections;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(516)
		::flixel::graphics::frames::FlxFrameCollectionType tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(516)
		tmp3->set(tmp4,collections);
	}
	HX_STACK_LINE(518)
	return collections;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getFramesCollections,return )

::flixel::graphics::frames::FlxFrame FlxGraphic_obj::getEmptyFrame( ::flixel::math::FlxPoint size){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getEmptyFrame",0xc5b0f80f,"flixel.graphics.FlxGraphic.getEmptyFrame","flixel/graphics/FlxGraphic.hx",529,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(530)
	::flixel::graphics::frames::FlxFrame tmp = ::flixel::graphics::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	::flixel::graphics::frames::FlxFrame frame = tmp;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(531)
	frame->type = (int)2;
	HX_STACK_LINE(532)
	::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(532)
	{
		HX_STACK_LINE(532)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(532)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(532)
		Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(532)
		Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(532)
		::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		{
			HX_STACK_LINE(532)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(532)
			::flixel::math::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(532)
			::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(532)
			_this->x = X;
			HX_STACK_LINE(532)
			_this->y = Y;
			HX_STACK_LINE(532)
			_this->width = Width;
			HX_STACK_LINE(532)
			_this->height = Height;
			HX_STACK_LINE(532)
			tmp2 = _this;
		}
		HX_STACK_LINE(532)
		::flixel::math::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(532)
		rect->_inPool = false;
		HX_STACK_LINE(532)
		tmp1 = rect;
	}
	HX_STACK_LINE(532)
	frame->set_frame(tmp1);
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(533)
		::flixel::math::FlxPoint _this = frame->sourceSize;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(533)
		Float tmp2 = size->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		_this->set_x(tmp2);
		HX_STACK_LINE(533)
		Float tmp3 = size->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		_this->set_y(tmp3);
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			bool tmp4 = size->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(533)
			if ((tmp4)){
				HX_STACK_LINE(533)
				size->put();
			}
		}
		HX_STACK_LINE(533)
		_this;
	}
	HX_STACK_LINE(534)
	::flixel::graphics::frames::FlxFrame tmp2 = frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(534)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getEmptyFrame,return )

::openfl::_legacy::display::Tilesheet FlxGraphic_obj::get_tilesheet( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_tilesheet",0x1819f201,"flixel.graphics.FlxGraphic.get_tilesheet","flixel/graphics/FlxGraphic.hx",541,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(542)
	::openfl::_legacy::display::Tilesheet tmp = this->_tilesheet;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(542)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(542)
	if ((tmp1)){
		HX_STACK_LINE(544)
		bool tmp2 = this->isDumped;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		bool dumped = tmp2;		HX_STACK_VAR(dumped,"dumped");
		HX_STACK_LINE(546)
		bool tmp3 = dumped;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(546)
		if ((tmp3)){
			HX_STACK_LINE(547)
			this->undump();
		}
		HX_STACK_LINE(549)
		::openfl::_legacy::display::BitmapData tmp4 = this->bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		::openfl::_legacy::display::Tilesheet tmp5 = ::openfl::_legacy::display::Tilesheet_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		this->_tilesheet = tmp5;
		HX_STACK_LINE(551)
		bool tmp6 = dumped;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(551)
		if ((tmp6)){
			HX_STACK_LINE(552)
			this->dump();
		}
	}
	HX_STACK_LINE(555)
	::openfl::_legacy::display::Tilesheet tmp2 = this->_tilesheet;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(555)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_tilesheet,return )

::openfl::_legacy::display::BitmapData FlxGraphic_obj::getBitmapFromSystem( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getBitmapFromSystem",0xb3be27b7,"flixel.graphics.FlxGraphic.getBitmapFromSystem","flixel/graphics/FlxGraphic.hx",563,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(564)
	::openfl::_legacy::display::BitmapData newBitmap = null();		HX_STACK_VAR(newBitmap,"newBitmap");
	HX_STACK_LINE(565)
	::hx::Class tmp = this->assetsClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(565)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(565)
	if ((tmp1)){
		HX_STACK_LINE(567)
		::hx::Class tmp2 = this->assetsClass;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(567)
		::openfl::_legacy::display::BitmapData tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(567)
		newBitmap = tmp3;
	}
	else{
		HX_STACK_LINE(569)
		::String tmp2 = this->assetsKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(569)
		if ((tmp3)){
			HX_STACK_LINE(571)
			::openfl::_legacy::display::BitmapData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(571)
				::String tmp5 = this->assetsKey;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(571)
				::String id = tmp5;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(571)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(571)
				bool tmp7 = ::openfl::_legacy::Assets_obj::exists(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(571)
				if ((tmp7)){
					HX_STACK_LINE(571)
					::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(571)
					tmp4 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp8,false);
				}
				else{
					HX_STACK_LINE(571)
					tmp4 = null();
				}
			}
			HX_STACK_LINE(571)
			newBitmap = tmp4;
		}
	}
	HX_STACK_LINE(574)
	bool tmp2 = (newBitmap != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(574)
	if ((tmp2)){
		HX_STACK_LINE(576)
		bool tmp3 = this->unique;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(576)
		::openfl::_legacy::display::BitmapData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(576)
		if ((tmp3)){
			HX_STACK_LINE(576)
			tmp4 = newBitmap->clone();
		}
		else{
			HX_STACK_LINE(576)
			tmp4 = newBitmap;
		}
		HX_STACK_LINE(576)
		return tmp4;
	}
	HX_STACK_LINE(579)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,getBitmapFromSystem,return )

bool FlxGraphic_obj::get_canBeDumped( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_canBeDumped",0x9b8a5e36,"flixel.graphics.FlxGraphic.get_canBeDumped","flixel/graphics/FlxGraphic.hx",583,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	::hx::Class tmp = this->assetsClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(584)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(584)
	if ((tmp2)){
		HX_STACK_LINE(584)
		::String tmp4 = this->assetsKey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(584)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(584)
		tmp3 = true;
	}
	HX_STACK_LINE(584)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_canBeDumped,return )

int FlxGraphic_obj::get_useCount( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_useCount",0x2bcc1fb8,"flixel.graphics.FlxGraphic.get_useCount","flixel/graphics/FlxGraphic.hx",588,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(589)
	int tmp = this->_useCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_useCount,return )

int FlxGraphic_obj::set_useCount( int Value){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","set_useCount",0x40c5432c,"flixel.graphics.FlxGraphic.set_useCount","flixel/graphics/FlxGraphic.hx",593,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(594)
	bool tmp = (Value <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(594)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(594)
	if ((tmp1)){
		HX_STACK_LINE(594)
		tmp2 = this->_destroyOnNoUse;
	}
	else{
		HX_STACK_LINE(594)
		tmp2 = false;
	}
	HX_STACK_LINE(594)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(594)
	if ((tmp2)){
		HX_STACK_LINE(594)
		bool tmp4 = this->persist;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(594)
		tmp3 = false;
	}
	HX_STACK_LINE(594)
	if ((tmp3)){
		HX_STACK_LINE(596)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(596)
		tmp4->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(599)
	int tmp4 = this->_useCount = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(599)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_useCount,return )

bool FlxGraphic_obj::get_destroyOnNoUse( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_destroyOnNoUse",0x7e860bbd,"flixel.graphics.FlxGraphic.get_destroyOnNoUse","flixel/graphics/FlxGraphic.hx",603,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(604)
	bool tmp = this->_destroyOnNoUse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(604)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_destroyOnNoUse,return )

bool FlxGraphic_obj::set_destroyOnNoUse( bool Value){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","set_destroyOnNoUse",0x5b353e31,"flixel.graphics.FlxGraphic.set_destroyOnNoUse","flixel/graphics/FlxGraphic.hx",608,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(609)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(609)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(609)
	if ((tmp1)){
		HX_STACK_LINE(609)
		int tmp3 = this->_useCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(609)
		tmp2 = (tmp5 <= (int)0);
	}
	else{
		HX_STACK_LINE(609)
		tmp2 = false;
	}
	HX_STACK_LINE(609)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(609)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(609)
	if ((tmp3)){
		HX_STACK_LINE(609)
		::String tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(609)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(609)
		::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(609)
		tmp4 = (tmp7 != null());
	}
	else{
		HX_STACK_LINE(609)
		tmp4 = false;
	}
	HX_STACK_LINE(609)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(609)
	if ((tmp4)){
		HX_STACK_LINE(609)
		bool tmp6 = this->persist;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(609)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(609)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(609)
		tmp5 = !(tmp8);
	}
	else{
		HX_STACK_LINE(609)
		tmp5 = false;
	}
	HX_STACK_LINE(609)
	if ((tmp5)){
		HX_STACK_LINE(611)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(611)
		tmp6->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(614)
	bool tmp6 = this->_destroyOnNoUse = Value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(614)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_destroyOnNoUse,return )

::flixel::graphics::frames::FlxImageFrame FlxGraphic_obj::get_imageFrame( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_imageFrame",0xc1224382,"flixel.graphics.FlxGraphic.get_imageFrame","flixel/graphics/FlxGraphic.hx",618,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(619)
	::flixel::graphics::frames::FlxImageFrame tmp = this->_imageFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(619)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(619)
	if ((tmp1)){
		HX_STACK_LINE(621)
		::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(621)
		{
			HX_STACK_LINE(621)
			::openfl::_legacy::display::BitmapData tmp3 = this->bitmap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(621)
			int tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(621)
			Float Width = tmp4;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(621)
			::openfl::_legacy::display::BitmapData tmp5 = this->bitmap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(621)
			int tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(621)
			Float Height = tmp6;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(621)
			::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(621)
			{
				HX_STACK_LINE(621)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(621)
				::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(621)
				::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(621)
				_this->x = (int)0;
				HX_STACK_LINE(621)
				_this->y = (int)0;
				HX_STACK_LINE(621)
				_this->width = Width;
				HX_STACK_LINE(621)
				_this->height = Height;
				HX_STACK_LINE(621)
				tmp7 = _this;
			}
			HX_STACK_LINE(621)
			::flixel::math::FlxRect rect = tmp7;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(621)
			rect->_inPool = false;
			HX_STACK_LINE(621)
			tmp2 = rect;
		}
		HX_STACK_LINE(621)
		::flixel::graphics::frames::FlxImageFrame tmp3 = ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(hx::ObjectPtr<OBJ_>(this),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		this->_imageFrame = tmp3;
	}
	HX_STACK_LINE(624)
	::flixel::graphics::frames::FlxImageFrame tmp2 = this->_imageFrame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(624)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_imageFrame,return )

::flixel::graphics::frames::FlxAtlasFrames FlxGraphic_obj::get_atlasFrames( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_atlasFrames",0x774c10a1,"flixel.graphics.FlxGraphic.get_atlasFrames","flixel/graphics/FlxGraphic.hx",628,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(629)
	::flixel::graphics::frames::FlxAtlasFrames tmp = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_atlasFrames,return )

::openfl::_legacy::display::BitmapData FlxGraphic_obj::set_bitmap( ::openfl::_legacy::display::BitmapData value){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","set_bitmap",0x39ee9b13,"flixel.graphics.FlxGraphic.set_bitmap","flixel/graphics/FlxGraphic.hx",633,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(634)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	if ((tmp)){
		HX_STACK_LINE(636)
		this->bitmap = value;
		HX_STACK_LINE(637)
		::openfl::_legacy::display::BitmapData tmp1 = this->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(637)
		int tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(637)
		this->width = tmp2;
		HX_STACK_LINE(638)
		::openfl::_legacy::display::BitmapData tmp3 = this->bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(638)
		int tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(638)
		this->height = tmp4;
		HX_STACK_LINE(640)
		bool tmp5 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(640)
		if ((tmp5)){
			HX_STACK_LINE(642)
			::openfl::_legacy::display::Tilesheet tmp6 = this->_tilesheet;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(642)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(642)
			if ((tmp7)){
				HX_STACK_LINE(644)
				::openfl::_legacy::display::BitmapData tmp8 = this->bitmap;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(644)
				::openfl::_legacy::display::Tilesheet tmp9 = ::openfl::_legacy::display::Tilesheet_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(644)
				this->_tilesheet = tmp9;
			}
		}
	}
	HX_STACK_LINE(650)
	::openfl::_legacy::display::BitmapData tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(650)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_bitmap,return )

bool FlxGraphic_obj::defaultPersist;

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromAssetKey( ::String Source,hx::Null< bool >  __o_Unique,::String Key,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromAssetKey",0xcea54dc0,"flixel.graphics.FlxGraphic.fromAssetKey","flixel/graphics/FlxGraphic.hx",38,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(39)
		::openfl::_legacy::display::BitmapData bitmap = null();		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(41)
		bool tmp = Cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(43)
			::String tmp2 = Source;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			bool tmp3 = ::openfl::_legacy::Assets_obj::exists(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			::openfl::_legacy::display::BitmapData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			if ((tmp3)){
				HX_STACK_LINE(43)
				::String tmp5 = Source;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				tmp4 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp5,false);
			}
			else{
				HX_STACK_LINE(43)
				tmp4 = null();
			}
			HX_STACK_LINE(43)
			bitmap = tmp4;
			HX_STACK_LINE(44)
			bool tmp5 = (bitmap == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			if ((tmp5)){
				HX_STACK_LINE(46)
				return null();
			}
			HX_STACK_LINE(48)
			::openfl::_legacy::display::BitmapData tmp6 = bitmap;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			::String tmp7 = Key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			bool tmp8 = Unique;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			bool tmp9 = Cache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			::flixel::graphics::FlxGraphic tmp10 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(48)
			return tmp10;
		}
		HX_STACK_LINE(51)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::String tmp3 = Source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		::String tmp4 = Key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		bool tmp5 = Unique;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		::String tmp6 = tmp2->__Field(HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"), hx::paccDynamic )(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		::String key = tmp6;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(52)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp7 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		::flixel::graphics::FlxGraphic tmp9 = tmp7->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		::flixel::graphics::FlxGraphic graphic = tmp9;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(53)
		bool tmp10 = (graphic != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		if ((tmp10)){
			HX_STACK_LINE(55)
			::flixel::graphics::FlxGraphic tmp11 = graphic;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			return tmp11;
		}
		HX_STACK_LINE(58)
		::String tmp11 = Source;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		bool tmp12 = ::openfl::_legacy::Assets_obj::exists(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		if ((tmp12)){
			HX_STACK_LINE(58)
			::String tmp14 = Source;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(58)
			tmp13 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp14,false);
		}
		else{
			HX_STACK_LINE(58)
			tmp13 = null();
		}
		HX_STACK_LINE(58)
		bitmap = tmp13;
		HX_STACK_LINE(59)
		bool tmp14 = (bitmap == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(59)
		if ((tmp14)){
			HX_STACK_LINE(61)
			return null();
		}
		HX_STACK_LINE(64)
		::openfl::_legacy::display::BitmapData tmp15 = bitmap;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		bool tmp17 = Unique;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(64)
		::flixel::graphics::FlxGraphic tmp18 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(64)
		graphic = tmp18;
		HX_STACK_LINE(65)
		graphic->assetsKey = Source;
		HX_STACK_LINE(66)
		::flixel::graphics::FlxGraphic tmp19 = graphic;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(66)
		return tmp19;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromAssetKey,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromClass( ::hx::Class Source,hx::Null< bool >  __o_Unique,::String Key,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromClass",0x5b653f67,"flixel.graphics.FlxGraphic.fromClass","flixel/graphics/FlxGraphic.hx",79,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(80)
		::openfl::_legacy::display::BitmapData bitmap = null();		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(81)
		bool tmp = Cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		if ((tmp1)){
			HX_STACK_LINE(83)
			::hx::Class tmp2 = Source;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			::openfl::_legacy::display::BitmapData tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			bitmap = tmp3;
			HX_STACK_LINE(84)
			::openfl::_legacy::display::BitmapData tmp4 = bitmap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::String tmp5 = Key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			bool tmp6 = Unique;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			bool tmp7 = Cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			::flixel::graphics::FlxGraphic tmp8 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			return tmp8;
		}
		HX_STACK_LINE(87)
		::hx::Class tmp2 = Source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(88)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		::String tmp6 = Key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		bool tmp7 = Unique;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		::String tmp8 = tmp4->__Field(HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"), hx::paccDynamic )(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		key = tmp8;
		HX_STACK_LINE(89)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp9 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		::flixel::graphics::FlxGraphic tmp11 = tmp9->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(89)
		::flixel::graphics::FlxGraphic graphic = tmp11;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(90)
		bool tmp12 = (graphic != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(90)
		if ((tmp12)){
			HX_STACK_LINE(92)
			::flixel::graphics::FlxGraphic tmp13 = graphic;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(92)
			return tmp13;
		}
		HX_STACK_LINE(95)
		::hx::Class tmp13 = Source;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		::openfl::_legacy::display::BitmapData tmp14 = ::Type_obj::createInstance(tmp13,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		bitmap = tmp14;
		HX_STACK_LINE(96)
		::openfl::_legacy::display::BitmapData tmp15 = bitmap;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(96)
		::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(96)
		bool tmp17 = Unique;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(96)
		::flixel::graphics::FlxGraphic tmp18 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		graphic = tmp18;
		HX_STACK_LINE(97)
		graphic->assetsClass = Source;
		HX_STACK_LINE(98)
		::flixel::graphics::FlxGraphic tmp19 = graphic;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(98)
		return tmp19;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromClass,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromBitmapData( ::openfl::_legacy::display::BitmapData Source,hx::Null< bool >  __o_Unique,::String Key,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromBitmapData",0x64c8842a,"flixel.graphics.FlxGraphic.fromBitmapData","flixel/graphics/FlxGraphic.hx",111,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(112)
		bool tmp = Cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		if ((tmp1)){
			HX_STACK_LINE(114)
			::openfl::_legacy::display::BitmapData tmp2 = Source;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			::String tmp3 = Key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			bool tmp4 = Unique;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			bool tmp5 = Cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			::flixel::graphics::FlxGraphic tmp6 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			return tmp6;
		}
		HX_STACK_LINE(117)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		::openfl::_legacy::display::BitmapData tmp3 = Source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		::String tmp4 = tmp2->__Field(HX_HCSTRING("findKeyForBitmap","\x12","\x70","\x29","\x81"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		::String key = tmp4;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(119)
		::String assetKey = null();		HX_STACK_VAR(assetKey,"assetKey");
		HX_STACK_LINE(120)
		::hx::Class assetClass = null();		HX_STACK_VAR(assetClass,"assetClass");
		HX_STACK_LINE(121)
		::flixel::graphics::FlxGraphic graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(122)
		bool tmp5 = (key != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		if ((tmp5)){
			HX_STACK_LINE(124)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			::flixel::graphics::FlxGraphic tmp8 = tmp6->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			graphic = tmp8;
			HX_STACK_LINE(125)
			assetKey = graphic->assetsKey;
			HX_STACK_LINE(126)
			assetClass = graphic->assetsClass;
		}
		HX_STACK_LINE(129)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		::String tmp8 = Key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		bool tmp9 = Unique;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		::String tmp10 = tmp6->__Field(HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"), hx::paccDynamic )(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		key = tmp10;
		HX_STACK_LINE(130)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(130)
		::flixel::graphics::FlxGraphic tmp13 = tmp11->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(130)
		graphic = tmp13;
		HX_STACK_LINE(131)
		bool tmp14 = (graphic != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(131)
		if ((tmp14)){
			HX_STACK_LINE(133)
			::flixel::graphics::FlxGraphic tmp15 = graphic;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(133)
			return tmp15;
		}
		HX_STACK_LINE(136)
		::openfl::_legacy::display::BitmapData tmp15 = Source;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(136)
		::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(136)
		bool tmp17 = Unique;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(136)
		::flixel::graphics::FlxGraphic tmp18 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(136)
		graphic = tmp18;
		HX_STACK_LINE(137)
		graphic->assetsKey = assetKey;
		HX_STACK_LINE(138)
		graphic->assetsClass = assetClass;
		HX_STACK_LINE(139)
		::flixel::graphics::FlxGraphic tmp19 = graphic;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(139)
		return tmp19;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromBitmapData,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrame( ::flixel::graphics::frames::FlxFrame Source,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromFrame",0x19903f5c,"flixel.graphics.FlxGraphic.fromFrame","flixel/graphics/FlxGraphic.hx",152,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(153)
		::String key = Source->name;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(154)
		bool tmp = (key == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		if ((tmp)){
			HX_STACK_LINE(156)
			::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::flixel::math::FlxRect _this = Source->frame;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(156)
				::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair _this1 = tmp4;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(156)
					_this1->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
					HX_STACK_LINE(156)
					_this1->value = _this->x;
					HX_STACK_LINE(156)
					tmp2 = _this1;
				}
				HX_STACK_LINE(156)
				::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(156)
					_this1->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
					HX_STACK_LINE(156)
					_this1->value = _this->y;
					HX_STACK_LINE(156)
					tmp3 = _this1;
				}
				HX_STACK_LINE(156)
				::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(156)
					_this1->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
					HX_STACK_LINE(156)
					_this1->value = _this->width;
					HX_STACK_LINE(156)
					tmp4 = _this1;
				}
				HX_STACK_LINE(156)
				::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(156)
					::flixel::util::LabelValuePair _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(156)
					_this1->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
					HX_STACK_LINE(156)
					_this1->value = _this->height;
					HX_STACK_LINE(156)
					tmp5 = _this1;
				}
				HX_STACK_LINE(156)
				tmp1 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));
			}
			HX_STACK_LINE(156)
			key = tmp1;
		}
		HX_STACK_LINE(158)
		::String tmp1 = Source->parent->key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		::String tmp2 = (tmp1 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		key = tmp4;
		HX_STACK_LINE(159)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp5 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		::String tmp7 = Key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(159)
		bool tmp8 = Unique;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(159)
		::String tmp9 = tmp5->__Field(HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"), hx::paccDynamic )(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(159)
		key = tmp9;
		HX_STACK_LINE(160)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp10 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(160)
		::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(160)
		::flixel::graphics::FlxGraphic tmp12 = tmp10->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(160)
		::flixel::graphics::FlxGraphic graphic = tmp12;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(161)
		bool tmp13 = (graphic != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(161)
		if ((tmp13)){
			HX_STACK_LINE(163)
			::flixel::graphics::FlxGraphic tmp14 = graphic;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(163)
			return tmp14;
		}
		HX_STACK_LINE(166)
		::openfl::_legacy::display::BitmapData tmp14 = Source->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(166)
		::openfl::_legacy::display::BitmapData bitmap = tmp14;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(167)
		::openfl::_legacy::display::BitmapData tmp15 = bitmap;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(167)
		::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(167)
		bool tmp17 = Unique;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(167)
		::flixel::graphics::FlxGraphic tmp18 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(167)
		graphic = tmp18;
		HX_STACK_LINE(168)
		::flixel::graphics::FlxGraphic tmp19 = graphic;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(168)
		::flixel::graphics::frames::FlxImageFrame tmp20 = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(168)
		::flixel::graphics::frames::FlxImageFrame image = tmp20;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(169)
		::flixel::graphics::frames::FlxFrame tmp21 = image->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(169)
		tmp21->name = Source->name;
		HX_STACK_LINE(170)
		::flixel::graphics::FlxGraphic tmp22 = graphic;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(170)
		return tmp22;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromFrame,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrames( ::flixel::graphics::frames::FlxFramesCollection Source,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromFrames",0x44a73197,"flixel.graphics.FlxGraphic.fromFrames","flixel/graphics/FlxGraphic.hx",184,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(185)
		::flixel::graphics::FlxGraphic tmp = Source->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		bool tmp1 = Unique;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		::String tmp2 = Key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		::flixel::graphics::FlxGraphic tmp3 = ::flixel::graphics::FlxGraphic_obj::fromGraphic(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromFrames,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromGraphic( ::flixel::graphics::FlxGraphic Source,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromGraphic",0xf9378b97,"flixel.graphics.FlxGraphic.fromGraphic","flixel/graphics/FlxGraphic.hx",198,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(199)
		bool tmp = Unique;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(201)
			::flixel::graphics::FlxGraphic tmp2 = Source;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			return tmp2;
		}
		HX_STACK_LINE(204)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::String tmp3 = Source->key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		::String tmp4 = Key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		bool tmp5 = Unique;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		::String tmp6 = tmp2->__Field(HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"), hx::paccDynamic )(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		::String key = tmp6;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(205)
		::openfl::_legacy::display::BitmapData tmp7 = Source->bitmap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(205)
		bool tmp9 = Unique;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(205)
		::flixel::graphics::FlxGraphic tmp10 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp7,tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(205)
		::flixel::graphics::FlxGraphic graphic = tmp10;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(206)
		graphic->unique = Unique;
		HX_STACK_LINE(207)
		graphic->assetsClass = Source->assetsClass;
		HX_STACK_LINE(208)
		graphic->assetsKey = Source->assetsKey;
		HX_STACK_LINE(209)
		::flixel::graphics::FlxGraphic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp12 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(209)
			::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(209)
			::String tmp13 = graphic->key;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(209)
			bool tmp14 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			if ((tmp15)){
				HX_STACK_LINE(209)
				::String tmp16 = graphic->key;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(209)
				::flixel::graphics::FlxGraphic tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(209)
				_this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp16,tmp17);
			}
			HX_STACK_LINE(209)
			tmp11 = graphic;
		}
		HX_STACK_LINE(209)
		return tmp11;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromGraphic,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromRectangle( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromRectangle",0x6fce5ede,"flixel.graphics.FlxGraphic.fromRectangle","flixel/graphics/FlxGraphic.hx",223,0xb3633517)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(224)
		::String tmp = (Width + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		::String tmp3 = (tmp2 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		::String systemKey = tmp5;		HX_STACK_VAR(systemKey,"systemKey");
		HX_STACK_LINE(225)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(225)
		::String tmp7 = systemKey;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(225)
		::String tmp8 = Key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(225)
		bool tmp9 = Unique;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(225)
		::String tmp10 = tmp6->__Field(HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"), hx::paccDynamic )(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(225)
		::String key = tmp10;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(227)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(227)
		::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(227)
		::flixel::graphics::FlxGraphic tmp13 = tmp11->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(227)
		::flixel::graphics::FlxGraphic graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(228)
		bool tmp14 = (graphic != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(228)
		if ((tmp14)){
			HX_STACK_LINE(230)
			::flixel::graphics::FlxGraphic tmp15 = graphic;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(230)
			return tmp15;
		}
		HX_STACK_LINE(233)
		::openfl::_legacy::display::BitmapData tmp15 = ::openfl::_legacy::display::BitmapData_obj::__new(Width,Height,true,Color,null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(233)
		::openfl::_legacy::display::BitmapData bitmap = tmp15;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(234)
		::openfl::_legacy::display::BitmapData tmp16 = bitmap;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(234)
		::String tmp17 = key;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(234)
		::flixel::graphics::FlxGraphic tmp18 = ::flixel::graphics::FlxGraphic_obj::createGraphic(tmp16,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(234)
		return tmp18;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGraphic_obj,fromRectangle,return )

::openfl::_legacy::display::BitmapData FlxGraphic_obj::getBitmap( ::openfl::_legacy::display::BitmapData Bitmap,hx::Null< bool >  __o_Unique){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getBitmap",0xcbe6761e,"flixel.graphics.FlxGraphic.getBitmap","flixel/graphics/FlxGraphic.hx",246,0xb3633517)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Unique,"Unique")
{
		HX_STACK_LINE(247)
		bool tmp = Unique;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::openfl::_legacy::display::BitmapData tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		if ((tmp)){
			HX_STACK_LINE(247)
			tmp1 = Bitmap->clone();
		}
		else{
			HX_STACK_LINE(247)
			tmp1 = Bitmap;
		}
		HX_STACK_LINE(247)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGraphic_obj,getBitmap,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::createGraphic( ::openfl::_legacy::display::BitmapData Bitmap,::String Key,hx::Null< bool >  __o_Unique,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","createGraphic",0x3eb28085,"flixel.graphics.FlxGraphic.createGraphic","flixel/graphics/FlxGraphic.hx",260,0xb3633517)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(261)
		bool tmp = Unique;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		::openfl::_legacy::display::BitmapData tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		if ((tmp)){
			HX_STACK_LINE(261)
			tmp1 = Bitmap->clone();
		}
		else{
			HX_STACK_LINE(261)
			tmp1 = Bitmap;
		}
		HX_STACK_LINE(261)
		Bitmap = tmp1;
		HX_STACK_LINE(262)
		::flixel::graphics::FlxGraphic graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(264)
		bool tmp2 = Cache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		if ((tmp2)){
			HX_STACK_LINE(266)
			::flixel::graphics::FlxGraphic tmp3 = ::flixel::graphics::FlxGraphic_obj::__new(Key,Bitmap,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			graphic = tmp3;
			HX_STACK_LINE(267)
			graphic->unique = Unique;
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(268)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(268)
				::String tmp5 = graphic->key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(268)
				bool tmp6 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(268)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(268)
				if ((tmp7)){
					HX_STACK_LINE(268)
					::String tmp8 = graphic->key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(268)
					::flixel::graphics::FlxGraphic tmp9 = graphic;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(268)
					_this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp8,tmp9);
				}
				HX_STACK_LINE(268)
				graphic;
			}
		}
		else{
			HX_STACK_LINE(272)
			::flixel::graphics::FlxGraphic tmp3 = ::flixel::graphics::FlxGraphic_obj::__new(null(),Bitmap,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(272)
			graphic = tmp3;
		}
		HX_STACK_LINE(275)
		::flixel::graphics::FlxGraphic tmp3 = graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,createGraphic,return )


FlxGraphic_obj::FlxGraphic_obj()
{
}

void FlxGraphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGraphic);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(assetsKey,"assetsKey");
	HX_MARK_MEMBER_NAME(assetsClass,"assetsClass");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(isDumped,"isDumped");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(imageFrame,"imageFrame");
	HX_MARK_MEMBER_NAME(atlasFrames,"atlasFrames");
	HX_MARK_MEMBER_NAME(frameCollections,"frameCollections");
	HX_MARK_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_MARK_MEMBER_NAME(unique,"unique");
	HX_MARK_MEMBER_NAME(_imageFrame,"_imageFrame");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(_useCount,"_useCount");
	HX_MARK_MEMBER_NAME(_destroyOnNoUse,"_destroyOnNoUse");
	HX_MARK_END_CLASS();
}

void FlxGraphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(assetsKey,"assetsKey");
	HX_VISIT_MEMBER_NAME(assetsClass,"assetsClass");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(isDumped,"isDumped");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(imageFrame,"imageFrame");
	HX_VISIT_MEMBER_NAME(atlasFrames,"atlasFrames");
	HX_VISIT_MEMBER_NAME(frameCollections,"frameCollections");
	HX_VISIT_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_VISIT_MEMBER_NAME(unique,"unique");
	HX_VISIT_MEMBER_NAME(_imageFrame,"_imageFrame");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(_useCount,"_useCount");
	HX_VISIT_MEMBER_NAME(_destroyOnNoUse,"_destroyOnNoUse");
}

Dynamic FlxGraphic_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"unique") ) { return unique; }
		if (HX_FIELD_EQ(inName,"undump") ) { return undump_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { return isDumped; }
		if (HX_FIELD_EQ(inName,"useCount") ) { if (inCallProp == hx::paccAlways) return get_useCount(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { return assetsKey; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return inCallProp == hx::paccAlways ? get_tilesheet() : tilesheet; }
		if (HX_FIELD_EQ(inName,"_useCount") ) { return _useCount; }
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageFrame") ) { return inCallProp == hx::paccAlways ? get_imageFrame() : imageFrame; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return set_bitmap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { return assetsClass; }
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { if (inCallProp == hx::paccAlways) return get_canBeDumped(); }
		if (HX_FIELD_EQ(inName,"atlasFrames") ) { return inCallProp == hx::paccAlways ? get_atlasFrames() : atlasFrames; }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { return _imageFrame; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_useCount") ) { return get_useCount_dyn(); }
		if (HX_FIELD_EQ(inName,"set_useCount") ) { return set_useCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getEmptyFrame") ) { return getEmptyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tilesheet") ) { return get_tilesheet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { if (inCallProp == hx::paccAlways) return get_destroyOnNoUse(); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return onAssetsReload_dyn(); }
		if (HX_FIELD_EQ(inName,"get_imageFrame") ) { return get_imageFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { return _destroyOnNoUse; }
		if (HX_FIELD_EQ(inName,"get_canBeDumped") ) { return get_canBeDumped_dyn(); }
		if (HX_FIELD_EQ(inName,"get_atlasFrames") ) { return get_atlasFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { return frameCollections; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addFrameCollection") ) { return addFrameCollection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_destroyOnNoUse") ) { return get_destroyOnNoUse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_destroyOnNoUse") ) { return set_destroyOnNoUse_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBitmapFromSystem") ) { return getBitmapFromSystem_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { return frameCollectionTypes; }
		if (HX_FIELD_EQ(inName,"getFramesCollections") ) { return getFramesCollections_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxGraphic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromClass") ) { outValue = fromClass_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { outValue = getBitmap_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { outValue = fromFrames_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromAssetKey") ) { outValue = fromAssetKey_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createGraphic") ) { outValue = createGraphic_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { outValue = defaultPersist; return true;  }
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxGraphic_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == hx::paccAlways) return set_bitmap(inValue);bitmap=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unique") ) { unique=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { isDumped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useCount") ) { if (inCallProp == hx::paccAlways) return set_useCount(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { assetsKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::openfl::_legacy::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_useCount") ) { _useCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageFrame") ) { imageFrame=inValue.Cast< ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::openfl::_legacy::display::Tilesheet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { assetsClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlasFrames") ) { atlasFrames=inValue.Cast< ::flixel::graphics::frames::FlxAtlasFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { _imageFrame=inValue.Cast< ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { if (inCallProp == hx::paccAlways) return set_destroyOnNoUse(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { _destroyOnNoUse=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { frameCollections=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { frameCollectionTypes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGraphic_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { defaultPersist=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxGraphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("assetsKey","\xdc","\xec","\x09","\xc6"));
	outFields->push(HX_HCSTRING("assetsClass","\xb5","\xe4","\x5d","\x37"));
	outFields->push(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"));
	outFields->push(HX_HCSTRING("destroyOnNoUse","\x0d","\xef","\x5c","\xa2"));
	outFields->push(HX_HCSTRING("isDumped","\x1d","\x26","\x5d","\xfa"));
	outFields->push(HX_HCSTRING("canBeDumped","\xe6","\x48","\x77","\x53"));
	outFields->push(HX_HCSTRING("tilesheet","\xb1","\xd0","\x4d","\x74"));
	outFields->push(HX_HCSTRING("useCount","\x08","\xa7","\xce","\x11"));
	outFields->push(HX_HCSTRING("imageFrame","\xd2","\x3e","\x51","\x12"));
	outFields->push(HX_HCSTRING("atlasFrames","\x51","\xfb","\x38","\x2f"));
	outFields->push(HX_HCSTRING("frameCollections","\x28","\x29","\x8a","\x63"));
	outFields->push(HX_HCSTRING("frameCollectionTypes","\x8e","\x07","\x3e","\xdd"));
	outFields->push(HX_HCSTRING("unique","\x11","\x93","\x92","\x63"));
	outFields->push(HX_HCSTRING("_imageFrame","\xf1","\x0b","\xdb","\xe4"));
	outFields->push(HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf"));
	outFields->push(HX_HCSTRING("_useCount","\x67","\x9e","\x64","\x59"));
	outFields->push(HX_HCSTRING("_destroyOnNoUse","\xac","\x37","\xbd","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxGraphic_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxGraphic_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsInt,(int)offsetof(FlxGraphic_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxGraphic_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(FlxGraphic_obj,assetsKey),HX_HCSTRING("assetsKey","\xdc","\xec","\x09","\xc6")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGraphic_obj,assetsClass),HX_HCSTRING("assetsClass","\xb5","\xe4","\x5d","\x37")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,persist),HX_HCSTRING("persist","\x14","\x22","\x71","\x83")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,isDumped),HX_HCSTRING("isDumped","\x1d","\x26","\x5d","\xfa")},
	{hx::fsObject /*::openfl::_legacy::display::Tilesheet*/ ,(int)offsetof(FlxGraphic_obj,tilesheet),HX_HCSTRING("tilesheet","\xb1","\xd0","\x4d","\x74")},
	{hx::fsObject /*::flixel::graphics::frames::FlxImageFrame*/ ,(int)offsetof(FlxGraphic_obj,imageFrame),HX_HCSTRING("imageFrame","\xd2","\x3e","\x51","\x12")},
	{hx::fsObject /*::flixel::graphics::frames::FlxAtlasFrames*/ ,(int)offsetof(FlxGraphic_obj,atlasFrames),HX_HCSTRING("atlasFrames","\x51","\xfb","\x38","\x2f")},
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(int)offsetof(FlxGraphic_obj,frameCollections),HX_HCSTRING("frameCollections","\x28","\x29","\x8a","\x63")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGraphic_obj,frameCollectionTypes),HX_HCSTRING("frameCollectionTypes","\x8e","\x07","\x3e","\xdd")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,unique),HX_HCSTRING("unique","\x11","\x93","\x92","\x63")},
	{hx::fsObject /*::flixel::graphics::frames::FlxImageFrame*/ ,(int)offsetof(FlxGraphic_obj,_imageFrame),HX_HCSTRING("_imageFrame","\xf1","\x0b","\xdb","\xe4")},
	{hx::fsObject /*::openfl::_legacy::display::Tilesheet*/ ,(int)offsetof(FlxGraphic_obj,_tilesheet),HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf")},
	{hx::fsInt,(int)offsetof(FlxGraphic_obj,_useCount),HX_HCSTRING("_useCount","\x67","\x9e","\x64","\x59")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,_destroyOnNoUse),HX_HCSTRING("_destroyOnNoUse","\xac","\x37","\xbd","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &FlxGraphic_obj::defaultPersist,HX_HCSTRING("defaultPersist","\x53","\x7b","\xb1","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("assetsKey","\xdc","\xec","\x09","\xc6"),
	HX_HCSTRING("assetsClass","\xb5","\xe4","\x5d","\x37"),
	HX_HCSTRING("persist","\x14","\x22","\x71","\x83"),
	HX_HCSTRING("isDumped","\x1d","\x26","\x5d","\xfa"),
	HX_HCSTRING("tilesheet","\xb1","\xd0","\x4d","\x74"),
	HX_HCSTRING("imageFrame","\xd2","\x3e","\x51","\x12"),
	HX_HCSTRING("atlasFrames","\x51","\xfb","\x38","\x2f"),
	HX_HCSTRING("frameCollections","\x28","\x29","\x8a","\x63"),
	HX_HCSTRING("frameCollectionTypes","\x8e","\x07","\x3e","\xdd"),
	HX_HCSTRING("unique","\x11","\x93","\x92","\x63"),
	HX_HCSTRING("_imageFrame","\xf1","\x0b","\xdb","\xe4"),
	HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf"),
	HX_HCSTRING("_useCount","\x67","\x9e","\x64","\x59"),
	HX_HCSTRING("_destroyOnNoUse","\xac","\x37","\xbd","\xeb"),
	HX_HCSTRING("dump","\x34","\x7d","\x72","\x42"),
	HX_HCSTRING("undump","\x0d","\x84","\x47","\x60"),
	HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"),
	HX_HCSTRING("onAssetsReload","\xfb","\x33","\x88","\x63"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("addFrameCollection","\xca","\xc7","\x4d","\xc6"),
	HX_HCSTRING("getFramesCollections","\xd9","\x58","\x45","\xb4"),
	HX_HCSTRING("getEmptyFrame","\x96","\xaa","\x48","\xe3"),
	HX_HCSTRING("get_tilesheet","\x88","\xa4","\xb1","\x35"),
	HX_HCSTRING("getBitmapFromSystem","\x7e","\xf9","\xf8","\x76"),
	HX_HCSTRING("get_canBeDumped","\x7d","\x00","\x59","\x14"),
	HX_HCSTRING("get_useCount","\x11","\x5b","\xe8","\xc6"),
	HX_HCSTRING("set_useCount","\x85","\x7e","\xe1","\xdb"),
	HX_HCSTRING("get_destroyOnNoUse","\xd6","\xcf","\xf6","\x3d"),
	HX_HCSTRING("set_destroyOnNoUse","\x4a","\x02","\xa6","\x1a"),
	HX_HCSTRING("get_imageFrame","\x1b","\xc7","\x46","\x88"),
	HX_HCSTRING("get_atlasFrames","\xe8","\xb2","\x1a","\xf0"),
	HX_HCSTRING("set_bitmap","\x2c","\x1e","\x11","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGraphic_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGraphic_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#endif

hx::Class FlxGraphic_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultPersist","\x53","\x7b","\xb1","\xb2"),
	HX_HCSTRING("fromAssetKey","\x19","\x89","\xc1","\x69"),
	HX_HCSTRING("fromClass","\x6e","\x62","\xe1","\xfc"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	HX_HCSTRING("fromFrame","\x63","\x62","\x0c","\xbb"),
	HX_HCSTRING("fromFrames","\xb0","\xb4","\xc9","\xef"),
	HX_HCSTRING("fromGraphic","\x5e","\xbe","\x47","\x0c"),
	HX_HCSTRING("fromRectangle","\x65","\x11","\x66","\x8d"),
	HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"),
	HX_HCSTRING("createGraphic","\x0c","\x33","\x4a","\x5c"),
	::String(null()) };

void FlxGraphic_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.FlxGraphic","\x27","\xfc","\xac","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGraphic_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxGraphic_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGraphic_obj >;
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

void FlxGraphic_obj::__boot()
{
	defaultPersist= false;
}

} // end namespace flixel
} // end namespace graphics
