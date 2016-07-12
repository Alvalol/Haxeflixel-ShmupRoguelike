#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace log{

Void LogStyle_obj::__construct(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction)
{
HX_STACK_FRAME("flixel.system.debug.log.LogStyle","new",0xce018851,"flixel.system.debug.log.LogStyle.new","flixel/system/debug/log/LogStyle.hx",52,0x39dedcdd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Prefix,"Prefix")
HX_STACK_ARG(__o_Color,"Color")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_Bold,"Bold")
HX_STACK_ARG(__o_Italic,"Italic")
HX_STACK_ARG(__o_Underlined,"Underlined")
HX_STACK_ARG(ErrorSound,"ErrorSound")
HX_STACK_ARG(__o_OpenConsole,"OpenConsole")
HX_STACK_ARG(CallbackFunction,"CallbackFunction")
::String Prefix = __o_Prefix.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String Color = __o_Color.Default(HX_HCSTRING("FFFFFF","\xc0","\x27","\x82","\x79"));
int Size = __o_Size.Default(12);
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
bool OpenConsole = __o_OpenConsole.Default(false);
{
	HX_STACK_LINE(53)
	this->prefix = Prefix;
	HX_STACK_LINE(54)
	this->color = Color;
	HX_STACK_LINE(55)
	this->size = Size;
	HX_STACK_LINE(56)
	this->bold = Bold;
	HX_STACK_LINE(57)
	this->italic = Italic;
	HX_STACK_LINE(58)
	this->underlined = Underlined;
	HX_STACK_LINE(59)
	this->errorSound = ErrorSound;
	HX_STACK_LINE(60)
	this->openConsole = OpenConsole;
	HX_STACK_LINE(61)
	this->callbackFunction = CallbackFunction;
}
;
	return null();
}

//LogStyle_obj::~LogStyle_obj() { }

Dynamic LogStyle_obj::__CreateEmpty() { return  new LogStyle_obj; }
hx::ObjectPtr< LogStyle_obj > LogStyle_obj::__new(::String __o_Prefix,::String __o_Color,hx::Null< int >  __o_Size,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined,::String ErrorSound,hx::Null< bool >  __o_OpenConsole,Dynamic CallbackFunction)
{  hx::ObjectPtr< LogStyle_obj > _result_ = new LogStyle_obj();
	_result_->__construct(__o_Prefix,__o_Color,__o_Size,__o_Bold,__o_Italic,__o_Underlined,ErrorSound,__o_OpenConsole,CallbackFunction);
	return _result_;}

Dynamic LogStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogStyle_obj > _result_ = new LogStyle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

::flixel::_system::debug::log::LogStyle LogStyle_obj::NORMAL;

::flixel::_system::debug::log::LogStyle LogStyle_obj::WARNING;

::flixel::_system::debug::log::LogStyle LogStyle_obj::ERROR;

::flixel::_system::debug::log::LogStyle LogStyle_obj::NOTICE;

::flixel::_system::debug::log::LogStyle LogStyle_obj::CONSOLE;


LogStyle_obj::LogStyle_obj()
{
}

void LogStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogStyle);
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(underlined,"underlined");
	HX_MARK_MEMBER_NAME(errorSound,"errorSound");
	HX_MARK_MEMBER_NAME(openConsole,"openConsole");
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_END_CLASS();
}

void LogStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(underlined,"underlined");
	HX_VISIT_MEMBER_NAME(errorSound,"errorSound");
	HX_VISIT_MEMBER_NAME(openConsole,"openConsole");
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
}

Dynamic LogStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"bold") ) { return bold; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return prefix; }
		if (HX_FIELD_EQ(inName,"italic") ) { return italic; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { return underlined; }
		if (HX_FIELD_EQ(inName,"errorSound") ) { return errorSound; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { return openConsole; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return callbackFunction; }
	}
	return super::__Field(inName,inCallProp);
}

bool LogStyle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { outValue = ERROR; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { outValue = NORMAL; return true;  }
		if (HX_FIELD_EQ(inName,"NOTICE") ) { outValue = NOTICE; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { outValue = WARNING; return true;  }
		if (HX_FIELD_EQ(inName,"CONSOLE") ) { outValue = CONSOLE; return true;  }
	}
	return false;
}

Dynamic LogStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { underlined=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errorSound") ) { errorSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { openConsole=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LogStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=ioValue.Cast< ::flixel::_system::debug::log::LogStyle >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"NORMAL") ) { NORMAL=ioValue.Cast< ::flixel::_system::debug::log::LogStyle >(); return true; }
		if (HX_FIELD_EQ(inName,"NOTICE") ) { NOTICE=ioValue.Cast< ::flixel::_system::debug::log::LogStyle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"WARNING") ) { WARNING=ioValue.Cast< ::flixel::_system::debug::log::LogStyle >(); return true; }
		if (HX_FIELD_EQ(inName,"CONSOLE") ) { CONSOLE=ioValue.Cast< ::flixel::_system::debug::log::LogStyle >(); return true; }
	}
	return false;
}

void LogStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f"));
	outFields->push(HX_HCSTRING("errorSound","\xe7","\x7b","\xd0","\xf5"));
	outFields->push(HX_HCSTRING("openConsole","\xad","\x7c","\x17","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LogStyle_obj,prefix),HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae")},
	{hx::fsString,(int)offsetof(LogStyle_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsInt,(int)offsetof(LogStyle_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,bold),HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,italic),HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,underlined),HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f")},
	{hx::fsString,(int)offsetof(LogStyle_obj,errorSound),HX_HCSTRING("errorSound","\xe7","\x7b","\xd0","\xf5")},
	{hx::fsBool,(int)offsetof(LogStyle_obj,openConsole),HX_HCSTRING("openConsole","\xad","\x7c","\x17","\xb4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LogStyle_obj,callbackFunction),HX_HCSTRING("callbackFunction","\xfd","\xcd","\x91","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::log::LogStyle*/ ,(void *) &LogStyle_obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsObject /*::flixel::_system::debug::log::LogStyle*/ ,(void *) &LogStyle_obj::WARNING,HX_HCSTRING("WARNING","\x3c","\xae","\x9f","\x89")},
	{hx::fsObject /*::flixel::_system::debug::log::LogStyle*/ ,(void *) &LogStyle_obj::ERROR,HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")},
	{hx::fsObject /*::flixel::_system::debug::log::LogStyle*/ ,(void *) &LogStyle_obj::NOTICE,HX_HCSTRING("NOTICE","\x18","\x84","\x3b","\xe4")},
	{hx::fsObject /*::flixel::_system::debug::log::LogStyle*/ ,(void *) &LogStyle_obj::CONSOLE,HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"),
	HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"),
	HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f"),
	HX_HCSTRING("errorSound","\xe7","\x7b","\xd0","\xf5"),
	HX_HCSTRING("openConsole","\xad","\x7c","\x17","\xb4"),
	HX_HCSTRING("callbackFunction","\xfd","\xcd","\x91","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogStyle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogStyle_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LogStyle_obj::WARNING,"WARNING");
	HX_MARK_MEMBER_NAME(LogStyle_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(LogStyle_obj::NOTICE,"NOTICE");
	HX_MARK_MEMBER_NAME(LogStyle_obj::CONSOLE,"CONSOLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::WARNING,"WARNING");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::NOTICE,"NOTICE");
	HX_VISIT_MEMBER_NAME(LogStyle_obj::CONSOLE,"CONSOLE");
};

#endif

hx::Class LogStyle_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("WARNING","\x3c","\xae","\x9f","\x89"),
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	HX_HCSTRING("NOTICE","\x18","\x84","\x3b","\xe4"),
	HX_HCSTRING("CONSOLE","\x37","\xbf","\xa9","\x98"),
	::String(null()) };

void LogStyle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.log.LogStyle","\xdf","\x0b","\x09","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogStyle_obj::__GetStatic;
	__mClass->mSetStaticField = &LogStyle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LogStyle_obj >;
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

void LogStyle_obj::__boot()
{
	NORMAL= ::flixel::_system::debug::log::LogStyle_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null());
	WARNING= ::flixel::_system::debug::log::LogStyle_obj::__new(HX_HCSTRING("[WARNING] ","\xa4","\xa2","\x0d","\x4e"),HX_HCSTRING("D9F85C","\x15","\x36","\x8b","\x30"),(int)12,false,false,false,HX_HCSTRING("flixel/sounds/beep","\xe6","\xb5","\xa9","\x33"),true,null());
	ERROR= ::flixel::_system::debug::log::LogStyle_obj::__new(HX_HCSTRING("[ERROR] ","\xd0","\x1f","\xcd","\xbe"),HX_HCSTRING("FF8888","\x40","\x7f","\x36","\x70"),(int)12,false,false,false,HX_HCSTRING("flixel/sounds/beep","\xe6","\xb5","\xa9","\x33"),true,null());
	NOTICE= ::flixel::_system::debug::log::LogStyle_obj::__new(HX_HCSTRING("[NOTICE] ","\x96","\x5e","\x07","\x09"),HX_HCSTRING("5CF878","\x41","\x9b","\x32","\xf3"),(int)12,false,null(),null(),null(),null(),null());
	CONSOLE= ::flixel::_system::debug::log::LogStyle_obj::__new(HX_HCSTRING("&#62; ","\x7e","\xad","\x6d","\x7c"),HX_HCSTRING("5A96FA","\xc4","\x34","\xcc","\xc3"),(int)12,false,null(),null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
