#ifndef INCLUDED_haxe_ds_TreeNode
#define INCLUDED_haxe_ds_TreeNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,TreeNode)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  TreeNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TreeNode_obj OBJ_;
		TreeNode_obj();
		Void __construct(::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r,hx::Null< int >  __o_h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ds.TreeNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TreeNode_obj > __new(::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r,hx::Null< int >  __o_h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TreeNode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TreeNode","\xa0","\x92","\x83","\x06"); }

		::haxe::ds::TreeNode left;
		::haxe::ds::TreeNode right;
		Dynamic key;
		Dynamic value;
		int _height;
};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_TreeNode */ 
