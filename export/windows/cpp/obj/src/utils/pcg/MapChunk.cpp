#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_utils_pcg_MapChunk
#include <utils/pcg/MapChunk.h>
#endif
namespace utils{
namespace pcg{

Void MapChunk_obj::__construct()
{
HX_STACK_FRAME("utils.pcg.MapChunk","new",0x27eef83a,"utils.pcg.MapChunk.new","utils/pcg/MapChunk.hx",23,0x16e40334)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->populateChunk();
	HX_STACK_LINE(25)
	::flixel::math::FlxRandom tmp = ::flixel::math::FlxRandom_obj::__new((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	this->_randomGen = tmp;
}
;
	return null();
}

//MapChunk_obj::~MapChunk_obj() { }

Dynamic MapChunk_obj::__CreateEmpty() { return  new MapChunk_obj; }
hx::ObjectPtr< MapChunk_obj > MapChunk_obj::__new()
{  hx::ObjectPtr< MapChunk_obj > _result_ = new MapChunk_obj();
	_result_->__construct();
	return _result_;}

Dynamic MapChunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapChunk_obj > _result_ = new MapChunk_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > MapChunk_obj::populateChunk( ){
	HX_STACK_FRAME("utils.pcg.MapChunk","populateChunk",0x7d53637d,"utils.pcg.MapChunk.populateChunk","utils/pcg/MapChunk.hx",29,0x16e40334)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::flixel::math::FlxRandom tmp = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->accessibleChunk = tmp->getObject_Array_Array_Int(::Reg_obj::mapChunkTemplates,null(),null(),null());
	HX_STACK_LINE(35)
	::flixel::math::FlxRandom tmp1 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	int tmp2 = tmp1->_int((int)0,(int)100,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	bool tmp3 = (tmp2 < (int)50);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp3)){
		HX_STACK_LINE(37)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		int tmp4 = this->accessibleChunk->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		int _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		while((true)){
			HX_STACK_LINE(37)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			if ((tmp6)){
				HX_STACK_LINE(37)
				break;
			}
			HX_STACK_LINE(37)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(39)
			this->accessibleChunk->__get(i).StaticCast< Array< int > >()->reverse();
		}
	}
	HX_STACK_LINE(44)
	return this->accessibleChunk;
}


HX_DEFINE_DYNAMIC_FUNC0(MapChunk_obj,populateChunk,return )

int MapChunk_obj::chunkWidth;

int MapChunk_obj::chunkHeight;


MapChunk_obj::MapChunk_obj()
{
}

void MapChunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapChunk);
	HX_MARK_MEMBER_NAME(accessibleChunk,"accessibleChunk");
	HX_MARK_MEMBER_NAME(_randomGen,"_randomGen");
	HX_MARK_END_CLASS();
}

void MapChunk_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accessibleChunk,"accessibleChunk");
	HX_VISIT_MEMBER_NAME(_randomGen,"_randomGen");
}

Dynamic MapChunk_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_randomGen") ) { return _randomGen; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"populateChunk") ) { return populateChunk_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"accessibleChunk") ) { return accessibleChunk; }
	}
	return super::__Field(inName,inCallProp);
}

bool MapChunk_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"chunkWidth") ) { outValue = chunkWidth; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"chunkHeight") ) { outValue = chunkHeight; return true;  }
	}
	return false;
}

Dynamic MapChunk_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_randomGen") ) { _randomGen=inValue.Cast< ::flixel::math::FlxRandom >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"accessibleChunk") ) { accessibleChunk=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MapChunk_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"chunkWidth") ) { chunkWidth=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"chunkHeight") ) { chunkHeight=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void MapChunk_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("accessibleChunk","\x57","\x18","\x11","\x1c"));
	outFields->push(HX_HCSTRING("_randomGen","\x0e","\x76","\xe6","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapChunk_obj,accessibleChunk),HX_HCSTRING("accessibleChunk","\x57","\x18","\x11","\x1c")},
	{hx::fsObject /*::flixel::math::FlxRandom*/ ,(int)offsetof(MapChunk_obj,_randomGen),HX_HCSTRING("_randomGen","\x0e","\x76","\xe6","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MapChunk_obj::chunkWidth,HX_HCSTRING("chunkWidth","\x59","\xf4","\xe5","\x36")},
	{hx::fsInt,(void *) &MapChunk_obj::chunkHeight,HX_HCSTRING("chunkHeight","\x34","\x52","\x9f","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("accessibleChunk","\x57","\x18","\x11","\x1c"),
	HX_HCSTRING("_randomGen","\x0e","\x76","\xe6","\x02"),
	HX_HCSTRING("populateChunk","\x23","\x27","\x3a","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapChunk_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MapChunk_obj::chunkWidth,"chunkWidth");
	HX_MARK_MEMBER_NAME(MapChunk_obj::chunkHeight,"chunkHeight");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapChunk_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MapChunk_obj::chunkWidth,"chunkWidth");
	HX_VISIT_MEMBER_NAME(MapChunk_obj::chunkHeight,"chunkHeight");
};

#endif

hx::Class MapChunk_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("chunkWidth","\x59","\xf4","\xe5","\x36"),
	HX_HCSTRING("chunkHeight","\x34","\x52","\x9f","\x88"),
	::String(null()) };

void MapChunk_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("utils.pcg.MapChunk","\x48","\x13","\x54","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MapChunk_obj::__GetStatic;
	__mClass->mSetStaticField = &MapChunk_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapChunk_obj >;
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

void MapChunk_obj::__boot()
{
	chunkWidth= (int)12;
	chunkHeight= (int)20;
}

} // end namespace utils
} // end namespace pcg
