#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#define INCLUDED_flixel_group_FlxTypedGroupIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,group,FlxTypedGroupIterator)
namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedGroupIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTypedGroupIterator_obj OBJ_;
		FlxTypedGroupIterator_obj();
		Void __construct(cpp::ArrayBase GroupMembers,Dynamic filter);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.group.FlxTypedGroupIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTypedGroupIterator_obj > __new(cpp::ArrayBase GroupMembers,Dynamic filter);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedGroupIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxTypedGroupIterator","\x75","\x12","\x8f","\x24"); }

		cpp::ArrayBase _groupMembers;
		Dynamic _filter;
		Dynamic &_filter_dyn() { return _filter;}
		int _cursor;
		int _length;
		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxTypedGroupIterator */ 
