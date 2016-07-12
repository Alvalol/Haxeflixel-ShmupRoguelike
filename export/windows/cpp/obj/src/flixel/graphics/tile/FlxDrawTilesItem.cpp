#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
namespace flixel{
namespace graphics{
namespace tile{

Void FlxDrawTilesItem_obj::__construct()
{
HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","new",0x1450ef83,"flixel.graphics.tile.FlxDrawTilesItem.new","flixel/graphics/tile/FlxDrawTilesItem.hx",11,0xdffe6dcc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->position = (int)0;
	HX_STACK_LINE(13)
	this->drawData = Array_obj< Float >::__new();
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TILES;
}
;
	return null();
}

//FlxDrawTilesItem_obj::~FlxDrawTilesItem_obj() { }

Dynamic FlxDrawTilesItem_obj::__CreateEmpty() { return  new FlxDrawTilesItem_obj; }
hx::ObjectPtr< FlxDrawTilesItem_obj > FlxDrawTilesItem_obj::__new()
{  hx::ObjectPtr< FlxDrawTilesItem_obj > _result_ = new FlxDrawTilesItem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxDrawTilesItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDrawTilesItem_obj > _result_ = new FlxDrawTilesItem_obj();
	_result_->__construct();
	return _result_;}

Void FlxDrawTilesItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","reset",0xcba5b7b2,"flixel.graphics.tile.FlxDrawTilesItem.reset","flixel/graphics/tile/FlxDrawTilesItem.hx",24,0xdffe6dcc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::reset();
		HX_STACK_LINE(26)
		this->position = (int)0;
	}
return null();
}


Void FlxDrawTilesItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","dispose",0xa4cb6d42,"flixel.graphics.tile.FlxDrawTilesItem.dispose","flixel/graphics/tile/FlxDrawTilesItem.hx",30,0xdffe6dcc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->super::dispose();
		HX_STACK_LINE(32)
		this->drawData = null();
	}
return null();
}


Void FlxDrawTilesItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","addQuad",0x70c6682b,"flixel.graphics.tile.FlxDrawTilesItem.addQuad","flixel/graphics/tile/FlxDrawTilesItem.hx",36,0xdffe6dcc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(37)
		int tmp = (this->position)++;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		Float tmp1 = matrix->tx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		this->drawData[tmp] = tmp1;
		HX_STACK_LINE(38)
		int tmp2 = (this->position)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		Float tmp3 = matrix->ty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		this->drawData[tmp2] = tmp3;
		HX_STACK_LINE(40)
		::flixel::math::FlxRect rect = frame->frame;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(42)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		Float tmp5 = rect->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		this->drawData[tmp4] = tmp5;
		HX_STACK_LINE(43)
		int tmp6 = (this->position)++;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		Float tmp7 = rect->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		this->drawData[tmp6] = tmp7;
		HX_STACK_LINE(44)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		Float tmp9 = rect->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		this->drawData[tmp8] = tmp9;
		HX_STACK_LINE(45)
		int tmp10 = (this->position)++;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		Float tmp11 = rect->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		this->drawData[tmp10] = tmp11;
		HX_STACK_LINE(47)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		Float tmp13 = matrix->a;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		this->drawData[tmp12] = tmp13;
		HX_STACK_LINE(48)
		int tmp14 = (this->position)++;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(48)
		Float tmp15 = matrix->b;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(48)
		this->drawData[tmp14] = tmp15;
		HX_STACK_LINE(49)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(49)
		Float tmp17 = matrix->c;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(49)
		this->drawData[tmp16] = tmp17;
		HX_STACK_LINE(50)
		int tmp18 = (this->position)++;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(50)
		Float tmp19 = matrix->d;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(50)
		this->drawData[tmp18] = tmp19;
		HX_STACK_LINE(52)
		bool tmp20 = this->colored;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(52)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(52)
		if ((tmp20)){
			HX_STACK_LINE(52)
			tmp21 = (transform != null());
		}
		else{
			HX_STACK_LINE(52)
			tmp21 = false;
		}
		HX_STACK_LINE(52)
		if ((tmp21)){
			HX_STACK_LINE(54)
			int tmp22 = (this->position)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(54)
			Float tmp23 = transform->redMultiplier;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(54)
			this->drawData[tmp22] = tmp23;
			HX_STACK_LINE(55)
			int tmp24 = (this->position)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(55)
			Float tmp25 = transform->greenMultiplier;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(55)
			this->drawData[tmp24] = tmp25;
			HX_STACK_LINE(56)
			int tmp26 = (this->position)++;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(56)
			Float tmp27 = transform->blueMultiplier;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(56)
			this->drawData[tmp26] = tmp27;
		}
		HX_STACK_LINE(59)
		int tmp22 = (this->position)++;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(59)
		bool tmp23 = (transform != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(59)
		Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(59)
		if ((tmp23)){
			HX_STACK_LINE(59)
			tmp24 = transform->alphaMultiplier;
		}
		else{
			HX_STACK_LINE(59)
			tmp24 = ((Float)1.0);
		}
		HX_STACK_LINE(59)
		this->drawData[tmp22] = tmp24;
	}
