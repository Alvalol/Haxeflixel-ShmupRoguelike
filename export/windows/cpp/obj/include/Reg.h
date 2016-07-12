#ifndef INCLUDED_Reg
#define INCLUDED_Reg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Reg)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,PlayState)


class HXCPP_CLASS_ATTRIBUTES  Reg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reg_obj OBJ_;
		Reg_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Reg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Reg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reg_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Reg","\x34","\x91","\x3e","\x00"); }

		static void __boot();
		static ::states::PlayState PS;
		static int currentLevel;
		static bool pause;
		static int score;
		static Array< int > availableItems;
		static Array< ::Dynamic > mapChunkTemplates;
};


#endif /* INCLUDED_Reg */ 
