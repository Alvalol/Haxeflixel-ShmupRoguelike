#ifndef INCLUDED_flixel_input_FlxPointer
#define INCLUDED_flixel_input_FlxPointer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxPointer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPointer_obj OBJ_;
		FlxPointer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.FlxPointer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPointer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPointer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxPointer","\x8b","\x7a","\x4d","\x80"); }

		int x;
		int y;
		int screenX;
		int screenY;
		int _globalScreenX;
		int _globalScreenY;
		virtual ::flixel::math::FlxPoint getWorldPosition( ::flixel::FlxCamera Camera,::flixel::math::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual ::flixel::math::FlxPoint getScreenPosition( ::flixel::FlxCamera Camera,::flixel::math::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual ::flixel::math::FlxPoint getPosition( ::flixel::math::FlxPoint point);
		Dynamic getPosition_dyn();

		virtual bool overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual Void setGlobalScreenPositionUnsafe( Float newX,Float newY);
		Dynamic setGlobalScreenPositionUnsafe_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void updatePositions( );
		Dynamic updatePositions_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxPointer */ 
