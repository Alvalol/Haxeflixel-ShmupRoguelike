#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif

Void Date_obj::__construct(int year,int month,int day,int hour,int min,int sec)
{
HX_STACK_FRAME("Date","new",0x9aa26240,"Date.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",26,0x1bc6780a)
HX_STACK_THIS(this)
HX_STACK_ARG(year,"year")
HX_STACK_ARG(month,"month")
HX_STACK_ARG(day,"day")
HX_STACK_ARG(hour,"hour")
HX_STACK_ARG(min,"min")
HX_STACK_ARG(sec,"sec")
{
	HX_STACK_LINE(27)
	Float tmp = ::__hxcpp_new_date(year,month,day,hour,min,sec);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->mSeconds = tmp;
}
;
	return null();
}

//Date_obj::~Date_obj() { }

Dynamic Date_obj::__CreateEmpty() { return  new Date_obj; }
hx::ObjectPtr< Date_obj > Date_obj::__new(int year,int month,int day,int hour,int min,int sec)
{  hx::ObjectPtr< Date_obj > _result_ = new Date_obj();
	_result_->__construct(year,month,day,hour,min,sec);
	return _result_;}

Dynamic Date_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Date_obj > _result_ = new Date_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Float Date_obj::getTime( ){
	HX_STACK_FRAME("Date","getTime",0x0cac7da3,"Date.getTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",30,0x1bc6780a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	Float tmp = this->mSeconds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,getTime,return )

::Date Date_obj::fromTime( Float t){
	HX_STACK_FRAME("Date","fromTime",0x44fd3cb7,"Date.fromTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",57,0x1bc6780a)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(58)
	::Date tmp = ::Date_obj::__new((int)0,(int)0,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::Date result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(59)
	Float tmp1 = (t * ((Float)0.001));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	result->mSeconds = tmp1;
	HX_STACK_LINE(60)
	::Date tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromTime,return )

::Date Date_obj::fromString( ::String s){
	HX_STACK_FRAME("Date","fromString",0x5ead97fb,"Date.fromString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Date.hx",64,0x1bc6780a)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(64)
	int _g = s.length;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	switch( (int)(tmp)){
		case (int)8: {
			HX_STACK_LINE(66)
			Array< ::String > k = s.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(67)
			::String tmp1 = k->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			::String tmp3 = k->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			::String tmp5 = k->__get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			::Date tmp7 = ::Date_obj::__new((int)0,(int)0,(int)0,tmp2,tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			::Date d = tmp7;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(68)
			::Date tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			return tmp8;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(70)
			Array< ::String > k = s.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(71)
			::String tmp1 = k->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			::String tmp3 = k->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			::String tmp6 = k->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			::Date tmp8 = ::Date_obj::__new(tmp2,tmp5,tmp7,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			return tmp8;
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(73)
			Array< ::String > k = s.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(74)
			::String tmp1 = k->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			Array< ::String > y = tmp1.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(75)
			::String tmp2 = k->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			Array< ::String > t = tmp2.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(76)
			::String tmp3 = y->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::String tmp5 = y->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			::String tmp8 = y->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			::String tmp10 = t->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(77)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(77)
			::String tmp12 = t->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(77)
			Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(77)
			::String tmp14 = t->__get((int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(77)
			Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(76)
			::Date tmp16 = ::Date_obj::__new(tmp4,tmp7,tmp9,tmp11,tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(76)
			return tmp16;
		}
		;break;
		default: {
			HX_STACK_LINE(79)
			::String tmp1 = (HX_HCSTRING("Invalid date format : ","\xa6","\xde","\x58","\x13") + s);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(64)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromString,return )


Date_obj::Date_obj()
{
}

Dynamic Date_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getTime") ) { return getTime_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { return mSeconds; }
	}
	return super::__Field(inName,inCallProp);
}

bool Date_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromTime") ) { outValue = fromTime_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

Dynamic Date_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { mSeconds=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Date_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mSeconds","\x92","\x75","\x59","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Date_obj,mSeconds),HX_HCSTRING("mSeconds","\x92","\x75","\x59","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mSeconds","\x92","\x75","\x59","\x82"),
	HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Date_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Date_obj::__mClass,"__mClass");
};

#endif

hx::Class Date_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromTime","\x97","\x9a","\xc8","\xaa"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	::String(null()) };

void Date_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Date","\x4e","\x82","\x3c","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Date_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Date_obj >;
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

