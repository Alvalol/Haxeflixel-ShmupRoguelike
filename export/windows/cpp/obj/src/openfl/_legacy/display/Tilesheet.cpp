#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Tilesheet_obj::__construct(::openfl::_legacy::display::BitmapData image)
{
HX_STACK_FRAME("openfl._legacy.display.Tilesheet","new",0x702cb873,"openfl._legacy.display.Tilesheet.new","openfl/_legacy/display/Tilesheet.hx",39,0x425689e0)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
{
	HX_STACK_LINE(41)
	this->__bitmap = image;
	HX_STACK_LINE(42)
	Dynamic tmp = image->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Dynamic tmp1 = ::openfl::_legacy::display::Tilesheet_obj::lime_tilesheet_create(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	this->__handle = tmp1;
	HX_STACK_LINE(44)
	::openfl::_legacy::display::BitmapData tmp2 = this->__bitmap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	int tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	this->_bitmapWidth = tmp3;
	HX_STACK_LINE(45)
	::openfl::_legacy::display::BitmapData tmp4 = this->__bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	int tmp5 = tmp4->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	this->_bitmapHeight = tmp5;
	HX_STACK_LINE(47)
	this->_tilePoints = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(48)
	this->_tiles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(49)
	this->_tileUVs = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Tilesheet_obj::~Tilesheet_obj() { }

Dynamic Tilesheet_obj::__CreateEmpty() { return  new Tilesheet_obj; }
hx::ObjectPtr< Tilesheet_obj > Tilesheet_obj::__new(::openfl::_legacy::display::BitmapData image)
{  hx::ObjectPtr< Tilesheet_obj > _result_ = new Tilesheet_obj();
	_result_->__construct(image);
	return _result_;}

Dynamic Tilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilesheet_obj > _result_ = new Tilesheet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int Tilesheet_obj::addTileRect( ::openfl::_legacy::geom::Rectangle rectangle,::openfl::_legacy::geom::Point centerPoint){
	HX_STACK_FRAME("openfl._legacy.display.Tilesheet","addTileRect",0x2df55dc6,"openfl._legacy.display.Tilesheet.addTileRect","openfl/_legacy/display/Tilesheet.hx",54,0x425689e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rectangle,"rectangle")
	HX_STACK_ARG(centerPoint,"centerPoint")
	HX_STACK_LINE(56)
	::openfl::_legacy::geom::Rectangle tmp = rectangle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	this->_tiles->push(tmp);
	HX_STACK_LINE(57)
	bool tmp1 = (centerPoint == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp1)){
		HX_STACK_LINE(57)
		::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::display::Tilesheet_obj::defaultRatio;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		this->_tilePoints->push(tmp2);
	}
	else{
		HX_STACK_LINE(58)
		Float tmp2 = (Float(centerPoint->x) / Float(rectangle->width));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Float tmp3 = (Float(centerPoint->y) / Float(rectangle->height));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::openfl::_legacy::geom::Point tmp4 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		this->_tilePoints->push(tmp4);
	}
	HX_STACK_LINE(59)
	Float tmp2 = rectangle->get_left();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	int tmp3 = this->_bitmapWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	Float tmp5 = rectangle->get_top();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	int tmp6 = this->_bitmapHeight;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(59)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(59)
	Float tmp8 = rectangle->get_right();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(59)
	int tmp9 = this->_bitmapWidth;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(59)
	Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(59)
	Float tmp11 = rectangle->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(59)
	int tmp12 = this->_bitmapHeight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(59)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(59)
	::openfl::_legacy::geom::Rectangle tmp14 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp4,tmp7,tmp10,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(59)
	this->_tileUVs->push(tmp14);
	HX_STACK_LINE(60)
	Dynamic tmp15 = this->__handle;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(60)
	::openfl::_legacy::geom::Rectangle tmp16 = rectangle;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(60)
	::openfl::_legacy::geom::Point tmp17 = centerPoint;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(60)
	int tmp18 = ::openfl::_legacy::display::Tilesheet_obj::lime_tilesheet_add_rect(tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(60)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilesheet_obj,addTileRect,return )

Void Tilesheet_obj::drawTiles( ::openfl::_legacy::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._legacy.display.Tilesheet","drawTiles",0x43ceeb34,"openfl._legacy.display.Tilesheet.drawTiles","openfl/_legacy/display/Tilesheet.hx",65,0x425689e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(67)
		bool tmp = smooth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		int tmp1 = flags;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		graphics->drawTiles(hx::ObjectPtr<OBJ_>(this),tileData,tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilesheet_obj,drawTiles,(void))

::openfl::_legacy::geom::Point Tilesheet_obj::getTileCenter( int index){
	HX_STACK_FRAME("openfl._legacy.display.Tilesheet","getTileCenter",0x967135ac,"openfl._legacy.display.Tilesheet.getTileCenter","openfl/_legacy/display/Tilesheet.hx",72,0x425689e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(73)
	::openfl::_legacy::geom::Point tmp = this->_tilePoints->__get(index).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileCenter,return )

::openfl::_legacy::geom::Rectangle Tilesheet_obj::getTileRect( int index){
	HX_STACK_FRAME("openfl._legacy.display.Tilesheet","getTileRect",0x228ce93b,"openfl._legacy.display.Tilesheet.getTileRect","openfl/_legacy/display/Tilesheet.hx",76,0x425689e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(77)
	::openfl::_legacy::geom::Rectangle tmp = this->_tiles->__get(index).StaticCast< ::openfl::_legacy::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileRect,return )

::openfl::_legacy::geom::Rectangle Tilesheet_obj::getTileUVs( int index){
	HX_STACK_FRAME("openfl._legacy.display.Tilesheet","getTileUVs",0x4630c6db,"openfl._legacy.display.Tilesheet.getTileUVs","openfl/_legacy/display/Tilesheet.hx",80,0x425689e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(81)
	::openfl::_legacy::geom::Rectangle tmp = this->_tileUVs->__get(index).StaticCast< ::openfl::_legacy::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileUVs,return )

int Tilesheet_obj::TILE_SCALE;

int Tilesheet_obj::TILE_ROTATION;

int Tilesheet_obj::TILE_RGB;

int Tilesheet_obj::TILE_ALPHA;

int Tilesheet_obj::TILE_TRANS_2x2;

int Tilesheet_obj::TILE_RECT;

int Tilesheet_obj::TILE_ORIGIN;

int Tilesheet_obj::TILE_BLEND_NORMAL;

int Tilesheet_obj::TILE_BLEND_ADD;

int Tilesheet_obj::TILE_BLEND_MULTIPLY;

int Tilesheet_obj::TILE_BLEND_SCREEN;

int Tilesheet_obj::TILE_BLEND_SUBTRACT;

::openfl::_legacy::geom::Point Tilesheet_obj::defaultRatio;

Dynamic Tilesheet_obj::lime_tilesheet_create;

Dynamic Tilesheet_obj::lime_tilesheet_add_rect;


Tilesheet_obj::Tilesheet_obj()
{
}

void Tilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilesheet);
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(_bitmapHeight,"_bitmapHeight");
	HX_MARK_MEMBER_NAME(_bitmapWidth,"_bitmapWidth");
	HX_MARK_MEMBER_NAME(_tilePoints,"_tilePoints");
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	HX_MARK_MEMBER_NAME(_tileUVs,"_tileUVs");
	HX_MARK_END_CLASS();
}

void Tilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(_bitmapHeight,"_bitmapHeight");
	HX_VISIT_MEMBER_NAME(_bitmapWidth,"_bitmapWidth");
	HX_VISIT_MEMBER_NAME(_tilePoints,"_tilePoints");
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	HX_VISIT_MEMBER_NAME(_tileUVs,"_tileUVs");
}

Dynamic Tilesheet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { return _tiles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"_tileUVs") ) { return _tileUVs; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTileUVs") ) { return getTileUVs_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tilePoints") ) { return _tilePoints; }
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileRect") ) { return getTileRect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bitmapWidth") ) { return _bitmapWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_bitmapHeight") ) { return _bitmapHeight; }
		if (HX_FIELD_EQ(inName,"getTileCenter") ) { return getTileCenter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tilesheet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"defaultRatio") ) { outValue = defaultRatio; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_create") ) { outValue = lime_tilesheet_create; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_add_rect") ) { outValue = lime_tilesheet_add_rect; return true;  }
	}
	return false;
}

