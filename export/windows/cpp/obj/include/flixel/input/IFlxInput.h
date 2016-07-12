#ifndef INCLUDED_flixel_input_IFlxInput
#define INCLUDED_flixel_input_IFlxInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,IFlxInput)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  IFlxInput_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxInput_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool get_justReleased( )=0;
virtual Dynamic get_justReleased_dyn()=0;
		virtual bool get_released( )=0;
virtual Dynamic get_released_dyn()=0;
		virtual bool get_pressed( )=0;
virtual Dynamic get_pressed_dyn()=0;
		virtual bool get_justPressed( )=0;
virtual Dynamic get_justPressed_dyn()=0;
};



template<typename IMPL>
class IFlxInput_delegate_ : public IFlxInput_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxInput_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		bool get_justReleased( ) { return mDelegate->get_justReleased();}
		Dynamic get_justReleased_dyn() { return mDelegate->get_justReleased_dyn();}
		bool get_released( ) { return mDelegate->get_released();}
		Dynamic get_released_dyn() { return mDelegate->get_released_dyn();}
		bool get_pressed( ) { return mDelegate->get_pressed();}
		Dynamic get_pressed_dyn() { return mDelegate->get_pressed_dyn();}
		bool get_justPressed( ) { return mDelegate->get_justPressed();}
		Dynamic get_justPressed_dyn() { return mDelegate->get_justPressed_dyn();}
};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_IFlxInput */ 
