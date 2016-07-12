#ifndef INCLUDED_flixel_system_replay_MouseRecord
#define INCLUDED_flixel_system_replay_MouseRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,replay,MouseRecord)
namespace flixel{
namespace _system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES  MouseRecord_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseRecord_obj OBJ_;
		MouseRecord_obj();
		Void __construct(int x,int y,int button,int wheel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.replay.MouseRecord")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MouseRecord_obj > __new(int x,int y,int button,int wheel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseRecord_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MouseRecord","\x76","\x42","\xa7","\xd7"); }

		int x;
		int y;
		int button;
		int wheel;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_MouseRecord */ 
