#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
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

Void FlxDrawBaseItem_obj::__construct()
{
HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","new",0x1069797d,"flixel.graphics.tile.FlxDrawBaseItem.new","flixel/graphics/tile/FlxDrawBaseItem.hx",14,0xe6349cf4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(60)
	this->blending = (int)0;
	HX_STACK_LINE(59)
	this->hasColorOffsets = false;
	HX_STACK_LINE(58)
	this->colored = false;
	HX_STACK_LINE(57)
	this->antialiasing = false;
}
;
	return null();
}

//FlxDrawBaseItem_obj::~FlxDrawBaseItem_obj() { }

Dynamic FlxDrawBaseItem_obj::__CreateEmpty() { return  new FlxDrawBaseItem_obj; }
hx::ObjectPtr< FlxDrawBaseItem_obj > FlxDrawBaseItem_obj::__new()
{  hx::ObjectPtr< FlxDrawBaseItem_obj > _result_ = new FlxDrawBaseItem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxDrawBaseItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDrawBaseItem_obj > _result_ = new FlxDrawBaseItem_obj();
	_result_->__construct();
	return _result_;}

Void FlxDrawBaseItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","reset",0x6670342c,"flixel.graphics.tile.FlxDrawBaseItem.reset","flixel/graphics/tile/FlxDrawBaseItem.hx",71,0xe6349cf4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->graphics = null();
		HX_STACK_LINE(73)
		this->antialiasing = false;
		HX_STACK_LINE(74)
		this->nextTyped = null();
		HX_STACK_LINE(75)
		this->next = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,reset,(void))

Void FlxDrawBaseItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","dispose",0x64897c3c,"flixel.graphics.tile.FlxDrawBaseItem.dispose","flixel/graphics/tile/FlxDrawBaseItem.hx",79,0xe6349cf4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->graphics = null();
		HX_STACK_LINE(81)
		this->next = null();
		HX_STACK_LINE(82)
		this->type = null();
		HX_STACK_LINE(83)
		this->nextTyped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,dispose,(void))

Void FlxDrawBaseItem_obj::render( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","render",0x386e9259,"flixel.graphics.tile.FlxDrawBaseItem.render","flixel/graphics/tile/FlxDrawBaseItem.hx",86,0xe6349cf4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDrawBaseItem_obj,render,(void))

Void FlxDrawBaseItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","addQuad",0x30847725,"flixel.graphics.tile.FlxDrawBaseItem.addQuad","flixel/graphics/tile/FlxDrawBaseItem.hx",88,0xe6349cf4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(transform,"transform")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxDrawBaseItem_obj,addQuad,(void))

int FlxDrawBaseItem_obj::get_numVertices( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","get_numVertices",0x6c4b2893,"flixel.graphics.tile.FlxDrawBaseItem.get_numVertices","flixel/graphics/tile/FlxDrawBaseItem.hx",92,0xe6349cf4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numVertices,return )

int FlxDrawBaseItem_obj::get_numTriangles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","get_numTriangles",0x6bc74ed1,"flixel.graphics.tile.FlxDrawBaseItem.get_numTriangles","flixel/graphics/tile/FlxDrawBaseItem.hx",97,0xe6349cf4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawBaseItem_obj,get_numTriangles,return )

int FlxDrawBaseItem_obj::blendToInt( ::openfl::_legacy::display::BlendMode blend){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawBaseItem","blendToInt",0xc101e4a6,"flixel.graphics.tile.FlxDrawBaseItem.blendToInt","flixel/graphics/tile/FlxDrawBaseItem.hx",17,0xe6349cf4)
	HX_STACK_ARG(blend,"blend")
	HX_STACK_LINE(18)
	bool tmp = (blend == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	if ((tmp)){
		HX_STACK_LINE(19)
		return (int)0;
	}
	HX_STACK_LINE(21)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	switch( (int)(blend->__Index())){
		case (int)7: {
			HX_STACK_LINE(24)
			tmp1 = (int)65536;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(27)
			tmp1 = (int)131072;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(29)
			tmp1 = (int)262144;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(31)
			tmp1 = (int)524288;
		}
		;break;
		default: {
			HX_STACK_LINE(48)
			tmp1 = (int)0;
		}
	}
	HX_STACK_LINE(21)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDrawBaseItem_obj,blendToInt,return )


FlxDrawBaseItem_obj::FlxDrawBaseItem_obj()
{
}

void FlxDrawBaseItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawBaseItem);
	HX_MARK_MEMBER_NAME(nextTyped,"nextTyped");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(hasColorOffsets,"hasColorOffsets");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void FlxDrawBaseItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nextTyped,"nextTyped");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(hasColorOffsets,"hasColorOffsets");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic FlxDrawBaseItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { return colored; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return addQuad_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"blending") ) { return blending; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { return nextTyped; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == hx::paccAlways) return get_numVertices(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { if (inCallProp == hx::paccAlways) return get_numTriangles(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorOffsets") ) { return hasColorOffsets; }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawBaseItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"blendToInt") ) { outValue = blendToInt_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxDrawBaseItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::flixel::graphics::tile::FlxDrawItemType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextTyped") ) { nextTyped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasColorOffsets") ) { hasColorOffsets=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawBaseItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nextTyped","\x77","\x8a","\x10","\xc2"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("colored","\x82","\x28","\x66","\xef"));
	outFields->push(HX_HCSTRING("hasColorOffsets","\xd7","\x2c","\x2c","\x68"));
	outFields->push(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"));
	outFields->push(HX_HCSTRING("numTriangles","\x85","\x39","\xb1","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxDrawBaseItem_obj,nextTyped),HX_HCSTRING("nextTyped","\x77","\x8a","\x10","\xc2")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxDrawBaseItem_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxDrawBaseItem_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,colored),HX_HCSTRING("colored","\x82","\x28","\x66","\xef")},
	{hx::fsBool,(int)offsetof(FlxDrawBaseItem_obj,hasColorOffsets),HX_HCSTRING("hasColorOffsets","\xd7","\x2c","\x2c","\x68")},
	{hx::fsInt,(int)offsetof(FlxDrawBaseItem_obj,blending),HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawItemType*/ ,(int)offsetof(FlxDrawBaseItem_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nextTyped","\x77","\x8a","\x10","\xc2"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("colored","\x82","\x28","\x66","\xef"),
	HX_HCSTRING("hasColorOffsets","\xd7","\x2c","\x2c","\x68"),
	HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("addQuad","\x88","\x7b","\x47","\x87"),
	HX_HCSTRING("get_numVertices","\xf6","\xc7","\x0d","\x17"),
	HX_HCSTRING("get_numTriangles","\x0e","\x26","\x50","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawBaseItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawBaseItem_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxDrawBaseItem_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("blendToInt","\x23","\x80","\x69","\xac"),
	::String(null()) };

void FlxDrawBaseItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxDrawBaseItem","\x0b","\xf7","\x7d","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawBaseItem_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDrawBaseItem_obj >;
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
