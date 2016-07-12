#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
namespace flixel{
namespace util{

Void FlxPool_obj::__construct(::hx::Class classObj)
{
HX_STACK_FRAME("flixel.util.FlxPool","new",0x022eb226,"flixel.util.FlxPool.new","flixel/util/FlxPool.hx",12,0xdd4de86a)
HX_STACK_THIS(this)
HX_STACK_ARG(classObj,"classObj")
{
	HX_STACK_LINE(23)
	this->_count = (int)0;
	HX_STACK_LINE(16)
	this->_pool = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(27)
	this->_class = classObj;
}
;
	return null();
}

//FlxPool_obj::~FlxPool_obj() { }

Dynamic FlxPool_obj::__CreateEmpty() { return  new FlxPool_obj; }
hx::ObjectPtr< FlxPool_obj > FlxPool_obj::__new(::hx::Class classObj)
{  hx::ObjectPtr< FlxPool_obj > _result_ = new FlxPool_obj();
	_result_->__construct(classObj);
	return _result_;}

Dynamic FlxPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPool_obj > _result_ = new FlxPool_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxPool_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxPool_obj)) return operator ::flixel::util::IFlxPool_obj *();
	return super::__ToInterface(inType);
}

FlxPool_obj::operator ::flixel::util::IFlxPool_obj *()
	{ return new ::flixel::util::IFlxPool_delegate_< FlxPool_obj >(this); }
Dynamic FlxPool_obj::get( ){
	HX_STACK_FRAME("flixel.util.FlxPool","get",0x0229625c,"flixel.util.FlxPool.get","flixel/util/FlxPool.hx",31,0xdd4de86a)
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
		Dynamic tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		return tmp3;
	}
	HX_STACK_LINE(36)
	int tmp2 = --(this->_count);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	Dynamic tmp3 = this->_pool->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,get,return )

Void FlxPool_obj::put( Dynamic obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool","put",0x02304495,"flixel.util.FlxPool.put","flixel/util/FlxPool.hx",40,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(42)
		bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(44)
			Dynamic tmp1 = obj;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			int tmp2 = this->_pool->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
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
				obj->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
				HX_STACK_LINE(49)
				int tmp8 = (this->_count)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				Dynamic tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				hx::IndexRef((this->_pool).mPtr,tmp8) = tmp9;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,put,(void))

Void FlxPool_obj::putUnsafe( Dynamic obj){
{
		HX_STACK_FRAME("flixel.util.FlxPool","putUnsafe",0x4c705a9b,"flixel.util.FlxPool.putUnsafe","flixel/util/FlxPool.hx",55,0xdd4de86a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(56)
		bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		if ((tmp)){
			HX_STACK_LINE(58)
			obj->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(59)
			int tmp1 = (this->_count)++;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			Dynamic tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			hx::IndexRef((this->_pool).mPtr,tmp1) = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,putUnsafe,(void))

Void FlxPool_obj::preAllocate( int numObjects){
{
		HX_STACK_FRAME("flixel.util.FlxPool","preAllocate",0x662e61c6,"flixel.util.FlxPool.preAllocate","flixel/util/FlxPool.hx",65,0xdd4de86a)
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
			Dynamic tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			hx::IndexRef((this->_pool).mPtr,tmp3) = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,preAllocate,(void))

cpp::ArrayBase FlxPool_obj::clear( ){
	HX_STACK_FRAME("flixel.util.FlxPool","clear",0xa006d0d3,"flixel.util.FlxPool.clear","flixel/util/FlxPool.hx",72,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	this->_count = (int)0;
	HX_STACK_LINE(74)
	cpp::ArrayBase oldPool = this->_pool;		HX_STACK_VAR(oldPool,"oldPool");
	HX_STACK_LINE(75)
	this->_pool = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(76)
	return oldPool;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,clear,return )

int FlxPool_obj::get_length( ){
	HX_STACK_FRAME("flixel.util.FlxPool","get_length",0x704687a9,"flixel.util.FlxPool.get_length","flixel/util/FlxPool.hx",80,0xdd4de86a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	int tmp = this->_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,get_length,return )


FlxPool_obj::FlxPool_obj()
{
}

void FlxPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_END_CLASS();
}

void FlxPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_count,"_count");
}

Dynamic FlxPool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic FlxPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"));
	outFields->push(HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"));
	outFields->push(HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxPool_obj,_pool),HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxPool_obj,_class),HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44")},
	{hx::fsInt,(int)offsetof(FlxPool_obj,_count),HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46")},
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
	HX_MARK_MEMBER_NAME(FlxPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPool_obj::__mClass;

void FlxPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPool","\x34","\x67","\x5d","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPool_obj >;
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
