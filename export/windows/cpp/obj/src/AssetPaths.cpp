#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

::String AssetPaths_obj::pixel_font__ttf;

::String AssetPaths_obj::sandbox__tmx;

::String AssetPaths_obj::enemies__png;

::String AssetPaths_obj::explosion__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::items__png;

::String AssetPaths_obj::mockups__pyxel;

::String AssetPaths_obj::nohit__png;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::player__pyxel;

::String AssetPaths_obj::playerDawnbringer__pyxel;

::String AssetPaths_obj::playerWip__pyxel;

::String AssetPaths_obj::solid__png;

::String AssetPaths_obj::solidtiles__pyxel;

::String AssetPaths_obj::cursor__png;

::String AssetPaths_obj::Thumbs__db;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::tiles__png_palette__png;

::String AssetPaths_obj::turret__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::pixel_font__ttf,HX_HCSTRING("pixel_font__ttf","\x5e","\xe5","\x48","\x6e")},
	{hx::fsString,(void *) &AssetPaths_obj::sandbox__tmx,HX_HCSTRING("sandbox__tmx","\x18","\xa8","\xb7","\x3d")},
	{hx::fsString,(void *) &AssetPaths_obj::enemies__png,HX_HCSTRING("enemies__png","\x23","\x3b","\x28","\xc9")},
	{hx::fsString,(void *) &AssetPaths_obj::explosion__png,HX_HCSTRING("explosion__png","\xd4","\xcd","\xe0","\x2f")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::items__png,HX_HCSTRING("items__png","\x89","\x91","\xb5","\xa6")},
	{hx::fsString,(void *) &AssetPaths_obj::mockups__pyxel,HX_HCSTRING("mockups__pyxel","\xa8","\xa9","\x26","\x81")},
	{hx::fsString,(void *) &AssetPaths_obj::nohit__png,HX_HCSTRING("nohit__png","\x97","\xb3","\x0f","\xb5")},
	{hx::fsString,(void *) &AssetPaths_obj::player__png,HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65")},
	{hx::fsString,(void *) &AssetPaths_obj::player__pyxel,HX_HCSTRING("player__pyxel","\x15","\x3c","\xbd","\xe1")},
	{hx::fsString,(void *) &AssetPaths_obj::playerDawnbringer__pyxel,HX_HCSTRING("playerDawnbringer__pyxel","\xcc","\xfc","\x1c","\xc2")},
	{hx::fsString,(void *) &AssetPaths_obj::playerWip__pyxel,HX_HCSTRING("playerWip__pyxel","\xb9","\x93","\x6d","\x2a")},
	{hx::fsString,(void *) &AssetPaths_obj::solid__png,HX_HCSTRING("solid__png","\x7e","\x0d","\x98","\xf5")},
	{hx::fsString,(void *) &AssetPaths_obj::solidtiles__pyxel,HX_HCSTRING("solidtiles__pyxel","\x1c","\x3f","\xb8","\x0b")},
	{hx::fsString,(void *) &AssetPaths_obj::cursor__png,HX_HCSTRING("cursor__png","\xf3","\xa6","\xe5","\xe7")},
	{hx::fsString,(void *) &AssetPaths_obj::Thumbs__db,HX_HCSTRING("Thumbs__db","\xdb","\x7a","\x55","\x48")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles__png,HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles__png_palette__png,HX_HCSTRING("tiles__png_palette__png","\xa9","\x63","\x72","\x8c")},
	{hx::fsString,(void *) &AssetPaths_obj::turret__png,HX_HCSTRING("turret__png","\x59","\x69","\x58","\x6a")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pixel_font__ttf,"pixel_font__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sandbox__tmx,"sandbox__tmx");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemies__png,"enemies__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::explosion__png,"explosion__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::items__png,"items__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mockups__pyxel,"mockups__pyxel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::nohit__png,"nohit__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__pyxel,"player__pyxel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::playerDawnbringer__pyxel,"playerDawnbringer__pyxel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::playerWip__pyxel,"playerWip__pyxel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::solid__png,"solid__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::solidtiles__pyxel,"solidtiles__pyxel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::cursor__png,"cursor__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Thumbs__db,"Thumbs__db");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png_palette__png,"tiles__png_palette__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::turret__png,"turret__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pixel_font__ttf,"pixel_font__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sandbox__tmx,"sandbox__tmx");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemies__png,"enemies__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::explosion__png,"explosion__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::items__png,"items__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mockups__pyxel,"mockups__pyxel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::nohit__png,"nohit__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__pyxel,"player__pyxel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::playerDawnbringer__pyxel,"playerDawnbringer__pyxel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::playerWip__pyxel,"playerWip__pyxel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::solid__png,"solid__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::solidtiles__pyxel,"solidtiles__pyxel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::cursor__png,"cursor__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Thumbs__db,"Thumbs__db");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png_palette__png,"tiles__png_palette__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::turret__png,"turret__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("pixel_font__ttf","\x5e","\xe5","\x48","\x6e"),
	HX_HCSTRING("sandbox__tmx","\x18","\xa8","\xb7","\x3d"),
	HX_HCSTRING("enemies__png","\x23","\x3b","\x28","\xc9"),
	HX_HCSTRING("explosion__png","\xd4","\xcd","\xe0","\x2f"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("items__png","\x89","\x91","\xb5","\xa6"),
	HX_HCSTRING("mockups__pyxel","\xa8","\xa9","\x26","\x81"),
	HX_HCSTRING("nohit__png","\x97","\xb3","\x0f","\xb5"),
	HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65"),
	HX_HCSTRING("player__pyxel","\x15","\x3c","\xbd","\xe1"),
	HX_HCSTRING("playerDawnbringer__pyxel","\xcc","\xfc","\x1c","\xc2"),
	HX_HCSTRING("playerWip__pyxel","\xb9","\x93","\x6d","\x2a"),
	HX_HCSTRING("solid__png","\x7e","\x0d","\x98","\xf5"),
	HX_HCSTRING("solidtiles__pyxel","\x1c","\x3f","\xb8","\x0b"),
	HX_HCSTRING("cursor__png","\xf3","\xa6","\xe5","\xe7"),
	HX_HCSTRING("Thumbs__db","\xdb","\x7a","\x55","\x48"),
	HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d"),
	HX_HCSTRING("tiles__png_palette__png","\xa9","\x63","\x72","\x8c"),
	HX_HCSTRING("turret__png","\x59","\x69","\x58","\x6a"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	::String(null()) };

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
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

void AssetPaths_obj::__boot()
{
	pixel_font__ttf= HX_HCSTRING("assets/data/pixel-font.ttf","\x67","\x4d","\xf0","\x61");
	sandbox__tmx= HX_HCSTRING("assets/data/sandbox.tmx","\xdf","\x30","\xb4","\xc7");
	enemies__png= HX_HCSTRING("assets/images/enemies.png","\x16","\x33","\xfe","\x81");
	explosion__png= HX_HCSTRING("assets/images/explosion.png","\xc5","\xf8","\xb2","\x1d");
	images_go_here__txt= HX_HCSTRING("assets/images/images-go-here.txt","\x0d","\x1d","\x45","\xa6");
	items__png= HX_HCSTRING("assets/images/items.png","\x30","\xc4","\x61","\x6a");
	mockups__pyxel= HX_HCSTRING("assets/images/mockups.pyxel","\xeb","\xa2","\x81","\xf1");
	nohit__png= HX_HCSTRING("assets/images/nohit.png","\xe2","\x1d","\xd6","\xe1");
	player__png= HX_HCSTRING("assets/images/player.png","\x87","\x88","\x81","\xc6");
	player__pyxel= HX_HCSTRING("assets/images/player.pyxel","\xd4","\x8f","\xac","\x97");
	playerDawnbringer__pyxel= HX_HCSTRING("assets/images/playerDawnbringer.pyxel","\x87","\x44","\xa9","\xfb");
	playerWip__pyxel= HX_HCSTRING("assets/images/playerWip.pyxel","\x3a","\x6d","\x72","\x17");
	solid__png= HX_HCSTRING("assets/images/solid.png","\xdb","\xbd","\x79","\x70");
	solidtiles__pyxel= HX_HCSTRING("assets/images/solidtiles.pyxel","\x2d","\xfc","\x55","\x6f");
	cursor__png= HX_HCSTRING("assets/images/sys/cursor.png","\xfe","\xd0","\xdd","\x87");
	Thumbs__db= HX_HCSTRING("assets/images/sys/Thumbs.db","\x42","\x78","\x1a","\x97");
	tiles__png= HX_HCSTRING("assets/images/tiles.png","\x35","\xbc","\xd1","\xf5");
	tiles__png_palette__png= HX_HCSTRING("assets/images/tiles.png_palette.png","\xec","\x7e","\xfa","\x69");
	turret__png= HX_HCSTRING("assets/images/turret.png","\xd6","\x96","\x38","\x02");
	music_goes_here__txt= HX_HCSTRING("assets/music/music-goes-here.txt","\x6b","\x32","\x60","\x47");
	sounds_go_here__txt= HX_HCSTRING("assets/sounds/sounds-go-here.txt","\x8d","\xb6","\x3d","\xa7");
}

