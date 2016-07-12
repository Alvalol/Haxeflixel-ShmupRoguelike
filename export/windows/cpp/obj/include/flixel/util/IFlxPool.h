#ifndef INCLUDED_flixel_util_IFlxPool
#define INCLUDED_flixel_util_IFlxPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,IFlxPool)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  IFlxPool_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxPool_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void preAllocate( int numObjects)=0;
virtual Dynamic preAllocate_dyn()=0;
		virtual cpp::ArrayBase clear( )=0;
virtual Dynamic clear_dyn()=0;
};



template<typename IMPL>
class IFlxPool_delegate_ : public IFlxPool_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxPool_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void preAllocate( int numObjects) { return mDelegate->preAllocate(numObjects);}
		Dynamic preAllocate_dyn() { return mDelegate->preAllocate_dyn();}
		cpp::ArrayBase clear( ) { return mDelegate->clear();}
		Dynamic clear_dyn() { return mDelegate->clear_dyn();}
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_IFlxPool */ 
