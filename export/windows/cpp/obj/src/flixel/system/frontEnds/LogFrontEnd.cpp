#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void LogFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","new",0xf2533c4e,"flixel.system.frontEnds.LogFrontEnd.new","flixel/system/frontEnds/LogFrontEnd.hx",9,0x686ab8c3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->redirectTraces = false;
	HX_STACK_LINE(111)
	Dynamic tmp = ::haxe::Log_obj::trace_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	this->_standardTraceFunction = tmp;
}
;
	return null();
}

//LogFrontEnd_obj::~LogFrontEnd_obj() { }

Dynamic LogFrontEnd_obj::__CreateEmpty() { return  new LogFrontEnd_obj; }
hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__new()
{  hx::ObjectPtr< LogFrontEnd_obj > _result_ = new LogFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic LogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogFrontEnd_obj > _result_ = new LogFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void LogFrontEnd_obj::add( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","add",0xf2495e0f,"flixel.system.frontEnds.LogFrontEnd.add","flixel/system/frontEnds/LogFrontEnd.hx",19,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,add,(void))

Void LogFrontEnd_obj::warn( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","warn",0x1c716698,"flixel.system.frontEnds.LogFrontEnd.warn","flixel/system/frontEnds/LogFrontEnd.hx",26,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,warn,(void))

Void LogFrontEnd_obj::error( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","error",0x74ce8f36,"flixel.system.frontEnds.LogFrontEnd.error","flixel/system/frontEnds/LogFrontEnd.hx",33,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,error,(void))

Void LogFrontEnd_obj::notice( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","notice",0xa03f14ea,"flixel.system.frontEnds.LogFrontEnd.notice","flixel/system/frontEnds/LogFrontEnd.hx",40,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,notice,(void))

Void LogFrontEnd_obj::advanced( Dynamic Data,::flixel::_system::debug::log::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","advanced",0x05a7fef4,"flixel.system.frontEnds.LogFrontEnd.advanced","flixel/system/frontEnds/LogFrontEnd.hx",54,0x686ab8c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(FireOnce,"FireOnce")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(LogFrontEnd_obj,advanced,(void))

Void LogFrontEnd_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","clear",0x4a0034fb,"flixel.system.frontEnds.LogFrontEnd.clear","flixel/system/frontEnds/LogFrontEnd.hx",102,0x686ab8c3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LogFrontEnd_obj,clear,(void))

bool LogFrontEnd_obj::set_redirectTraces( bool Redirect){
	HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","set_redirectTraces",0xf7f71199,"flixel.system.frontEnds.LogFrontEnd.set_redirectTraces","flixel/system/frontEnds/LogFrontEnd.hx",115,0x686ab8c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Redirect,"Redirect")
	HX_STACK_LINE(116)
	bool tmp = Redirect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	if ((tmp)){
		HX_STACK_LINE(116)
		tmp1 = this->processTraceData_dyn();
	}
	else{
		HX_STACK_LINE(116)
		tmp1 = this->_standardTraceFunction;
	}
	HX_STACK_LINE(116)
	::haxe::Log_obj::trace = tmp1;
	HX_STACK_LINE(117)
	bool tmp2 = this->redirectTraces = Redirect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,set_redirectTraces,return )

Void LogFrontEnd_obj::processTraceData( Dynamic Data,Dynamic Info){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","processTraceData",0x5a916632,"flixel.system.frontEnds.LogFrontEnd.processTraceData","flixel/system/frontEnds/LogFrontEnd.hx",127,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Info,"Info")
		HX_STACK_LINE(128)
		cpp::ArrayBase paramArray = cpp::ArrayBase_obj::__new().Add(Data);		HX_STACK_VAR(paramArray,"paramArray");
		HX_STACK_LINE(130)
		bool tmp = (Info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		if ((tmp)){
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			cpp::ArrayBase _g1 = Info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(132)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				if ((tmp2)){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				Dynamic i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(132)
				++(_g);
				HX_STACK_LINE(134)
				Dynamic tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				paramArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
			}
		}
		HX_STACK_LINE(138)
		::flixel::_system::debug::log::LogStyle tmp1 = ::flixel::_system::debug::log::LogStyle_obj::NORMAL;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		this->advanced(paramArray,tmp1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LogFrontEnd_obj,processTraceData,(void))


LogFrontEnd_obj::LogFrontEnd_obj()
{
}

void LogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogFrontEnd);
	HX_MARK_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_MARK_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
	HX_MARK_END_CLASS();
}

void LogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_VISIT_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
}

Dynamic LogFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { return notice_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advanced") ) { return advanced_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return redirectTraces; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processTraceData") ) { return processTraceData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_redirectTraces") ) { return set_redirectTraces_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { return _standardTraceFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { if (inCallProp == hx::paccAlways) return set_redirectTraces(inValue);redirectTraces=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { _standardTraceFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a"));
	outFields->push(HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LogFrontEnd_obj,redirectTraces),HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LogFrontEnd_obj,_standardTraceFunction),HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a"),
	HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("notice","\x18","\xd8","\xb8","\x31"),
	HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("set_redirectTraces","\xc7","\xe1","\x1f","\x83"),
	HX_HCSTRING("processTraceData","\xe0","\x2e","\xf4","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class LogFrontEnd_obj::__mClass;

void LogFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.LogFrontEnd","\x5c","\xbd","\x97","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LogFrontEnd_obj >;
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
} // end namespace system
} // end namespace frontEnds
