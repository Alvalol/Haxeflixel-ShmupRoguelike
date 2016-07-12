#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
namespace flixel{
namespace input{

Void FlxInput_obj::__construct(Dynamic ID)
{
HX_STACK_FRAME("flixel.input.FlxInput","new",0x726ed100,"flixel.input.FlxInput.new","flixel/input/FlxInput.hx",5,0xe8bdaaee)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(15)
	this->last = (int)0;
	HX_STACK_LINE(14)
	this->current = (int)0;
	HX_STACK_LINE(19)
	this->ID = ID;
}
;
	return null();
}

//FlxInput_obj::~FlxInput_obj() { }

Dynamic FlxInput_obj::__CreateEmpty() { return  new FlxInput_obj; }
hx::ObjectPtr< FlxInput_obj > FlxInput_obj::__new(Dynamic ID)
{  hx::ObjectPtr< FlxInput_obj > _result_ = new FlxInput_obj();
	_result_->__construct(ID);
	return _result_;}

Dynamic FlxInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInput_obj > _result_ = new FlxInput_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::input::IFlxInput_obj)) return operator ::flixel::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxInput_obj::operator ::flixel::input::IFlxInput_obj *()
	{ return new ::flixel::input::IFlxInput_delegate_< FlxInput_obj >(this); }
Void FlxInput_obj::press( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","press",0x37dcbc23,"flixel.input.FlxInput.press","flixel/input/FlxInput.hx",23,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->last = tmp;
		HX_STACK_LINE(25)
		int tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		bool tmp2 = (tmp1 == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		if ((tmp3)){
			HX_STACK_LINE(25)
			int tmp5 = this->current;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(25)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(25)
			tmp4 = (tmp6 == (int)2);
		}
		else{
			HX_STACK_LINE(25)
			tmp4 = true;
		}
		HX_STACK_LINE(25)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		if ((tmp4)){
			HX_STACK_LINE(25)
			tmp5 = (int)1;
		}
		else{
			HX_STACK_LINE(25)
			tmp5 = (int)2;
		}
		HX_STACK_LINE(25)
		this->current = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,press,(void))

Void FlxInput_obj::release( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","release",0x94a55667,"flixel.input.FlxInput.release","flixel/input/FlxInput.hx",29,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		this->last = tmp;
		HX_STACK_LINE(31)
		int tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		bool tmp2 = (tmp1 == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		if ((tmp3)){
			HX_STACK_LINE(31)
			int tmp5 = this->current;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			tmp4 = (tmp6 == (int)2);
		}
		else{
			HX_STACK_LINE(31)
			tmp4 = true;
		}
		HX_STACK_LINE(31)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		if ((tmp4)){
			HX_STACK_LINE(31)
			tmp5 = (int)-1;
		}
		else{
			HX_STACK_LINE(31)
			tmp5 = (int)0;
		}
		HX_STACK_LINE(31)
		this->current = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,release,(void))

Void FlxInput_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","update",0x818ca969,"flixel.input.FlxInput.update","flixel/input/FlxInput.hx",35,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		int tmp = this->last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		if ((tmp1)){
			HX_STACK_LINE(36)
			int tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			tmp2 = (tmp4 == (int)-1);
		}
		else{
			HX_STACK_LINE(36)
			tmp2 = false;
		}
		HX_STACK_LINE(36)
		if ((tmp2)){
			HX_STACK_LINE(38)
			this->current = (int)0;
		}
		else{
			HX_STACK_LINE(40)
			int tmp3 = this->last;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			if ((tmp4)){
				HX_STACK_LINE(40)
				int tmp6 = this->current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(40)
				tmp5 = (tmp7 == (int)2);
			}
			else{
				HX_STACK_LINE(40)
				tmp5 = false;
			}
			HX_STACK_LINE(40)
			if ((tmp5)){
				HX_STACK_LINE(42)
				this->current = (int)1;
			}
		}
		HX_STACK_LINE(45)
		int tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		this->last = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,update,(void))

Void FlxInput_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","reset",0x561cb26f,"flixel.input.FlxInput.reset","flixel/input/FlxInput.hx",49,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->current = (int)0;
		HX_STACK_LINE(51)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,reset,(void))

bool FlxInput_obj::hasState( int state){
	HX_STACK_FRAME("flixel.input.FlxInput","hasState",0x15827bb7,"flixel.input.FlxInput.hasState","flixel/input/FlxInput.hx",55,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(56)
	int tmp = state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	switch( (int)(tmp)){
		case (int)-1: {
			HX_STACK_LINE(58)
			int tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			tmp1 = (tmp2 == (int)-1);
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(59)
			int tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			if ((tmp4)){
				HX_STACK_LINE(59)
				int tmp5 = this->current;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				tmp1 = (tmp6 == (int)-1);
			}
			else{
				HX_STACK_LINE(59)
				tmp1 = true;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(60)
			int tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			bool tmp3 = (tmp2 == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			if ((tmp4)){
				HX_STACK_LINE(60)
				int tmp5 = this->current;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(60)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(60)
				tmp1 = (tmp6 == (int)2);
			}
			else{
				HX_STACK_LINE(60)
				tmp1 = true;
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(61)
			int tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			tmp1 = (tmp2 == (int)2);
		}
		;break;
	}
	HX_STACK_LINE(56)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInput_obj,hasState,return )

bool FlxInput_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_justReleased",0x305322f2,"flixel.input.FlxInput.get_justReleased","flixel/input/FlxInput.hx",66,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justReleased,return )

bool FlxInput_obj::get_released( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_released",0x4d112826,"flixel.input.FlxInput.get_released","flixel/input/FlxInput.hx",71,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	if ((tmp2)){
		HX_STACK_LINE(72)
		int tmp4 = this->current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		tmp3 = (tmp5 == (int)-1);
	}
	else{
		HX_STACK_LINE(72)
		tmp3 = true;
	}
	HX_STACK_LINE(72)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_released,return )

bool FlxInput_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_pressed",0x1bddd359,"flixel.input.FlxInput.get_pressed","flixel/input/FlxInput.hx",76,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	if ((tmp2)){
		HX_STACK_LINE(77)
		int tmp4 = this->current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		tmp3 = (tmp5 == (int)2);
	}
	else{
		HX_STACK_LINE(77)
		tmp3 = true;
	}
	HX_STACK_LINE(77)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_pressed,return )

bool FlxInput_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_justPressed",0xfa72360d,"flixel.input.FlxInput.get_justPressed","flixel/input/FlxInput.hx",81,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justPressed,return )


FlxInput_obj::FlxInput_obj()
{
}

void FlxInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInput);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_END_CLASS();
}

void FlxInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
}

Dynamic FlxInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return press_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == hx::paccAlways) return get_released(); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return hasState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return get_released_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInput_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxInput_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsInt,(int)offsetof(FlxInput_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("press","\x83","\x53","\x88","\xc8"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("hasState","\x57","\xc0","\x63","\x10"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_released","\xc6","\x3c","\x01","\x2c"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInput_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxInput_obj::__mClass;

void FlxInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxInput","\x0e","\x91","\xfa","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxInput_obj >;
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
} // end namespace input
