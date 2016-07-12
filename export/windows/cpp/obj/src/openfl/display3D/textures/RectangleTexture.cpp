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
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void RectangleTexture_obj::__construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height)
{
HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",19,0x83565556)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(optimize,"optimize")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(21)
	this->optimizeForRenderToTexture = optimize;
	HX_STACK_LINE(27)
	::openfl::display3D::Context3D tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::openfl::_legacy::gl::GLTexture tmp1 = glTexture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(30)
	bool tmp4 = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	if ((tmp4)){
		HX_STACK_LINE(31)
		::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
	}
	HX_STACK_LINE(33)
	::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
	HX_STACK_LINE(34)
	::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
	HX_STACK_LINE(35)
	::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
	HX_STACK_LINE(36)
	::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
}
;
	return null();
}

//RectangleTexture_obj::~RectangleTexture_obj() { }

Dynamic RectangleTexture_obj::__CreateEmpty() { return  new RectangleTexture_obj; }
hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(context,glTexture,optimize,width,height);
	return _result_;}

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void RectangleTexture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",47,0x83565556)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(52)
		::openfl::_legacy::utils::ByteArray tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int tmp1 = bitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			int tmp2 = bitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = bitmapData->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp2,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::openfl::_legacy::display::BitmapData rgbaData = tmp4;		HX_STACK_VAR(rgbaData,"rgbaData");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Rectangle tmp5 = bitmapData->get_rect();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Rectangle rect = tmp5;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Point point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(52)
			::openfl::_legacy::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Point tmp9 = point;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			rgbaData->copyChannel(tmp7,tmp8,tmp9,(int)2,(int)1);
			HX_STACK_LINE(52)
			::openfl::_legacy::display::BitmapData tmp10 = bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Rectangle tmp11 = rect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Point tmp12 = point;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			rgbaData->copyChannel(tmp10,tmp11,tmp12,(int)4,(int)2);
			HX_STACK_LINE(52)
			::openfl::_legacy::display::BitmapData tmp13 = bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Rectangle tmp14 = rect;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Point tmp15 = point;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			rgbaData->copyChannel(tmp13,tmp14,tmp15,(int)8,(int)4);
			HX_STACK_LINE(52)
			::openfl::_legacy::display::BitmapData tmp16 = bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Rectangle tmp17 = rect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Point tmp18 = point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(52)
			rgbaData->copyChannel(tmp16,tmp17,tmp18,(int)1,(int)8);
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Rectangle tmp19 = rect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(52)
			tmp = rgbaData->getPixels(tmp19);
		}
		HX_STACK_LINE(52)
		::openfl::_legacy::utils::ByteArray p = tmp;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(57)
		int tmp1 = bitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		this->width = tmp1;
		HX_STACK_LINE(58)
		int tmp2 = bitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		this->height = tmp2;
		HX_STACK_LINE(60)
		::openfl::_legacy::utils::ByteArray tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		this->uploadFromByteArray(tmp3,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromBitmapData,(void))

Void RectangleTexture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",65,0x83565556)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::openfl::_legacy::gl::GLTexture tmp = this->glTexture;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			::openfl::_legacy::gl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(67)
			bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			if ((tmp1)){
				HX_STACK_LINE(67)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(67)
				tmp2 = texture->id;
			}
			HX_STACK_LINE(67)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp2);
		}
		HX_STACK_LINE(93)
		bool tmp = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		if ((tmp)){
			HX_STACK_LINE(95)
			::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
			HX_STACK_LINE(96)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
			HX_STACK_LINE(97)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
			HX_STACK_LINE(98)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(99)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
		}
		HX_STACK_LINE(106)
		::openfl::_legacy::utils::UInt8Array tmp1 = ::openfl::_legacy::utils::UInt8Array_obj::__new(data,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::openfl::_legacy::utils::UInt8Array source = tmp1;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			bool tmp4 = (source == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			::openfl::_legacy::utils::ByteArray tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			if ((tmp4)){
				HX_STACK_LINE(112)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(112)
				tmp5 = source->getByteBuffer();
			}
			HX_STACK_LINE(112)
			bool tmp6 = (source == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			if ((tmp6)){
				HX_STACK_LINE(112)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(112)
				tmp7 = source->getStart();
			}
			HX_STACK_LINE(112)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,tmp2,tmp3,(int)0,(int)6408,(int)5121,tmp5,tmp7);
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			if ((tmp2)){
				HX_STACK_LINE(113)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(113)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(113)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))


RectangleTexture_obj::RectangleTexture_obj()
{
}

Dynamic RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return optimizeForRenderToTexture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectangleTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RectangleTexture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.RectangleTexture","\xe9","\x93","\xed","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
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

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
