#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
namespace openfl{
namespace _legacy{
namespace gl{

Void GLObject_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("openfl._legacy.gl.GLObject","new",0xbbc2463b,"openfl._legacy.gl.GLObject.new","openfl/_legacy/gl/GLObject.hx",14,0xeab66fb6)
HX_STACK_THIS(this)
HX_STACK_ARG(version,"version")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(16)
	this->version = version;
	HX_STACK_LINE(17)
	this->id = id;
}
;
	return null();
}

//GLObject_obj::~GLObject_obj() { }

Dynamic GLObject_obj::__CreateEmpty() { return  new GLObject_obj; }
hx::ObjectPtr< GLObject_obj > GLObject_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String GLObject_obj::getType( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLObject","getType",0x2499a1cb,"openfl._legacy.gl.GLObject.getType","openfl/_legacy/gl/GLObject.hx",24,0xeab66fb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return HX_HCSTRING("GLObject","\xc4","\xda","\x30","\x7f");
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,getType,return )

Void GLObject_obj::invalidate( ){
{
		HX_STACK_FRAME("openfl._legacy.gl.GLObject","invalidate",0x31cbe500,"openfl._legacy.gl.GLObject.invalidate","openfl/_legacy/gl/GLObject.hx",31,0xeab66fb6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->id = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,invalidate,(void))

bool GLObject_obj::isValid( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLObject","isValid",0xd34c180d,"openfl._legacy.gl.GLObject.isValid","openfl/_legacy/gl/GLObject.hx",36,0xeab66fb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	Dynamic tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	if ((tmp1)){
		HX_STACK_LINE(38)
		int tmp3 = this->version;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		int tmp5 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		tmp2 = (tmp4 == tmp6);
	}
	else{
		HX_STACK_LINE(38)
		tmp2 = false;
	}
	HX_STACK_LINE(38)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,isValid,return )

bool GLObject_obj::isInvalid( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLObject","isInvalid",0x23572448,"openfl._legacy.gl.GLObject.isInvalid","openfl/_legacy/gl/GLObject.hx",43,0xeab66fb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	bool tmp = this->isValid();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,isInvalid,return )

::String GLObject_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLObject","toString",0x9fa040f1,"openfl._legacy.gl.GLObject.toString","openfl/_legacy/gl/GLObject.hx",50,0xeab66fb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	::String tmp = this->getType();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::String tmp1 = (tmp + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Dynamic tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	::String tmp5 = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,toString,return )

bool GLObject_obj::get_invalidated( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLObject","get_invalidated",0x4c033c7b,"openfl._legacy.gl.GLObject.get_invalidated","openfl/_legacy/gl/GLObject.hx",64,0xeab66fb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	bool tmp = this->isInvalid();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,get_invalidated,return )

bool GLObject_obj::get_valid( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLObject","get_valid",0x59729d6e,"openfl._legacy.gl.GLObject.get_valid","openfl/_legacy/gl/GLObject.hx",71,0xeab66fb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	bool tmp = this->isValid();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,get_valid,return )


GLObject_obj::GLObject_obj()
{
}

void GLObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLObject);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(invalidated,"invalidated");
	HX_MARK_MEMBER_NAME(valid,"valid");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void GLObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(invalidated,"invalidated");
	HX_VISIT_MEMBER_NAME(valid,"valid");
	HX_VISIT_MEMBER_NAME(version,"version");
}

Dynamic GLObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { return inCallProp == hx::paccAlways ? get_valid() : valid; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return isInvalid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_valid") ) { return get_valid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { return inCallProp == hx::paccAlways ? get_invalidated() : invalidated; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_invalidated") ) { return get_invalidated_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { valid=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { invalidated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"));
	outFields->push(HX_HCSTRING("valid","\xfc","\x74","\xb8","\x31"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(GLObject_obj,invalidated),HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd")},
	{hx::fsBool,(int)offsetof(GLObject_obj,valid),HX_HCSTRING("valid","\xfc","\x74","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(GLObject_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"),
	HX_HCSTRING("valid","\xfc","\x74","\xb8","\x31"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	HX_HCSTRING("isInvalid","\x2d","\x58","\x46","\x3f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_invalidated","\x20","\xea","\x8d","\x7e"),
	HX_HCSTRING("get_valid","\x53","\xd1","\x61","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLObject_obj::__mClass;

void GLObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLObject","\xc9","\x0c","\x86","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLObject_obj >;
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
} // end namespace _legacy
} // end namespace gl
