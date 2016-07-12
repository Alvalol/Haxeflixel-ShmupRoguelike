#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace console{

Void ConsoleHistory_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.console.ConsoleHistory","new",0x9c00ff8e,"flixel.system.debug.console.ConsoleHistory.new","flixel/system/debug/console/ConsoleHistory.hx",3,0xc796b240)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->index = (int)0;
	HX_STACK_LINE(15)
	::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	bool tmp1 = (tmp->data->__Field(HX_HCSTRING("history","\x54","\x35","\x47","\x64"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	if ((tmp1)){
		HX_STACK_LINE(17)
		::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		this->commands = tmp2->data->__Field(HX_HCSTRING("history","\x54","\x35","\x47","\x64"), hx::paccDynamic );
		HX_STACK_LINE(18)
		int tmp3 = this->commands->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		this->index = tmp3;
	}
	else{
		HX_STACK_LINE(22)
		this->commands = Array_obj< ::String >::__new();
		HX_STACK_LINE(23)
		::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp2->data->__FieldRef(HX_HCSTRING("history","\x54","\x35","\x47","\x64")) = this->commands;
	}
}
;
	return null();
}

//ConsoleHistory_obj::~ConsoleHistory_obj() { }

Dynamic ConsoleHistory_obj::__CreateEmpty() { return  new ConsoleHistory_obj; }
hx::ObjectPtr< ConsoleHistory_obj > ConsoleHistory_obj::__new()
{  hx::ObjectPtr< ConsoleHistory_obj > _result_ = new ConsoleHistory_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConsoleHistory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleHistory_obj > _result_ = new ConsoleHistory_obj();
	_result_->__construct();
	return _result_;}

::String ConsoleHistory_obj::getPreviousCommand( ){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleHistory","getPreviousCommand",0x3aa09670,"flixel.system.debug.console.ConsoleHistory.getPreviousCommand","flixel/system/debug/console/ConsoleHistory.hx",28,0xc796b240)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp1)){
		HX_STACK_LINE(30)
		(this->index)--;
	}
	HX_STACK_LINE(31)
	int tmp2 = this->index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	::String tmp3 = this->commands->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,getPreviousCommand,return )

::String ConsoleHistory_obj::getNextCommand( ){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleHistory","getNextCommand",0x2e4e1f34,"flixel.system.debug.console.ConsoleHistory.getNextCommand","flixel/system/debug/console/ConsoleHistory.hx",35,0xc796b240)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = this->commands->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	if ((tmp2)){
		HX_STACK_LINE(37)
		(this->index)++;
	}
	HX_STACK_LINE(38)
	int tmp3 = this->index;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	::String tmp4 = this->commands->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	if ((tmp5)){
		HX_STACK_LINE(38)
		int tmp7 = this->index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		tmp6 = this->commands->__GetItem(tmp7);
	}
	else{
		HX_STACK_LINE(38)
		tmp6 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(38)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,getNextCommand,return )

Void ConsoleHistory_obj::addCommand( ::String command){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleHistory","addCommand",0x56eecfbc,"flixel.system.debug.console.ConsoleHistory.addCommand","flixel/system/debug/console/ConsoleHistory.hx",42,0xc796b240)
		HX_STACK_THIS(this)
		HX_STACK_ARG(command,"command")
		HX_STACK_LINE(44)
		bool tmp = this->get_isEmpty();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(44)
			::String tmp3 = this->getPreviousCommand();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			::String tmp5 = command;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			tmp2 = (tmp4 != tmp5);
		}
		else{
			HX_STACK_LINE(44)
			tmp2 = true;
		}
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(46)
			::String tmp3 = command;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			this->commands->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
			HX_STACK_LINE(47)
			::flixel::util::FlxSave tmp4 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			tmp4->flush(null(),null());
			HX_STACK_LINE(49)
			int tmp5 = this->commands->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			bool tmp6 = (tmp5 > (int)50);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			if ((tmp6)){
				HX_STACK_LINE(50)
				this->commands->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();
			}
		}
		HX_STACK_LINE(53)
		int tmp3 = this->commands->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		this->index = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleHistory_obj,addCommand,(void))

Void ConsoleHistory_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleHistory","clear",0x0d15483b,"flixel.system.debug.console.ConsoleHistory.clear","flixel/system/debug/console/ConsoleHistory.hx",57,0xc796b240)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		int tmp = this->commands->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		this->commands->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		HX_STACK_LINE(59)
		::flixel::util::FlxSave tmp1 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		tmp1->flush(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,clear,(void))

bool ConsoleHistory_obj::get_isEmpty( ){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleHistory","get_isEmpty",0x5caf4b88,"flixel.system.debug.console.ConsoleHistory.get_isEmpty","flixel/system/debug/console/ConsoleHistory.hx",63,0xc796b240)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	int tmp = this->commands->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleHistory_obj,get_isEmpty,return )

int ConsoleHistory_obj::MAX_LENGTH;


ConsoleHistory_obj::ConsoleHistory_obj()
{
}

void ConsoleHistory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleHistory);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void ConsoleHistory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic ConsoleHistory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { if (inCallProp == hx::paccAlways) return get_isEmpty(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addCommand") ) { return addCommand_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return get_isEmpty_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getNextCommand") ) { return getNextCommand_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPreviousCommand") ) { return getPreviousCommand_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleHistory_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleHistory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ConsoleHistory_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsInt,(int)offsetof(ConsoleHistory_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ConsoleHistory_obj::MAX_LENGTH,HX_HCSTRING("MAX_LENGTH","\x81","\x44","\x0a","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("getPreviousCommand","\xde","\x81","\x79","\x09"),
	HX_HCSTRING("getNextCommand","\xa2","\x3b","\x55","\xdf"),
	HX_HCSTRING("addCommand","\x2a","\x9d","\xf7","\xe8"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_isEmpty","\x5a","\x3e","\x5a","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleHistory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ConsoleHistory_obj::MAX_LENGTH,"MAX_LENGTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleHistory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ConsoleHistory_obj::MAX_LENGTH,"MAX_LENGTH");
};

#endif

hx::Class ConsoleHistory_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_LENGTH","\x81","\x44","\x0a","\xcf"),
	::String(null()) };

void ConsoleHistory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.ConsoleHistory","\x9c","\xe0","\xd2","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleHistory_obj >;
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

void ConsoleHistory_obj::__boot()
{
	MAX_LENGTH= (int)50;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
