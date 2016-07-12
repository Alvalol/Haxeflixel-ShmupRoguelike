#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void DisplayObjectContainer_obj::__construct(Dynamic handle,::String type)
{
HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","new",0x440fc302,"openfl._legacy.display.DisplayObjectContainer.new","openfl/_legacy/display/DisplayObjectContainer.hx",21,0xf33fa94b)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(23)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(24)
	this->__children = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new(Dynamic handle,::String type)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct(handle,type);
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","addChild",0x389e11d9,"openfl._legacy.display.DisplayObjectContainer.addChild","openfl/_legacy/display/DisplayObjectContainer.hx",29,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(31)
			HX_STACK_DO_THROW(HX_HCSTRING("Adding to self","\xb2","\xfe","\x1c","\xcf"));
		}
		HX_STACK_LINE(31)
		bool tmp1 = (child->__parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(31)
			::openfl::_legacy::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			this->setChildIndex(tmp2,tmp4);
		}
		else{
			HX_STACK_LINE(31)
			child->__setParent(null());
			HX_STACK_LINE(31)
			::openfl::_legacy::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			this->__children->push(tmp2);
			HX_STACK_LINE(31)
			Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			Dynamic tmp4 = child->__handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_add_child(tmp3,tmp4);
			HX_STACK_LINE(31)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(32)
	::openfl::_legacy::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::_legacy::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","addChildAt",0x29a9332c,"openfl._legacy.display.DisplayObjectContainer.addChildAt","openfl/_legacy/display/DisplayObjectContainer.hx",37,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(39)
			HX_STACK_DO_THROW(HX_HCSTRING("Adding to self","\xb2","\xfe","\x1c","\xcf"));
		}
		HX_STACK_LINE(39)
		bool tmp1 = (child->__parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(39)
			::openfl::_legacy::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			this->setChildIndex(tmp2,tmp4);
		}
		else{
			HX_STACK_LINE(39)
			child->__setParent(null());
			HX_STACK_LINE(39)
			::openfl::_legacy::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			this->__children->push(tmp2);
			HX_STACK_LINE(39)
			Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			Dynamic tmp4 = child->__handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_add_child(tmp3,tmp4);
			HX_STACK_LINE(39)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		if ((tmp2)){
			HX_STACK_LINE(40)
			::String tmp3 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(40)
		::openfl::_legacy::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		int tmp4 = this->__getChildIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		int firstIndex = tmp4;		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(40)
		bool tmp5 = (firstIndex < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		if ((tmp5)){
			HX_STACK_LINE(40)
			::String tmp6 = child->toString();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			::String tmp7 = (HX_HCSTRING("setChildIndex : object ","\x93","\x4a","\x81","\xb4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			::String tmp8 = (tmp7 + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			::String msg = tmp8;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(40)
			bool tmp9 = (child->__parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			if ((tmp9)){
				HX_STACK_LINE(40)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(40)
					int tmp10 = this->__children->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(40)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(40)
					while((true)){
						HX_STACK_LINE(40)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(40)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(40)
						if ((tmp12)){
							HX_STACK_LINE(40)
							break;
						}
						HX_STACK_LINE(40)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(40)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(40)
						::openfl::_legacy::display::DisplayObject tmp14 = this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(40)
						::openfl::_legacy::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(40)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(40)
						if ((tmp16)){
							HX_STACK_LINE(40)
							actualIndex = i;
							HX_STACK_LINE(40)
							break;
						}
					}
				}
				HX_STACK_LINE(40)
				bool tmp10 = (actualIndex != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(40)
				if ((tmp10)){
					HX_STACK_LINE(40)
					int tmp11 = actualIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(40)
					::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(40)
					::String tmp13 = (HX_HCSTRING("Internal error: Real child index was ","\x00","\xbf","\x50","\x8a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(40)
					hx::AddEq(msg,tmp13);
				}
				else{
					HX_STACK_LINE(40)
					hx::AddEq(msg,HX_HCSTRING("Internal error: Child was not in __children array!","\xa1","\xb9","\x1b","\xbe"));
				}
			}
			HX_STACK_LINE(40)
			::String tmp10 = msg;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			HX_STACK_DO_THROW(tmp10);
		}
		HX_STACK_LINE(40)
		Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		Dynamic tmp7 = child->__handle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_set_child_index(tmp6,tmp7,tmp8);
		HX_STACK_LINE(40)
		bool tmp9 = (index < firstIndex);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		if ((tmp9)){
			HX_STACK_LINE(40)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(40)
			while((true)){
				HX_STACK_LINE(40)
				bool tmp10 = (i > index);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(40)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(40)
				if ((tmp11)){
					HX_STACK_LINE(40)
					break;
				}
				HX_STACK_LINE(40)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(40)
				::openfl::_legacy::display::DisplayObject tmp13 = this->__children->__get(tmp12).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(40)
				this->__children[i] = tmp13;
				HX_STACK_LINE(40)
				(i)--;
			}
			HX_STACK_LINE(40)
			::openfl::_legacy::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			this->__children[index] = tmp10;
		}
		else{
			HX_STACK_LINE(40)
			bool tmp10 = (firstIndex < index);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			if ((tmp10)){
				HX_STACK_LINE(40)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(40)
				while((true)){
					HX_STACK_LINE(40)
					bool tmp11 = (i < index);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(40)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(40)
					if ((tmp12)){
						HX_STACK_LINE(40)
						break;
					}
					HX_STACK_LINE(40)
					int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(40)
					::openfl::_legacy::display::DisplayObject tmp14 = this->__children->__get(tmp13).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(40)
					this->__children[i] = tmp14;
					HX_STACK_LINE(40)
					(i)++;
				}
				HX_STACK_LINE(40)
				::openfl::_legacy::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(40)
				this->__children[index] = tmp11;
			}
		}
	}
	HX_STACK_LINE(41)
	::openfl::_legacy::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0xa1314e5b,"openfl._legacy.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/_legacy/display/DisplayObjectContainer.hx",48,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(48)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","contains",0xa6029c3d,"openfl._legacy.display.DisplayObjectContainer.contains","openfl/_legacy/display/DisplayObjectContainer.hx",53,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(55)
	::openfl::_legacy::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	bool tmp1 = this->__contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","getChildAt",0x11808d57,"openfl._legacy.display.DisplayObjectContainer.getChildAt","openfl/_legacy/display/DisplayObjectContainer.hx",60,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(62)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	if ((tmp)){
		HX_STACK_LINE(62)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(62)
		tmp1 = false;
	}
	HX_STACK_LINE(62)
	if ((tmp1)){
		HX_STACK_LINE(64)
		::openfl::_legacy::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		return tmp2;
	}
	HX_STACK_LINE(68)
	::String tmp2 = (HX_HCSTRING("getChildAt : index out of bounds ","\xcf","\xfc","\xa7","\xdc") + index);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::String tmp3 = (tmp2 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	::openfl::errors::RangeError tmp6 = ::openfl::errors::RangeError_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	HX_STACK_DO_THROW(tmp6);
	HX_STACK_LINE(69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","getChildByName",0xe45c6626,"openfl._legacy.display.DisplayObjectContainer.getChildByName","openfl/_legacy/display/DisplayObjectContainer.hx",74,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			if ((tmp1)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			::openfl::_legacy::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			::openfl::_legacy::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(76)
			++(_g);
			HX_STACK_LINE(78)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::String tmp4 = child->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			if ((tmp5)){
				HX_STACK_LINE(80)
				::openfl::_legacy::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(86)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","getChildIndex",0xe2a0b92e,"openfl._legacy.display.DisplayObjectContainer.getChildIndex","openfl/_legacy/display/DisplayObjectContainer.hx",91,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(93)
	::openfl::_legacy::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1 = this->__getChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","getObjectsUnderPoint",0x75c607b4,"openfl._legacy.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/_legacy/display/DisplayObjectContainer.hx",98,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(101)
	::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	bool onStage = tmp1;		HX_STACK_VAR(onStage,"onStage");
	HX_STACK_LINE(102)
	bool tmp2 = this->get_visible();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	bool cacheVisible = tmp2;		HX_STACK_VAR(cacheVisible,"cacheVisible");
	HX_STACK_LINE(104)
	bool tmp3 = onStage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	if ((tmp4)){
		HX_STACK_LINE(106)
		this->set_visible(false);
		HX_STACK_LINE(107)
		::openfl::_legacy::display::Stage tmp5 = ::openfl::_legacy::Lib_obj::get_stage();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		tmp5->addChild(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(111)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(112)
	::openfl::_legacy::geom::Point tmp5 = point;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	this->__getObjectsUnderPoint(tmp5,result);
	HX_STACK_LINE(114)
	bool tmp6 = onStage;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(114)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(114)
	if ((tmp7)){
		HX_STACK_LINE(116)
		::openfl::_legacy::display::Stage tmp8 = ::openfl::_legacy::Lib_obj::get_stage();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		tmp8->removeChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(117)
		bool tmp9 = cacheVisible;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		this->set_visible(tmp9);
	}
	HX_STACK_LINE(121)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","removeChild",0xecafeb5a,"openfl._legacy.display.DisplayObjectContainer.removeChild","openfl/_legacy/display/DisplayObjectContainer.hx",126,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(128)
	::openfl::_legacy::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	int tmp1 = this->__getChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(130)
	bool tmp2 = (index >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	if ((tmp2)){
		HX_STACK_LINE(132)
		child->__setParent(null());
		HX_STACK_LINE(133)
		::openfl::_legacy::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		return tmp3;
	}
	HX_STACK_LINE(137)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","removeChildAt",0x69052eed,"openfl._legacy.display.DisplayObjectContainer.removeChildAt","openfl/_legacy/display/DisplayObjectContainer.hx",142,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(144)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	if ((tmp)){
		HX_STACK_LINE(144)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(144)
		tmp1 = false;
	}
	HX_STACK_LINE(144)
	if ((tmp1)){
		HX_STACK_LINE(146)
		::openfl::_legacy::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		::openfl::_legacy::display::DisplayObject result = tmp2;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(147)
		result->__setParent(null());
		HX_STACK_LINE(148)
		::openfl::_legacy::display::DisplayObject tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		return tmp3;
	}
	HX_STACK_LINE(152)
	::openfl::errors::ArgumentError tmp2 = ::openfl::errors::ArgumentError_obj::__new(HX_HCSTRING("The supplied DisplayObject must be a child of the caller.","\xe6","\xf4","\x27","\xa5"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	HX_STACK_DO_THROW(tmp2);
	HX_STACK_LINE(152)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","removeChildren",0x7ba90241,"openfl._legacy.display.DisplayObjectContainer.removeChildren","openfl/_legacy/display/DisplayObjectContainer.hx",157,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(159)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		if ((tmp)){
			HX_STACK_LINE(161)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(161)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			endIndex = tmp2;
			HX_STACK_LINE(163)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			if ((tmp3)){
				HX_STACK_LINE(165)
				return null();
			}
		}
		HX_STACK_LINE(171)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		if ((tmp4)){
			HX_STACK_LINE(173)
			return null();
		}
		else{
			HX_STACK_LINE(175)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			if ((tmp7)){
				HX_STACK_LINE(175)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(175)
				tmp8 = true;
			}
			HX_STACK_LINE(175)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(175)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(175)
			if ((tmp9)){
				HX_STACK_LINE(175)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(175)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(175)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(175)
				tmp10 = true;
			}
			HX_STACK_LINE(175)
			if ((tmp10)){
				HX_STACK_LINE(177)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(177)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(181)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(182)
		while((true)){
			HX_STACK_LINE(182)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			if ((tmp7)){
				HX_STACK_LINE(182)
				break;
			}
			HX_STACK_LINE(184)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(184)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(185)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::_legacy::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","setChildIndex",0x27a69b3a,"openfl._legacy.display.DisplayObjectContainer.setChildIndex","openfl/_legacy/display/DisplayObjectContainer.hx",194,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(194)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		if ((tmp2)){
			HX_STACK_LINE(194)
			::String tmp3 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(194)
		::openfl::_legacy::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		int tmp4 = this->__getChildIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		int firstIndex = tmp4;		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(194)
		bool tmp5 = (firstIndex < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		if ((tmp5)){
			HX_STACK_LINE(194)
			::String tmp6 = child->toString();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(194)
			::String tmp7 = (HX_HCSTRING("setChildIndex : object ","\x93","\x4a","\x81","\xb4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(194)
			::String tmp8 = (tmp7 + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			::String msg = tmp8;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(194)
			bool tmp9 = (child->__parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			if ((tmp9)){
				HX_STACK_LINE(194)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(194)
					int tmp10 = this->__children->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(194)
					while((true)){
						HX_STACK_LINE(194)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(194)
						if ((tmp12)){
							HX_STACK_LINE(194)
							break;
						}
						HX_STACK_LINE(194)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(194)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(194)
						::openfl::_legacy::display::DisplayObject tmp14 = this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(194)
						::openfl::_legacy::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(194)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(194)
						if ((tmp16)){
							HX_STACK_LINE(194)
							actualIndex = i;
							HX_STACK_LINE(194)
							break;
						}
					}
				}
				HX_STACK_LINE(194)
				bool tmp10 = (actualIndex != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(194)
				if ((tmp10)){
					HX_STACK_LINE(194)
					int tmp11 = actualIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(194)
					::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(194)
					::String tmp13 = (HX_HCSTRING("Internal error: Real child index was ","\x00","\xbf","\x50","\x8a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					hx::AddEq(msg,tmp13);
				}
				else{
					HX_STACK_LINE(194)
					hx::AddEq(msg,HX_HCSTRING("Internal error: Child was not in __children array!","\xa1","\xb9","\x1b","\xbe"));
				}
			}
			HX_STACK_LINE(194)
			::String tmp10 = msg;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			HX_STACK_DO_THROW(tmp10);
		}
		HX_STACK_LINE(194)
		Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		Dynamic tmp7 = child->__handle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(194)
		::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_set_child_index(tmp6,tmp7,tmp8);
		HX_STACK_LINE(194)
		bool tmp9 = (index < firstIndex);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(194)
		if ((tmp9)){
			HX_STACK_LINE(194)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(194)
			while((true)){
				HX_STACK_LINE(194)
				bool tmp10 = (i > index);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(194)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(194)
				if ((tmp11)){
					HX_STACK_LINE(194)
					break;
				}
				HX_STACK_LINE(194)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				::openfl::_legacy::display::DisplayObject tmp13 = this->__children->__get(tmp12).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(194)
				this->__children[i] = tmp13;
				HX_STACK_LINE(194)
				(i)--;
			}
			HX_STACK_LINE(194)
			::openfl::_legacy::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			this->__children[index] = tmp10;
		}
		else{
			HX_STACK_LINE(194)
			bool tmp10 = (firstIndex < index);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			if ((tmp10)){
				HX_STACK_LINE(194)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(194)
				while((true)){
					HX_STACK_LINE(194)
					bool tmp11 = (i < index);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(194)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(194)
					if ((tmp12)){
						HX_STACK_LINE(194)
						break;
					}
					HX_STACK_LINE(194)
					int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					::openfl::_legacy::display::DisplayObject tmp14 = this->__children->__get(tmp13).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					this->__children[i] = tmp14;
					HX_STACK_LINE(194)
					(i)++;
				}
				HX_STACK_LINE(194)
				::openfl::_legacy::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(194)
				this->__children[index] = tmp11;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::_legacy::display::DisplayObject child1,::openfl::_legacy::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","swapChildren",0xe1a8f410,"openfl._legacy.display.DisplayObjectContainer.swapChildren","openfl/_legacy/display/DisplayObjectContainer.hx",199,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(201)
		::openfl::_legacy::display::DisplayObject tmp = child1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		int tmp1 = this->__getChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		int index1 = tmp1;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(202)
		::openfl::_legacy::display::DisplayObject tmp2 = child2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		int tmp3 = this->__getChildIndex(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		int index2 = tmp3;		HX_STACK_VAR(index2,"index2");
		HX_STACK_LINE(204)
		bool tmp4 = (index1 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		if ((tmp5)){
			HX_STACK_LINE(204)
			tmp6 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(204)
			tmp6 = true;
		}
		HX_STACK_LINE(204)
		if ((tmp6)){
			HX_STACK_LINE(206)
			HX_STACK_DO_THROW(HX_HCSTRING("swapChildren:Could not find children","\x32","\xad","\x6e","\x85"));
		}
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			bool tmp7 = (index1 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(210)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(210)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(210)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(210)
			if ((tmp9)){
				HX_STACK_LINE(210)
				tmp10 = (index2 < (int)0);
			}
			else{
				HX_STACK_LINE(210)
				tmp10 = true;
			}
			HX_STACK_LINE(210)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(210)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(210)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(210)
			if ((tmp12)){
				HX_STACK_LINE(210)
				int tmp14 = index1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				int tmp15 = this->__children->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(210)
				tmp13 = (tmp14 > tmp17);
			}
			else{
				HX_STACK_LINE(210)
				tmp13 = true;
			}
			HX_STACK_LINE(210)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(210)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(210)
			if ((tmp14)){
				HX_STACK_LINE(210)
				int tmp16 = index2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				int tmp17 = this->__children->length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(210)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(210)
				tmp15 = (tmp16 > tmp18);
			}
			else{
				HX_STACK_LINE(210)
				tmp15 = true;
			}
			HX_STACK_LINE(210)
			if ((tmp15)){
				HX_STACK_LINE(210)
				::openfl::errors::RangeError tmp16 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("swapChildrenAt : index out of bounds","\xfd","\x03","\xa9","\x7f"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				HX_STACK_DO_THROW(tmp16);
			}
			HX_STACK_LINE(210)
			bool tmp16 = (index1 != index2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(210)
			if ((tmp16)){
				HX_STACK_LINE(210)
				::openfl::_legacy::display::DisplayObject tmp17 = this->__children->__get(index1).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(210)
				::openfl::_legacy::display::DisplayObject temp = tmp17;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(210)
				::openfl::_legacy::display::DisplayObject tmp18 = this->__children->__get(index2).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(210)
				this->__children[index1] = tmp18;
				HX_STACK_LINE(210)
				::openfl::_legacy::display::DisplayObject tmp19 = temp;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(210)
				this->__children[index2] = tmp19;
				HX_STACK_LINE(210)
				Dynamic tmp20 = this->__handle;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(210)
				int tmp21 = index1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(210)
				int tmp22 = index2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(210)
				::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_swap_children(tmp20,tmp21,tmp22);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","swapChildrenAt",0x54da5123,"openfl._legacy.display.DisplayObjectContainer.swapChildrenAt","openfl/_legacy/display/DisplayObjectContainer.hx",217,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(217)
		bool tmp = (index1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		if ((tmp2)){
			HX_STACK_LINE(217)
			tmp3 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(217)
			tmp3 = true;
		}
		HX_STACK_LINE(217)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		if ((tmp5)){
			HX_STACK_LINE(217)
			int tmp7 = index1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			int tmp8 = this->__children->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			tmp6 = (tmp7 > tmp10);
		}
		else{
			HX_STACK_LINE(217)
			tmp6 = true;
		}
		HX_STACK_LINE(217)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		if ((tmp7)){
			HX_STACK_LINE(217)
			int tmp9 = index2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			int tmp10 = this->__children->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			tmp8 = (tmp9 > tmp11);
		}
		else{
			HX_STACK_LINE(217)
			tmp8 = true;
		}
		HX_STACK_LINE(217)
		if ((tmp8)){
			HX_STACK_LINE(217)
			::openfl::errors::RangeError tmp9 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("swapChildrenAt : index out of bounds","\xfd","\x03","\xa9","\x7f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(217)
		bool tmp9 = (index1 != index2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		if ((tmp9)){
			HX_STACK_LINE(217)
			::openfl::_legacy::display::DisplayObject tmp10 = this->__children->__get(index1).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			::openfl::_legacy::display::DisplayObject temp = tmp10;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(217)
			::openfl::_legacy::display::DisplayObject tmp11 = this->__children->__get(index2).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			this->__children[index1] = tmp11;
			HX_STACK_LINE(217)
			::openfl::_legacy::display::DisplayObject tmp12 = temp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(217)
			this->__children[index2] = tmp12;
			HX_STACK_LINE(217)
			Dynamic tmp13 = this->__handle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(217)
			int tmp14 = index1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(217)
			int tmp15 = index2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(217)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_swap_children(tmp13,tmp14,tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

Void DisplayObjectContainer_obj::__addChild( ::openfl::_legacy::display::DisplayObject child){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__addChild",0xbdc1c879,"openfl._legacy.display.DisplayObjectContainer.__addChild","openfl/_legacy/display/DisplayObjectContainer.hx",222,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(224)
		bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		if ((tmp)){
			HX_STACK_LINE(226)
			HX_STACK_DO_THROW(HX_HCSTRING("Adding to self","\xb2","\xfe","\x1c","\xcf"));
		}
		HX_STACK_LINE(230)
		bool tmp1 = (child->__parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		if ((tmp1)){
			HX_STACK_LINE(232)
			::openfl::_legacy::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			this->setChildIndex(tmp2,tmp4);
		}
		else{
			HX_STACK_LINE(236)
			child->__setParent(null());
			HX_STACK_LINE(237)
			::openfl::_legacy::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			this->__children->push(tmp2);
			HX_STACK_LINE(238)
			Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			Dynamic tmp4 = child->__handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_add_child(tmp3,tmp4);
			HX_STACK_LINE(239)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__addChild,(void))

Void DisplayObjectContainer_obj::__broadcast( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__broadcast",0xb6085083,"openfl._legacy.display.DisplayObjectContainer.__broadcast","openfl/_legacy/display/DisplayObjectContainer.hx",246,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(248)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(250)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		if ((tmp1)){
			HX_STACK_LINE(252)
			::openfl::_legacy::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(256)
				::openfl::_legacy::display::DisplayObject tmp2 = this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				child = tmp2;
				HX_STACK_LINE(258)
				bool tmp3 = (child != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(258)
				if ((tmp3)){
					HX_STACK_LINE(260)
					::openfl::_legacy::events::Event tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(260)
					child->__broadcast(tmp4);
				}
				HX_STACK_LINE(264)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(264)
				int tmp5 = this->__children->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(264)
				bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(264)
				if ((tmp6)){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(270)
				::openfl::_legacy::display::DisplayObject tmp7 = this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(270)
				::openfl::_legacy::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(270)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(270)
				if ((tmp9)){
					HX_STACK_LINE(272)
					(i)++;
					HX_STACK_LINE(274)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(274)
					int tmp11 = this->__children->length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(274)
					bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(274)
					if ((tmp12)){
						HX_STACK_LINE(276)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(286)
		::openfl::_legacy::events::Event tmp2 = event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		this->super::__broadcast(tmp2);
	}
return null();
}


bool DisplayObjectContainer_obj::__contains( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__contains",0x2b2652dd,"openfl._legacy.display.DisplayObjectContainer.__contains","openfl/_legacy/display/DisplayObjectContainer.hx",291,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(293)
	bool tmp = (child == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	if ((tmp)){
		HX_STACK_LINE(295)
		return false;
	}
	HX_STACK_LINE(299)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == child);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	if ((tmp1)){
		HX_STACK_LINE(301)
		return true;
	}
	HX_STACK_LINE(305)
	{
		HX_STACK_LINE(305)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			if ((tmp3)){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(305)
			::openfl::_legacy::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			::openfl::_legacy::display::DisplayObject c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(305)
			++(_g);
			HX_STACK_LINE(307)
			bool tmp5 = (c == child);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(307)
			if ((tmp6)){
				HX_STACK_LINE(307)
				::openfl::_legacy::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				::openfl::_legacy::display::DisplayObject tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				tmp7 = c->__contains(tmp9);
			}
			else{
				HX_STACK_LINE(307)
				tmp7 = true;
			}
			HX_STACK_LINE(307)
			if ((tmp7)){
				HX_STACK_LINE(309)
				return true;
			}
		}
	}
	HX_STACK_LINE(315)
	return false;
}


::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::__findByID( int id){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__findByID",0x9261ff09,"openfl._legacy.display.DisplayObjectContainer.__findByID","openfl/_legacy/display/DisplayObjectContainer.hx",320,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(322)
	int tmp = this->__id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	if ((tmp2)){
		HX_STACK_LINE(324)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(328)
	::openfl::_legacy::display::DisplayObject found;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(330)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(330)
		while((true)){
			HX_STACK_LINE(330)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			if ((tmp4)){
				HX_STACK_LINE(330)
				break;
			}
			HX_STACK_LINE(330)
			::openfl::_legacy::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			::openfl::_legacy::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(330)
			++(_g);
			HX_STACK_LINE(332)
			int tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(332)
			::openfl::_legacy::display::DisplayObject tmp7 = child->__findByID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(332)
			found = tmp7;
			HX_STACK_LINE(334)
			bool tmp8 = (found != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(334)
			if ((tmp8)){
				HX_STACK_LINE(336)
				::openfl::_legacy::display::DisplayObject tmp9 = found;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(336)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(342)
	int tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(342)
	::openfl::_legacy::display::DisplayObject tmp4 = this->super::__findByID(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(342)
	return tmp4;
}


int DisplayObjectContainer_obj::__getChildIndex( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__getChildIndex",0xcb62fe8e,"openfl._legacy.display.DisplayObjectContainer.__getChildIndex","openfl/_legacy/display/DisplayObjectContainer.hx",347,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(349)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(349)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(349)
		while((true)){
			HX_STACK_LINE(349)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(349)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			if ((tmp2)){
				HX_STACK_LINE(349)
				break;
			}
			HX_STACK_LINE(349)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(351)
			::openfl::_legacy::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			::openfl::_legacy::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(351)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			if ((tmp6)){
				HX_STACK_LINE(353)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(353)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(359)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__getChildIndex,return )

Void DisplayObjectContainer_obj::__getObjectsUnderPoint( ::openfl::_legacy::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__getObjectsUnderPoint",0x14f12e54,"openfl._legacy.display.DisplayObjectContainer.__getObjectsUnderPoint","openfl/_legacy/display/DisplayObjectContainer.hx",364,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(366)
		::openfl::_legacy::geom::Point tmp = point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		this->super::__getObjectsUnderPoint(tmp,result);
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(368)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(368)
			while((true)){
				HX_STACK_LINE(368)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(368)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(368)
				if ((tmp2)){
					HX_STACK_LINE(368)
					break;
				}
				HX_STACK_LINE(368)
				::openfl::_legacy::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(368)
				::openfl::_legacy::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(368)
				++(_g);
				HX_STACK_LINE(370)
				::openfl::_legacy::geom::Point tmp4 = point;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(370)
				child->__getObjectsUnderPoint(tmp4,result);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__onAdded( ::openfl::_legacy::display::DisplayObject object,bool isOnStage){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__onAdded",0x10a25c23,"openfl._legacy.display.DisplayObjectContainer.__onAdded","openfl/_legacy/display/DisplayObjectContainer.hx",377,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(isOnStage,"isOnStage")
		HX_STACK_LINE(379)
		::openfl::_legacy::display::DisplayObject tmp = object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(379)
		bool tmp1 = isOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		this->super::__onAdded(tmp,tmp1);
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(381)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(381)
			while((true)){
				HX_STACK_LINE(381)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(381)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(381)
				if ((tmp3)){
					HX_STACK_LINE(381)
					break;
				}
				HX_STACK_LINE(381)
				::openfl::_legacy::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(381)
				::openfl::_legacy::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(381)
				++(_g);
				HX_STACK_LINE(383)
				::openfl::_legacy::display::DisplayObject tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				bool tmp6 = isOnStage;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				child->__onAdded(tmp5,tmp6);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__onRemoved( ::openfl::_legacy::display::DisplayObject object,bool wasOnStage){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__onRemoved",0xa19985c3,"openfl._legacy.display.DisplayObjectContainer.__onRemoved","openfl/_legacy/display/DisplayObjectContainer.hx",390,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(wasOnStage,"wasOnStage")
		HX_STACK_LINE(392)
		::openfl::_legacy::display::DisplayObject tmp = object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		bool tmp1 = wasOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		this->super::__onRemoved(tmp,tmp1);
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(394)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(394)
			while((true)){
				HX_STACK_LINE(394)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(394)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(394)
				if ((tmp3)){
					HX_STACK_LINE(394)
					break;
				}
				HX_STACK_LINE(394)
				::openfl::_legacy::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(394)
				::openfl::_legacy::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(394)
				++(_g);
				HX_STACK_LINE(396)
				::openfl::_legacy::display::DisplayObject tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(396)
				bool tmp6 = wasOnStage;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(396)
				child->__onRemoved(tmp5,tmp6);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__removeChildFromArray( ::openfl::_legacy::display::DisplayObject child){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__removeChildFromArray",0x96bf37b5,"openfl._legacy.display.DisplayObjectContainer.__removeChildFromArray","openfl/_legacy/display/DisplayObjectContainer.hx",403,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(405)
		::openfl::_legacy::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		int tmp1 = this->__getChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(407)
		bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(407)
		if ((tmp2)){
			HX_STACK_LINE(409)
			Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(409)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(409)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_remove_child(tmp3,tmp4);
			HX_STACK_LINE(410)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(410)
			this->__children->splice(tmp5,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__removeChildFromArray,(void))

Void DisplayObjectContainer_obj::__setChildIndex( ::openfl::_legacy::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__setChildIndex",0x1068e09a,"openfl._legacy.display.DisplayObjectContainer.__setChildIndex","openfl/_legacy/display/DisplayObjectContainer.hx",417,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(419)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		if ((tmp2)){
			HX_STACK_LINE(421)
			::String tmp3 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(421)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(425)
		::openfl::_legacy::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(425)
		int tmp4 = this->__getChildIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(425)
		int firstIndex = tmp4;		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(427)
		bool tmp5 = (firstIndex < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(427)
		if ((tmp5)){
			HX_STACK_LINE(429)
			::String tmp6 = child->toString();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(429)
			::String tmp7 = (HX_HCSTRING("setChildIndex : object ","\x93","\x4a","\x81","\xb4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(429)
			::String tmp8 = (tmp7 + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			::String msg = tmp8;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(431)
			bool tmp9 = (child->__parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(431)
			if ((tmp9)){
				HX_STACK_LINE(433)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(435)
					int tmp10 = this->__children->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(435)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(435)
					while((true)){
						HX_STACK_LINE(435)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(435)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(435)
						if ((tmp12)){
							HX_STACK_LINE(435)
							break;
						}
						HX_STACK_LINE(435)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(435)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(437)
						::openfl::_legacy::display::DisplayObject tmp14 = this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(437)
						::openfl::_legacy::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(437)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(437)
						if ((tmp16)){
							HX_STACK_LINE(439)
							actualIndex = i;
							HX_STACK_LINE(440)
							break;
						}
					}
				}
				HX_STACK_LINE(446)
				bool tmp10 = (actualIndex != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(446)
				if ((tmp10)){
					HX_STACK_LINE(448)
					int tmp11 = actualIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(448)
					::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(448)
					::String tmp13 = (HX_HCSTRING("Internal error: Real child index was ","\x00","\xbf","\x50","\x8a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(448)
					hx::AddEq(msg,tmp13);
				}
				else{
					HX_STACK_LINE(452)
					hx::AddEq(msg,HX_HCSTRING("Internal error: Child was not in __children array!","\xa1","\xb9","\x1b","\xbe"));
				}
			}
			HX_STACK_LINE(458)
			::String tmp10 = msg;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			HX_STACK_DO_THROW(tmp10);
		}
		HX_STACK_LINE(462)
		Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(462)
		Dynamic tmp7 = child->__handle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(462)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(462)
		::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_set_child_index(tmp6,tmp7,tmp8);
		HX_STACK_LINE(464)
		bool tmp9 = (index < firstIndex);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(464)
		if ((tmp9)){
			HX_STACK_LINE(466)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(468)
			while((true)){
				HX_STACK_LINE(468)
				bool tmp10 = (i > index);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(468)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(468)
				if ((tmp11)){
					HX_STACK_LINE(468)
					break;
				}
				HX_STACK_LINE(470)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(470)
				::openfl::_legacy::display::DisplayObject tmp13 = this->__children->__get(tmp12).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(470)
				this->__children[i] = tmp13;
				HX_STACK_LINE(471)
				(i)--;
			}
			HX_STACK_LINE(475)
			::openfl::_legacy::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(475)
			this->__children[index] = tmp10;
		}
		else{
			HX_STACK_LINE(477)
			bool tmp10 = (firstIndex < index);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(477)
			if ((tmp10)){
				HX_STACK_LINE(479)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(481)
				while((true)){
					HX_STACK_LINE(481)
					bool tmp11 = (i < index);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(481)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(481)
					if ((tmp12)){
						HX_STACK_LINE(481)
						break;
					}
					HX_STACK_LINE(483)
					int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(483)
					::openfl::_legacy::display::DisplayObject tmp14 = this->__children->__get(tmp13).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(483)
					this->__children[i] = tmp14;
					HX_STACK_LINE(484)
					(i)++;
				}
				HX_STACK_LINE(488)
				::openfl::_legacy::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(488)
				this->__children[index] = tmp11;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,__setChildIndex,(void))

Void DisplayObjectContainer_obj::__swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__swapChildrenAt",0x1614bfc3,"openfl._legacy.display.DisplayObjectContainer.__swapChildrenAt","openfl/_legacy/display/DisplayObjectContainer.hx",495,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(497)
		bool tmp = (index1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		if ((tmp2)){
			HX_STACK_LINE(497)
			tmp3 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(497)
			tmp3 = true;
		}
		HX_STACK_LINE(497)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		if ((tmp5)){
			HX_STACK_LINE(497)
			int tmp7 = index1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			int tmp8 = this->__children->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(497)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			tmp6 = (tmp7 > tmp10);
		}
		else{
			HX_STACK_LINE(497)
			tmp6 = true;
		}
		HX_STACK_LINE(497)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		if ((tmp7)){
			HX_STACK_LINE(497)
			int tmp9 = index2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(497)
			int tmp10 = this->__children->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			tmp8 = (tmp9 > tmp11);
		}
		else{
			HX_STACK_LINE(497)
			tmp8 = true;
		}
		HX_STACK_LINE(497)
		if ((tmp8)){
			HX_STACK_LINE(499)
			::openfl::errors::RangeError tmp9 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("swapChildrenAt : index out of bounds","\xfd","\x03","\xa9","\x7f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(499)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(503)
		bool tmp9 = (index1 != index2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(503)
		if ((tmp9)){
			HX_STACK_LINE(505)
			::openfl::_legacy::display::DisplayObject tmp10 = this->__children->__get(index1).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(505)
			::openfl::_legacy::display::DisplayObject temp = tmp10;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(506)
			::openfl::_legacy::display::DisplayObject tmp11 = this->__children->__get(index2).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(506)
			this->__children[index1] = tmp11;
			HX_STACK_LINE(507)
			::openfl::_legacy::display::DisplayObject tmp12 = temp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(507)
			this->__children[index2] = tmp12;
			HX_STACK_LINE(508)
			Dynamic tmp13 = this->__handle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(508)
			int tmp14 = index1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(508)
			int tmp15 = index2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(508)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_swap_children(tmp13,tmp14,tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,__swapChildrenAt,(void))

bool DisplayObjectContainer_obj::get_mouseChildren( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","get_mouseChildren",0x5f15adfd,"openfl._legacy.display.DisplayObjectContainer.get_mouseChildren","openfl/_legacy/display/DisplayObjectContainer.hx",522,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(522)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(522)
	bool tmp1 = ::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_get_mouse_children(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(522)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_mouseChildren,return )

bool DisplayObjectContainer_obj::set_mouseChildren( bool value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","set_mouseChildren",0x82838609,"openfl._legacy.display.DisplayObjectContainer.set_mouseChildren","openfl/_legacy/display/DisplayObjectContainer.hx",523,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(525)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(525)
	::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_set_mouse_children(tmp,tmp1);
	HX_STACK_LINE(526)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(526)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_mouseChildren,return )

int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","get_numChildren",0xa8107ede,"openfl._legacy.display.DisplayObjectContainer.get_numChildren","openfl/_legacy/display/DisplayObjectContainer.hx",531,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(531)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(531)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","get_tabChildren",0x971621ed,"openfl._legacy.display.DisplayObjectContainer.get_tabChildren","openfl/_legacy/display/DisplayObjectContainer.hx",532,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(532)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

bool DisplayObjectContainer_obj::set_tabChildren( bool value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","set_tabChildren",0x92e19ef9,"openfl._legacy.display.DisplayObjectContainer.set_tabChildren","openfl/_legacy/display/DisplayObjectContainer.hx",533,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(533)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )

Dynamic DisplayObjectContainer_obj::lime_create_display_object_container;

Dynamic DisplayObjectContainer_obj::lime_doc_add_child;

Dynamic DisplayObjectContainer_obj::lime_doc_remove_child;

Dynamic DisplayObjectContainer_obj::lime_doc_set_child_index;

Dynamic DisplayObjectContainer_obj::lime_doc_get_mouse_children;

Dynamic DisplayObjectContainer_obj::lime_doc_set_mouse_children;

Dynamic DisplayObjectContainer_obj::lime_doc_swap_children;


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(__children,"__children");
	::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__onAdded") ) { return __onAdded_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__addChild") ) { return __addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__contains") ) { return __contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__findByID") ) { return __findByID_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp == hx::paccAlways ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == hx::paccAlways) return get_tabChildren(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__onRemoved") ) { return __onRemoved_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { if (inCallProp == hx::paccAlways) return get_mouseChildren(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__getChildIndex") ) { return __getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__setChildIndex") ) { return __setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return get_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return set_tabChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__swapChildrenAt") ) { return __swapChildrenAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_mouseChildren") ) { return get_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseChildren") ) { return set_mouseChildren_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__getObjectsUnderPoint") ) { return __getObjectsUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__removeChildFromArray") ) { return __removeChildFromArray_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_doc_add_child") ) { outValue = lime_doc_add_child; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_doc_remove_child") ) { outValue = lime_doc_remove_child; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_doc_swap_children") ) { outValue = lime_doc_swap_children; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_doc_set_child_index") ) { outValue = lime_doc_set_child_index; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_doc_get_mouse_children") ) { outValue = lime_doc_get_mouse_children; return true;  }
		if (HX_FIELD_EQ(inName,"lime_doc_set_mouse_children") ) { outValue = lime_doc_set_mouse_children; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_create_display_object_container") ) { outValue = lime_create_display_object_container; return true;  }
	}
	return false;
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == hx::paccAlways) return set_tabChildren(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { if (inCallProp == hx::paccAlways) return set_mouseChildren(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObjectContainer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_doc_add_child") ) { lime_doc_add_child=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_doc_remove_child") ) { lime_doc_remove_child=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_doc_swap_children") ) { lime_doc_swap_children=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_doc_set_child_index") ) { lime_doc_set_child_index=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_doc_get_mouse_children") ) { lime_doc_get_mouse_children=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_doc_set_mouse_children") ) { lime_doc_set_mouse_children=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_create_display_object_container") ) { lime_create_display_object_container=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::lime_create_display_object_container,HX_HCSTRING("lime_create_display_object_container","\xd7","\xb4","\x24","\x09")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::lime_doc_add_child,HX_HCSTRING("lime_doc_add_child","\x0d","\x98","\x4b","\x05")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::lime_doc_remove_child,HX_HCSTRING("lime_doc_remove_child","\x32","\xcd","\xaa","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::lime_doc_set_child_index,HX_HCSTRING("lime_doc_set_child_index","\x21","\xe9","\x06","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::lime_doc_get_mouse_children,HX_HCSTRING("lime_doc_get_mouse_children","\x73","\xc6","\xf8","\x6e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::lime_doc_set_mouse_children,HX_HCSTRING("lime_doc_set_mouse_children","\xe7","\xf8","\xa7","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::lime_doc_swap_children,HX_HCSTRING("lime_doc_swap_children","\x7a","\x35","\x7d","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__addChild","\xdb","\x42","\x4f","\x62"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__contains","\x3f","\xcd","\xb3","\xcf"),
	HX_HCSTRING("__findByID","\x6b","\x79","\xef","\x36"),
	HX_HCSTRING("__getChildIndex","\xec","\xa0","\xb4","\x40"),
	HX_HCSTRING("__getObjectsUnderPoint","\xb6","\xb3","\x7d","\x48"),
	HX_HCSTRING("__onAdded","\x01","\xc4","\xcf","\x33"),
	HX_HCSTRING("__onRemoved","\x21","\x21","\xd7","\xf8"),
	HX_HCSTRING("__removeChildFromArray","\x17","\xbd","\x4b","\xca"),
	HX_HCSTRING("__setChildIndex","\xf8","\x82","\xba","\x85"),
	HX_HCSTRING("__swapChildrenAt","\xa5","\x2f","\x31","\x48"),
	HX_HCSTRING("get_mouseChildren","\xdb","\x23","\xdb","\x05"),
	HX_HCSTRING("set_mouseChildren","\xe7","\xfb","\x48","\x29"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	HX_HCSTRING("get_tabChildren","\x4b","\xc4","\x67","\x0c"),
	HX_HCSTRING("set_tabChildren","\x57","\x41","\x33","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_create_display_object_container,"lime_create_display_object_container");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_add_child,"lime_doc_add_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_remove_child,"lime_doc_remove_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_set_child_index,"lime_doc_set_child_index");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_get_mouse_children,"lime_doc_get_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_set_mouse_children,"lime_doc_set_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_swap_children,"lime_doc_swap_children");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_create_display_object_container,"lime_create_display_object_container");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_add_child,"lime_doc_add_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_remove_child,"lime_doc_remove_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_set_child_index,"lime_doc_set_child_index");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_get_mouse_children,"lime_doc_get_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_set_mouse_children,"lime_doc_set_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_swap_children,"lime_doc_swap_children");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_create_display_object_container","\xd7","\xb4","\x24","\x09"),
	HX_HCSTRING("lime_doc_add_child","\x0d","\x98","\x4b","\x05"),
	HX_HCSTRING("lime_doc_remove_child","\x32","\xcd","\xaa","\x03"),
	HX_HCSTRING("lime_doc_set_child_index","\x21","\xe9","\x06","\xbd"),
	HX_HCSTRING("lime_doc_get_mouse_children","\x73","\xc6","\xf8","\x6e"),
	HX_HCSTRING("lime_doc_set_mouse_children","\xe7","\xf8","\xa7","\x4b"),
	HX_HCSTRING("lime_doc_swap_children","\x7a","\x35","\x7d","\x8d"),
	::String(null()) };

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.DisplayObjectContainer","\x10","\xda","\xf5","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObjectContainer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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

void DisplayObjectContainer_obj::__boot()
{
	lime_create_display_object_container= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_create_display_object_container","\x35","\x87","\x0a","\x79"),(int)0);
	lime_doc_add_child= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_doc_add_child","\xeb","\x5a","\x41","\x09"),(int)2);
	lime_doc_remove_child= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_doc_remove_child","\x14","\xa9","\xf7","\xf4"),(int)2);
	lime_doc_set_child_index= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_doc_set_child_index","\x7f","\x26","\x57","\xfa"),(int)3);
	lime_doc_get_mouse_children= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_doc_get_mouse_children","\xd5","\xb7","\xce","\xf3"),(int)1);
	lime_doc_set_mouse_children= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_doc_set_mouse_children","\x49","\xea","\x7d","\xd0"),(int)2);
	lime_doc_swap_children= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_doc_swap_children","\x58","\xbf","\x70","\xbf"),(int)3);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
