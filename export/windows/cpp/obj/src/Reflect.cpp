#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

Void Reflect_obj::__construct()
{
	return null();
}

//Reflect_obj::~Reflect_obj() { }

Dynamic Reflect_obj::__CreateEmpty() { return  new Reflect_obj; }
hx::ObjectPtr< Reflect_obj > Reflect_obj::__new()
{  hx::ObjectPtr< Reflect_obj > _result_ = new Reflect_obj();
	_result_->__construct();
	return _result_;}

Dynamic Reflect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reflect_obj > _result_ = new Reflect_obj();
	_result_->__construct();
	return _result_;}

bool Reflect_obj::hasField( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","hasField",0xef8c2571,"Reflect.hasField","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",24,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(25)
	bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(25)
		tmp1 = o->__HasField(field);
	}
	else{
		HX_STACK_LINE(25)
		tmp1 = false;
	}
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

Dynamic Reflect_obj::field( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","field",0x54b04da9,"Reflect.field","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",28,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(29)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(29)
		tmp1 = o->__Field(field,hx::paccNever);
	}
	HX_STACK_LINE(29)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

Void Reflect_obj::setField( Dynamic o,::String field,Dynamic value){
{
		HX_STACK_FRAME("Reflect","setField",0x71684429,"Reflect.setField","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",32,0x487b3827)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(33)
		bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(34)
			o->__SetField(field,value,hx::paccNever);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setField,(void))

Dynamic Reflect_obj::getProperty( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","getProperty",0x632ca13a,"Reflect.getProperty","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",37,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(38)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp)){
		HX_STACK_LINE(38)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(38)
		tmp1 = o->__Field(field,hx::paccAlways);
	}
	HX_STACK_LINE(38)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,getProperty,return )

