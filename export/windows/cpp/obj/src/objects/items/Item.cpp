#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace items{

Void Item_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.Item","new",0xaf4db42d,"objects.items.Item.new","objects/items/Item.hx",12,0xb3307561)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(15)
	this->_appeared = false;
	HX_STACK_LINE(20)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(21)
	this->loadGraphic(HX_HCSTRING("assets/images/items.png","\x30","\xc4","\x61","\x6a"),false,(int)8,(int)8,null(),null());
	HX_STACK_LINE(22)
	this->set_width((int)8);
	HX_STACK_LINE(23)
	this->set_height((int)8);
}
;
	return null();
}

//Item_obj::~Item_obj() { }

Dynamic Item_obj::__CreateEmpty() { return  new Item_obj; }
hx::ObjectPtr< Item_obj > Item_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Item_obj > _result_ = new Item_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Item_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Item_obj > _result_ = new Item_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Item_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.items.Item","update",0x4c9c405c,"objects.items.Item.update","objects/items/Item.hx",27,0xb3307561)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(28)
		this->basicChecks();
		HX_STACK_LINE(29)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this->super::update(tmp);
	}
return null();
}


Void Item_obj::basicChecks( ){
{
		HX_STACK_FRAME("objects.items.Item","basicChecks",0x3855e4c6,"objects.items.Item.basicChecks","objects/items/Item.hx",33,0xb3307561)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::objects::items::Item _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		if ((tmp6)){
			HX_STACK_LINE(34)
			Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(34)
				::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(34)
				::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				Float tmp15 = (_this->x + _this->width);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(34)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(34)
				tmp11 = tmp16;
			}
			HX_STACK_LINE(34)
			tmp7 = (tmp10 < tmp11);
		}
		else{
			HX_STACK_LINE(34)
			tmp7 = false;
		}
		HX_STACK_LINE(34)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		if ((tmp8)){
			HX_STACK_LINE(34)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(34)
			Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(34)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(34)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(34)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(34)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(34)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(34)
			::flixel::math::FlxRect tmp19 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(34)
			::flixel::math::FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(34)
			::flixel::math::FlxRect tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(34)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(34)
			tmp9 = (tmp18 > tmp22);
		}
		else{
			HX_STACK_LINE(34)
			tmp9 = false;
		}
		HX_STACK_LINE(34)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		if ((tmp9)){
			HX_STACK_LINE(34)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(34)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::flixel::math::FlxRect tmp14 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(34)
				::flixel::math::FlxRect tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(34)
				::flixel::math::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				Float tmp16 = (_this->y + _this->height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(34)
				tmp13 = tmp16;
			}
			HX_STACK_LINE(34)
			tmp10 = (tmp12 < tmp13);
		}
		else{
			HX_STACK_LINE(34)
			tmp10 = false;
		}
		HX_STACK_LINE(34)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		if ((tmp11)){
			HX_STACK_LINE(35)
			this->set_exists(false);
		}
		HX_STACK_LINE(38)
		bool tmp12 = this->isOnScreen(null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		if ((tmp12)){
			HX_STACK_LINE(39)
			bool tmp13 = this->_appeared;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			if ((tmp14)){
				HX_STACK_LINE(40)
				this->_appeared = true;
			}
		}
		else{
			HX_STACK_LINE(43)
			bool tmp13 = this->_appeared;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			if ((tmp13)){
				HX_STACK_LINE(44)
				this->kill();
			}
		}
		HX_STACK_LINE(47)
		bool tmp13 = this->_appeared;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		if ((tmp13)){
			HX_STACK_LINE(49)
			::flixel::util::FlxTimer tmp14 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(49)
			int tmp15 = this->lifespan;		HX_STACK_VAR(tmp15,"tmp15");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::objects::items::Item,_g)
			int __ArgCount() const { return 1; }
			Void run(::flixel::util::FlxTimer _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","objects/items/Item.hx",50,0xb3307561)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(51)
					::objects::items::Item tmp16 = _g;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(51)
					Dynamic tmp17 = _g->onTimedOut_dyn();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(51)
					::flixel::effects::FlxFlicker_obj::flicker(tmp16,(int)1,((Float)0.05),true,false,tmp17,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(49)
			tmp14->start(tmp15, Dynamic(new _Function_2_1(_g)),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Item_obj,basicChecks,(void))

Void Item_obj::onTimedOut( ::flixel::effects::FlxFlicker t){
{
		HX_STACK_FRAME("objects.items.Item","onTimedOut",0x7052b929,"objects.items.Item.onTimedOut","objects/items/Item.hx",58,0xb3307561)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(58)
		this->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Item_obj,onTimedOut,(void))

Void Item_obj::kill( ){
{
		HX_STACK_FRAME("objects.items.Item","kill",0xb2b74f31,"objects.items.Item.kill","objects/items/Item.hx",62,0xb3307561)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		tmp->items->remove(hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(64)
		this->super::kill();
	}
return null();
}


Void Item_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.Item","interact",0x8ce4c0c9,"objects.items.Item.interact","objects/items/Item.hx",68,0xb3307561)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(69)
		this->kill();
		HX_STACK_LINE(70)
		hx::AddEq(::Reg_obj::score,(int)50);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Item_obj,interact,(void))


Item_obj::Item_obj()
{
}

Dynamic Item_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_appeared") ) { return _appeared; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTimedOut") ) { return onTimedOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"basicChecks") ) { return basicChecks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Item_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_appeared") ) { _appeared=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Item_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54"));
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Item_obj,_appeared),HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54")},
	{hx::fsInt,(int)offsetof(Item_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54"),
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("basicChecks","\xf9","\xeb","\xef","\x6c"),
	HX_HCSTRING("onTimedOut","\x56","\xd9","\x94","\xd5"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Item_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Item_obj::__mClass,"__mClass");
};

#endif

hx::Class Item_obj::__mClass;

void Item_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.Item","\xbb","\x19","\xa3","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Item_obj >;
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

} // end namespace objects
} // end namespace items
