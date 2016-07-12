#ifndef INCLUDED_flixel_util_IFlxPooled
#define INCLUDED_flixel_util_IFlxPooled

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  IFlxPooled_obj : public ::flixel::util::IFlxDestroyable_obj{
	public:
		typedef ::flixel::util::IFlxDestroyable_obj super;
		typedef IFlxPooled_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void put( )=0;
virtual Dynamic put_dyn()=0;
};



template<typename IMPL>
class IFlxPooled_delegate_ : public IFlxPooled_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxPooled_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void put( ) { return mDelegate->put();}
		Dynamic put_dyn() { return mDelegate->put_dyn();}
		Void destroy( ) { return mDelegate->destroy();}
		Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_IFlxPooled */ 
