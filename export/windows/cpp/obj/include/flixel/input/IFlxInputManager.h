#ifndef INCLUDED_flixel_input_IFlxInputManager
#define INCLUDED_flixel_input_IFlxInputManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  IFlxInputManager_obj : public ::flixel::util::IFlxDestroyable_obj{
	public:
		typedef ::flixel::util::IFlxDestroyable_obj super;
		typedef IFlxInputManager_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void reset( )=0;
virtual Dynamic reset_dyn()=0;
		virtual Void update( )=0;
virtual Dynamic update_dyn()=0;
		virtual Void onFocus( )=0;
virtual Dynamic onFocus_dyn()=0;
		virtual Void onFocusLost( )=0;
virtual Dynamic onFocusLost_dyn()=0;
};



template<typename IMPL>
class IFlxInputManager_delegate_ : public IFlxInputManager_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxInputManager_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void reset( ) { return mDelegate->reset();}
		Dynamic reset_dyn() { return mDelegate->reset_dyn();}
		Void update( ) { return mDelegate->update();}
		Dynamic update_dyn() { return mDelegate->update_dyn();}
		Void onFocus( ) { return mDelegate->onFocus();}
		Dynamic onFocus_dyn() { return mDelegate->onFocus_dyn();}
		Void onFocusLost( ) { return mDelegate->onFocusLost();}
		Dynamic onFocusLost_dyn() { return mDelegate->onFocusLost_dyn();}
		Void destroy( ) { return mDelegate->destroy();}
		Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}
};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_IFlxInputManager */ 
