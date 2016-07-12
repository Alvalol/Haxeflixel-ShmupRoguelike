#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void Texture_obj::__construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height)
{
HX_STACK_FRAME("openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",24,0x3ee19dbf)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(optimize,"optimize")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(26)
	this->optimizeForRenderToTexture = optimize;
	HX_STACK_LINE(28)
	this->mipmapsGenerated = false;
	HX_STACK_LINE(30)
	int tmp = ::openfl::display3D::textures::Texture_obj::internalFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(34)
		::openfl::display3D::textures::Texture_obj::internalFormat = (int)6408;
	}
	HX_STACK_LINE(42)
	::openfl::display3D::Context3D tmp2 = context;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	::openfl::_legacy::gl::GLTexture tmp3 = glTexture;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	super::__construct(tmp2,tmp3,tmp4,tmp5);
	HX_STACK_LINE(45)
	bool tmp6 = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	if ((tmp6)){
		HX_STACK_LINE(47)
		::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
		HX_STACK_LINE(48)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
		HX_STACK_LINE(49)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
		HX_STACK_LINE(50)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(51)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
	}
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(context,glTexture,optimize,width,height);
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",58,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",65,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(69)
		::openfl::_legacy::utils::ByteArray tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int tmp1 = bitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			int tmp2 = bitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			bool tmp3 = bitmapData->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp2,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			::openfl::_legacy::display::BitmapData rgbaData = tmp4;		HX_STACK_VAR(rgbaData,"rgbaData");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle tmp5 = bitmapData->get_rect();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle rect = tmp5;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(69)
			::openfl::_legacy::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp9 = point;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			rgbaData->copyChannel(tmp7,tmp8,tmp9,(int)2,(int)1);
			HX_STACK_LINE(69)
			::openfl::_legacy::display::BitmapData tmp10 = bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle tmp11 = rect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp12 = point;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(69)
			rgbaData->copyChannel(tmp10,tmp11,tmp12,(int)4,(int)2);
			HX_STACK_LINE(69)
			::openfl::_legacy::display::BitmapData tmp13 = bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle tmp14 = rect;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp15 = point;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			rgbaData->copyChannel(tmp13,tmp14,tmp15,(int)8,(int)4);
			HX_STACK_LINE(69)
			::openfl::_legacy::display::BitmapData tmp16 = bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle tmp17 = rect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Point tmp18 = point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(69)
			rgbaData->copyChannel(tmp16,tmp17,tmp18,(int)1,(int)8);
			HX_STACK_LINE(69)
			::openfl::_legacy::geom::Rectangle tmp19 = rect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(69)
			tmp = rgbaData->getPixels(tmp19);
		}
		HX_STACK_LINE(69)
		::openfl::_legacy::utils::ByteArray pixels = tmp;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(71)
		int tmp1 = bitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		this->width = tmp1;
		HX_STACK_LINE(72)
		int tmp2 = bitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		this->height = tmp2;
		HX_STACK_LINE(74)
		::openfl::_legacy::utils::ByteArray tmp3 = pixels;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		int tmp4 = miplevel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		this->uploadFromByteArray(tmp3,(int)0,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",97,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(112)
		::openfl::_legacy::utils::UInt8Array tmp = ::openfl::_legacy::utils::UInt8Array_obj::__new(data,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		::openfl::_legacy::utils::UInt8Array source = tmp;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(115)
		::openfl::_legacy::utils::UInt8Array tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		this->uploadFromUInt8Array(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromUInt8Array( ::openfl::_legacy::utils::UInt8Array data,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromUInt8Array",0xb98d8296,"openfl.display3D.textures.Texture.uploadFromUInt8Array","openfl/display3D/textures/Texture.hx",120,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::openfl::_legacy::gl::GLTexture tmp = this->glTexture;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(122)
			::openfl::_legacy::gl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(122)
			bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(122)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			if ((tmp1)){
				HX_STACK_LINE(122)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(122)
				tmp2 = texture->id;
			}
			HX_STACK_LINE(122)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp2);
		}
		HX_STACK_LINE(124)
		bool tmp = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		if ((tmp)){
			HX_STACK_LINE(126)
			::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
			HX_STACK_LINE(127)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
			HX_STACK_LINE(128)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
			HX_STACK_LINE(129)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(130)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int tmp1 = miplevel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			int tmp2 = ::openfl::display3D::textures::Texture_obj::internalFormat;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			int tmp5 = ::openfl::display3D::textures::Texture_obj::internalFormat;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			bool tmp6 = (data == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			::openfl::_legacy::utils::ByteArray tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			if ((tmp6)){
				HX_STACK_LINE(134)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(134)
				tmp7 = data->getByteBuffer();
			}
			HX_STACK_LINE(134)
			bool tmp8 = (data == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			if ((tmp8)){
				HX_STACK_LINE(134)
				tmp9 = null();
			}
			else{
				HX_STACK_LINE(134)
				tmp9 = data->getStart();
			}
			HX_STACK_LINE(134)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,tmp1,tmp2,tmp3,tmp4,(int)0,tmp5,(int)5121,tmp7,tmp9);
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			if ((tmp1)){
				HX_STACK_LINE(135)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(135)
				tmp2 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(135)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromUInt8Array,(void))

int Texture_obj::internalFormat;


Texture_obj::Texture_obj()
{
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { return mipmapsGenerated; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromUInt8Array") ) { return uploadFromUInt8Array_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return optimizeForRenderToTexture; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"internalFormat") ) { outValue = internalFormat; return true;  }
	}
	return false;
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { mipmapsGenerated=inValue.Cast< bool >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"internalFormat") ) { internalFormat=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	outFields->push(HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Texture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{hx::fsBool,(int)offsetof(Texture_obj,mipmapsGenerated),HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Texture_obj::internalFormat,HX_HCSTRING("internalFormat","\x54","\xf6","\x7d","\x22")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromUInt8Array","\x26","\x75","\xa4","\x6a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::internalFormat,"internalFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::internalFormat,"internalFormat");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internalFormat","\x54","\xf6","\x7d","\x22"),
	::String(null()) };

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
	internalFormat= (int)-1;
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
