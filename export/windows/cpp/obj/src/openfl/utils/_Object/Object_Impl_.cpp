#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_lang_Iterable
#include <haxe/lang/Iterable.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif
namespace openfl{
namespace utils{
namespace _Object{

Void Object_Impl__obj::__construct()
{
	return null();
}

//Object_Impl__obj::~Object_Impl__obj() { }

Dynamic Object_Impl__obj::__CreateEmpty() { return  new Object_Impl__obj; }
hx::ObjectPtr< Object_Impl__obj > Object_Impl__obj::__new()
{  hx::ObjectPtr< Object_Impl__obj > _result_ = new Object_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Object_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object_Impl__obj > _result_ = new Object_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Object_Impl__obj::_new( ){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","_new",0x3180f425,"openfl.utils._Object.Object_Impl_._new","openfl/utils/Object.hx",9,0xcbd6e8e2)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/utils/Object.hx",9,0xcbd6e8e2)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(9)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Object_Impl__obj,_new,return )

bool Object_Impl__obj::hasOwnProperty( Dynamic this1,::String name){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","hasOwnProperty",0xff2b1b45,"openfl.utils._Object.Object_Impl_.hasOwnProperty","openfl/utils/Object.hx",14,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(16)
	bool tmp = (this1 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	if ((tmp)){
		HX_STACK_LINE(16)
		Dynamic tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		Dynamic tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		::String tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		tmp1 = ::Reflect_obj::hasField(tmp4,tmp5);
	}
	else{
		HX_STACK_LINE(16)
		tmp1 = false;
	}
	HX_STACK_LINE(16)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,hasOwnProperty,return )

bool Object_Impl__obj::isPrototypeOf( Dynamic this1,::hx::Class theClass){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","isPrototypeOf",0xd2a05c4b,"openfl.utils._Object.Object_Impl_.isPrototypeOf","openfl/utils/Object.hx",21,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(theClass,"theClass")
	HX_STACK_LINE(23)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::hx::Class c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(25)
	while((true)){
		HX_STACK_LINE(25)
		bool tmp2 = (c != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		if ((tmp3)){
			HX_STACK_LINE(25)
			break;
		}
		HX_STACK_LINE(27)
		bool tmp4 = (c == theClass);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		if ((tmp4)){
			HX_STACK_LINE(27)
			return true;
		}
		HX_STACK_LINE(28)
		::hx::Class tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		::hx::Class tmp6 = ::Type_obj::getSuperClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		c = tmp6;
	}
	HX_STACK_LINE(32)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,isPrototypeOf,return )

Dynamic Object_Impl__obj::iterator( Dynamic this1){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","iterator",0x99ccdab2,"openfl.utils._Object.Object_Impl_.iterator","openfl/utils/Object.hx",37,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(39)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Array< ::String > fields = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(40)
	bool tmp1 = (fields == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	if ((tmp1)){
		HX_STACK_LINE(40)
		fields = Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(41)
	Dynamic tmp2 = fields->iterator();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,iterator,return )

bool Object_Impl__obj::propertyIsEnumerable( Dynamic this1,::String name){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","propertyIsEnumerable",0xddba318b,"openfl.utils._Object.Object_Impl_.propertyIsEnumerable","openfl/utils/Object.hx",46,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(48)
	bool tmp = (this1 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	if ((tmp1)){
		HX_STACK_LINE(48)
		Dynamic tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		Dynamic tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		::String tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		Dynamic tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		::String tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		tmp2 = ::Reflect_obj::hasField(tmp7,tmp8);
	}
	else{
		HX_STACK_LINE(48)
		tmp2 = false;
	}
	HX_STACK_LINE(48)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	if ((tmp2)){
		HX_STACK_LINE(48)
		Dynamic tmp4 = this1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		Dynamic tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		::String tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		tmp3 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxe::lang::Iterable >());
	}
	else{
		HX_STACK_LINE(48)
		tmp3 = false;
	}
	HX_STACK_LINE(48)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,propertyIsEnumerable,return )

::String Object_Impl__obj::toLocaleString( Dynamic this1){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","toLocaleString",0x947c7aea,"openfl.utils._Object.Object_Impl_.toLocaleString","openfl/utils/Object.hx",53,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(55)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,toLocaleString,return )

::String Object_Impl__obj::toString( Dynamic this1){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","toString",0x3ea16170,"openfl.utils._Object.Object_Impl_.toString","openfl/utils/Object.hx",60,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(62)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,toString,return )

Dynamic Object_Impl__obj::valueOf( Dynamic this1){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","valueOf",0xaf96f6a4,"openfl.utils._Object.Object_Impl_.valueOf","openfl/utils/Object.hx",67,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(69)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Object_Impl__obj,valueOf,return )

Dynamic Object_Impl__obj::__get( Dynamic this1,::String key){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","__get",0x156bee32,"openfl.utils._Object.Object_Impl_.__get","openfl/utils/Object.hx",74,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(76)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Object_Impl__obj,__get,return )

Dynamic Object_Impl__obj::__set( Dynamic this1,::String key,Dynamic value){
	HX_STACK_FRAME("openfl.utils._Object.Object_Impl_","__set",0x1575093e,"openfl.utils._Object.Object_Impl_.__set","openfl/utils/Object.hx",81,0xcbd6e8e2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	::Reflect_obj::setField(tmp,tmp1,tmp2);
	HX_STACK_LINE(84)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Object_Impl__obj,__set,return )


Object_Impl__obj::Object_Impl__obj()
{
}

bool Object_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { outValue = __get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__set") ) { outValue = __set_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"valueOf") ) { outValue = valueOf_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isPrototypeOf") ) { outValue = isPrototypeOf_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasOwnProperty") ) { outValue = hasOwnProperty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toLocaleString") ) { outValue = toLocaleString_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"propertyIsEnumerable") ) { outValue = propertyIsEnumerable_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Object_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("hasOwnProperty","\x81","\x9f","\x3d","\x5e"),
	HX_HCSTRING("isPrototypeOf","\x8f","\x33","\x2a","\xcc"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("propertyIsEnumerable","\xc7","\x8a","\x8f","\xa6"),
	HX_HCSTRING("toLocaleString","\x26","\xff","\x8e","\xf3"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("valueOf","\xe8","\x42","\x6c","\x70"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null()) };

void Object_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._Object.Object_Impl_","\x2a","\xf8","\xc6","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Object_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Object_Impl__obj >;
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

} // end namespace openfl
} // end namespace utils
} // end namespace _Object
