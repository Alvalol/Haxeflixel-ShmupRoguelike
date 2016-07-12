#ifndef INCLUDED_flixel_IFlxSprite
#define INCLUDED_flixel_IFlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  IFlxSprite_obj : public ::flixel::IFlxBasic_obj{
	public:
		typedef ::flixel::IFlxBasic_obj super;
		typedef IFlxSprite_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float set_x( Float value)=0;
virtual Dynamic set_x_dyn()=0;
		virtual Float set_y( Float value)=0;
virtual Dynamic set_y_dyn()=0;
		virtual Float set_alpha( Float value)=0;
virtual Dynamic set_alpha_dyn()=0;
		virtual Float set_angle( Float value)=0;
virtual Dynamic set_angle_dyn()=0;
		virtual int set_facing( int value)=0;
virtual Dynamic set_facing_dyn()=0;
		virtual bool set_moves( bool value)=0;
virtual Dynamic set_moves_dyn()=0;
		virtual bool set_immovable( bool value)=0;
virtual Dynamic set_immovable_dyn()=0;
		virtual Void reset( Float X,Float Y)=0;
virtual Dynamic reset_dyn()=0;
		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y)=0;
virtual Dynamic setPosition_dyn()=0;
};



template<typename IMPL>
class IFlxSprite_delegate_ : public IFlxSprite_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxSprite_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Float set_x( Float value) { return mDelegate->set_x(value);}
		Dynamic set_x_dyn() { return mDelegate->set_x_dyn();}
		Float set_y( Float value) { return mDelegate->set_y(value);}
		Dynamic set_y_dyn() { return mDelegate->set_y_dyn();}
		Float set_alpha( Float value) { return mDelegate->set_alpha(value);}
		Dynamic set_alpha_dyn() { return mDelegate->set_alpha_dyn();}
		Float set_angle( Float value) { return mDelegate->set_angle(value);}
		Dynamic set_angle_dyn() { return mDelegate->set_angle_dyn();}
		int set_facing( int value) { return mDelegate->set_facing(value);}
		Dynamic set_facing_dyn() { return mDelegate->set_facing_dyn();}
		bool set_moves( bool value) { return mDelegate->set_moves(value);}
		Dynamic set_moves_dyn() { return mDelegate->set_moves_dyn();}
		bool set_immovable( bool value) { return mDelegate->set_immovable(value);}
		Dynamic set_immovable_dyn() { return mDelegate->set_immovable_dyn();}
		Void reset( Float X,Float Y) { return mDelegate->reset(X,Y);}
		Dynamic reset_dyn() { return mDelegate->reset_dyn();}
		Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y) { return mDelegate->setPosition(X,Y);}
		Dynamic setPosition_dyn() { return mDelegate->setPosition_dyn();}
		bool set_active( bool value) { return mDelegate->set_active(value);}
		Dynamic set_active_dyn() { return mDelegate->set_active_dyn();}
		bool set_visible( bool value) { return mDelegate->set_visible(value);}
		Dynamic set_visible_dyn() { return mDelegate->set_visible_dyn();}
		bool set_alive( bool value) { return mDelegate->set_alive(value);}
		Dynamic set_alive_dyn() { return mDelegate->set_alive_dyn();}
		bool set_exists( bool value) { return mDelegate->set_exists(value);}
		Dynamic set_exists_dyn() { return mDelegate->set_exists_dyn();}
		Void draw( ) { return mDelegate->draw();}
		Dynamic draw_dyn() { return mDelegate->draw_dyn();}
		Void update( Float elapsed) { return mDelegate->update(elapsed);}
		Dynamic update_dyn() { return mDelegate->update_dyn();}
		Void destroy( ) { return mDelegate->destroy();}
		Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}
		Void kill( ) { return mDelegate->kill();}
		Dynamic kill_dyn() { return mDelegate->kill_dyn();}
		Void revive( ) { return mDelegate->revive();}
		Dynamic revive_dyn() { return mDelegate->revive_dyn();}
		::String toString( ) { return mDelegate->toString();}
		Dynamic toString_dyn() { return mDelegate->toString_dyn();}
};

} // end namespace flixel

#endif /* INCLUDED_flixel_IFlxSprite */ 
