#ifndef INCLUDED_openfl_display3D_textures_Texture
#define INCLUDED_openfl_display3D_textures_Texture

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
HX_DECLARE_CLASS3(openfl,_legacy,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS3(openfl,_legacy,utils,UInt8Array)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::openfl::display3D::textures::TextureBase_obj{
	public:
		typedef ::openfl::display3D::textures::TextureBase_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.Texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Texture_obj > __new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"); }

		static void __boot();
		static int internalFormat;
		bool optimizeForRenderToTexture;
		bool mipmapsGenerated;
		virtual Void uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,hx::Null< int >  miplevel);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromUInt8Array( ::openfl::_legacy::utils::UInt8Array data,hx::Null< int >  miplevel);
		Dynamic uploadFromUInt8Array_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_Texture */ 
