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
#ifndef INCLUDED_openfl__legacy_utils_Float32Array
#include <openfl/_legacy/utils/Float32Array.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
namespace openfl{
namespace display3D{

Void VertexBuffer3D_obj::__construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex,int bufferUsage)
{
HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","new",0xf0b52080,"openfl.display3D.VertexBuffer3D.new","openfl/display3D/VertexBuffer3D.hx",21,0xb1ad396e)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glBuffer,"glBuffer")
HX_STACK_ARG(numVertices,"numVertices")
HX_STACK_ARG(data32PerVertex,"data32PerVertex")
HX_STACK_ARG(bufferUsage,"bufferUsage")
{
	HX_STACK_LINE(23)
	this->context = context;
	HX_STACK_LINE(24)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(25)
	this->numVertices = numVertices;
	HX_STACK_LINE(26)
	this->data32PerVertex = data32PerVertex;
	HX_STACK_LINE(27)
	this->bufferUsage = bufferUsage;
}
;
	return null();
}

//VertexBuffer3D_obj::~VertexBuffer3D_obj() { }

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return  new VertexBuffer3D_obj; }
hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex,int bufferUsage)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(context,glBuffer,numVertices,data32PerVertex,bufferUsage);
	return _result_;}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void VertexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","dispose",0x6b6860bf,"openfl.display3D.VertexBuffer3D.dispose","openfl/display3D/VertexBuffer3D.hx",32,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::openfl::display3D::Context3D tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		tmp->__deleteVertexBuffer(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

Void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromByteArray",0x0096a806,"openfl.display3D.VertexBuffer3D.uploadFromByteArray","openfl/display3D/VertexBuffer3D.hx",39,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(41)
		int tmp = this->data32PerVertex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		int bytesPerVertex = tmp1;		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::openfl::_legacy::gl::GLBuffer tmp2 = this->glBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			::openfl::_legacy::gl::GLBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(43)
			bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			if ((tmp3)){
				HX_STACK_LINE(43)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(43)
				tmp4 = buffer->id;
			}
			HX_STACK_LINE(43)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp4);
		}
		HX_STACK_LINE(45)
		int tmp2 = (count * bytesPerVertex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		int length = tmp2;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(46)
		int tmp3 = byteArrayOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		int tmp4 = (startOffset * bytesPerVertex);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		int offset = tmp5;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(47)
		::openfl::_legacy::utils::Float32Array float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(62)
		::openfl::_legacy::utils::Float32Array tmp6 = ::openfl::_legacy::utils::Float32Array_obj::__new(byteArray,offset,length);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		float32Array = tmp6;
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::openfl::_legacy::utils::ByteArray tmp7 = float32Array->getByteBuffer();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			int tmp8 = float32Array->getStart();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			int tmp9 = float32Array->getLength();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			int tmp10 = this->bufferUsage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,tmp7,tmp8,tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

Void VertexBuffer3D_obj::uploadFromFloat32Array( ::openfl::_legacy::utils::Float32Array data){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromFloat32Array",0xa0c31ae9,"openfl.display3D.VertexBuffer3D.uploadFromFloat32Array","openfl/display3D/VertexBuffer3D.hx",70,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::openfl::_legacy::gl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			::openfl::_legacy::gl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(72)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp1)){
				HX_STACK_LINE(72)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(72)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(72)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp2);
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::openfl::_legacy::utils::ByteArray tmp = data->getByteBuffer();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			int tmp1 = data->getStart();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			int tmp2 = data->getLength();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			int tmp3 = this->bufferUsage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,tmp,tmp1,tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer3D_obj,uploadFromFloat32Array,(void))

Void VertexBuffer3D_obj::uploadFromVector( Array< Float > data,int startVertex,int numVertices){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromVector",0xcf228b0e,"openfl.display3D.VertexBuffer3D.uploadFromVector","openfl/display3D/VertexBuffer3D.hx",78,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startVertex,"startVertex")
		HX_STACK_ARG(numVertices,"numVertices")
		HX_STACK_LINE(80)
		int tmp = this->data32PerVertex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		int bytesPerVertex = tmp1;		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::openfl::_legacy::gl::GLBuffer tmp2 = this->glBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			::openfl::_legacy::gl::GLBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(82)
			bool tmp3 = (buffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			if ((tmp3)){
				HX_STACK_LINE(82)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(82)
				tmp4 = buffer->id;
			}
			HX_STACK_LINE(82)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp4);
		}
		HX_STACK_LINE(84)
		int tmp2 = numVertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		int tmp3 = this->data32PerVertex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		int length = tmp4;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(85)
		int offset = startVertex;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(86)
		::openfl::_legacy::utils::Float32Array float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(97)
		::openfl::_legacy::utils::Float32Array tmp5 = ::openfl::_legacy::utils::Float32Array_obj::__new(data,offset,length);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		float32Array = tmp5;
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::openfl::_legacy::utils::ByteArray tmp6 = float32Array->getByteBuffer();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			int tmp7 = float32Array->getStart();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			int tmp8 = float32Array->getLength();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			int tmp9 = this->bufferUsage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,tmp6,tmp7,tmp8,tmp9);
		}
		HX_STACK_LINE(102)
		float32Array = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(bufferUsage,"bufferUsage");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(bufferUsage,"bufferUsage");
}

Dynamic VertexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { return bufferUsage; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { return data32PerVertex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"uploadFromFloat32Array") ) { return uploadFromFloat32Array_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::openfl::_legacy::gl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { bufferUsage=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { data32PerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c"));
	outFields->push(HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"));
	outFields->push(HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"));
	outFields->push(HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(VertexBuffer3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,data32PerVertex),HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c")},
	{hx::fsObject /*::openfl::_legacy::gl::GLBuffer*/ ,(int)offsetof(VertexBuffer3D_obj,glBuffer),HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,numVertices),HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,bufferUsage),HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c"),
	HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"),
	HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"),
	HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromFloat32Array","\x09","\xd7","\x7d","\xf0"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.VertexBuffer3D","\x8e","\x20","\x03","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer3D_obj >;
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
