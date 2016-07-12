#ifndef INCLUDED_flixel_math_FlxRandom
#define INCLUDED_flixel_math_FlxRandom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxRandom)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(objects,items,Item)
namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FlxRandom_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRandom_obj OBJ_;
		FlxRandom_obj();
		Void __construct(Dynamic InitialSeed);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxRandom")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxRandom_obj > __new(Dynamic InitialSeed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRandom_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxRandom","\xf5","\x1b","\x7e","\x39"); }

		static void __boot();
		static int rangeBound( int Value);
		static Dynamic rangeBound_dyn();

		static Array< Float > _arrayFloatHelper;
		static Float MULTIPLIER;
		static int MODULUS;
		virtual Array< ::Dynamic > getObject_Array_Array_Int( Array< ::Dynamic > Objects,Array< Float > WeightsArray,hx::Null< int >  StartIndex,Dynamic EndIndex);
		Dynamic getObject_Array_Array_Int_dyn();

		virtual Array< int > getObject_Array_Int( Array< ::Dynamic > Objects,Array< Float > WeightsArray,hx::Null< int >  StartIndex,Dynamic EndIndex);
		Dynamic getObject_Array_Int_dyn();

		virtual ::objects::items::Item getObject_objects_items_Item( Array< ::Dynamic > Objects,Array< Float > WeightsArray,hx::Null< int >  StartIndex,Dynamic EndIndex);
		Dynamic getObject_objects_items_Item_dyn();

		virtual Dynamic getObject_flixel_group_FlxTypedGroup_T( cpp::ArrayBase Objects,Array< Float > WeightsArray,hx::Null< int >  StartIndex,Dynamic EndIndex);
		Dynamic getObject_flixel_group_FlxTypedGroup_T_dyn();

		int initialSeed;
		virtual int resetInitialSeed( );
		Dynamic resetInitialSeed_dyn();

		virtual int _int( hx::Null< int >  Min,hx::Null< int >  Max,Array< int > Excludes);
		Dynamic _int_dyn();

		virtual Float _float( hx::Null< Float >  Min,hx::Null< Float >  Max,Array< Float > Excludes);
		Dynamic _float_dyn();

		bool _hasFloatNormalSpare;
		Float _floatNormalRand1;
		Float _floatNormalRand2;
		Float _twoPI;
		Float _floatNormalRho;
		virtual Float floatNormal( hx::Null< Float >  Mean,hx::Null< Float >  StdDev);
		Dynamic floatNormal_dyn();

		virtual bool _bool( hx::Null< Float >  Chance);
		Dynamic _bool_dyn();

		virtual int sign( hx::Null< Float >  Chance);
		Dynamic sign_dyn();

		virtual int weightedPick( Array< Float > WeightsArray);
		Dynamic weightedPick_dyn();

		virtual int color( Dynamic Min,Dynamic Max,Dynamic Alpha,hx::Null< bool >  GreyScale);
		Dynamic color_dyn();

		virtual Float generate( );
		Dynamic generate_dyn();

		Float internalSeed;
		virtual int set_initialSeed( int NewSeed);
		Dynamic set_initialSeed_dyn();

		virtual int get_currentSeed( );
		Dynamic get_currentSeed_dyn();

		virtual int set_currentSeed( int NewSeed);
		Dynamic set_currentSeed_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxRandom */ 
