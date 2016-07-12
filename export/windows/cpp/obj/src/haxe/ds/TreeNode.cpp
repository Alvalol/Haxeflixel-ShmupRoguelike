#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
namespace haxe{
namespace ds{

Void TreeNode_obj::__construct(::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r,hx::Null< int >  __o_h)
{
HX_STACK_FRAME("haxe.ds.TreeNode","new",0x88d32f89,"haxe.ds.TreeNode.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",220,0x9022da28)
HX_STACK_THIS(this)
HX_STACK_ARG(l,"l")
HX_STACK_ARG(k,"k")
HX_STACK_ARG(v,"v")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(__o_h,"h")
int h = __o_h.Default(-1);
{
	HX_STACK_LINE(221)
	this->left = l;
	HX_STACK_LINE(222)
	this->key = k;
	HX_STACK_LINE(223)
	this->value = v;
	HX_STACK_LINE(224)
	this->right = r;
	HX_STACK_LINE(225)
	bool tmp = (h == (int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	if ((tmp)){
		HX_STACK_LINE(226)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode tmp2 = this->left;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			bool tmp3 = (_this == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			if ((tmp3)){
				HX_STACK_LINE(226)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(226)
				tmp1 = _this->_height;
			}
		}
		HX_STACK_LINE(226)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode tmp3 = this->right;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			bool tmp4 = (_this == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			if ((tmp4)){
				HX_STACK_LINE(226)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(226)
				tmp2 = _this->_height;
			}
		}
		HX_STACK_LINE(226)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		if ((tmp3)){
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode tmp5 = this->left;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			bool tmp6 = (_this == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(226)
			if ((tmp6)){
				HX_STACK_LINE(226)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(226)
				tmp4 = _this->_height;
			}
		}
		else{
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode tmp5 = this->right;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(226)
			::haxe::ds::TreeNode _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			bool tmp6 = (_this == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(226)
			if ((tmp6)){
				HX_STACK_LINE(226)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(226)
				tmp4 = _this->_height;
			}
		}
		HX_STACK_LINE(226)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		this->_height = tmp5;
	}
	else{
		HX_STACK_LINE(228)
		this->_height = h;
	}
}
;
	return null();
}

//TreeNode_obj::~TreeNode_obj() { }

Dynamic TreeNode_obj::__CreateEmpty() { return  new TreeNode_obj; }
hx::ObjectPtr< TreeNode_obj > TreeNode_obj::__new(::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r,hx::Null< int >  __o_h)
{  hx::ObjectPtr< TreeNode_obj > _result_ = new TreeNode_obj();
	_result_->__construct(l,k,v,r,__o_h);
	return _result_;}

Dynamic TreeNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TreeNode_obj > _result_ = new TreeNode_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}


TreeNode_obj::TreeNode_obj()
{
}

void TreeNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeNode);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_END_CLASS();
}

void TreeNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_height,"_height");
}

Dynamic TreeNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TreeNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::haxe::ds::TreeNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::haxe::ds::TreeNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::TreeNode*/ ,(int)offsetof(TreeNode_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*::haxe::ds::TreeNode*/ ,(int)offsetof(TreeNode_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TreeNode_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TreeNode_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(TreeNode_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

#endif

hx::Class TreeNode_obj::__mClass;

void TreeNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.TreeNode","\x17","\xb7","\xb8","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TreeNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
