#ifndef INCLUDED_openfl_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_
#define INCLUDED_openfl_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DTriangleFace,Context3DTriangleFace_Impl_)
namespace openfl{
namespace display3D{
namespace _Context3DTriangleFace{


class HXCPP_CLASS_ATTRIBUTES  Context3DTriangleFace_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DTriangleFace_Impl__obj OBJ_;
		Context3DTriangleFace_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context3DTriangleFace_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DTriangleFace_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Context3DTriangleFace_Impl_","\x45","\x42","\x51","\x8c"); }

		static void __boot();
		static int BACK;
		static int FRONT;
		static int FRONT_AND_BACK;
		static int NONE;
		static int _new( int a);
		static Dynamic _new_dyn();

		static int fromInt( int s);
		static Dynamic fromInt_dyn();

		static int toInt( int this1);
		static Dynamic toInt_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTriangleFace

#endif /* INCLUDED_openfl_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_ */ 
