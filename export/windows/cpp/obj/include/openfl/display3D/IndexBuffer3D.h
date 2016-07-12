#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#define INCLUDED_openfl_display3D_IndexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLBuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Int16Array)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  IndexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IndexBuffer3D_obj OBJ_;
		IndexBuffer3D_obj();
		Void __construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numIndices,int bufferUsage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.IndexBuffer3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IndexBuffer3D_obj > __new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numIndices,int bufferUsage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexBuffer3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IndexBuffer3D","\xc3","\x32","\x41","\xc0"); }

		::openfl::display3D::Context3D context;
		::openfl::_legacy::gl::GLBuffer glBuffer;
		int numIndices;
		int bufferUsage;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void uploadFromByteArray( ::openfl::_legacy::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromVector( Array< int > data,int startOffset,int count);
		Dynamic uploadFromVector_dyn();

		virtual Void uploadFromInt16Array( ::openfl::_legacy::utils::Int16Array data);
		Dynamic uploadFromInt16Array_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_IndexBuffer3D */ 
