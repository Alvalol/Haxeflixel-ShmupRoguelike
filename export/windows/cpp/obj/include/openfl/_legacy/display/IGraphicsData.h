#ifndef INCLUDED_openfl__legacy_display_IGraphicsData
#define INCLUDED_openfl__legacy_display_IGraphicsData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,IGraphicsData)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IGraphicsData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IGraphicsData_obj OBJ_;
		IGraphicsData_obj();
		Void __construct(Dynamic handle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.IGraphicsData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IGraphicsData_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IGraphicsData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IGraphicsData","\x7e","\x52","\x4e","\xed"); }

		Dynamic __handle;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_IGraphicsData */ 
