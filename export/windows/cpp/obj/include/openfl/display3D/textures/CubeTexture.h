#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#define INCLUDED_openfl_display3D_textures_CubeTexture

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
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  CubeTexture_obj : public ::openfl::display3D::textures::TextureBase_obj{
	public:
		typedef ::openfl::display3D::textures::TextureBase_obj super;
		typedef CubeTexture_obj OBJ_;
		CubeTexture_obj();
		Void __construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,int size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.CubeTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CubeTexture_obj > __new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,int size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubeTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CubeTexture","\x46","\x04","\xc2","\x59"); }

		int size;
		Array< ::Dynamic > _textures;
		bool mipmapsGenerated;
		virtual ::openfl::_legacy::gl::GLTexture glTextureAt( int index);
		Dynamic glTextureAt_dyn();

		virtual Void uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,int side,hx::Null< int >  miplevel);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_CubeTexture */ 
