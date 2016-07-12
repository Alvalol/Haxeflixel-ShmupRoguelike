#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
namespace flixel{
namespace _system{

Void FlxVersion_obj::__construct(int Major,int Minor,int Patch)
{
HX_STACK_FRAME("flixel.system.FlxVersion","new",0xf87933e5,"flixel.system.FlxVersion.new","flixel/system/FlxVersion.hx",15,0x2361490b)
HX_STACK_THIS(this)
HX_STACK_ARG(Major,"Major")
HX_STACK_ARG(Minor,"Minor")
HX_STACK_ARG(Patch,"Patch")
{
	HX_STACK_LINE(16)
	this->major = Major;
	HX_STACK_LINE(17)
	this->minor = Minor;
	HX_STACK_LINE(18)
	this->patch = Patch;
}
;
	return null();
}

//FlxVersion_obj::~FlxVersion_obj() { }

Dynamic FlxVersion_obj::__CreateEmpty() { return  new FlxVersion_obj; }
hx::ObjectPtr< FlxVersion_obj > FlxVersion_obj::__new(int Major,int Minor,int Patch)
{  hx::ObjectPtr< FlxVersion_obj > _result_ = new FlxVersion_obj();
	_result_->__construct(Major,Minor,Patch);
	return _result_;}

Dynamic FlxVersion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVersion_obj > _result_ = new FlxVersion_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String FlxVersion_obj::toString( ){
	HX_STACK_FRAME("flixel.system.FlxVersion","toString",0x1c598b07,"flixel.system.FlxVersion.toString","flixel/system/FlxVersion.hx",27,0x2361490b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	Dynamic tmp = ::flixel::_system::FlxVersion_obj::sha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::String sha = tmp;		HX_STACK_VAR(sha,"sha");
	HX_STACK_LINE(29)
	bool tmp1 = (sha != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp1)){
		HX_STACK_LINE(31)
		::String tmp2 = sha.substring((int)0,(int)7);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		::String tmp3 = (HX_HCSTRING("@","\x40","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		sha = tmp3;
	}
	HX_STACK_LINE(33)
	int tmp2 = this->major;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::String tmp3 = (HX_HCSTRING("HaxeFlixel ","\x9e","\xca","\xf0","\xde") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::String tmp4 = (tmp3 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	int tmp5 = this->minor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	::String tmp7 = (tmp6 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	int tmp8 = this->patch;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	::String tmp10 = sha;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(33)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVersion_obj,toString,return )

Dynamic FlxVersion_obj::sha;


FlxVersion_obj::FlxVersion_obj()
{
}

Dynamic FlxVersion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { return major; }
		if (HX_FIELD_EQ(inName,"minor") ) { return minor; }
		if (HX_FIELD_EQ(inName,"patch") ) { return patch; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxVersion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sha") ) { outValue = sha; return true;  }
	}
	return false;
}

Dynamic FlxVersion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { major=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minor") ) { minor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"patch") ) { patch=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxVersion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sha") ) { sha=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void FlxVersion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"));
	outFields->push(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"));
	outFields->push(HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxVersion_obj,major),HX_HCSTRING("major","\x39","\xbd","\x1b","\x03")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,minor),HX_HCSTRING("minor","\x35","\x7b","\x68","\x08")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,patch),HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FlxVersion_obj::sha,HX_HCSTRING("sha","\x2c","\x9e","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"),
	HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"),
	HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxVersion_obj::sha,"sha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::sha,"sha");
};

#endif

hx::Class FlxVersion_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sha","\x2c","\x9e","\x57","\x00"),
	::String(null()) };

void FlxVersion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxVersion","\x73","\x5d","\xb6","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVersion_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxVersion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxVersion_obj >;
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

void FlxVersion_obj::__boot()
{
	sha= ((Dynamic)(HX_HCSTRING("","\x00","\x00","\x00","\x00")));
}

} // end namespace flixel
} // end namespace system
