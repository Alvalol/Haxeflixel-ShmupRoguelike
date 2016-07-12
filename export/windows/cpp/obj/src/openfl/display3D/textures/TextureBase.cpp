#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLFramebuffer
#include <openfl/_legacy/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void TextureBase_obj::__construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("openfl.display3D.textures.TextureBase","new",0x670078a1,"openfl.display3D.textures.TextureBase.new","openfl/display3D/textures/TextureBase.hx",19,0x7b0f92ae)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(21)
	super::__construct(null());
	HX_STACK_LINE(23)
	this->context = context;
	HX_STACK_LINE(24)
	this->width = width;
	HX_STACK_LINE(25)
	this->height = height;
	HX_STACK_LINE(26)
	this->glTexture = glTexture;
}
;
	return null();
}

//TextureBase_obj::~TextureBase_obj() { }

Dynamic TextureBase_obj::__CreateEmpty() { return  new TextureBase_obj; }
hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< TextureBase_obj > _result_ = new TextureBase_obj();
	_result_->__construct(context,glTexture,__o_width,__o_height);
	return _result_;}

Dynamic TextureBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureBase_obj > _result_ = new TextureBase_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void TextureBase_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.textures.TextureBase","dispose",0xa678dd60,"openfl.display3D.textures.TextureBase.dispose","openfl/display3D/textures/TextureBase.hx",31,0x7b0f92ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::openfl::display3D::Context3D tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		tmp->__deleteTexture(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,dispose,(void))


TextureBase_obj::TextureBase_obj()
{
}

void TextureBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureBase);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_MARK_MEMBER_NAME(glTexture,"glTexture");
	HX_MARK_MEMBER_NAME(width,"width");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_VISIT_MEMBER_NAME(glTexture,"glTexture");
	HX_VISIT_MEMBER_NAME(width,"width");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextureBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glTexture") ) { return glTexture; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { return frameBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glTexture") ) { glTexture=inValue.Cast< ::openfl::_legacy::gl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { frameBuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae"));
	outFields->push(HX_HCSTRING("glTexture","\x36","\x55","\x9b","\x6c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(TextureBase_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(TextureBase_obj,frameBuffer),HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae")},
	{hx::fsObject /*::openfl::_legacy::gl::GLTexture*/ ,(int)offsetof(TextureBase_obj,glTexture),HX_HCSTRING("glTexture","\x36","\x55","\x9b","\x6c")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae"),
	HX_HCSTRING("glTexture","\x36","\x55","\x9b","\x6c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureBase_obj::__mClass;

void TextureBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.TextureBase","\x2f","\x94","\x15","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureBase_obj >;
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
