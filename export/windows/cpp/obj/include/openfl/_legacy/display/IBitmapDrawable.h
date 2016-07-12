#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#define INCLUDED_openfl__legacy_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IBitmapDrawable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IBitmapDrawable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void __drawToSurface( Dynamic surface,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode,::openfl::_legacy::geom::Rectangle clipRect,bool smoothing)=0;
virtual Dynamic __drawToSurface_dyn()=0;
};



template<typename IMPL>
class IBitmapDrawable_delegate_ : public IBitmapDrawable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBitmapDrawable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void __drawToSurface( Dynamic surface,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode,::openfl::_legacy::geom::Rectangle clipRect,bool smoothing) { return mDelegate->__drawToSurface(surface,matrix,colorTransform,blendMode,clipRect,smoothing);}
		Dynamic __drawToSurface_dyn() { return mDelegate->__drawToSurface_dyn();}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_IBitmapDrawable */ 
