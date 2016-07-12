#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
namespace haxe{
namespace ds{

Void BalancedTree_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.BalancedTree","new",0xfb50b0cf,"haxe.ds.BalancedTree.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",41,0x9022da28)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BalancedTree_obj::~BalancedTree_obj() { }

Dynamic BalancedTree_obj::__CreateEmpty() { return  new BalancedTree_obj; }
hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__new()
{  hx::ObjectPtr< BalancedTree_obj > _result_ = new BalancedTree_obj();
	_result_->__construct();
	return _result_;}

Dynamic BalancedTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedTree_obj > _result_ = new BalancedTree_obj();
	_result_->__construct();
	return _result_;}

Void BalancedTree_obj::set( Dynamic key,Dynamic value){
{
		HX_STACK_FRAME("haxe.ds.BalancedTree","set",0xfb547c11,"haxe.ds.BalancedTree.set","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",50,0x9022da28)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(51)
		Dynamic tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		::haxe::ds::TreeNode tmp2 = this->root;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::haxe::ds::TreeNode tmp3 = this->setLoop(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		this->root = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,set,(void))

Dynamic BalancedTree_obj::get( Dynamic key){
	HX_STACK_FRAME("haxe.ds.BalancedTree","get",0xfb4b6105,"haxe.ds.BalancedTree.get","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",61,0x9022da28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(62)
	::haxe::ds::TreeNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::haxe::ds::TreeNode node = tmp;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(63)
	while((true)){
		HX_STACK_LINE(63)
		bool tmp1 = (node != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		if ((tmp2)){
			HX_STACK_LINE(63)
			break;
		}
		HX_STACK_LINE(64)
		Dynamic tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		Dynamic tmp4 = node->key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		int tmp5 = this->compare(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		int c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(65)
		bool tmp6 = (c == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		if ((tmp6)){
			HX_STACK_LINE(65)
			Dynamic tmp7 = node->value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			return tmp7;
		}
		HX_STACK_LINE(66)
		bool tmp7 = (c < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		if ((tmp7)){
			HX_STACK_LINE(66)
			node = node->left;
		}
		else{
			HX_STACK_LINE(67)
			node = node->right;
		}
	}
	HX_STACK_LINE(69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,get,return )

::haxe::ds::TreeNode BalancedTree_obj::setLoop( Dynamic k,Dynamic v,::haxe::ds::TreeNode node){
	HX_STACK_FRAME("haxe.ds.BalancedTree","setLoop",0xe1a32b15,"haxe.ds.BalancedTree.setLoop","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",132,0x9022da28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(133)
	bool tmp = (node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	if ((tmp)){
		HX_STACK_LINE(133)
		::haxe::ds::TreeNode tmp1 = ::haxe::ds::TreeNode_obj::__new(null(),k,v,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		return tmp1;
	}
	HX_STACK_LINE(134)
	Dynamic tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	Dynamic tmp2 = node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	int c = tmp3;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(135)
	bool tmp4 = (c == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(135)
	::haxe::ds::TreeNode tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(135)
	if ((tmp4)){
		HX_STACK_LINE(135)
		::haxe::ds::TreeNode tmp6 = node->left;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		Dynamic tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		::haxe::ds::TreeNode tmp9 = node->right;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		bool tmp10 = (node == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(135)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(135)
		if ((tmp10)){
			HX_STACK_LINE(135)
			tmp11 = (int)0;
		}
		else{
			HX_STACK_LINE(135)
			tmp11 = node->_height;
		}
		HX_STACK_LINE(135)
		tmp5 = ::haxe::ds::TreeNode_obj::__new(tmp6,tmp7,tmp8,tmp9,tmp11);
	}
	else{
		HX_STACK_LINE(136)
		bool tmp6 = (c < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		if ((tmp6)){
			HX_STACK_LINE(137)
			Dynamic tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			::haxe::ds::TreeNode tmp9 = node->left;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			::haxe::ds::TreeNode tmp10 = this->setLoop(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			::haxe::ds::TreeNode nl = tmp10;		HX_STACK_VAR(nl,"nl");
			HX_STACK_LINE(138)
			::haxe::ds::TreeNode tmp11 = nl;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(138)
			Dynamic tmp12 = node->key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(138)
			Dynamic tmp13 = node->value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(138)
			::haxe::ds::TreeNode tmp14 = node->right;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(138)
			tmp5 = this->balance(tmp11,tmp12,tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(140)
			Dynamic tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			::haxe::ds::TreeNode tmp9 = node->right;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			::haxe::ds::TreeNode tmp10 = this->setLoop(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			::haxe::ds::TreeNode nr = tmp10;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(141)
			::haxe::ds::TreeNode tmp11 = node->left;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(141)
			Dynamic tmp12 = node->key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(141)
			Dynamic tmp13 = node->value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(141)
			::haxe::ds::TreeNode tmp14 = nr;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(141)
			tmp5 = this->balance(tmp11,tmp12,tmp13,tmp14);
		}
	}
	HX_STACK_LINE(135)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedTree_obj,setLoop,return )

::haxe::ds::TreeNode BalancedTree_obj::balance( ::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r){
	HX_STACK_FRAME("haxe.ds.BalancedTree","balance",0xf7f4e10b,"haxe.ds.BalancedTree.balance","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",187,0x9022da28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_ARG(k,"k")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(188)
	bool tmp = (l == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	if ((tmp)){
		HX_STACK_LINE(188)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(188)
		tmp1 = l->_height;
	}
	HX_STACK_LINE(188)
	int hl = tmp1;		HX_STACK_VAR(hl,"hl");
	HX_STACK_LINE(189)
	bool tmp2 = (r == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	if ((tmp2)){
		HX_STACK_LINE(189)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(189)
		tmp3 = r->_height;
	}
	HX_STACK_LINE(189)
	int hr = tmp3;		HX_STACK_VAR(hr,"hr");
	HX_STACK_LINE(190)
	int tmp4 = hl;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	int tmp5 = (hr + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(190)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(190)
	::haxe::ds::TreeNode tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(190)
	if ((tmp6)){
		HX_STACK_LINE(191)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			::haxe::ds::TreeNode _this = l->left;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(191)
			bool tmp9 = (_this == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			if ((tmp9)){
				HX_STACK_LINE(191)
				tmp8 = (int)0;
			}
			else{
				HX_STACK_LINE(191)
				tmp8 = _this->_height;
			}
		}
		HX_STACK_LINE(191)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			::haxe::ds::TreeNode _this = l->right;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(191)
			bool tmp10 = (_this == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			if ((tmp10)){
				HX_STACK_LINE(191)
				tmp9 = (int)0;
			}
			else{
				HX_STACK_LINE(191)
				tmp9 = _this->_height;
			}
		}
		HX_STACK_LINE(191)
		bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(191)
		if ((tmp10)){
			HX_STACK_LINE(191)
			::haxe::ds::TreeNode tmp11 = l->left;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			Dynamic tmp12 = l->key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			Dynamic tmp13 = l->value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			::haxe::ds::TreeNode tmp14 = ::haxe::ds::TreeNode_obj::__new(l->right,k,v,r,null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(191)
			tmp7 = ::haxe::ds::TreeNode_obj::__new(tmp11,tmp12,tmp13,tmp14,null());
		}
		else{
			HX_STACK_LINE(192)
			::haxe::ds::TreeNode tmp11 = l->left;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(192)
			Dynamic tmp12 = l->key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(192)
			Dynamic tmp13 = l->value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(192)
			::haxe::ds::TreeNode tmp14 = l->right->left;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(192)
			::haxe::ds::TreeNode tmp15 = ::haxe::ds::TreeNode_obj::__new(tmp11,tmp12,tmp13,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(192)
			Dynamic tmp16 = l->right->key;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(192)
			Dynamic tmp17 = l->right->value;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(192)
			::haxe::ds::TreeNode tmp18 = l->right->right;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(192)
			Dynamic tmp19 = k;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(192)
			Dynamic tmp20 = v;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(192)
			::haxe::ds::TreeNode tmp21 = r;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(192)
			::haxe::ds::TreeNode tmp22 = ::haxe::ds::TreeNode_obj::__new(tmp18,tmp19,tmp20,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(192)
			tmp7 = ::haxe::ds::TreeNode_obj::__new(tmp15,tmp16,tmp17,tmp22,null());
		}
	}
	else{
		HX_STACK_LINE(193)
		int tmp8 = hr;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		int tmp9 = (hl + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		if ((tmp10)){
			HX_STACK_LINE(194)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::haxe::ds::TreeNode _this = r->right;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(194)
				bool tmp12 = (_this == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				if ((tmp12)){
					HX_STACK_LINE(194)
					tmp11 = (int)0;
				}
				else{
					HX_STACK_LINE(194)
					tmp11 = _this->_height;
				}
			}
			HX_STACK_LINE(194)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::haxe::ds::TreeNode _this = r->left;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(194)
				bool tmp13 = (_this == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(194)
				if ((tmp13)){
					HX_STACK_LINE(194)
					tmp12 = (int)0;
				}
				else{
					HX_STACK_LINE(194)
					tmp12 = _this->_height;
				}
			}
			HX_STACK_LINE(194)
			bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(194)
			if ((tmp13)){
				HX_STACK_LINE(194)
				::haxe::ds::TreeNode tmp14 = ::haxe::ds::TreeNode_obj::__new(l,k,v,r->left,null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(194)
				Dynamic tmp15 = r->key;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(194)
				Dynamic tmp16 = r->value;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(194)
				::haxe::ds::TreeNode tmp17 = r->right;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(194)
				tmp7 = ::haxe::ds::TreeNode_obj::__new(tmp14,tmp15,tmp16,tmp17,null());
			}
			else{
				HX_STACK_LINE(195)
				::haxe::ds::TreeNode tmp14 = l;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(195)
				Dynamic tmp15 = k;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(195)
				Dynamic tmp16 = v;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(195)
				::haxe::ds::TreeNode tmp17 = r->left->left;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(195)
				::haxe::ds::TreeNode tmp18 = ::haxe::ds::TreeNode_obj::__new(tmp14,tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(195)
				Dynamic tmp19 = r->left->key;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(195)
				Dynamic tmp20 = r->left->value;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(195)
				::haxe::ds::TreeNode tmp21 = r->left->right;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(195)
				Dynamic tmp22 = r->key;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(195)
				Dynamic tmp23 = r->value;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(195)
				::haxe::ds::TreeNode tmp24 = r->right;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(195)
				::haxe::ds::TreeNode tmp25 = ::haxe::ds::TreeNode_obj::__new(tmp21,tmp22,tmp23,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(195)
				tmp7 = ::haxe::ds::TreeNode_obj::__new(tmp18,tmp19,tmp20,tmp25,null());
			}
		}
		else{
			HX_STACK_LINE(197)
			::haxe::ds::TreeNode tmp11 = l;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(197)
			Dynamic tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(197)
			Dynamic tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(197)
			::haxe::ds::TreeNode tmp14 = r;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(197)
			bool tmp15 = (hl > hr);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(197)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(197)
			if ((tmp15)){
				HX_STACK_LINE(197)
				tmp16 = hl;
			}
			else{
				HX_STACK_LINE(197)
				tmp16 = hr;
			}
			HX_STACK_LINE(197)
			int tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(197)
			tmp7 = ::haxe::ds::TreeNode_obj::__new(tmp11,tmp12,tmp13,tmp14,tmp17);
		}
	}
	HX_STACK_LINE(190)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC4(BalancedTree_obj,balance,return )

int BalancedTree_obj::compare( Dynamic k1,Dynamic k2){
	HX_STACK_FRAME("haxe.ds.BalancedTree","compare",0x57d05c94,"haxe.ds.BalancedTree.compare","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",201,0x9022da28)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k1,"k1")
	HX_STACK_ARG(k2,"k2")
	HX_STACK_LINE(202)
	Dynamic tmp = k1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Dynamic tmp1 = k2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	int tmp2 = ::Reflect_obj::compare(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,compare,return )


BalancedTree_obj::BalancedTree_obj()
{
}

void BalancedTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void BalancedTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

Dynamic BalancedTree_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLoop") ) { return setLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::haxe::ds::TreeNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::TreeNode*/ ,(int)offsetof(BalancedTree_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("setLoop","\x26","\xe7","\x3b","\x0d"),
	HX_HCSTRING("balance","\x1c","\x9d","\x8d","\x23"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedTree_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedTree_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedTree_obj::__mClass;

void BalancedTree_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.BalancedTree","\x5d","\x9d","\x3e","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedTree_obj >;
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