return null();
}


Void FlxDrawTilesItem_obj::render( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","render",0x620c2413,"flixel.graphics.tile.FlxDrawTilesItem.render","flixel/graphics/tile/FlxDrawTilesItem.hx",73,0xdffe6dcc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(74)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		if ((tmp1)){
			HX_STACK_LINE(75)
			return null();
		}
		HX_STACK_LINE(77)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		if ((tmp3)){
			HX_STACK_LINE(79)
			int tmp4 = (int)48;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			int tmp5 = (int(tmp4) | int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			int tempFlags = tmp5;		HX_STACK_VAR(tempFlags,"tempFlags");
			HX_STACK_LINE(81)
			bool tmp6 = this->colored;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			if ((tmp6)){
				HX_STACK_LINE(83)
				hx::OrEq(tempFlags,(int)4);
			}
			HX_STACK_LINE(93)
			int tmp7 = this->blending;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			hx::OrEq(tempFlags,tmp7);
			HX_STACK_LINE(94)
			::flixel::graphics::FlxGraphic tmp8 = this->graphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			::openfl::_legacy::display::Tilesheet tmp9 = tmp8->get_tilesheet();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			::openfl::_legacy::display::Graphics tmp10 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			bool tmp11 = camera->antialiasing;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(94)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(94)
			if ((tmp12)){
				HX_STACK_LINE(94)
				tmp13 = this->antialiasing;
			}
			else{
				HX_STACK_LINE(94)
				tmp13 = true;
			}
			HX_STACK_LINE(94)
			int tmp14 = tempFlags;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(94)
			int tmp15 = this->position;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(94)
			tmp9->drawTiles(tmp10,this->drawData,tmp13,tmp14,tmp15);
			HX_STACK_LINE(95)
			(::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS)++;
		}
	}
return null();
}


int FlxDrawTilesItem_obj::get_numTiles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","get_numTiles",0xd57429e5,"flixel.graphics.tile.FlxDrawTilesItem.get_numTiles","flixel/graphics/tile/FlxDrawTilesItem.hx",100,0xdffe6dcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	int elementsPerTile = (int)8;		HX_STACK_VAR(elementsPerTile,"elementsPerTile");
	HX_STACK_LINE(102)
	bool tmp = this->colored;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	if ((tmp)){
		HX_STACK_LINE(104)
		hx::AddEq(elementsPerTile,(int)3);
	}
	HX_STACK_LINE(107)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	int tmp2 = elementsPerTile;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(107)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawTilesItem_obj,get_numTiles,return )

int FlxDrawTilesItem_obj::get_numVertices( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","get_numVertices",0x8b0e8f99,"flixel.graphics.tile.FlxDrawTilesItem.get_numVertices","flixel/graphics/tile/FlxDrawTilesItem.hx",111,0xdffe6dcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	int tmp = this->get_numTiles();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = ((int)4 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


int FlxDrawTilesItem_obj::get_numTriangles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTilesItem","get_numTriangles",0x37fe0d0b,"flixel.graphics.tile.FlxDrawTilesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTilesItem.hx",116,0xdffe6dcc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	int tmp = this->get_numTiles();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	int tmp1 = ((int)2 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	return tmp1;
}



FlxDrawTilesItem_obj::FlxDrawTilesItem_obj()
{
}

void FlxDrawTilesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTilesItem);
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(position,"position");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTilesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(position,"position");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDrawTilesItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return addQuad_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { if (inCallProp == hx::paccAlways) return get_numTiles(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return get_numTiles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDrawTilesItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawTilesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTilesItem_obj,drawData),HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56")},
	{hx::fsInt,(int)offsetof(FlxDrawTilesItem_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("addQuad","\x88","\x7b","\x47","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("get_numTiles","\x68","\xc5","\x5e","\x82"),
	HX_HCSTRING("get_numVertices","\xf6","\xc7","\x0d","\x17"),
	HX_HCSTRING("get_numTriangles","\x0e","\x26","\x50","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTilesItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTilesItem_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxDrawTilesItem_obj::__mClass;

void FlxDrawTilesItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxDrawTilesItem","\x11","\x72","\xa4","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDrawTilesItem_obj >;
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
} // end namespace graphics
} // end namespace tile
