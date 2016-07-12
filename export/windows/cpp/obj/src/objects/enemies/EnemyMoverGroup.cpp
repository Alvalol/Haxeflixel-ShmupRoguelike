#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyMover
#include <objects/enemies/EnemyMover.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyMoverGroup
#include <objects/enemies/EnemyMoverGroup.h>
#endif
namespace objects{
namespace enemies{

Void EnemyMoverGroup_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.EnemyMoverGroup","new",0x907c1916,"objects.enemies.EnemyMoverGroup.new","objects/enemies/EnemyMoverGroup.hx",8,0x6639ec9c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	this->patterns = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1)).Add(Array_obj< int >::__new().Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1));
	HX_STACK_LINE(12)
	this->sep = (int)0;
	HX_STACK_LINE(11)
	this->chainedGroupSize = (int)4;
	HX_STACK_LINE(18)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(19)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->makeGroup(tmp,tmp1);
}
;
	return null();
}

//EnemyMoverGroup_obj::~EnemyMoverGroup_obj() { }

Dynamic EnemyMoverGroup_obj::__CreateEmpty() { return  new EnemyMoverGroup_obj; }
hx::ObjectPtr< EnemyMoverGroup_obj > EnemyMoverGroup_obj::__new(Float x,Float y)
{  hx::ObjectPtr< EnemyMoverGroup_obj > _result_ = new EnemyMoverGroup_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic EnemyMoverGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyMoverGroup_obj > _result_ = new EnemyMoverGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void EnemyMoverGroup_obj::makeGroup( Float x,Float y){
{
		HX_STACK_FRAME("objects.enemies.EnemyMoverGroup","makeGroup",0x255ddfa7,"objects.enemies.EnemyMoverGroup.makeGroup","objects/enemies/EnemyMoverGroup.hx",23,0x6639ec9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(24)
		::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->chainedGroup = tmp;
		HX_STACK_LINE(25)
		::flixel::math::FlxRandom tmp1 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		Array< int > chosenPattern = tmp1->getObject_Array_Int(this->patterns,null(),null(),null());		HX_STACK_VAR(chosenPattern,"chosenPattern");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(27)
			int tmp2 = this->chainedGroupSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(27)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				if ((tmp4)){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(27)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(29)
				Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(29)
				int tmp7 = this->sep;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(29)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(29)
				Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				::objects::enemies::EnemyMover tmp10 = ::objects::enemies::EnemyMover_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				::objects::enemies::EnemyMover newMover = tmp10;		HX_STACK_VAR(newMover,"newMover");
				HX_STACK_LINE(30)
				int tmp11 = chosenPattern->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				newMover->factor = tmp11;
				HX_STACK_LINE(31)
				::flixel::group::FlxTypedGroup tmp12 = this->chainedGroup;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(31)
				::objects::enemies::EnemyMover tmp13 = newMover;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(31)
				tmp12->add(tmp13);
				HX_STACK_LINE(32)
				hx::AddEq(this->sep,(int)6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EnemyMoverGroup_obj,makeGroup,(void))

int EnemyMoverGroup_obj::sepMod;


EnemyMoverGroup_obj::EnemyMoverGroup_obj()
{
}

void EnemyMoverGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnemyMoverGroup);
	HX_MARK_MEMBER_NAME(chainedGroup,"chainedGroup");
	HX_MARK_MEMBER_NAME(chainedGroupSize,"chainedGroupSize");
	HX_MARK_MEMBER_NAME(sep,"sep");
	HX_MARK_MEMBER_NAME(patterns,"patterns");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnemyMoverGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(chainedGroup,"chainedGroup");
	HX_VISIT_MEMBER_NAME(chainedGroupSize,"chainedGroupSize");
	HX_VISIT_MEMBER_NAME(sep,"sep");
	HX_VISIT_MEMBER_NAME(patterns,"patterns");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnemyMoverGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sep") ) { return sep; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"patterns") ) { return patterns; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeGroup") ) { return makeGroup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chainedGroup") ) { return chainedGroup; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"chainedGroupSize") ) { return chainedGroupSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyMoverGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sep") ) { sep=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"patterns") ) { patterns=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"chainedGroup") ) { chainedGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"chainedGroupSize") ) { chainedGroupSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyMoverGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("chainedGroup","\x7f","\x8f","\x15","\x4d"));
	outFields->push(HX_HCSTRING("chainedGroupSize","\xe0","\x87","\x99","\x9f"));
	outFields->push(HX_HCSTRING("sep","\x9e","\x9b","\x57","\x00"));
	outFields->push(HX_HCSTRING("patterns","\x23","\x80","\xae","\x36"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(EnemyMoverGroup_obj,chainedGroup),HX_HCSTRING("chainedGroup","\x7f","\x8f","\x15","\x4d")},
	{hx::fsInt,(int)offsetof(EnemyMoverGroup_obj,chainedGroupSize),HX_HCSTRING("chainedGroupSize","\xe0","\x87","\x99","\x9f")},
	{hx::fsInt,(int)offsetof(EnemyMoverGroup_obj,sep),HX_HCSTRING("sep","\x9e","\x9b","\x57","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(EnemyMoverGroup_obj,patterns),HX_HCSTRING("patterns","\x23","\x80","\xae","\x36")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &EnemyMoverGroup_obj::sepMod,HX_HCSTRING("sepMod","\xc4","\xc9","\xc5","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("chainedGroup","\x7f","\x8f","\x15","\x4d"),
	HX_HCSTRING("chainedGroupSize","\xe0","\x87","\x99","\x9f"),
	HX_HCSTRING("sep","\x9e","\x9b","\x57","\x00"),
	HX_HCSTRING("patterns","\x23","\x80","\xae","\x36"),
	HX_HCSTRING("makeGroup","\x71","\x2a","\x8d","\x6d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyMoverGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EnemyMoverGroup_obj::sepMod,"sepMod");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyMoverGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnemyMoverGroup_obj::sepMod,"sepMod");
};

#endif

hx::Class EnemyMoverGroup_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sepMod","\xc4","\xc9","\xc5","\x6c"),
	::String(null()) };

void EnemyMoverGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.EnemyMoverGroup","\x24","\x96","\x50","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyMoverGroup_obj >;
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

void EnemyMoverGroup_obj::__boot()
{
	sepMod= (int)6;
}

} // end namespace objects
} // end namespace enemies
