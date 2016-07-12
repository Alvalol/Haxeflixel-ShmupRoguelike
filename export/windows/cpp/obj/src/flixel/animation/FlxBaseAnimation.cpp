#include <hxcpp.h>

#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace animation{

Void FlxBaseAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,::String Name)
{
HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","new",0x893a9def,"flixel.animation.FlxBaseAnimation.new","flixel/animation/FlxBaseAnimation.hx",9,0x062a9a5f)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
HX_STACK_ARG(Name,"Name")
{
	HX_STACK_LINE(25)
	this->curIndex = (int)0;
	HX_STACK_LINE(41)
	this->parent = Parent;
	HX_STACK_LINE(42)
	this->name = Name;
}
;
	return null();
}

//FlxBaseAnimation_obj::~FlxBaseAnimation_obj() { }

Dynamic FlxBaseAnimation_obj::__CreateEmpty() { return  new FlxBaseAnimation_obj; }
hx::ObjectPtr< FlxBaseAnimation_obj > FlxBaseAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,::String Name)
{  hx::ObjectPtr< FlxBaseAnimation_obj > _result_ = new FlxBaseAnimation_obj();
	_result_->__construct(Parent,Name);
	return _result_;}

Dynamic FlxBaseAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseAnimation_obj > _result_ = new FlxBaseAnimation_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FlxBaseAnimation_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxBaseAnimation_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxBaseAnimation_obj >(this); }
int FlxBaseAnimation_obj::set_curIndex( int Value){
	HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","set_curIndex",0x05c5f580,"flixel.animation.FlxBaseAnimation.set_curIndex","flixel/animation/FlxBaseAnimation.hx",28,0x062a9a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(29)
	this->curIndex = Value;
	HX_STACK_LINE(31)
	::flixel::animation::FlxAnimationController tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	if ((tmp1)){
		HX_STACK_LINE(31)
		::flixel::animation::FlxAnimationController tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		::flixel::animation::FlxAnimationController tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		::flixel::animation::FlxAnimation tmp5 = tmp4->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		tmp2 = (tmp5 == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(31)
		tmp2 = false;
	}
	HX_STACK_LINE(31)
	if ((tmp2)){
		HX_STACK_LINE(33)
		::flixel::animation::FlxAnimationController tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		int tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		tmp3->set_frameIndex(tmp4);
	}
	HX_STACK_LINE(36)
	int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,set_curIndex,return )

Void FlxBaseAnimation_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","destroy",0x93a46e09,"flixel.animation.FlxBaseAnimation.destroy","flixel/animation/FlxBaseAnimation.hx",46,0x062a9a5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->parent = null();
		HX_STACK_LINE(48)
		this->name = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseAnimation_obj,destroy,(void))

Void FlxBaseAnimation_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","update",0xf1225bda,"flixel.animation.FlxBaseAnimation.update","flixel/animation/FlxBaseAnimation.hx",51,0x062a9a5f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,update,(void))

::flixel::animation::FlxBaseAnimation FlxBaseAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_FRAME("flixel.animation.FlxBaseAnimation","clone",0xf2c3a2ac,"flixel.animation.FlxBaseAnimation.clone","flixel/animation/FlxBaseAnimation.hx",55,0x062a9a5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(55)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,clone,return )


FlxBaseAnimation_obj::FlxBaseAnimation_obj()
{
}

void FlxBaseAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseAnimation);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(curIndex,"curIndex");
	HX_MARK_END_CLASS();
}

void FlxBaseAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(curIndex,"curIndex");
}

Dynamic FlxBaseAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { return curIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return set_curIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { if (inCallProp == hx::paccAlways) return set_curIndex(inValue);curIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("curIndex","\x72","\x95","\xc2","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::animation::FlxAnimationController*/ ,(int)offsetof(FlxBaseAnimation_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsString,(int)offsetof(FlxBaseAnimation_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(FlxBaseAnimation_obj,curIndex),HX_HCSTRING("curIndex","\x72","\x95","\xc2","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("curIndex","\x72","\x95","\xc2","\x05"),
	HX_HCSTRING("set_curIndex","\xef","\x6c","\xd5","\xcf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseAnimation_obj::__mClass;

void FlxBaseAnimation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxBaseAnimation","\x7d","\x7a","\x23","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseAnimation_obj >;
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

} // end namespace flixel
} // end namespace animation
