#ifndef INCLUDED_openfl_media_SoundTransform
#define INCLUDED_openfl_media_SoundTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundTransform_obj OBJ_;
		SoundTransform_obj();
		Void __construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.media.SoundTransform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundTransform_obj > __new(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundTransform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoundTransform","\xbd","\x82","\x34","\xcd"); }

		Float leftToLeft;
		Float leftToRight;
		Float pan;
		Float rightToLeft;
		Float rightToRight;
		Float volume;
		virtual ::openfl::media::SoundTransform clone( );
		Dynamic clone_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundTransform */ 
