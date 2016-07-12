#ifndef INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_
#define INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,net,_SharedObjectFlushStatus,SharedObjectFlushStatus_Impl_)
namespace openfl{
namespace net{
namespace _SharedObjectFlushStatus{


class HXCPP_CLASS_ATTRIBUTES  SharedObjectFlushStatus_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SharedObjectFlushStatus_Impl__obj OBJ_;
		SharedObjectFlushStatus_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SharedObjectFlushStatus_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SharedObjectFlushStatus_Impl_","\x32","\xe2","\xb7","\x74"); }

		static void __boot();
		static Dynamic FLUSHED;
		static Dynamic PENDING;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace net
} // end namespace _SharedObjectFlushStatus

#endif /* INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_ */ 
