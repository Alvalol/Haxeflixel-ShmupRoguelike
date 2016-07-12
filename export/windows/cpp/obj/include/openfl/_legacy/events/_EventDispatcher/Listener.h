#ifndef INCLUDED_openfl__legacy_events__EventDispatcher_Listener
#define INCLUDED_openfl__legacy_events__EventDispatcher_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_legacy,events,_EventDispatcher,Listener)
namespace openfl{
namespace _legacy{
namespace events{
namespace _EventDispatcher{


class HXCPP_CLASS_ATTRIBUTES  Listener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Listener_obj OBJ_;
		Listener_obj();
		Void __construct(Dynamic callback,bool useCapture,int priority);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.events._EventDispatcher.Listener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Listener_obj > __new(Dynamic callback,bool useCapture,int priority);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Listener_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Listener","\x94","\xbc","\xe3","\x11"); }

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		int priority;
		bool useCapture;
		virtual bool match( Dynamic callback,bool useCapture);
		Dynamic match_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
} // end namespace _EventDispatcher

#endif /* INCLUDED_openfl__legacy_events__EventDispatcher_Listener */ 
