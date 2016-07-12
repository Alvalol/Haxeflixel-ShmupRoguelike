#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
namespace cpp{

Void Lib_obj::__construct()
{
	return null();
}

//Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lib_obj::load( ::String lib,::String prim,int nargs){
	HX_STACK_FRAME("cpp.Lib","load",0xd2b2dcba,"cpp.Lib.load","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",30,0xfc8f8c7e)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(prim,"prim")
	HX_STACK_ARG(nargs,"nargs")
	HX_STACK_LINE(34)
	Dynamic tmp = ::__loadprim(lib,prim,nargs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

Dynamic Lib_obj::loadLazy( ::String lib,::String prim,int nargs){
	HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",65,0xfc8f8c7e)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(prim,"prim")
	HX_STACK_ARG(nargs,"nargs")
	HX_STACK_LINE(66)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(67)
		Dynamic tmp = ::__loadprim(lib,prim,nargs);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		return tmp;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(69)
				int tmp = nargs;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(69)
				switch( (int)(tmp)){
					case (int)0: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 0; }
						Void run(){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",70,0xfc8f8c7e)
							{
								HX_STACK_LINE(70)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(70)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(70)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)2: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 2; }
						Void run(Dynamic _1,Dynamic _2){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",71,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							{
								HX_STACK_LINE(71)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(71)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC2((void))

						HX_STACK_LINE(71)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)3: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 3; }
						Void run(Dynamic _1,Dynamic _2,Dynamic _3){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",72,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							HX_STACK_ARG(_3,"_3")
							{
								HX_STACK_LINE(72)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(72)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC3((void))

						HX_STACK_LINE(72)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)4: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 4; }
						Void run(Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",73,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							HX_STACK_ARG(_3,"_3")
							HX_STACK_ARG(_4,"_4")
							{
								HX_STACK_LINE(73)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC4((void))

						HX_STACK_LINE(73)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)5: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 5; }
						Void run(Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4,Dynamic _5){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",74,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							HX_STACK_ARG(_3,"_3")
							HX_STACK_ARG(_4,"_4")
							HX_STACK_ARG(_5,"_5")
							{
								HX_STACK_LINE(74)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(74)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC5((void))

						HX_STACK_LINE(74)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					default: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 1; }
						Void run(Dynamic _1){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",75,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							{
								HX_STACK_LINE(75)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(75)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(75)
						return  Dynamic(new _Function_3_1(e));
					}
				}
			}
		}
	}
	HX_STACK_LINE(78)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,loadLazy,return )


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadLazy") ) { outValue = loadLazy_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadLazy","\xba","\xe1","\x4c","\xb8"),
	::String(null()) };

void Lib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.Lib","\x5a","\x26","\x48","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
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

} // end namespace cpp