Void Reflect_obj::setProperty( Dynamic o,::String field,Dynamic value){
{
		HX_STACK_FRAME("Reflect","setProperty",0x6d99a846,"Reflect.setProperty","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",41,0x487b3827)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(42)
		bool tmp = (o != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(43)
			o->__SetField(field,value,hx::paccAlways);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setProperty,(void))

Dynamic Reflect_obj::callMethod( Dynamic o,Dynamic func,cpp::ArrayBase args){
	HX_STACK_FRAME("Reflect","callMethod",0xb49e52d0,"Reflect.callMethod","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",46,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(47)
	bool tmp = (func != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp)){
		HX_STACK_LINE(47)
		Dynamic tmp2 = func->__GetType();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		Dynamic tmp4 = ::vtString;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		tmp1 = (tmp3 == tmp4);
	}
	else{
		HX_STACK_LINE(47)
		tmp1 = false;
	}
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(48)
		Dynamic tmp2 = o->__Field(func,hx::paccDynamic);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		func = tmp2;
	}
	HX_STACK_LINE(49)
	Dynamic tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	func->__SetThis(tmp2);
	HX_STACK_LINE(50)
	Dynamic tmp3 = func->__Run(args);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,callMethod,return )

Array< ::String > Reflect_obj::fields( Dynamic o){
	HX_STACK_FRAME("Reflect","fields",0xc593a6aa,"Reflect.fields","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",53,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(54)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	if ((tmp)){
		HX_STACK_LINE(54)
		return Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(55)
	Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(56)
	o->__GetFields(a);
	HX_STACK_LINE(57)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,fields,return )

bool Reflect_obj::isFunction( Dynamic f){
	HX_STACK_FRAME("Reflect","isFunction",0x0f1541d3,"Reflect.isFunction","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",60,0x487b3827)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(61)
	bool tmp = (f != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp)){
		HX_STACK_LINE(61)
		Dynamic tmp2 = f->__GetType();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Dynamic tmp4 = ::vtFunction;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		tmp1 = (tmp3 == tmp4);
	}
	else{
		HX_STACK_LINE(61)
		tmp1 = false;
	}
	HX_STACK_LINE(61)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isFunction,return )

int Reflect_obj::compare( Dynamic a,Dynamic b){
	HX_STACK_FRAME("Reflect","compare",0xa2d92b54,"Reflect.compare","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",64,0x487b3827)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(65)
	bool tmp = (a == b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	if ((tmp)){
		HX_STACK_LINE(65)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(65)
		bool tmp2 = (a > b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(65)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(65)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(65)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compare,return )

bool Reflect_obj::compareMethods( Dynamic f1,Dynamic f2){
	HX_STACK_FRAME("Reflect","compareMethods",0x8b8ddd7e,"Reflect.compareMethods","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",68,0x487b3827)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(69)
	bool tmp = (f1 == f2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	if ((tmp)){
		HX_STACK_LINE(70)
		return true;
	}
	HX_STACK_LINE(71)
	Dynamic tmp1 = f1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = ::Reflect_obj::isFunction(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	if ((tmp5)){
		HX_STACK_LINE(71)
		Dynamic tmp7 = f2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		bool tmp9 = ::Reflect_obj::isFunction(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(71)
		tmp6 = !(tmp11);
	}
	else{
		HX_STACK_LINE(71)
		tmp6 = true;
	}
	HX_STACK_LINE(71)
	if ((tmp6)){
		HX_STACK_LINE(72)
		return false;
	}
	HX_STACK_LINE(73)
	bool tmp7 = ::__hxcpp_same_closure(f1,f2);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compareMethods,return )

bool Reflect_obj::isObject( Dynamic v){
	HX_STACK_FRAME("Reflect","isObject",0xd04960ba,"Reflect.isObject","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",76,0x487b3827)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(77)
	bool tmp = (v == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	if ((tmp)){
		HX_STACK_LINE(77)
		return false;
	}
	HX_STACK_LINE(78)
	Dynamic tmp1 = v->__GetType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	int t = tmp1;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(79)
	bool tmp2 = (t == ::vtObject);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	if ((tmp4)){
		HX_STACK_LINE(79)
		tmp5 = (t == ::vtClass);
	}
	else{
		HX_STACK_LINE(79)
		tmp5 = true;
	}
	HX_STACK_LINE(79)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(79)
	if ((tmp7)){
		HX_STACK_LINE(79)
		tmp8 = (t == ::vtString);
	}
	else{
		HX_STACK_LINE(79)
		tmp8 = true;
	}
	HX_STACK_LINE(79)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(79)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(79)
	if ((tmp9)){
		HX_STACK_LINE(80)
		tmp10 = (t == ::vtArray);
	}
	else{
		HX_STACK_LINE(79)
		tmp10 = true;
	}
	HX_STACK_LINE(79)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )

bool Reflect_obj::isEnumValue( Dynamic v){
	HX_STACK_FRAME("Reflect","isEnumValue",0x97884d95,"Reflect.isEnumValue","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",83,0x487b3827)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(84)
	bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(84)
		Dynamic tmp2 = v->__GetType();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Dynamic tmp4 = ::vtEnum;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		tmp1 = (tmp3 == tmp4);
	}
	else{
		HX_STACK_LINE(84)
		tmp1 = false;
	}
	HX_STACK_LINE(84)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isEnumValue,return )

bool Reflect_obj::deleteField( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","deleteField",0x21895ebe,"Reflect.deleteField","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",87,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(88)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(88)
		return false;
	}
	HX_STACK_LINE(89)
	bool tmp1 = ::__hxcpp_anon_remove(o,field);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,deleteField,return )


Reflect_obj::Reflect_obj()
{
}

bool Reflect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { outValue = field_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { outValue = fields_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { outValue = hasField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setField") ) { outValue = setField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isObject") ) { outValue = isObject_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMethod") ) { outValue = callMethod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFunction") ) { outValue = isFunction_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getProperty") ) { outValue = getProperty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setProperty") ) { outValue = setProperty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isEnumValue") ) { outValue = isEnumValue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteField") ) { outValue = deleteField_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compareMethods") ) { outValue = compareMethods_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#endif

hx::Class Reflect_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hasField","\x00","\xdf","\xeb","\x8c"),
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("setField","\xb8","\xfd","\xc7","\x0e"),
	HX_HCSTRING("getProperty","\x0b","\x0b","\x2c","\xd2"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("callMethod","\x1f","\xce","\x8a","\x34"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("isFunction","\x22","\xbd","\x01","\x8f"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("compareMethods","\x4d","\xac","\x7b","\x37"),
	HX_HCSTRING("isObject","\x49","\x1a","\xa9","\x6d"),
	HX_HCSTRING("isEnumValue","\x66","\xb7","\x87","\x06"),
	HX_HCSTRING("deleteField","\x8f","\xc8","\x88","\x90"),
	::String(null()) };

void Reflect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Reflect","\x1d","\xac","\x7a","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reflect_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Reflect_obj >;
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

