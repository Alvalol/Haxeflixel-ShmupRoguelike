#ifndef INCLUDED_flixel_util_IFlxSignal
#define INCLUDED_flixel_util_IFlxSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  IFlxSignal_obj : public ::flixel::util::IFlxDestroyable_obj{
	public:
		typedef ::flixel::util::IFlxDestroyable_obj super;
		typedef IFlxSignal_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void add( Dynamic listener)=0;
virtual Dynamic add_dyn()=0;
		virtual Void addOnce( Dynamic listener)=0;
virtual Dynamic addOnce_dyn()=0;
		virtual Void remove( Dynamic listener)=0;
virtual Dynamic remove_dyn()=0;
		virtual Void removeAll( )=0;
virtual Dynamic removeAll_dyn()=0;
		virtual bool has( Dynamic listener)=0;
virtual Dynamic has_dyn()=0;
};



template<typename IMPL>
class IFlxSignal_delegate_ : public IFlxSignal_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxSignal_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void add( Dynamic listener) { return mDelegate->add(listener);}
		Dynamic add_dyn() { return mDelegate->add_dyn();}
		Void addOnce( Dynamic listener) { return mDelegate->addOnce(listener);}
		Dynamic addOnce_dyn() { return mDelegate->addOnce_dyn();}
		Void remove( Dynamic listener) { return mDelegate->remove(listener);}
		Dynamic remove_dyn() { return mDelegate->remove_dyn();}
		Void removeAll( ) { return mDelegate->removeAll();}
		Dynamic removeAll_dyn() { return mDelegate->removeAll_dyn();}
		bool has( Dynamic listener) { return mDelegate->has(listener);}
		Dynamic has_dyn() { return mDelegate->has_dyn();}
		Void destroy( ) { return mDelegate->destroy();}
		Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_IFlxSignal */ 
