#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#define INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,text,_FlxText,FlxTextAlign_Impl_)
namespace flixel{
namespace text{
namespace _FlxText{


class HXCPP_CLASS_ATTRIBUTES  FlxTextAlign_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTextAlign_Impl__obj OBJ_;
		FlxTextAlign_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.text._FlxText.FlxTextAlign_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTextAlign_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTextAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxTextAlign_Impl_","\x46","\x0d","\xa4","\x5d"); }

		static void __boot();
		static ::String LEFT;
		static ::String CENTER;
		static ::String RIGHT;
		static ::String JUSTIFY;
		static ::String fromOpenFL( ::String align);
		static Dynamic fromOpenFL_dyn();

		static ::String toOpenFL( ::String align);
		static Dynamic toOpenFL_dyn();

};

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText

#endif /* INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_ */ 
