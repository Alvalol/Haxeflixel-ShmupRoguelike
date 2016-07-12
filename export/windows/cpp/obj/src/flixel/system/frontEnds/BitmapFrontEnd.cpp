#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void BitmapFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",31,0x91a05ae2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->clearCache();
}
;
	return null();
}

//BitmapFrontEnd_obj::~BitmapFrontEnd_obj() { }

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return  new BitmapFrontEnd_obj; }
hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapFrontEnd_obj > _result_ = new BitmapFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFrontEnd_obj > _result_ = new BitmapFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void BitmapFrontEnd_obj::onAssetsReload( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onAssetsReload",0x7811d38e,"flixel.system.frontEnds.BitmapFrontEnd.onAssetsReload","flixel/system/frontEnds/BitmapFrontEnd.hx",35,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(36)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(37)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		if ((tmp1)){
			HX_STACK_LINE(39)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(41)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(41)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					::flixel::graphics::FlxGraphic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(41)
					obj = tmp6;
					HX_STACK_LINE(42)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(42)
					if ((tmp7)){
						HX_STACK_LINE(42)
						bool tmp9 = (obj->assetsClass != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(42)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(42)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(42)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(42)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(42)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(42)
						if ((tmp14)){
							HX_STACK_LINE(42)
							tmp8 = (obj->assetsKey != null());
						}
						else{
							HX_STACK_LINE(42)
							tmp8 = true;
						}
					}
					else{
						HX_STACK_LINE(42)
						tmp8 = false;
					}
					HX_STACK_LINE(42)
					if ((tmp8)){
						HX_STACK_LINE(44)
						obj->onAssetsReload();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,onAssetsReload,(void))

::flixel::graphics::frames::FlxFrame BitmapFrontEnd_obj::get_whitePixel( ){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",59,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	::flixel::graphics::frames::FlxFrame tmp = this->_whitePixel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	if ((tmp1)){
		HX_STACK_LINE(62)
		::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::display::BitmapData_obj::__new((int)10,(int)10,true,(int)-1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		::openfl::_legacy::display::BitmapData bd = tmp2;		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(63)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp3 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::openfl::_legacy::display::BitmapData tmp4 = bd;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		::flixel::graphics::FlxGraphic tmp5 = tmp3->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp4,true,HX_HCSTRING("whitePixels","\xb6","\x92","\xba","\x9e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		::flixel::graphics::FlxGraphic graphic = tmp5;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(64)
		graphic->persist = true;
		HX_STACK_LINE(65)
		::flixel::graphics::frames::FlxImageFrame tmp6 = graphic->get_imageFrame();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		::flixel::graphics::frames::FlxFrame tmp7 = tmp6->get_frame();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		this->_whitePixel = tmp7;
	}
	HX_STACK_LINE(68)
	::flixel::graphics::frames::FlxFrame tmp2 = this->_whitePixel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )

Void BitmapFrontEnd_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",76,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		if ((tmp1)){
			HX_STACK_LINE(81)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(83)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(83)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					::flixel::graphics::FlxGraphic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(83)
					obj = tmp6;
					HX_STACK_LINE(84)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(84)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(84)
					if ((tmp7)){
						HX_STACK_LINE(84)
						tmp8 = obj->isDumped;
					}
					else{
						HX_STACK_LINE(84)
						tmp8 = false;
					}
					HX_STACK_LINE(84)
					if ((tmp8)){
						HX_STACK_LINE(86)
						obj->onContext();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

Void BitmapFrontEnd_obj::dumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",97,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(101)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		if ((tmp1)){
			HX_STACK_LINE(103)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(105)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(105)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					::flixel::graphics::FlxGraphic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(105)
					obj = tmp6;
					HX_STACK_LINE(106)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(106)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(106)
					if ((tmp7)){
						HX_STACK_LINE(106)
						bool tmp9 = (obj->assetsClass != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(106)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(106)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(106)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(106)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(106)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(106)
						if ((tmp14)){
							HX_STACK_LINE(106)
							tmp8 = (obj->assetsKey != null());
						}
						else{
							HX_STACK_LINE(106)
							tmp8 = true;
						}
					}
					else{
						HX_STACK_LINE(106)
						tmp8 = false;
					}
					HX_STACK_LINE(106)
					if ((tmp8)){
						HX_STACK_LINE(108)
						obj->dump();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

Void BitmapFrontEnd_obj::undumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","undumpCache",0xfe6eed82,"flixel.system.frontEnds.BitmapFrontEnd.undumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",119,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(123)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(125)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(127)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(127)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(127)
					::flixel::graphics::FlxGraphic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(127)
					obj = tmp6;
					HX_STACK_LINE(128)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(128)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(128)
					if ((tmp7)){
						HX_STACK_LINE(128)
						tmp8 = obj->isDumped;
					}
					else{
						HX_STACK_LINE(128)
						tmp8 = false;
					}
					HX_STACK_LINE(128)
					if ((tmp8)){
						HX_STACK_LINE(130)
						obj->undump();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,undumpCache,(void))

bool BitmapFrontEnd_obj::checkCache( ::String Key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",144,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(145)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	bool tmp3 = tmp->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	if ((tmp3)){
		HX_STACK_LINE(145)
		::haxe::ds::StringMap tmp5 = this->_cache;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		::String tmp7 = Key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		::flixel::graphics::FlxGraphic tmp9 = tmp6->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		::flixel::graphics::FlxGraphic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(145)
		::flixel::graphics::FlxGraphic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(145)
		tmp4 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(145)
		tmp4 = false;
	}
	HX_STACK_LINE(145)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::create( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",159,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(160)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		int tmp2 = Color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		bool tmp3 = Unique;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		::String tmp4 = Key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		::flixel::graphics::FlxGraphic tmp5 = ::flixel::graphics::FlxGraphic_obj::fromRectangle(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::add( Dynamic Graphic,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",175,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(176)
		Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::graphics::FlxGraphic >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		if ((tmp1)){
			HX_STACK_LINE(178)
			::flixel::graphics::FlxGraphic graphic = ((::flixel::graphics::FlxGraphic)(Graphic));		HX_STACK_VAR(graphic,"graphic");
			HX_STACK_LINE(179)
			::flixel::graphics::FlxGraphic tmp2 = graphic;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			bool tmp3 = Unique;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			::String tmp4 = Key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			::flixel::graphics::FlxGraphic tmp5 = ::flixel::graphics::FlxGraphic_obj::fromGraphic(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			return tmp5;
		}
		else{
			HX_STACK_LINE(181)
			Dynamic tmp2 = Graphic;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			if ((tmp3)){
				HX_STACK_LINE(183)
				::openfl::_legacy::display::BitmapData bitmap = ((::openfl::_legacy::display::BitmapData)(Graphic));		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(184)
				::openfl::_legacy::display::BitmapData tmp4 = bitmap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(184)
				bool tmp5 = Unique;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				::String tmp6 = Key;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(184)
				::flixel::graphics::FlxGraphic tmp7 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(tmp4,tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				return tmp7;
			}
		}
		HX_STACK_LINE(188)
		Dynamic tmp2 = Graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		::String assetKey = tmp3;		HX_STACK_VAR(assetKey,"assetKey");
		HX_STACK_LINE(189)
		::String tmp4 = assetKey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		bool tmp5 = Unique;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		::String tmp6 = Key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		::flixel::graphics::FlxGraphic tmp7 = ::flixel::graphics::FlxGraphic_obj::fromAssetKey(tmp4,tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::addGraphic( ::flixel::graphics::FlxGraphic graphic){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","addGraphic",0x72a9209a,"flixel.system.frontEnds.BitmapFrontEnd.addGraphic","flixel/system/frontEnds/BitmapFrontEnd.hx",199,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(200)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	::String tmp1 = graphic->key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	if ((tmp3)){
		HX_STACK_LINE(202)
		::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		::String tmp5 = graphic->key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		::flixel::graphics::FlxGraphic tmp6 = graphic;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(204)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,addGraphic,return )

::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::get( ::String key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",213,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(214)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	::flixel::graphics::FlxGraphic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	::flixel::graphics::FlxGraphic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::findKeyForBitmap( ::openfl::_legacy::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","findKeyForBitmap",0x03085a65,"flixel.system.frontEnds.BitmapFrontEnd.findKeyForBitmap","flixel/system/frontEnds/BitmapFrontEnd.hx",224,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(225)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(227)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			::openfl::_legacy::display::BitmapData tmp5 = tmp4->bitmap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			::openfl::_legacy::display::BitmapData data = tmp5;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(228)
			bool tmp6 = (data == bmd);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(228)
			if ((tmp6)){
				HX_STACK_LINE(230)
				::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				return tmp7;
			}
		}
;
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,findKeyForBitmap,return )

::String BitmapFrontEnd_obj::getKeyForClass( ::hx::Class source){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyForClass",0x26696fcb,"flixel.system.frontEnds.BitmapFrontEnd.getKeyForClass","flixel/system/frontEnds/BitmapFrontEnd.hx",243,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(244)
	::hx::Class tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getKeyForClass,return )

::String BitmapFrontEnd_obj::generateKey( ::String systemKey,::String userKey,hx::Null< bool >  __o_unique){
bool unique = __o_unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","generateKey",0xe3b3c7f7,"flixel.system.frontEnds.BitmapFrontEnd.generateKey","flixel/system/frontEnds/BitmapFrontEnd.hx",256,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(systemKey,"systemKey")
	HX_STACK_ARG(userKey,"userKey")
	HX_STACK_ARG(unique,"unique")
{
		HX_STACK_LINE(257)
		::String key = userKey;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(258)
		bool tmp = (key == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		if ((tmp)){
			HX_STACK_LINE(260)
			key = systemKey;
		}
		HX_STACK_LINE(263)
		bool tmp1 = unique;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		if ((tmp2)){
			HX_STACK_LINE(263)
			tmp3 = (key == null());
		}
		else{
			HX_STACK_LINE(263)
			tmp3 = true;
		}
		HX_STACK_LINE(263)
		if ((tmp3)){
			HX_STACK_LINE(265)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			::String tmp5 = this->getUniqueKey(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			key = tmp5;
		}
		HX_STACK_LINE(268)
		::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,generateKey,return )

::String BitmapFrontEnd_obj::getUniqueKey( ::String baseKey){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",278,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
	HX_STACK_LINE(279)
	bool tmp = (baseKey == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	if ((tmp)){
		HX_STACK_LINE(279)
		baseKey = HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c");
	}
	HX_STACK_LINE(281)
	::haxe::ds::StringMap tmp1 = this->_cache;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	::String tmp2 = baseKey;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	bool tmp4 = tmp1->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(281)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(281)
	if ((tmp4)){
		HX_STACK_LINE(281)
		::haxe::ds::StringMap tmp6 = this->_cache;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(281)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(281)
		::String tmp8 = baseKey;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(281)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(281)
		::flixel::graphics::FlxGraphic tmp10 = tmp7->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(281)
		::flixel::graphics::FlxGraphic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(281)
		::flixel::graphics::FlxGraphic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(281)
		tmp5 = (tmp12 != null());
	}
	else{
		HX_STACK_LINE(281)
		tmp5 = false;
	}
	HX_STACK_LINE(281)
	if ((tmp5)){
		HX_STACK_LINE(283)
		int inc = (int)0;		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(284)
		::String ukey;		HX_STACK_VAR(ukey,"ukey");
		HX_STACK_LINE(285)
		while((true)){
			HX_STACK_LINE(287)
			::String tmp6 = baseKey;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			int tmp7 = (inc)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(287)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(287)
			ukey = tmp8;
			HX_STACK_LINE(288)
			::haxe::ds::StringMap tmp9 = this->_cache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(288)
			::String tmp10 = ukey;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(288)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(288)
			bool tmp12 = tmp9->exists(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(288)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(288)
			if ((tmp12)){
				HX_STACK_LINE(288)
				::haxe::ds::StringMap tmp14 = this->_cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(288)
				::haxe::ds::StringMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(288)
				::String tmp16 = ukey;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(288)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(288)
				::flixel::graphics::FlxGraphic tmp18 = tmp15->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(288)
				::flixel::graphics::FlxGraphic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(288)
				::flixel::graphics::FlxGraphic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(288)
				tmp13 = (tmp20 != null());
			}
			else{
				HX_STACK_LINE(288)
				tmp13 = false;
			}
			HX_STACK_LINE(288)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(285)
			if ((tmp14)){
				HX_STACK_LINE(285)
				break;
			}
		}
		HX_STACK_LINE(289)
		baseKey = ukey;
	}
	HX_STACK_LINE(291)
	::String tmp6 = baseKey;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(291)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getKeyWithSpacesAndBorders( ::String baseKey,::flixel::math::FlxPoint frameSize,::flixel::math::FlxPoint frameSpacing,::flixel::math::FlxPoint frameBorder,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyWithSpacesAndBorders",0x04327ebf,"flixel.system.frontEnds.BitmapFrontEnd.getKeyWithSpacesAndBorders","flixel/system/frontEnds/BitmapFrontEnd.hx",305,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
	HX_STACK_ARG(frameSize,"frameSize")
	HX_STACK_ARG(frameSpacing,"frameSpacing")
	HX_STACK_ARG(frameBorder,"frameBorder")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(306)
	::String result = baseKey;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(308)
	bool tmp = (region != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	if ((tmp)){
		HX_STACK_LINE(310)
		::String tmp1 = (HX_HCSTRING("_Region:","\x27","\x96","\xa5","\x81") + region->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		::String tmp2 = (tmp1 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		Float tmp3 = region->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		::String tmp5 = (tmp4 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		Float tmp6 = region->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		::String tmp8 = (tmp7 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(310)
		Float tmp9 = region->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(310)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(310)
		hx::AddEq(result,tmp10);
	}
	HX_STACK_LINE(313)
	bool tmp1 = (frameSize != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	if ((tmp1)){
		HX_STACK_LINE(315)
		::String tmp2 = (HX_HCSTRING("_FrameSize:","\x2b","\x0e","\x3a","\x29") + frameSize->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		Float tmp4 = frameSize->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		hx::AddEq(result,tmp5);
	}
	HX_STACK_LINE(318)
	bool tmp2 = (frameSpacing != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(318)
	if ((tmp2)){
		HX_STACK_LINE(320)
		::String tmp3 = (HX_HCSTRING("_Spaces:","\x0e","\xb0","\xc1","\x98") + frameSpacing->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		::String tmp4 = (tmp3 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		Float tmp5 = frameSpacing->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(320)
		hx::AddEq(result,tmp6);
	}
	HX_STACK_LINE(323)
	bool tmp3 = (frameBorder != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	if ((tmp3)){
		HX_STACK_LINE(325)
		::String tmp4 = (HX_HCSTRING("_Border:","\x2f","\x83","\xf2","\x39") + frameBorder->x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(325)
		::String tmp5 = (tmp4 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(325)
		Float tmp6 = frameBorder->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(325)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(325)
		hx::AddEq(result,tmp7);
	}
	HX_STACK_LINE(328)
	::String tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(328)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,getKeyWithSpacesAndBorders,return )

Void BitmapFrontEnd_obj::remove( ::flixel::graphics::FlxGraphic graphic){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",336,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphic,"graphic")
		HX_STACK_LINE(337)
		bool tmp = (graphic != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		if ((tmp)){
			HX_STACK_LINE(338)
			::String tmp1 = graphic->key;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(338)
			this->removeByKey(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

Void BitmapFrontEnd_obj::removeByKey( ::String key){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeByKey",0x593bffb1,"flixel.system.frontEnds.BitmapFrontEnd.removeByKey","flixel/system/frontEnds/BitmapFrontEnd.hx",346,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(347)
		bool tmp = (key != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		if ((tmp)){
			HX_STACK_LINE(347)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(347)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(347)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(347)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(347)
			tmp1 = false;
		}
		HX_STACK_LINE(347)
		if ((tmp1)){
			HX_STACK_LINE(349)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			::flixel::graphics::FlxGraphic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			::flixel::graphics::FlxGraphic obj = tmp4;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(350)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			this->removeFromOpenFLCache(tmp5);
			HX_STACK_LINE(351)
			::haxe::ds::StringMap tmp6 = this->_cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(351)
			tmp6->remove(tmp7);
			HX_STACK_LINE(352)
			obj->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeByKey,(void))

Void BitmapFrontEnd_obj::removeFromOpenFLCache( ::String key){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeFromOpenFLCache",0x35197031,"flixel.system.frontEnds.BitmapFrontEnd.removeFromOpenFLCache","flixel/system/frontEnds/BitmapFrontEnd.hx",357,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(363)
		::openfl::_legacy::IAssetCache tmp = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		tmp->removeBitmapData(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeFromOpenFLCache,(void))

Void BitmapFrontEnd_obj::removeIfNoUse( ::flixel::graphics::FlxGraphic graphic){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeIfNoUse",0x6b036552,"flixel.system.frontEnds.BitmapFrontEnd.removeIfNoUse","flixel/system/frontEnds/BitmapFrontEnd.hx",370,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphic,"graphic")
		HX_STACK_LINE(371)
		bool tmp = (graphic != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(371)
		if ((tmp1)){
			HX_STACK_LINE(371)
			int tmp3 = graphic->get_useCount();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			tmp2 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(371)
			tmp2 = false;
		}
		HX_STACK_LINE(371)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(371)
		if ((tmp2)){
			HX_STACK_LINE(371)
			bool tmp4 = graphic->persist;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(371)
			tmp3 = false;
		}
		HX_STACK_LINE(371)
		if ((tmp3)){
			HX_STACK_LINE(373)
			::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			this->remove(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeIfNoUse,(void))

Void BitmapFrontEnd_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",382,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(383)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(385)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(387)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(387)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(387)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(387)
			this->_cache = tmp2;
		}
		HX_STACK_LINE(390)
		::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(392)
				::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(392)
				::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(392)
				::flixel::graphics::FlxGraphic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(392)
				obj = tmp6;
				HX_STACK_LINE(393)
				bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(393)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(393)
				if ((tmp7)){
					HX_STACK_LINE(393)
					bool tmp9 = obj->persist;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(393)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(393)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(393)
					tmp8 = false;
				}
				HX_STACK_LINE(393)
				if ((tmp8)){
					HX_STACK_LINE(395)
					::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(395)
					this->removeByKey(tmp9);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

Void BitmapFrontEnd_obj::clearUnused( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",405,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(406)
		::flixel::graphics::FlxGraphic obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(408)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		if ((tmp1)){
			HX_STACK_LINE(410)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(412)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(412)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(412)
					::flixel::graphics::FlxGraphic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(412)
					obj = tmp6;
					HX_STACK_LINE(413)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(413)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(413)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(413)
					if ((tmp8)){
						HX_STACK_LINE(413)
						int tmp10 = obj->get_useCount();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(413)
						int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(413)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(413)
						tmp9 = (tmp12 <= (int)0);
					}
					else{
						HX_STACK_LINE(413)
						tmp9 = false;
					}
					HX_STACK_LINE(413)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(413)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(413)
					if ((tmp10)){
						HX_STACK_LINE(413)
						bool tmp12 = obj->persist;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(413)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(413)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(413)
						tmp11 = !(tmp14);
					}
					else{
						HX_STACK_LINE(413)
						tmp11 = false;
					}
					HX_STACK_LINE(413)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(413)
					if ((tmp11)){
						HX_STACK_LINE(413)
						tmp12 = obj->get_destroyOnNoUse();
					}
					else{
						HX_STACK_LINE(413)
						tmp12 = false;
					}
					HX_STACK_LINE(413)
					if ((tmp12)){
						HX_STACK_LINE(415)
						::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(415)
						this->removeByKey(tmp13);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))

int BitmapFrontEnd_obj::get_maxTextureSize( ){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_maxTextureSize",0x8d42ecd4,"flixel.system.frontEnds.BitmapFrontEnd.get_maxTextureSize","flixel/system/frontEnds/BitmapFrontEnd.hx",423,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(424)
	Dynamic tmp = ::openfl::_legacy::gl::GL_obj::lime_gl_get_parameter((int)3379);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(424)
	int tmp1 = ((int)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(424)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_maxTextureSize,return )


BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
}

Dynamic BitmapFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return dumpCache_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { if (inCallProp == hx::paccAlways) return get_whitePixel(); }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return checkCache_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return _whitePixel; }
		if (HX_FIELD_EQ(inName,"undumpCache") ) { return undumpCache_dyn(); }
		if (HX_FIELD_EQ(inName,"generateKey") ) { return generateKey_dyn(); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return removeByKey_dyn(); }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return clearUnused_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return getUniqueKey_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeIfNoUse") ) { return removeIfNoUse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTextureSize") ) { if (inCallProp == hx::paccAlways) return get_maxTextureSize(); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return onAssetsReload_dyn(); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return get_whitePixel_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyForClass") ) { return getKeyForClass_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findKeyForBitmap") ) { return findKeyForBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_maxTextureSize") ) { return get_maxTextureSize_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeFromOpenFLCache") ) { return removeFromOpenFLCache_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyWithSpacesAndBorders") ) { return getKeyWithSpacesAndBorders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"));
	outFields->push(HX_HCSTRING("maxTextureSize","\xf8","\xa6","\x7c","\x0a"));
	outFields->push(HX_HCSTRING("whitePixel","\x1d","\xa7","\xf7","\x19"));
	outFields->push(HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"),
	HX_HCSTRING("onAssetsReload","\xfb","\x33","\x88","\x63"),
	HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"),
	HX_HCSTRING("get_whitePixel","\x66","\x2f","\xed","\x8f"),
	HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"),
	HX_HCSTRING("dumpCache","\x6e","\x30","\x39","\xdb"),
	HX_HCSTRING("undumpCache","\xf5","\xb6","\xdf","\x60"),
	HX_HCSTRING("checkCache","\x5a","\x9c","\x04","\x51"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addGraphic","\x87","\x86","\x91","\xdb"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("findKeyForBitmap","\x12","\x70","\x29","\x81"),
	HX_HCSTRING("getKeyForClass","\x38","\xd0","\xdf","\x11"),
	HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"),
	HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"),
	HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeByKey","\x24","\xc9","\xac","\xbb"),
	HX_HCSTRING("removeFromOpenFLCache","\x64","\xa7","\xa9","\x89"),
	HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	HX_HCSTRING("clearUnused","\x83","\xa6","\x6f","\xff"),
	HX_HCSTRING("get_maxTextureSize","\xc1","\x87","\x16","\xa6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.BitmapFrontEnd","\x7b","\xb7","\xf6","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFrontEnd_obj >;
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
} // end namespace frontEnds
