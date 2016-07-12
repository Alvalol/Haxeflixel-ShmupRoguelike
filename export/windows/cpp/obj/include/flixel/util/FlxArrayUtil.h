#ifndef INCLUDED_flixel_util_FlxArrayUtil
#define INCLUDED_flixel_util_FlxArrayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,replay,FrameRecord)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxArrayUtil)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxArrayUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxArrayUtil_obj OBJ_;
		FlxArrayUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxArrayUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxArrayUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxArrayUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxArrayUtil","\x89","\x7b","\x08","\xb4"); }

		static Void setLength_Int( Array< int > array,int newLength);
		static Dynamic setLength_Int_dyn();

		static Void setLength_flixel_group_FlxTypedGroup_T( cpp::ArrayBase array,int newLength);
		static Dynamic setLength_flixel_group_FlxTypedGroup_T_dyn();

		static Array< int > flatten2DArray_Int( Array< ::Dynamic > array);
		static Dynamic flatten2DArray_Int_dyn();

		static Void setLength_cacheValue_T( cpp::ArrayBase array,int newLength);
		static Dynamic setLength_cacheValue_T_dyn();

		static Void setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength);
		static Dynamic setLength_flixel_system_replay_FrameRecord_dyn();

		static Array< ::Dynamic > fastSplice_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween element);
		static Dynamic fastSplice_flixel_tweens_FlxTween_dyn();

		static Array< ::Dynamic > fastSplice_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer element);
		static Dynamic fastSplice_flixel_util_FlxTimer_dyn();

		static cpp::ArrayBase swapAndPop_fastSplice_T( cpp::ArrayBase array,int index);
		static Dynamic swapAndPop_fastSplice_T_dyn();

		static Void clearArray( cpp::ArrayBase array,hx::Null< bool >  recursive);
		static Dynamic clearArray_dyn();

		static bool equals( cpp::ArrayBase array1,cpp::ArrayBase array2);
		static Dynamic equals_dyn();

		static Dynamic last( cpp::ArrayBase array);
		static Dynamic last_dyn();

		static bool contains( cpp::ArrayBase array,Dynamic element);
		static Dynamic contains_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxArrayUtil */ 
