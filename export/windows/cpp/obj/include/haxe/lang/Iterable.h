#ifndef INCLUDED_haxe_lang_Iterable
#define INCLUDED_haxe_lang_Iterable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,lang,Iterable)
HX_DECLARE_CLASS2(haxe,lang,Iterator)
namespace haxe{
namespace lang{


class HXCPP_CLASS_ATTRIBUTES  Iterable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Iterable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::haxe::lang::Iterator iterator( )=0;
virtual Dynamic iterator_dyn()=0;
};



template<typename IMPL>
class Iterable_delegate_ : public Iterable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Iterable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::haxe::lang::Iterator iterator( ) { return mDelegate->iterator();}
		Dynamic iterator_dyn() { return mDelegate->iterator_dyn();}
};

} // end namespace haxe
} // end namespace lang

#endif /* INCLUDED_haxe_lang_Iterable */ 
