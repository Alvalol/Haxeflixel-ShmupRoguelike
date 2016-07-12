#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal3
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignal3_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal3","new",0x3e934d64,"flixel.util._FlxSignal.FlxSignal3.new","flixel/util/FlxSignal.hx",247,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(248)
	super::__construct();
	HX_STACK_LINE(249)
	Dynamic tmp = this->dispatch3_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	this->dispatch = tmp;
}
;
	return null();
}

//FlxSignal3_obj::~FlxSignal3_obj() { }

Dynamic FlxSignal3_obj::__CreateEmpty() { return  new FlxSignal3_obj; }
hx::ObjectPtr< FlxSignal3_obj > FlxSignal3_obj::__new()
{  hx::ObjectPtr< FlxSignal3_obj > _result_ = new FlxSignal3_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSignal3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignal3_obj > _result_ = new FlxSignal3_obj();
	_result_->__construct();
	return _result_;}

Void FlxSignal3_obj::dispatch3( Dynamic value1,Dynamic value2,Dynamic value3){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal3","dispatch3",0x11c22c3d,"flixel.util._FlxSignal.FlxSignal3.dispatch3","flixel/util/FlxSignal.hx",289,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(290)
		this->processingListeners = true;
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			Array< ::Dynamic > _g1 = this->handlers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(291)
			while((true)){
				HX_STACK_LINE(291)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(291)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(291)
				if ((tmp1)){
					HX_STACK_LINE(291)
					break;
				}
				HX_STACK_LINE(291)
				::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(291)
				::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(291)
				++(_g);
				HX_STACK_LINE(254)
				Dynamic tmp3 = value1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				Dynamic tmp4 = value2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(254)
				Dynamic tmp5 = value3;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(293)
				handler->listener(tmp3,tmp4,tmp5);
				HX_STACK_LINE(295)
				bool tmp6 = handler->dispatchOnce;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(295)
				if ((tmp6)){
					HX_STACK_LINE(296)
					Dynamic tmp7 = handler->listener;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(296)
					this->remove(tmp7);
				}
			}
		}
		HX_STACK_LINE(299)
		this->processingListeners = false;
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(301)
			Array< ::Dynamic > _g1 = this->pendingRemove;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(301)
			while((true)){
				HX_STACK_LINE(301)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(301)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(301)
				if ((tmp1)){
					HX_STACK_LINE(301)
					break;
				}
				HX_STACK_LINE(301)
				::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(301)
				::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(301)
				++(_g);
				HX_STACK_LINE(303)
				Dynamic tmp3 = handler->listener;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				this->remove(tmp3);
			}
		}
		HX_STACK_LINE(305)
		int tmp = this->pendingRemove->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		if ((tmp1)){
			HX_STACK_LINE(306)
			this->pendingRemove = Array_obj< ::Dynamic >::__new();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSignal3_obj,dispatch3,(void))


FlxSignal3_obj::FlxSignal3_obj()
{
}

Dynamic FlxSignal3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch3") ) { return dispatch3_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispatch3","\x39","\x14","\xf1","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignal3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignal3_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSignal3_obj::__mClass;

void FlxSignal3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxSignal3","\x72","\x0b","\xc8","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSignal3_obj >;
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
