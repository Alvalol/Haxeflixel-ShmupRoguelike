#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
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
#ifndef INCLUDED_openfl__legacy_utils_Int16Array
#include <openfl/_legacy/utils/Int16Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
namespace openfl{
namespace display3D{

Void IndexBuffer3D_obj::__construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numIndices,int bufferUsage)
{
HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","new",0x7b4eb39c,"openfl.display3D.IndexBuffer3D.new","openfl/display3D/IndexBuffer3D.hx",20,0x3d934296)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glBuffer,"glBuffer")
HX_STACK_ARG(numIndices,"numIndices")
HX_STACK_ARG(bufferUsage,"bufferUsage")
{
	HX_STACK_LINE(22)
	this->context = context;
	HX_STACK_LINE(23)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(24)
	this->numIndices = numIndices;
	HX_STACK_LINE(25)
	this->bufferUsage = bufferUsage;
}
;
	return null();
}

//IndexBuffer3D_obj::~IndexBuffer3D_obj() { }

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return  new IndexBuffer3D_obj; }
hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numIndices,int bufferUsage)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(context,glBuffer,numIndices,bufferUsage);
	return _result_;}

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void IndexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","dispose",0xbcffb1db,"openfl.display3D.IndexBuffer3D.dispose","openfl/display3D/IndexBuffer3D.hx",30,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::openfl::display3D::Context3D tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		tmp->__deleteIndexBuffer(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

Void IndexBuffer3D_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromByteArray",0x61713322,"openfl.display3D.IndexBuffer3D.uploadFromByteArray","openfl/display3D/IndexBuffer3D.hx",37,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(39)
		int bytesPerIndex = (int)2;		HX_STACK_VAR(bytesPerIndex,"bytesPerIndex");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::openfl::_legacy::gl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(40)
			::openfl::_legacy::gl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(40)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			if ((tmp1)){
				HX_STACK_LINE(40)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(40)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(40)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,tmp2);
		}
		HX_STACK_LINE(42)
		int tmp = (count * bytesPerIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		int length = tmp;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(43)
		int tmp1 = byteArrayOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		int tmp2 = (startOffset * bytesPerIndex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		int offset = tmp3;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(44)
		::openfl::_legacy::utils::Int16Array indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(59)
		::openfl::_legacy::utils::Int16Array tmp4 = ::openfl::_legacy::utils::Int16Array_obj::__new(byteArray,offset,length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		indices = tmp4;
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::openfl::_legacy::utils::ByteArray tmp5 = indices->getByteBuffer();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			int tmp6 = indices->getStart();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			int tmp7 = indices->getLength();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			int tmp8 = this->bufferUsage;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34963,tmp5,tmp6,tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

Void IndexBuffer3D_obj::uploadFromVector( Array< int > data,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromVector",0xaabe3672,"openfl.display3D.IndexBuffer3D.uploadFromVector","openfl/display3D/IndexBuffer3D.hx",67,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::openfl::_legacy::gl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(69)
			::openfl::_legacy::gl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(69)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			if ((tmp1)){
				HX_STACK_LINE(69)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(69)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(69)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,tmp2);
		}
		HX_STACK_LINE(70)
		::openfl::_legacy::utils::Int16Array indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(81)
		::openfl::_legacy::utils::Int16Array tmp = ::openfl::_legacy::utils::Int16Array_obj::__new(data,startOffset,count);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		indices = tmp;
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::openfl::_legacy::utils::ByteArray tmp1 = indices->getByteBuffer();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			int tmp2 = indices->getStart();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			int tmp3 = indices->getLength();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			int tmp4 = this->bufferUsage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34963,tmp1,tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))

Void IndexBuffer3D_obj::uploadFromInt16Array( ::openfl::_legacy::utils::Int16Array data){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromInt16Array",0x04669c94,"openfl.display3D.IndexBuffer3D.uploadFromInt16Array","openfl/display3D/IndexBuffer3D.hx",89,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::openfl::_legacy::gl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			::openfl::_legacy::gl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(91)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			if ((tmp1)){
				HX_STACK_LINE(91)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(91)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(91)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,tmp2);
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::openfl::_legacy::utils::ByteArray tmp = data->getByteBuffer();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			int tmp1 = data->getStart();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			int tmp2 = data->getLength();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			int tmp3 = this->bufferUsage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34963,tmp,tmp1,tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer3D_obj,uploadFromInt16Array,(void))


IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_MEMBER_NAME(bufferUsage,"bufferUsage");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
	HX_VISIT_MEMBER_NAME(bufferUsage,"bufferUsage");
}

Dynamic IndexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return numIndices; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { return bufferUsage; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromInt16Array") ) { return uploadFromInt16Array_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::openfl::_legacy::gl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { bufferUsage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"));
	outFields->push(HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13"));
	outFields->push(HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(IndexBuffer3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::openfl::_legacy::gl::GLBuffer*/ ,(int)offsetof(IndexBuffer3D_obj,glBuffer),HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,numIndices),HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,bufferUsage),HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"),
	HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13"),
	HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	HX_HCSTRING("uploadFromInt16Array","\x50","\xe3","\x64","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.IndexBuffer3D","\xaa","\xf5","\xd5","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer3D_obj >;
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
