#include <hxcpp.h>

#ifndef INCLUDED_utils_pcg_LevelGenerator
#include <utils/pcg/LevelGenerator.h>
#endif
#ifndef INCLUDED_utils_pcg_MapChunk
#include <utils/pcg/MapChunk.h>
#endif
namespace utils{
namespace pcg{

Void LevelGenerator_obj::__construct()
{
HX_STACK_FRAME("utils.pcg.LevelGenerator","new",0x868e9678,"utils.pcg.LevelGenerator.new","utils/pcg/LevelGenerator.hx",22,0xe6cc1936)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LevelGenerator_obj::~LevelGenerator_obj() { }

Dynamic LevelGenerator_obj::__CreateEmpty() { return  new LevelGenerator_obj; }
hx::ObjectPtr< LevelGenerator_obj > LevelGenerator_obj::__new()
{  hx::ObjectPtr< LevelGenerator_obj > _result_ = new LevelGenerator_obj();
	_result_->__construct();
	return _result_;}

Dynamic LevelGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelGenerator_obj > _result_ = new LevelGenerator_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > LevelGenerator_obj::populateCurrentMap( ){
	HX_STACK_FRAME("utils.pcg.LevelGenerator","populateCurrentMap",0x7645f055,"utils.pcg.LevelGenerator.populateCurrentMap","utils/pcg/LevelGenerator.hx",27,0xe6cc1936)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	Array< ::Dynamic > populatedMap = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(populatedMap,"populatedMap");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		int tmp = ::utils::pcg::LevelGenerator_obj::mapWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			if ((tmp2)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(32)
			::utils::pcg::MapChunk tmp4 = ::utils::pcg::MapChunk_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			populatedMap->push(tmp4);
		}
	}
	HX_STACK_LINE(35)
	Array< ::Dynamic > concatedArray = ::utils::pcg::LevelGenerator_obj::concatArray(populatedMap);		HX_STACK_VAR(concatedArray,"concatedArray");
	HX_STACK_LINE(39)
	return concatedArray;
}


HX_DEFINE_DYNAMIC_FUNC0(LevelGenerator_obj,populateCurrentMap,return )

int LevelGenerator_obj::mapWidth;

Array< ::Dynamic > LevelGenerator_obj::concatArray( cpp::ArrayBase Arr){
	HX_STACK_FRAME("utils.pcg.LevelGenerator","concatArray",0xa26209fd,"utils.pcg.LevelGenerator.concatArray","utils/pcg/LevelGenerator.hx",43,0xe6cc1936)
	HX_STACK_ARG(Arr,"Arr")
	HX_STACK_LINE(47)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(48)
		int tmp = ::utils::pcg::MapChunk_obj::chunkHeight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		while((true)){
			HX_STACK_LINE(48)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			if ((tmp2)){
				HX_STACK_LINE(48)
				break;
			}
			HX_STACK_LINE(48)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(50)
			ret->push(Array_obj< int >::__new());
		}
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		int _g = Arr->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		while((true)){
			HX_STACK_LINE(53)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			if ((tmp1)){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(53)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(55)
			Dynamic tmp3 = Arr->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			cpp::ArrayBase cur = tmp3->__Field(HX_HCSTRING("accessibleChunk","\x57","\x18","\x11","\x1c"), hx::paccDynamic );		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(57)
				int tmp4 = ::utils::pcg::MapChunk_obj::chunkHeight;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(57)
				while((true)){
					HX_STACK_LINE(57)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					if ((tmp6)){
						HX_STACK_LINE(57)
						break;
					}
					HX_STACK_LINE(57)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(57)
					int j = tmp7;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(59)
					Dynamic tmp8 = cur->__GetItem(j);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					ret[j] = ret->__get(j).StaticCast< Array< int > >()->concat(tmp8);
				}
			}
		}
	}
	HX_STACK_LINE(62)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LevelGenerator_obj,concatArray,return )


LevelGenerator_obj::LevelGenerator_obj()
{
}

Dynamic LevelGenerator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"populateCurrentMap") ) { return populateCurrentMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool LevelGenerator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mapWidth") ) { outValue = mapWidth; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"concatArray") ) { outValue = concatArray_dyn(); return true;  }
	}
	return false;
}

bool LevelGenerator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mapWidth") ) { mapWidth=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &LevelGenerator_obj::mapWidth,HX_HCSTRING("mapWidth","\xca","\x25","\xa5","\x41")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("populateCurrentMap","\x6d","\x1b","\xee","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LevelGenerator_obj::mapWidth,"mapWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LevelGenerator_obj::mapWidth,"mapWidth");
};

#endif

hx::Class LevelGenerator_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("mapWidth","\xca","\x25","\xa5","\x41"),
	HX_HCSTRING("concatArray","\xe5","\x6b","\x4f","\xd4"),
	::String(null()) };

void LevelGenerator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("utils.pcg.LevelGenerator","\x86","\x3a","\x7c","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LevelGenerator_obj::__GetStatic;
	__mClass->mSetStaticField = &LevelGenerator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LevelGenerator_obj >;
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

void LevelGenerator_obj::__boot()
{
	mapWidth= (int)30;
}

} // end namespace utils
} // end namespace pcg
