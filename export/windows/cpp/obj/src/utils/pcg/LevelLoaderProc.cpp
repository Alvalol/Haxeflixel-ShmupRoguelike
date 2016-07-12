#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelGenerator
#include <utils/pcg/LevelGenerator.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelLoaderProc
#include <utils/pcg/LevelLoaderProc.h>
#endif
namespace utils{
namespace pcg{

Void LevelLoaderProc_obj::__construct()
{
HX_STACK_FRAME("utils.pcg.LevelLoaderProc","new",0xbc519fa8,"utils.pcg.LevelLoaderProc.new","utils/pcg/LevelLoaderProc.hx",22,0x873de9ca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	::flixel::tile::FlxTilemap tmp = this->loadGeneratedLevel();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->loadedMap = tmp;
}
;
	return null();
}

//LevelLoaderProc_obj::~LevelLoaderProc_obj() { }

Dynamic LevelLoaderProc_obj::__CreateEmpty() { return  new LevelLoaderProc_obj; }
hx::ObjectPtr< LevelLoaderProc_obj > LevelLoaderProc_obj::__new()
{  hx::ObjectPtr< LevelLoaderProc_obj > _result_ = new LevelLoaderProc_obj();
	_result_->__construct();
	return _result_;}

Dynamic LevelLoaderProc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelLoaderProc_obj > _result_ = new LevelLoaderProc_obj();
	_result_->__construct();
	return _result_;}

::flixel::tile::FlxTilemap LevelLoaderProc_obj::loadGeneratedLevel( ){
	HX_STACK_FRAME("utils.pcg.LevelLoaderProc","loadGeneratedLevel",0xf294d5f3,"utils.pcg.LevelLoaderProc.loadGeneratedLevel","utils/pcg/LevelLoaderProc.hx",29,0x873de9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::flixel::tile::FlxTilemap tmp = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::flixel::tile::FlxTilemap loadedMap = tmp;		HX_STACK_VAR(loadedMap,"loadedMap");
	HX_STACK_LINE(31)
	::utils::pcg::LevelGenerator tmp1 = ::utils::pcg::LevelGenerator_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Array< ::Dynamic > generatedMap = tmp1->populateCurrentMap();		HX_STACK_VAR(generatedMap,"generatedMap");
	HX_STACK_LINE(32)
	Array< ::Dynamic > cleanArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(cleanArray,"cleanArray");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			bool tmp2 = (_g < generatedMap->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			if ((tmp3)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(34)
			Array< int > obj = generatedMap->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(34)
			++(_g);
			HX_STACK_LINE(36)
			cleanArray->push(obj);
		}
	}
	HX_STACK_LINE(44)
	::flixel::graphics::FlxGraphic tmp2 = ::flixel::graphics::FlxGraphic_obj::fromAssetKey(HX_HCSTRING("assets/images/solid.png","\xdb","\xbd","\x79","\x70"),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	::flixel::math::FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::__new((int)8,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	::flixel::math::FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	::flixel::math::FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	::flixel::graphics::frames::FlxTileFrames tmp6 = ::flixel::graphics::frames::FlxTileFrames_obj::fromBitmapAddSpacesAndBorders(tmp2,tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	loadedMap->loadMapFrom2DArray(cleanArray,tmp6,(int)8,(int)8,null(),null(),null(),null());
	HX_STACK_LINE(49)
	::flixel::tile::FlxTilemap tmp7 = loadedMap;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(LevelLoaderProc_obj,loadGeneratedLevel,return )


LevelLoaderProc_obj::LevelLoaderProc_obj()
{
}

void LevelLoaderProc_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LevelLoaderProc);
	HX_MARK_MEMBER_NAME(loadedMap,"loadedMap");
	HX_MARK_END_CLASS();
}

void LevelLoaderProc_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loadedMap,"loadedMap");
}

Dynamic LevelLoaderProc_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"loadedMap") ) { return loadedMap; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadGeneratedLevel") ) { return loadGeneratedLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LevelLoaderProc_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"loadedMap") ) { loadedMap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LevelLoaderProc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("loadedMap","\x97","\x8b","\xd6","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(LevelLoaderProc_obj,loadedMap),HX_HCSTRING("loadedMap","\x97","\x8b","\xd6","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loadedMap","\x97","\x8b","\xd6","\xf1"),
	HX_HCSTRING("loadGeneratedLevel","\x3b","\x34","\x26","\xb3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelLoaderProc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelLoaderProc_obj::__mClass,"__mClass");
};

#endif

hx::Class LevelLoaderProc_obj::__mClass;

void LevelLoaderProc_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("utils.pcg.LevelLoaderProc","\xb6","\xeb","\x56","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LevelLoaderProc_obj >;
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

} // end namespace utils
} // end namespace pcg
