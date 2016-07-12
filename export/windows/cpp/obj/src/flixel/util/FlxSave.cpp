#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_SharedObject
#include <openfl/_legacy/net/SharedObject.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace util{

Void FlxSave_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",17,0xc43cd0a9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	this->_closeRequested = false;
}
;
	return null();
}

//FlxSave_obj::~FlxSave_obj() { }

Dynamic FlxSave_obj::__CreateEmpty() { return  new FlxSave_obj; }
hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new()
{  hx::ObjectPtr< FlxSave_obj > _result_ = new FlxSave_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSave_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSave_obj > _result_ = new FlxSave_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxSave_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxSave_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxSave_obj >(this); }
Void FlxSave_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",47,0xc43cd0a9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->_sharedObject = null();
		HX_STACK_LINE(49)
		this->name = null();
		HX_STACK_LINE(50)
		this->data = null();
		HX_STACK_LINE(51)
		this->_onComplete = null();
		HX_STACK_LINE(52)
		this->_closeRequested = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind( ::String Name){
	HX_STACK_FRAME("flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",63,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(64)
	this->destroy();
	HX_STACK_LINE(65)
	this->name = Name;
	HX_STACK_LINE(66)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
	{
		HX_STACK_LINE(68)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::openfl::_legacy::net::SharedObject tmp1 = ::openfl::_legacy::net::SharedObject_obj::getLocal(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		this->_sharedObject = tmp1;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::Error >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::Error e = __e;{
				HX_STACK_LINE(73)
				this->destroy();
				HX_STACK_LINE(74)
				return false;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(76)
	::openfl::_legacy::net::SharedObject tmp = this->_sharedObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->data = tmp->data;
	HX_STACK_LINE(77)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,bind,return )

bool FlxSave_obj::close( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",90,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MinFileSize,"MinFileSize")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(91)
		this->_closeRequested = true;
		HX_STACK_LINE(92)
		int tmp = MinFileSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		Dynamic tmp1 = OnComplete;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		bool tmp2 = this->flush(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::flush( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",103,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MinFileSize,"MinFileSize")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(104)
		bool tmp = this->checkBinding();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		if ((tmp1)){
			HX_STACK_LINE(106)
			return false;
		}
		HX_STACK_LINE(108)
		this->_onComplete = OnComplete;
		HX_STACK_LINE(112)
		Dynamic result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(114)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(119)
			::openfl::_legacy::net::SharedObject tmp2 = this->_sharedObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			Dynamic tmp3 = tmp2->flush(null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			result = tmp3;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(122)
					bool tmp2 = this->onDone(::flixel::util::FlxSaveStatus_obj::ERROR);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(122)
					return tmp2;
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(126)
		bool tmp2 = (result == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		if ((tmp2)){
		}
		HX_STACK_LINE(136)
		bool tmp3 = (result == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		::flixel::util::FlxSaveStatus tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		if ((tmp3)){
			HX_STACK_LINE(136)
			tmp4 = ::flixel::util::FlxSaveStatus_obj::SUCCESS;
		}
		else{
			HX_STACK_LINE(136)
			tmp4 = ::flixel::util::FlxSaveStatus_obj::PENDING;
		}
		HX_STACK_LINE(136)
		bool tmp5 = this->onDone(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::erase( ){
	HX_STACK_FRAME("flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",148,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	bool tmp = this->checkBinding();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	if ((tmp1)){
		HX_STACK_LINE(151)
		return false;
	}
	HX_STACK_LINE(153)
	::openfl::_legacy::net::SharedObject tmp2 = this->_sharedObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	tmp2->clear();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSave.hx",154,0xc43cd0a9)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(154)
	Dynamic tmp3 = _Function_1_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	this->data = tmp3;
	HX_STACK_LINE(155)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::onDone( ::flixel::util::FlxSaveStatus Result){
	HX_STACK_FRAME("flixel.util.FlxSave","onDone",0x76016afa,"flixel.util.FlxSave.onDone","flixel/util/FlxSave.hx",177,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Result,"Result")
	HX_STACK_LINE(178)
	switch( (int)(Result->__Index())){
		case (int)1: {
			HX_STACK_LINE(181)
			Dynamic();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(183)
			Dynamic();
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(187)
	Dynamic tmp = this->_onComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	if ((tmp1)){
		HX_STACK_LINE(188)
		bool tmp2 = (Result == ::flixel::util::FlxSaveStatus_obj::SUCCESS);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		this->_onComplete(tmp2);
	}
	HX_STACK_LINE(190)
	bool tmp2 = this->_closeRequested;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	if ((tmp2)){
		HX_STACK_LINE(191)
		this->destroy();
	}
	HX_STACK_LINE(193)
	bool tmp3 = (Result == ::flixel::util::FlxSaveStatus_obj::SUCCESS);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::checkBinding( ){
	HX_STACK_FRAME("flixel.util.FlxSave","checkBinding",0xf0eb45d6,"flixel.util.FlxSave.checkBinding","flixel/util/FlxSave.hx",202,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::openfl::_legacy::net::SharedObject tmp = this->_sharedObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(206)
		return false;
	}
	HX_STACK_LINE(208)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )


FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
}

Dynamic FlxSave_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return onDone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return checkBinding_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return _sharedObject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return _closeRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSave_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast< ::openfl::_legacy::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa"));
	outFields->push(HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(FlxSave_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::openfl::_legacy::net::SharedObject*/ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,_onComplete),HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30")},
	{hx::fsBool,(int)offsetof(FlxSave_obj,_closeRequested),HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa"),
	HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"),
	HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"),
	HX_HCSTRING("onDone","\x41","\xf9","\xf7","\xe4"),
	HX_HCSTRING("checkBinding","\x5d","\x43","\xb4","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSave_obj::__mClass;

void FlxSave_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxSave","\x95","\x71","\x4e","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSave_obj >;
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
