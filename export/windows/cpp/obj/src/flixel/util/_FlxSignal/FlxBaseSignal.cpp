#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxBaseSignal_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","new",0x2468c304,"flixel.util._FlxSignal.FlxBaseSignal.new","flixel/util/FlxSignal.hx",95,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(104)
	this->processingListeners = false;
	HX_STACK_LINE(109)
	this->handlers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(110)
	this->pendingRemove = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//FlxBaseSignal_obj::~FlxBaseSignal_obj() { }

Dynamic FlxBaseSignal_obj::__CreateEmpty() { return  new FlxBaseSignal_obj; }
hx::ObjectPtr< FlxBaseSignal_obj > FlxBaseSignal_obj::__new()
{  hx::ObjectPtr< FlxBaseSignal_obj > _result_ = new FlxBaseSignal_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBaseSignal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseSignal_obj > _result_ = new FlxBaseSignal_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxBaseSignal_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::util::IFlxSignal_obj)) return operator ::flixel::util::IFlxSignal_obj *();
	return super::__ToInterface(inType);
}

FlxBaseSignal_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxBaseSignal_obj >(this); }
FlxBaseSignal_obj::operator ::flixel::util::IFlxSignal_obj *()
	{ return new ::flixel::util::IFlxSignal_delegate_< FlxBaseSignal_obj >(this); }
