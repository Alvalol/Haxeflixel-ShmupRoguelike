#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#define INCLUDED_flixel_system_scaleModes_RatioScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS3(flixel,_system,scaleModes,RatioScaleMode)
namespace flixel{
namespace _system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES  RatioScaleMode_obj : public ::flixel::_system::scaleModes::BaseScaleMode_obj{
	public:
		typedef ::flixel::_system::scaleModes::BaseScaleMode_obj super;
		typedef RatioScaleMode_obj OBJ_;
		RatioScaleMode_obj();
		Void __construct(hx::Null< bool >  __o_fillScreen);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.RatioScaleMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RatioScaleMode_obj > __new(hx::Null< bool >  __o_fillScreen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RatioScaleMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RatioScaleMode","\xa2","\xa0","\x5c","\x9d"); }

		bool fillScreen;
		virtual Void updateGameSize( int Width,int Height);

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_RatioScaleMode */ 
