#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace util{

Void FlxPool_flixel_math_FlxVector_obj::__construct(::hx::Class classObj)
{
HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","new",0xff321b68,"flixel.util.FlxPool_flixel_math_FlxVector.new","flixel/util/FlxPool.hx",12,0xdd4de86a)
HX_STACK_THIS(this)
HX_STACK_ARG(classObj,"classObj")
{
	HX_STACK_LINE(23)
	this->_count = (int)0;
	HX_STACK_LINE(16)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	this->_class = classObj;
}
;
	return null();
}

//FlxPool_flixel_math_FlxVector_obj::~FlxPool_flixel_math_FlxVector_obj() { }

Dynamic FlxPool_flixel_math_FlxVector_obj::__CreateEmpty() { return  new FlxPool_flixel_math_FlxVector_obj; }
hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > FlxPool_flixel_math_FlxVector_obj::__new(::hx::Class classObj)
{  hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > _result_ = new FlxPool_flixel_math_FlxVector_obj();
	_result_->__construct(classObj);
	return _result_;}

Dynamic FlxPool_flixel_math_FlxVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPool_flixel_math_FlxVector_obj > _result_ = new FlxPool_flixel_math_FlxVector_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxPool_flixel_math_FlxVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxPool_obj)) return operator ::flixel::util::IFlxPool_obj *();
	return super::__ToInterface(inType);
}

FlxPool_flixel_math_FlxVector_obj::operator ::flixel::util::IFlxPool_obj *()
	{ return new ::flixel::util::IFlxPool_delegate_< FlxPool_flixel_math_FlxVector_obj >(this); }
::flixel::math::FlxVector FlxPool_flixel_math_FlxVector_obj::get( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","get",0xff2ccb9e,"flixel.util.FlxPool_flixel_math_FlxVector.get","flixel/util/FlxPool.hx",31,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	int tmp = this->_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(34)
		::hx::Class tmp2 = this->_class;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::flixel::math::FlxVector tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		return tmp3;
	}
	HX_STACK_LINE(36)
	int tmp2 = --(this->_count);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	::flixel::math::FlxVector tmp3 = this->_pool->__get(tmp2).StaticCast< ::flixel::math::FlxVector >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,get,return )

Void FlxPool_flixel_math_FlxVector_obj::put( ::flixel::math::FlxVector obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","put",0xff33add7,"flixel.util.FlxPool_flixel_math_FlxVector.put","flixel/util/FlxPool.hx",40,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(42)
		bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(44)
			::flixel::math::FlxVector tmp1 = obj;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			int tmp2 = this->_pool->indexOf(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(46)
			int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			if ((tmp6)){
				HX_STACK_LINE(46)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(46)
				int tmp9 = this->_count;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				tmp7 = (tmp8 >= tmp10);
			}
			else{
				HX_STACK_LINE(46)
				tmp7 = true;
			}
			HX_STACK_LINE(46)
			if ((tmp7)){
				HX_STACK_LINE(48)
				obj->destroy();
				HX_STACK_LINE(49)
				int tmp8 = (this->_count)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				::flixel::math::FlxVector tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				this->_pool[tmp8] = tmp9;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,put,(void))

Void FlxPool_flixel_math_FlxVector_obj::putUnsafe( ::flixel::math::FlxVector obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","putUnsafe",0x73f1215d,"flixel.util.FlxPool_flixel_math_FlxVector.putUnsafe","flixel/util/FlxPool.hx",55,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(56)
		bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		if ((tmp)){
			HX_STACK_LINE(58)
			obj->destroy();
			HX_STACK_LINE(59)
			int tmp1 = (this->_count)++;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			::flixel::math::FlxVector tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			this->_pool[tmp1] = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,putUnsafe,(void))

Void FlxPool_flixel_math_FlxVector_obj::preAllocate( int numObjects){
{
		HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","preAllocate",0x047fdd08,"flixel.util.FlxPool_flixel_math_FlxVector.preAllocate","flixel/util/FlxPool.hx",65,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numObjects,"numObjects")
		HX_STACK_LINE(65)
		while((true)){
			HX_STACK_LINE(65)
			int tmp = (numObjects)--;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(65)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			if ((tmp2)){
				HX_STACK_LINE(65)
				break;
			}
			HX_STACK_LINE(67)
			int tmp3 = (this->_count)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			::hx::Class tmp4 = this->_class;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			::flixel::math::FlxVector tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			this->_pool[tmp3] = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_math_FlxVector_obj,preAllocate,(void))

Array< ::Dynamic > FlxPool_flixel_math_FlxVector_obj::clear( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","clear",0x73a88e95,"flixel.util.FlxPool_flixel_math_FlxVector.clear","flixel/util/FlxPool.hx",72,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	this->_count = (int)0;
	HX_STACK_LINE(74)
	Array< ::Dynamic > oldPool = this->_pool;		HX_STACK_VAR(oldPool,"oldPool");
	HX_STACK_LINE(75)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(76)
	return oldPool;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,clear,return )

int FlxPool_flixel_math_FlxVector_obj::get_length( ){
	HX_STACK_FRAME("flixel.util.FlxPool_flixel_math_FlxVector","get_length",0xd973aaa7,"flixel.util.FlxPool_flixel_math_FlxVector.get_length","flixel/util/FlxPool.hx",80,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	int tmp = this->_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_math_FlxVector_obj,get_length,return )


FlxPool_flixel_math_FlxVector_obj::FlxPool_flixel_math_FlxVector_obj()
{
}

void FlxPool_flixel_math_FlxVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool_flixel_math_FlxVector);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_END_CLASS();
}

void FlxPool_flixel_math_FlxVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_count,"_count");
}

Dynamic FlxPool_flixel_math_FlxVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return putUnsafe_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return preAllocate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPool_flixel_math_FlxVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_flixel_math_FlxVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"));
	outFields->push(HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"));
	outFields->push(HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_pool),HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_class),HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44")},
	{hx::fsInt,(int)offsetof(FlxPool_flixel_math_FlxVector_obj,_count),HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"),
	HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putUnsafe","\x55","\xe0","\x1c","\xe4"),
	HX_HCSTRING("preAllocate","\x00","\x4a","\x53","\xa6"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPool_flixel_math_FlxVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_flixel_math_FlxVector_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPool_flixel_math_FlxVector_obj::__mClass;

void FlxPool_flixel_math_FlxVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPool_flixel_math_FlxVector","\x76","\x87","\xde","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPool_flixel_math_FlxVector_obj >;
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
} // end namespace util