Void FlxBaseSignal_obj::add( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","add",0x245ee4c5,"flixel.util._FlxSignal.FlxBaseSignal.add","flixel/util/FlxSignal.hx",114,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(115)
		bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		if ((tmp)){
			HX_STACK_LINE(116)
			Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			this->registerListener(tmp1,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,add,(void))

Void FlxBaseSignal_obj::addOnce( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","addOnce",0xaa1cd4e6,"flixel.util._FlxSignal.FlxBaseSignal.addOnce","flixel/util/FlxSignal.hx",120,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(121)
		bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		if ((tmp)){
			HX_STACK_LINE(122)
			Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(122)
			this->registerListener(tmp1,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,addOnce,(void))

Void FlxBaseSignal_obj::remove( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","remove",0x06fde820,"flixel.util._FlxSignal.FlxBaseSignal.remove","flixel/util/FlxSignal.hx",126,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(127)
		bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(129)
			Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = this->getHandler(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(130)
			bool tmp3 = (handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			if ((tmp3)){
				HX_STACK_LINE(132)
				bool tmp4 = this->processingListeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				if ((tmp4)){
					HX_STACK_LINE(133)
					::flixel::util::_FlxSignal::FlxSignalHandler tmp5 = handler;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(133)
					this->pendingRemove->push(tmp5);
				}
				else{
					HX_STACK_LINE(136)
					::flixel::util::_FlxSignal::FlxSignalHandler tmp5 = handler;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(136)
					this->handlers->remove(tmp5);
					HX_STACK_LINE(137)
					handler->destroy();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,remove,(void))

bool FlxBaseSignal_obj::has( Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","has",0x246431fe,"flixel.util._FlxSignal.FlxBaseSignal.has","flixel/util/FlxSignal.hx",145,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(146)
	bool tmp = (listener == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(147)
		return false;
	}
	HX_STACK_LINE(148)
	Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = this->getHandler(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,has,return )

Void FlxBaseSignal_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","removeAll",0x23fb9ce1,"flixel.util._FlxSignal.FlxBaseSignal.removeAll","flixel/util/FlxSignal.hx",153,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->handlers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,removeAll,(void))

Void FlxBaseSignal_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","destroy",0x48b3419e,"flixel.util._FlxSignal.FlxBaseSignal.destroy","flixel/util/FlxSignal.hx",157,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->handlers);
		HX_STACK_LINE(159)
		this->handlers = null();
		HX_STACK_LINE(160)
		this->pendingRemove = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,destroy,(void))

::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::registerListener( Dynamic listener,bool dispatchOnce){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","registerListener",0xa63a34d3,"flixel.util._FlxSignal.FlxBaseSignal.registerListener","flixel/util/FlxSignal.hx",164,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(dispatchOnce,"dispatchOnce")
	HX_STACK_LINE(165)
	Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::flixel::util::_FlxSignal::FlxSignalHandler tmp1 = this->getHandler(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp1;		HX_STACK_VAR(handler,"handler");
	HX_STACK_LINE(167)
	bool tmp2 = (handler == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	if ((tmp2)){
		HX_STACK_LINE(169)
		::flixel::util::_FlxSignal::FlxSignalHandler tmp3 = ::flixel::util::_FlxSignal::FlxSignalHandler_obj::__new(listener,dispatchOnce);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		handler = tmp3;
		HX_STACK_LINE(170)
		::flixel::util::_FlxSignal::FlxSignalHandler tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		this->handlers->push(tmp4);
		HX_STACK_LINE(171)
		::flixel::util::_FlxSignal::FlxSignalHandler tmp5 = handler;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		return tmp5;
	}
	else{
		HX_STACK_LINE(177)
		bool tmp3 = (handler->dispatchOnce != dispatchOnce);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		if ((tmp3)){
			HX_STACK_LINE(178)
			HX_STACK_DO_THROW(HX_HCSTRING("You cannot addOnce() then add() the same listener without removing the relationship first.","\x19","\xc7","\x3c","\xa5"));
		}
		else{
			HX_STACK_LINE(180)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			return tmp4;
		}
	}
	HX_STACK_LINE(167)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseSignal_obj,registerListener,return )

::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::getHandler( Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxBaseSignal","getHandler",0x2fd59fb0,"flixel.util._FlxSignal.FlxBaseSignal.getHandler","flixel/util/FlxSignal.hx",185,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		Array< ::Dynamic > _g1 = this->handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(186)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(186)
			if ((tmp1)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(186)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(186)
			++(_g);
			HX_STACK_LINE(192)
			bool tmp3 = (handler->listener == listener);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			if ((tmp3)){
				HX_STACK_LINE(195)
				::flixel::util::_FlxSignal::FlxSignalHandler tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(195)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(198)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,getHandler,return )


FlxBaseSignal_obj::FlxBaseSignal_obj()
{
}

void FlxBaseSignal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseSignal);
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_MEMBER_NAME(pendingRemove,"pendingRemove");
	HX_MARK_MEMBER_NAME(processingListeners,"processingListeners");
	HX_MARK_END_CLASS();
}

void FlxBaseSignal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
	HX_VISIT_MEMBER_NAME(handlers,"handlers");
	HX_VISIT_MEMBER_NAME(pendingRemove,"pendingRemove");
	HX_VISIT_MEMBER_NAME(processingListeners,"processingListeners");
}

Dynamic FlxBaseSignal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addOnce") ) { return addOnce_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch; }
		if (HX_FIELD_EQ(inName,"handlers") ) { return handlers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getHandler") ) { return getHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingRemove") ) { return pendingRemove; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerListener") ) { return registerListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"processingListeners") ) { return processingListeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseSignal_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingRemove") ) { pendingRemove=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"processingListeners") ) { processingListeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseSignal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"));
	outFields->push(HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"));
	outFields->push(HX_HCSTRING("pendingRemove","\xfb","\x03","\x57","\xfe"));
	outFields->push(HX_HCSTRING("processingListeners","\x2c","\x99","\x99","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseSignal_obj,dispatch),HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseSignal_obj,handlers),HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseSignal_obj,pendingRemove),HX_HCSTRING("pendingRemove","\xfb","\x03","\x57","\xfe")},
	{hx::fsBool,(int)offsetof(FlxBaseSignal_obj,processingListeners),HX_HCSTRING("processingListeners","\x2c","\x99","\x99","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"),
	HX_HCSTRING("pendingRemove","\xfb","\x03","\x57","\xfe"),
	HX_HCSTRING("processingListeners","\x2c","\x99","\x99","\x10"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addOnce","\x42","\xc0","\xef","\x85"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("registerListener","\xf7","\xfd","\xf4","\x36"),
	HX_HCSTRING("getHandler","\xd4","\x35","\x37","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseSignal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseSignal_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseSignal_obj::__mClass;

void FlxBaseSignal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxBaseSignal","\x12","\x31","\x0a","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseSignal_obj >;
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
} // end namespace _FlxSignal
