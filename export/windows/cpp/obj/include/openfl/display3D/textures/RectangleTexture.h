#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#define INCLUDED_openfl_display3D_textures_RectangleTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLTexture)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  RectangleTexture_obj : public ::openfl::display3D::textures::TextureBase_obj{
	public:
		typedef ::openfl::display3D::textures::TextureBase_obj super;
		typedef RectangleTexture_obj OBJ_;
		RectangleTexture_obj();
		Void __construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.RectangleTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RectangleTexture_obj > __new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RectangleTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RectangleTexture","\x8c","\x6c","\xf5","\x1a"); }

		bool optimizeForRenderToTexture;
		virtual Void uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,hx::Null< int >  miplevel);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset);
		Dynamic uploadFromByteArray_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_RectangleTexture */ 