Dynamic Tilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileUVs") ) { _tileUVs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tilePoints") ) { _tilePoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bitmapWidth") ) { _bitmapWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_bitmapHeight") ) { _bitmapHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tilesheet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"defaultRatio") ) { defaultRatio=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_create") ) { lime_tilesheet_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_add_rect") ) { lime_tilesheet_add_rect=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Tilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("_bitmapHeight","\x15","\x3c","\xda","\xef"));
	outFields->push(HX_HCSTRING("_bitmapWidth","\x98","\xa1","\xc2","\x70"));
	outFields->push(HX_HCSTRING("_tilePoints","\x10","\xb5","\x4e","\x2e"));
	outFields->push(HX_HCSTRING("_tiles","\xc6","\x44","\x1c","\x0c"));
	outFields->push(HX_HCSTRING("_tileUVs","\x05","\x0a","\x35","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Tilesheet_obj,__bitmap),HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tilesheet_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsInt,(int)offsetof(Tilesheet_obj,_bitmapHeight),HX_HCSTRING("_bitmapHeight","\x15","\x3c","\xda","\xef")},
	{hx::fsInt,(int)offsetof(Tilesheet_obj,_bitmapWidth),HX_HCSTRING("_bitmapWidth","\x98","\xa1","\xc2","\x70")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,_tilePoints),HX_HCSTRING("_tilePoints","\x10","\xb5","\x4e","\x2e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,_tiles),HX_HCSTRING("_tiles","\xc6","\x44","\x1c","\x0c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,_tileUVs),HX_HCSTRING("_tileUVs","\x05","\x0a","\x35","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_SCALE,HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ROTATION,HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_RGB,HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ALPHA,HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_TRANS_2x2,HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_RECT,HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ORIGIN,HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_NORMAL,HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_ADD,HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_MULTIPLY,HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_SCREEN,HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_SUBTRACT,HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &Tilesheet_obj::defaultRatio,HX_HCSTRING("defaultRatio","\x8a","\x70","\x7f","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Tilesheet_obj::lime_tilesheet_create,HX_HCSTRING("lime_tilesheet_create","\xb4","\x1f","\x84","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Tilesheet_obj::lime_tilesheet_add_rect,HX_HCSTRING("lime_tilesheet_add_rect","\xfa","\x75","\x86","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("_bitmapHeight","\x15","\x3c","\xda","\xef"),
	HX_HCSTRING("_bitmapWidth","\x98","\xa1","\xc2","\x70"),
	HX_HCSTRING("_tilePoints","\x10","\xb5","\x4e","\x2e"),
	HX_HCSTRING("_tiles","\xc6","\x44","\x1c","\x0c"),
	HX_HCSTRING("_tileUVs","\x05","\x0a","\x35","\x7f"),
	HX_HCSTRING("addTileRect","\xb3","\xaa","\x09","\xb7"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	HX_HCSTRING("getTileCenter","\xd9","\x57","\xe4","\xc6"),
	HX_HCSTRING("getTileRect","\x28","\x36","\xa1","\xab"),
	HX_HCSTRING("getTileUVs","\x8e","\x36","\xde","\x94"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::defaultRatio,"defaultRatio");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_create,"lime_tilesheet_create");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_add_rect,"lime_tilesheet_add_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::defaultRatio,"defaultRatio");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_create,"lime_tilesheet_create");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_add_rect,"lime_tilesheet_add_rect");
};

#endif

hx::Class Tilesheet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62"),
	HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62"),
	HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc"),
	HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a"),
	HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2"),
	HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f"),
	HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94"),
	HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c"),
	HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89"),
	HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2"),
	HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43"),
	HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f"),
	HX_HCSTRING("defaultRatio","\x8a","\x70","\x7f","\x99"),
	HX_HCSTRING("lime_tilesheet_create","\xb4","\x1f","\x84","\xc6"),
	HX_HCSTRING("lime_tilesheet_add_rect","\xfa","\x75","\x86","\x40"),
	::String(null()) };

void Tilesheet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Tilesheet","\x01","\x03","\xcd","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tilesheet_obj::__GetStatic;
	__mClass->mSetStaticField = &Tilesheet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tilesheet_obj >;
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

void Tilesheet_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	TILE_BLEND_MULTIPLY= (int)131072;
	TILE_BLEND_SCREEN= (int)262144;
	TILE_BLEND_SUBTRACT= (int)524288;
	defaultRatio= ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);
	lime_tilesheet_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_tilesheet_create","\x96","\xfb","\xd0","\xb7"),(int)1);
	lime_tilesheet_add_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_tilesheet_add_rect","\x5c","\x8e","\xab","\xc3"),(int)3);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
