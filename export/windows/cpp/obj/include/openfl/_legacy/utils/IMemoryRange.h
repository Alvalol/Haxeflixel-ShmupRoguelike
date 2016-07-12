#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#define INCLUDED_openfl__legacy_utils_IMemoryRange

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  IMemoryRange_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMemoryRange_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::openfl::_legacy::utils::ByteArray getByteBuffer( )=0;
virtual Dynamic getByteBuffer_dyn()=0;
		virtual int getStart( )=0;
virtual Dynamic getStart_dyn()=0;
		virtual int getLength( )=0;
virtual Dynamic getLength_dyn()=0;
};



template<typename IMPL>
class IMemoryRange_delegate_ : public IMemoryRange_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMemoryRange_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::openfl::_legacy::utils::ByteArray getByteBuffer( ) { return mDelegate->getByteBuffer();}
		Dynamic getByteBuffer_dyn() { return mDelegate->getByteBuffer_dyn();}
		int getStart( ) { return mDelegate->getStart();}
		Dynamic getStart_dyn() { return mDelegate->getStart_dyn();}
		int getLength( ) { return mDelegate->getLength();}
		Dynamic getLength_dyn() { return mDelegate->getLength_dyn();}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_IMemoryRange */ 
