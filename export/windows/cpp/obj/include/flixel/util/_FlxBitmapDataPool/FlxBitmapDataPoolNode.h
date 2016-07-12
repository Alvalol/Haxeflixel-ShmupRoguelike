#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#define INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxBitmapDataPool,FlxBitmapDataPoolNode)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace util{
namespace _FlxBitmapDataPool{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapDataPoolNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBitmapDataPoolNode_obj OBJ_;
		FlxBitmapDataPoolNode_obj();
		Void __construct(::openfl::_legacy::display::BitmapData bmd,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBitmapDataPoolNode_obj > __new(::openfl::_legacy::display::BitmapData bmd,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapDataPoolNode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBitmapDataPoolNode","\xc9","\xc4","\xc2","\x98"); }

		::openfl::_legacy::display::BitmapData bmd;
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev;
		::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next;
};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxBitmapDataPool

#endif /* INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode */ 
