#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#define INCLUDED_openfl__legacy_events_IEventDispatcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  IEventDispatcher_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IEventDispatcher_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference)=0;
virtual Dynamic addEventListener_dyn()=0;
		virtual bool dispatchEvent( ::openfl::_legacy::events::Event event)=0;
virtual Dynamic dispatchEvent_dyn()=0;
		virtual bool hasEventListener( ::String type)=0;
virtual Dynamic hasEventListener_dyn()=0;
		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture)=0;
virtual Dynamic removeEventListener_dyn()=0;
		virtual bool willTrigger( ::String type)=0;
virtual Dynamic willTrigger_dyn()=0;
};



template<typename IMPL>
class IEventDispatcher_delegate_ : public IEventDispatcher_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IEventDispatcher_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference) { return mDelegate->addEventListener(type,listener,useCapture,priority,useWeakReference);}
		Dynamic addEventListener_dyn() { return mDelegate->addEventListener_dyn();}
		bool dispatchEvent( ::openfl::_legacy::events::Event event) { return mDelegate->dispatchEvent(event);}
		Dynamic dispatchEvent_dyn() { return mDelegate->dispatchEvent_dyn();}
		bool hasEventListener( ::String type) { return mDelegate->hasEventListener(type);}
		Dynamic hasEventListener_dyn() { return mDelegate->hasEventListener_dyn();}
		Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture) { return mDelegate->removeEventListener(type,listener,useCapture);}
		Dynamic removeEventListener_dyn() { return mDelegate->removeEventListener_dyn();}
		bool willTrigger( ::String type) { return mDelegate->willTrigger(type);}
		Dynamic willTrigger_dyn() { return mDelegate->willTrigger_dyn();}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events

#endif /* INCLUDED_openfl__legacy_events_IEventDispatcher */ 
