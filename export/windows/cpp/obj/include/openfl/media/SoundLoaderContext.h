#ifndef INCLUDED_openfl_media_SoundLoaderContext
#define INCLUDED_openfl_media_SoundLoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)
namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundLoaderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundLoaderContext_obj OBJ_;
		SoundLoaderContext_obj();
		Void __construct(hx::Null< Float >  __o_bufferTime,hx::Null< bool >  __o_checkPolicyFile);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.media.SoundLoaderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundLoaderContext_obj > __new(hx::Null< Float >  __o_bufferTime,hx::Null< bool >  __o_checkPolicyFile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundLoaderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoundLoaderContext","\xed","\xbf","\xf5","\x97"); }

		Float bufferTime;
		bool checkPolicyFile;
};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundLoaderContext */ 
