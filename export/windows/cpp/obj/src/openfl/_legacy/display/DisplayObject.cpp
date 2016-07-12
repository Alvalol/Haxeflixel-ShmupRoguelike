#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void DisplayObject_obj::__construct(Dynamic handle,::String type)
{
HX_STACK_FRAME("openfl._legacy.display.DisplayObject","new",0xb3f84263,"openfl._legacy.display.DisplayObject.new","openfl/_legacy/display/DisplayObject.hx",56,0x32220b70)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(58)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(60)
	this->__parent = null();
	HX_STACK_LINE(61)
	this->__handle = handle;
	HX_STACK_LINE(62)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	int tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_id(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	this->__id = tmp1;
	HX_STACK_LINE(63)
	::String tmp2 = (type + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	int tmp3 = this->__id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	this->set_name(tmp4);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new(Dynamic handle,::String type)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct(handle,type);
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::display::IBitmapDrawable_obj)) return operator ::openfl::_legacy::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::openfl::_legacy::display::IBitmapDrawable_obj *()
	{ return new ::openfl::_legacy::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
bool DisplayObject_obj::dispatchEvent( ::openfl::_legacy::events::Event event){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","dispatchEvent",0x7d66fac3,"openfl._legacy.display.DisplayObject.dispatchEvent","openfl/_legacy/display/DisplayObject.hx",68,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(70)
	::openfl::_legacy::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = this->__dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(72)
	bool tmp2 = event->__getIsCancelled();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	if ((tmp2)){
		HX_STACK_LINE(73)
		return true;
	}
	HX_STACK_LINE(75)
	bool tmp3 = event->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	if ((tmp4)){
		HX_STACK_LINE(75)
		::openfl::_legacy::display::DisplayObjectContainer tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		::openfl::_legacy::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		::openfl::_legacy::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		tmp5 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(75)
		tmp5 = false;
	}
	HX_STACK_LINE(75)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	if ((tmp5)){
		HX_STACK_LINE(75)
		::openfl::_legacy::display::DisplayObjectContainer tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		::openfl::_legacy::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(75)
		tmp6 = false;
	}
	HX_STACK_LINE(75)
	if ((tmp6)){
		HX_STACK_LINE(77)
		::openfl::_legacy::display::DisplayObjectContainer tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		::openfl::_legacy::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		tmp7->dispatchEvent(tmp8);
	}
	HX_STACK_LINE(81)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	return tmp7;
}


::openfl::_legacy::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::_legacy::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","getBounds",0xf4ba65ee,"openfl._legacy.display.DisplayObject.getBounds","openfl/_legacy/display/DisplayObject.hx",86,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(88)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::openfl::_legacy::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(89)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	bool tmp2 = (targetCoordinateSpace != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	if ((tmp2)){
		HX_STACK_LINE(89)
		tmp3 = targetCoordinateSpace->__handle;
	}
	else{
		HX_STACK_LINE(89)
		tmp3 = null();
	}
	HX_STACK_LINE(89)
	::openfl::_legacy::geom::Rectangle tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_bounds(tmp1,tmp3,tmp4,true);
	HX_STACK_LINE(90)
	::openfl::_legacy::geom::Rectangle tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::_legacy::geom::Rectangle DisplayObject_obj::getRect( ::openfl::_legacy::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","getRect",0xdc232c5d,"openfl._legacy.display.DisplayObject.getRect","openfl/_legacy/display/DisplayObject.hx",95,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(97)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::openfl::_legacy::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(98)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Dynamic tmp2 = targetCoordinateSpace->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	::openfl::_legacy::geom::Rectangle tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_bounds(tmp1,tmp2,tmp3,false);
	HX_STACK_LINE(99)
	::openfl::_legacy::geom::Rectangle tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::_legacy::geom::Point DisplayObject_obj::globalToLocal( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","globalToLocal",0x22b08290,"openfl._legacy.display.DisplayObject.globalToLocal","openfl/_legacy/display/DisplayObject.hx",104,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(106)
	::openfl::_legacy::geom::Point tmp = point->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	::openfl::_legacy::geom::Point result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(107)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	::openfl::_legacy::geom::Point tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_global_to_local(tmp1,tmp2);
	HX_STACK_LINE(108)
	::openfl::_legacy::geom::Point tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::_legacy::display::DisplayObject obj){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","hitTestObject",0x8e6688a7,"openfl._legacy.display.DisplayObject.hitTestObject","openfl/_legacy/display/DisplayObject.hx",113,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(115)
	bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	if ((tmp1)){
		HX_STACK_LINE(115)
		::openfl::_legacy::display::DisplayObjectContainer tmp3 = obj->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		::openfl::_legacy::display::DisplayObjectContainer tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		::openfl::_legacy::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(115)
		tmp2 = false;
	}
	HX_STACK_LINE(115)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	if ((tmp2)){
		HX_STACK_LINE(115)
		::openfl::_legacy::display::DisplayObjectContainer tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		::openfl::_legacy::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(115)
		tmp3 = false;
	}
	HX_STACK_LINE(115)
	if ((tmp3)){
		HX_STACK_LINE(117)
		::openfl::_legacy::geom::Rectangle tmp4 = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		::openfl::_legacy::geom::Rectangle currentBounds = tmp4;		HX_STACK_VAR(currentBounds,"currentBounds");
		HX_STACK_LINE(118)
		::openfl::_legacy::geom::Rectangle tmp5 = obj->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		::openfl::_legacy::geom::Rectangle targetBounds = tmp5;		HX_STACK_VAR(targetBounds,"targetBounds");
		HX_STACK_LINE(120)
		::openfl::_legacy::geom::Rectangle tmp6 = targetBounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		bool tmp7 = currentBounds->intersects(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		return tmp7;
	}
	HX_STACK_LINE(124)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","hitTestPoint",0x063e5f68,"openfl._legacy.display.DisplayObject.hitTestPoint","openfl/_legacy/display/DisplayObject.hx",129,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(131)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		bool tmp3 = shapeFlag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		bool tmp4 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_hit_test_point(tmp,tmp1,tmp2,tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::_legacy::geom::Point DisplayObject_obj::localToGlobal( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","localToGlobal",0xfeed758c,"openfl._legacy.display.DisplayObject.localToGlobal","openfl/_legacy/display/DisplayObject.hx",136,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(138)
	::openfl::_legacy::geom::Point tmp = point->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::openfl::_legacy::geom::Point result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(139)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	::openfl::_legacy::geom::Point tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_local_to_global(tmp1,tmp2);
	HX_STACK_LINE(140)
	::openfl::_legacy::geom::Point tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

::String DisplayObject_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","toString",0xb47f33c9,"openfl._legacy.display.DisplayObject.toString","openfl/_legacy/display/DisplayObject.hx",145,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	::String tmp = this->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}


::openfl::_legacy::display::InteractiveObject DisplayObject_obj::__asInteractiveObject( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__asInteractiveObject",0xad4ed092,"openfl._legacy.display.DisplayObject.__asInteractiveObject","openfl/_legacy/display/DisplayObject.hx",154,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__asInteractiveObject,return )

Void DisplayObject_obj::__broadcast( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__broadcast",0xfe8098e4,"openfl._legacy.display.DisplayObject.__broadcast","openfl/_legacy/display/DisplayObject.hx",159,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(161)
		::openfl::_legacy::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		this->__dispatchEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__broadcast,(void))

bool DisplayObject_obj::__contains( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__contains",0xbaf8f19c,"openfl._legacy.display.DisplayObject.__contains","openfl/_legacy/display/DisplayObject.hx",168,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(168)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__contains,return )

bool DisplayObject_obj::__dispatchEvent( ::openfl::_legacy::events::Event event){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__dispatchEvent",0x70dfea63,"openfl._legacy.display.DisplayObject.__dispatchEvent","openfl/_legacy/display/DisplayObject.hx",173,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(175)
	Dynamic tmp = event->get_target();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	if ((tmp1)){
		HX_STACK_LINE(177)
		event->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(181)
	event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(182)
	::openfl::_legacy::events::Event tmp2 = event;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	bool tmp3 = this->super::dispatchEvent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__dispatchEvent,return )

Void DisplayObject_obj::__drawToSurface( Dynamic surface,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::geom::ColorTransform colorTransform,::String blendMode,::openfl::_legacy::geom::Rectangle clipRect,bool smoothing){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__drawToSurface",0x967fd4b1,"openfl._legacy.display.DisplayObject.__drawToSurface","openfl/_legacy/display/DisplayObject.hx",187,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_ARG(smoothing,"smoothing")
		HX_STACK_LINE(189)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		Dynamic tmp1 = surface;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		::openfl::_legacy::geom::ColorTransform tmp3 = colorTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		::String tmp4 = blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		::openfl::_legacy::geom::Rectangle tmp5 = clipRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		::openfl::_legacy::display::DisplayObject_obj::lime_display_object_draw_to_surface(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,__drawToSurface,(void))

::openfl::_legacy::display::DisplayObject DisplayObject_obj::__findByID( int id){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__findByID",0x22349dc8,"openfl._legacy.display.DisplayObject.__findByID","openfl/_legacy/display/DisplayObject.hx",194,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(198)
	int tmp = this->__id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	if ((tmp2)){
		HX_STACK_LINE(200)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(204)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__findByID,return )

Void DisplayObject_obj::__fireEvent( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__fireEvent",0x90d42667,"openfl._legacy.display.DisplayObject.__fireEvent","openfl/_legacy/display/DisplayObject.hx",209,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(211)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(213)
		::openfl::_legacy::display::DisplayObjectContainer tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		if ((tmp1)){
			HX_STACK_LINE(215)
			::openfl::_legacy::display::DisplayObjectContainer tmp2 = this->__parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			tmp2->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(219)
		int length = stack->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(221)
		bool tmp2 = (stack->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		if ((tmp2)){
			HX_STACK_LINE(223)
			event->__setPhase((int)1);
			HX_STACK_LINE(224)
			event->set_target(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(225)
			int tmp3 = (length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(225)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				bool tmp4 = (i >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				if ((tmp5)){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(229)
				::openfl::_legacy::display::InteractiveObject tmp6 = stack->__get(i).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(229)
				::openfl::_legacy::events::Event tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(229)
				tmp6->__dispatchEvent(tmp7);
				HX_STACK_LINE(231)
				bool tmp8 = event->__getIsCancelled();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(231)
				if ((tmp8)){
					HX_STACK_LINE(233)
					return null();
				}
				HX_STACK_LINE(237)
				(i)--;
			}
		}
		HX_STACK_LINE(243)
		event->__setPhase((int)2);
		HX_STACK_LINE(244)
		::openfl::_legacy::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		this->__dispatchEvent(tmp3);
		HX_STACK_LINE(246)
		bool tmp4 = event->__getIsCancelled();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		if ((tmp4)){
			HX_STACK_LINE(248)
			return null();
		}
		HX_STACK_LINE(252)
		bool tmp5 = event->get_bubbles();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		if ((tmp5)){
			HX_STACK_LINE(254)
			event->__setPhase((int)3);
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(256)
				while((true)){
					HX_STACK_LINE(256)
					bool tmp6 = (_g < length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(256)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					if ((tmp7)){
						HX_STACK_LINE(256)
						break;
					}
					HX_STACK_LINE(256)
					int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(256)
					int i = tmp8;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(258)
					::openfl::_legacy::display::InteractiveObject tmp9 = stack->__get(i).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(258)
					::openfl::_legacy::events::Event tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(258)
					tmp9->__dispatchEvent(tmp10);
					HX_STACK_LINE(260)
					bool tmp11 = event->__getIsCancelled();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(260)
					if ((tmp11)){
						HX_STACK_LINE(262)
						return null();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__fireEvent,(void))

::openfl::_legacy::geom::ColorTransform DisplayObject_obj::__getColorTransform( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__getColorTransform",0x2aa797a2,"openfl._legacy.display.DisplayObject.__getColorTransform","openfl/_legacy/display/DisplayObject.hx",273,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	::openfl::_legacy::geom::ColorTransform tmp = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	::openfl::_legacy::geom::ColorTransform colorTransform = tmp;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(276)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	::openfl::_legacy::geom::ColorTransform tmp2 = colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(276)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_color_transform(tmp1,tmp2,false);
	HX_STACK_LINE(277)
	::openfl::_legacy::geom::ColorTransform tmp3 = colorTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(277)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getColorTransform,return )

::openfl::_legacy::geom::ColorTransform DisplayObject_obj::__getConcatenatedColorTransform( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__getConcatenatedColorTransform",0x212eea91,"openfl._legacy.display.DisplayObject.__getConcatenatedColorTransform","openfl/_legacy/display/DisplayObject.hx",282,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	::openfl::_legacy::geom::ColorTransform tmp = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	::openfl::_legacy::geom::ColorTransform colorTransform = tmp;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(285)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	::openfl::_legacy::geom::ColorTransform tmp2 = colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_color_transform(tmp1,tmp2,true);
	HX_STACK_LINE(286)
	::openfl::_legacy::geom::ColorTransform tmp3 = colorTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getConcatenatedColorTransform,return )

::openfl::_legacy::geom::Matrix DisplayObject_obj::__getConcatenatedMatrix( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__getConcatenatedMatrix",0x09e90149,"openfl._legacy.display.DisplayObject.__getConcatenatedMatrix","openfl/_legacy/display/DisplayObject.hx",291,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	::openfl::_legacy::geom::Matrix tmp = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	::openfl::_legacy::geom::Matrix matrix = tmp;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(294)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_matrix(tmp1,tmp2,true);
	HX_STACK_LINE(295)
	::openfl::_legacy::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getConcatenatedMatrix,return )

Void DisplayObject_obj::__getInteractiveObjectStack( Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__getInteractiveObjectStack",0x448cc660,"openfl._legacy.display.DisplayObject.__getInteractiveObjectStack","openfl/_legacy/display/DisplayObject.hx",300,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(302)
		::openfl::_legacy::display::InteractiveObject tmp = this->__asInteractiveObject();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		::openfl::_legacy::display::InteractiveObject interactive = tmp;		HX_STACK_VAR(interactive,"interactive");
		HX_STACK_LINE(304)
		bool tmp1 = (interactive != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(306)
			::openfl::_legacy::display::InteractiveObject tmp2 = interactive;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(306)
			stack->push(tmp2);
		}
		HX_STACK_LINE(310)
		::openfl::_legacy::display::DisplayObjectContainer tmp2 = this->__parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		if ((tmp3)){
			HX_STACK_LINE(312)
			::openfl::_legacy::display::DisplayObjectContainer tmp4 = this->__parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			tmp4->__getInteractiveObjectStack(stack);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractiveObjectStack,(void))

::openfl::_legacy::geom::Matrix DisplayObject_obj::__getMatrix( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__getMatrix",0x5785b55a,"openfl._legacy.display.DisplayObject.__getMatrix","openfl/_legacy/display/DisplayObject.hx",319,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	::openfl::_legacy::geom::Matrix tmp = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	::openfl::_legacy::geom::Matrix matrix = tmp;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(322)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_matrix(tmp1,tmp2,false);
	HX_STACK_LINE(323)
	::openfl::_legacy::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getMatrix,return )

Void DisplayObject_obj::__getObjectsUnderPoint( ::openfl::_legacy::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__getObjectsUnderPoint",0xefd66f93,"openfl._legacy.display.DisplayObject.__getObjectsUnderPoint","openfl/_legacy/display/DisplayObject.hx",328,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(330)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		Float tmp2 = point->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		bool tmp3 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_hit_test_point(tmp,tmp1,tmp2,true,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		if ((tmp3)){
			HX_STACK_LINE(332)
			result->push(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getObjectsUnderPoint,(void))

::openfl::_legacy::geom::Rectangle DisplayObject_obj::__getPixelBounds( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__getPixelBounds",0xe08c8fe2,"openfl._legacy.display.DisplayObject.__getPixelBounds","openfl/_legacy/display/DisplayObject.hx",339,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(341)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	::openfl::_legacy::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(342)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	::openfl::_legacy::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_pixel_bounds(tmp1,tmp2);
	HX_STACK_LINE(343)
	::openfl::_legacy::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(343)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getPixelBounds,return )

Void DisplayObject_obj::__onAdded( ::openfl::_legacy::display::DisplayObject object,bool isOnStage){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__onAdded",0x46161a44,"openfl._legacy.display.DisplayObject.__onAdded","openfl/_legacy/display/DisplayObject.hx",348,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(isOnStage,"isOnStage")
		HX_STACK_LINE(350)
		bool tmp = (object == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		if ((tmp)){
			HX_STACK_LINE(352)
			::String tmp1 = ::openfl::_legacy::events::Event_obj::ADDED;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(352)
			::openfl::_legacy::events::Event tmp2 = ::openfl::_legacy::events::Event_obj::__new(tmp1,true,false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(352)
			::openfl::_legacy::events::Event event = tmp2;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(353)
			event->set_target(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(354)
			::openfl::_legacy::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(354)
			this->dispatchEvent(tmp3);
		}
		HX_STACK_LINE(358)
		bool tmp1 = isOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		if ((tmp1)){
			HX_STACK_LINE(360)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,false,false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			::openfl::_legacy::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(361)
			event->set_target(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(362)
			::openfl::_legacy::events::Event tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			this->dispatchEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__onAdded,(void))

Void DisplayObject_obj::__onRemoved( ::openfl::_legacy::display::DisplayObject object,bool wasOnStage){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__onRemoved",0xea11ce24,"openfl._legacy.display.DisplayObject.__onRemoved","openfl/_legacy/display/DisplayObject.hx",369,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(wasOnStage,"wasOnStage")
		HX_STACK_LINE(371)
		bool tmp = (object == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		if ((tmp)){
			HX_STACK_LINE(373)
			::String tmp1 = ::openfl::_legacy::events::Event_obj::REMOVED;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(373)
			::openfl::_legacy::events::Event tmp2 = ::openfl::_legacy::events::Event_obj::__new(tmp1,true,false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			::openfl::_legacy::events::Event event = tmp2;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(374)
			event->set_target(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(375)
			::openfl::_legacy::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			this->dispatchEvent(tmp3);
		}
		HX_STACK_LINE(379)
		bool tmp1 = wasOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		if ((tmp1)){
			HX_STACK_LINE(381)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,false,false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			::openfl::_legacy::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(382)
			event->set_target(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(383)
			::openfl::_legacy::events::Event tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			this->dispatchEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__onRemoved,(void))

Void DisplayObject_obj::__setColorTransform( ::openfl::_legacy::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__setColorTransform",0x4e156fae,"openfl._legacy.display.DisplayObject.__setColorTransform","openfl/_legacy/display/DisplayObject.hx",390,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(392)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		::openfl::_legacy::geom::ColorTransform tmp1 = colorTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_color_transform(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setColorTransform,(void))

Void DisplayObject_obj::__setMatrix( ::openfl::_legacy::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__setMatrix",0x3ad6a166,"openfl._legacy.display.DisplayObject.__setMatrix","openfl/_legacy/display/DisplayObject.hx",397,0x32220b70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(399)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(399)
		::openfl::_legacy::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_matrix(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setMatrix,(void))

::openfl::_legacy::display::DisplayObjectContainer DisplayObject_obj::__setParent( ::openfl::_legacy::display::DisplayObjectContainer parent){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","__setParent",0x6c8c704f,"openfl._legacy.display.DisplayObject.__setParent","openfl/_legacy/display/DisplayObject.hx",404,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parent,"parent")
	HX_STACK_LINE(406)
	::openfl::_legacy::display::DisplayObjectContainer tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	::openfl::_legacy::display::DisplayObjectContainer tmp1 = this->__parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	if ((tmp2)){
		HX_STACK_LINE(408)
		::openfl::_legacy::display::DisplayObjectContainer tmp3 = parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		return tmp3;
	}
	HX_STACK_LINE(412)
	::openfl::_legacy::display::DisplayObjectContainer tmp3 = this->__parent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(412)
	if ((tmp4)){
		HX_STACK_LINE(414)
		::openfl::_legacy::display::DisplayObjectContainer tmp5 = this->__parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(414)
		tmp5->__removeChildFromArray(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(415)
		::openfl::_legacy::display::Stage tmp6 = this->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(415)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(415)
		this->__onRemoved(hx::ObjectPtr<OBJ_>(this),tmp7);
	}
	HX_STACK_LINE(419)
	this->__parent = parent;
	HX_STACK_LINE(421)
	bool tmp5 = (parent != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(421)
	if ((tmp5)){
		HX_STACK_LINE(423)
		::openfl::_legacy::display::Stage tmp6 = this->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(423)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(423)
		this->__onAdded(hx::ObjectPtr<OBJ_>(this),tmp7);
	}
	HX_STACK_LINE(427)
	::openfl::_legacy::display::DisplayObjectContainer tmp6 = parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(427)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setParent,return )

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_alpha",0x778659f8,"openfl._legacy.display.DisplayObject.get_alpha","openfl/_legacy/display/DisplayObject.hx",439,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(439)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_alpha(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(439)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_alpha",0x5ad74604,"openfl._legacy.display.DisplayObject.set_alpha","openfl/_legacy/display/DisplayObject.hx",440,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(442)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(442)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_alpha(tmp,tmp1);
	HX_STACK_LINE(443)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(443)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

Dynamic DisplayObject_obj::get_opaqueBackground( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_opaqueBackground",0xe47937d5,"openfl._legacy.display.DisplayObject.get_opaqueBackground","openfl/_legacy/display/DisplayObject.hx",448,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(450)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	int tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_bg(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(452)
	int tmp2 = (int(i) & int((int)16777216));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(452)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	if ((tmp3)){
		HX_STACK_LINE(454)
		return null();
	}
	HX_STACK_LINE(458)
	int tmp4 = (int(i) & int((int)16777215));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(458)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_opaqueBackground,return )

Dynamic DisplayObject_obj::set_opaqueBackground( Dynamic value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_opaqueBackground",0xb130ef49,"openfl._legacy.display.DisplayObject.set_opaqueBackground","openfl/_legacy/display/DisplayObject.hx",463,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(465)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(465)
	if ((tmp)){
		HX_STACK_LINE(467)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(467)
		::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_bg(tmp1,(int)0);
	}
	else{
		HX_STACK_LINE(471)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_bg(tmp1,tmp2);
	}
	HX_STACK_LINE(475)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(475)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_opaqueBackground,return )

::openfl::_legacy::display::BlendMode DisplayObject_obj::get_blendMode( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_blendMode",0x849debee,"openfl._legacy.display.DisplayObject.get_blendMode","openfl/_legacy/display/DisplayObject.hx",480,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(482)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	int tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_blend_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(483)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(483)
	::openfl::_legacy::display::BlendMode tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::display::BlendMode >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(483)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_blendMode,return )

::openfl::_legacy::display::BlendMode DisplayObject_obj::set_blendMode( ::openfl::_legacy::display::BlendMode value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_blendMode",0xc9a3cdfa,"openfl._legacy.display.DisplayObject.set_blendMode","openfl/_legacy/display/DisplayObject.hx",488,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(490)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(490)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_blend_mode(tmp,value->__Index());
	HX_STACK_LINE(491)
	::openfl::_legacy::display::BlendMode tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(491)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

bool DisplayObject_obj::get_cacheAsBitmap( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_cacheAsBitmap",0x873a5f7d,"openfl._legacy.display.DisplayObject.get_cacheAsBitmap","openfl/_legacy/display/DisplayObject.hx",496,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(496)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	bool tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_cache_as_bitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

bool DisplayObject_obj::set_cacheAsBitmap( bool value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_cacheAsBitmap",0xaaa83789,"openfl._legacy.display.DisplayObject.set_cacheAsBitmap","openfl/_legacy/display/DisplayObject.hx",497,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(499)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_cache_as_bitmap(tmp,tmp1);
	HX_STACK_LINE(500)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(500)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

bool DisplayObject_obj::get_pedanticBitmapCaching( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_pedanticBitmapCaching",0xcac04bb8,"openfl._legacy.display.DisplayObject.get_pedanticBitmapCaching","openfl/_legacy/display/DisplayObject.hx",505,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(505)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(505)
	bool tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_pedantic_bitmap_caching(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(505)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_pedanticBitmapCaching,return )

bool DisplayObject_obj::set_pedanticBitmapCaching( bool value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_pedanticBitmapCaching",0x37170fc4,"openfl._legacy.display.DisplayObject.set_pedanticBitmapCaching","openfl/_legacy/display/DisplayObject.hx",506,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(508)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_pedantic_bitmap_caching(tmp,tmp1);
	HX_STACK_LINE(509)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_pedanticBitmapCaching,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_filters",0x807baed5,"openfl._legacy.display.DisplayObject.get_filters","openfl/_legacy/display/DisplayObject.hx",514,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(516)
	bool tmp = (this->__filters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	if ((tmp)){
		HX_STACK_LINE(516)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(517)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(519)
	{
		HX_STACK_LINE(519)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(519)
		cpp::ArrayBase _g1 = this->__filters;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(519)
		while((true)){
			HX_STACK_LINE(519)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(519)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(519)
			if ((tmp2)){
				HX_STACK_LINE(519)
				break;
			}
			HX_STACK_LINE(519)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(519)
			Dynamic filter = tmp3;		HX_STACK_VAR(filter,"filter");
			HX_STACK_LINE(519)
			++(_g);
			HX_STACK_LINE(521)
			Dynamic tmp4 = filter->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(521)
			result->push(tmp4);
		}
	}
	HX_STACK_LINE(525)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( cpp::ArrayBase value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_filters",0x8ae8b5e1,"openfl._legacy.display.DisplayObject.set_filters","openfl/_legacy/display/DisplayObject.hx",530,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(532)
	bool tmp = (this->get_filters() == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(532)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(532)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	if ((tmp1)){
		HX_STACK_LINE(532)
		tmp2 = (value == null());
	}
	else{
		HX_STACK_LINE(532)
		tmp2 = true;
	}
	HX_STACK_LINE(532)
	if ((tmp2)){
		HX_STACK_LINE(534)
		this->__filters = null();
	}
	else{
		HX_STACK_LINE(538)
		this->__filters = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(540)
			while((true)){
				HX_STACK_LINE(540)
				bool tmp3 = (_g < value->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(540)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(540)
				if ((tmp4)){
					HX_STACK_LINE(540)
					break;
				}
				HX_STACK_LINE(540)
				Dynamic tmp5 = value->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(540)
				Dynamic filter = tmp5;		HX_STACK_VAR(filter,"filter");
				HX_STACK_LINE(540)
				++(_g);
				HX_STACK_LINE(542)
				bool tmp6 = (filter != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(542)
				if ((tmp6)){
					HX_STACK_LINE(544)
					::openfl::_legacy::filters::BitmapFilter tmp7 = filter->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(544)
					this->__filters->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
				}
			}
		}
	}
	HX_STACK_LINE(552)
	Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(552)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_filters(tmp3,this->__filters);
	HX_STACK_LINE(553)
	return this->get_filters();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

::openfl::_legacy::display::Graphics DisplayObject_obj::get_graphics( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_graphics",0xe99e6271,"openfl._legacy.display.DisplayObject.get_graphics","openfl/_legacy/display/DisplayObject.hx",558,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(560)
	::openfl::_legacy::display::Graphics tmp = this->__graphicsCache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(560)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(560)
	if ((tmp1)){
		HX_STACK_LINE(562)
		Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(562)
		Dynamic tmp3 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_graphics(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(562)
		::openfl::_legacy::display::Graphics tmp4 = ::openfl::_legacy::display::Graphics_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(562)
		this->__graphicsCache = tmp4;
	}
	HX_STACK_LINE(566)
	::openfl::_legacy::display::Graphics tmp2 = this->__graphicsCache;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(566)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_graphics,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_height",0xde189c0d,"openfl._legacy.display.DisplayObject.get_height","openfl/_legacy/display/DisplayObject.hx",571,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(571)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(571)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_height",0xe1963a81,"openfl._legacy.display.DisplayObject.set_height","openfl/_legacy/display/DisplayObject.hx",572,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(574)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(574)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_height(tmp,tmp1);
	HX_STACK_LINE(575)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(575)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::_legacy::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::_legacy::display::DisplayObject value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_mask",0xf27eb906,"openfl._legacy.display.DisplayObject.set_mask","openfl/_legacy/display/DisplayObject.hx",580,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(582)
	this->mask = value;
	HX_STACK_LINE(583)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	bool tmp1 = (value == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(583)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(583)
	if ((tmp1)){
		HX_STACK_LINE(583)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(583)
		tmp2 = value->__handle;
	}
	HX_STACK_LINE(583)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_mask(tmp,tmp2);
	HX_STACK_LINE(584)
	::openfl::_legacy::display::DisplayObject tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(584)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_mouseX",0xa7dadeb9,"openfl._legacy.display.DisplayObject.get_mouseX","openfl/_legacy/display/DisplayObject.hx",589,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(589)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_mouse_x(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(589)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_mouseY",0xa7dadeba,"openfl._legacy.display.DisplayObject.get_mouseY","openfl/_legacy/display/DisplayObject.hx",590,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(590)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_mouse_y(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_name",0x44ca90f1,"openfl._legacy.display.DisplayObject.get_name","openfl/_legacy/display/DisplayObject.hx",593,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(593)
	::String tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_name(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(593)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_name",0xf327ea65,"openfl._legacy.display.DisplayObject.set_name","openfl/_legacy/display/DisplayObject.hx",594,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(596)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_name(tmp,tmp1);
	HX_STACK_LINE(597)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(597)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::_legacy::display::DisplayObjectContainer DisplayObject_obj::get_parent( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_parent",0xc94a9950,"openfl._legacy.display.DisplayObject.get_parent","openfl/_legacy/display/DisplayObject.hx",602,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(602)
	::openfl::_legacy::display::DisplayObjectContainer tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_parent,return )

::openfl::_legacy::display::DisplayObject DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_root",0x477a0cc8,"openfl._legacy.display.DisplayObject.get_root","openfl/_legacy/display/DisplayObject.hx",605,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(607)
	::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(607)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(607)
	if ((tmp1)){
		HX_STACK_LINE(609)
		::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		return tmp2;
	}
	HX_STACK_LINE(613)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_rotation",0xdfbca6e4,"openfl._legacy.display.DisplayObject.get_rotation","openfl/_legacy/display/DisplayObject.hx",618,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(618)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(618)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_rotation(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(618)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_rotation",0xf4b5ca58,"openfl._legacy.display.DisplayObject.set_rotation","openfl/_legacy/display/DisplayObject.hx",619,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(621)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_rotation(tmp,tmp1);
	HX_STACK_LINE(622)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(622)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

::openfl::_legacy::geom::Rectangle DisplayObject_obj::get_scale9Grid( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_scale9Grid",0x7002effb,"openfl._legacy.display.DisplayObject.get_scale9Grid","openfl/_legacy/display/DisplayObject.hx",627,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(627)
	::openfl::_legacy::geom::Rectangle tmp = this->__scale9Grid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(627)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(627)
	::openfl::_legacy::geom::Rectangle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(627)
	if ((tmp1)){
		HX_STACK_LINE(627)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(627)
		::openfl::_legacy::geom::Rectangle tmp3 = this->__scale9Grid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		tmp2 = tmp3->clone();
	}
	HX_STACK_LINE(627)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scale9Grid,return )

::openfl::_legacy::geom::Rectangle DisplayObject_obj::set_scale9Grid( ::openfl::_legacy::geom::Rectangle value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_scale9Grid",0x9022d86f,"openfl._legacy.display.DisplayObject.set_scale9Grid","openfl/_legacy/display/DisplayObject.hx",628,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(630)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	::openfl::_legacy::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(630)
	if ((tmp)){
		HX_STACK_LINE(630)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(630)
		tmp1 = value->clone();
	}
	HX_STACK_LINE(630)
	this->__scale9Grid = tmp1;
	HX_STACK_LINE(631)
	Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(631)
	::openfl::_legacy::geom::Rectangle tmp3 = this->__scale9Grid;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(631)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_scale9_grid(tmp2,tmp3);
	HX_STACK_LINE(632)
	::openfl::_legacy::geom::Rectangle tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(632)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scale9Grid,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_scaleX",0x17f27eb4,"openfl._legacy.display.DisplayObject.get_scaleX","openfl/_legacy/display/DisplayObject.hx",637,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(637)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(637)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_scale_x(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(637)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_scaleX",0x1b701d28,"openfl._legacy.display.DisplayObject.set_scaleX","openfl/_legacy/display/DisplayObject.hx",638,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(640)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(640)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_scale_x(tmp,tmp1);
	HX_STACK_LINE(641)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(641)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_scaleY",0x17f27eb5,"openfl._legacy.display.DisplayObject.get_scaleY","openfl/_legacy/display/DisplayObject.hx",646,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(646)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(646)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_scale_y(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(646)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_scaleY",0x1b701d29,"openfl._legacy.display.DisplayObject.set_scaleY","openfl/_legacy/display/DisplayObject.hx",647,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(649)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_scale_y(tmp,tmp1);
	HX_STACK_LINE(650)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(650)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::_legacy::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_scrollRect",0xea477af7,"openfl._legacy.display.DisplayObject.get_scrollRect","openfl/_legacy/display/DisplayObject.hx",655,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(655)
	::openfl::_legacy::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(655)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(655)
	::openfl::_legacy::geom::Rectangle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(655)
	if ((tmp1)){
		HX_STACK_LINE(655)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(655)
		::openfl::_legacy::geom::Rectangle tmp3 = this->__scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(655)
		tmp2 = tmp3->clone();
	}
	HX_STACK_LINE(655)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::_legacy::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::_legacy::geom::Rectangle value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_scrollRect",0x0a67636b,"openfl._legacy.display.DisplayObject.set_scrollRect","openfl/_legacy/display/DisplayObject.hx",656,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(658)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(658)
	::openfl::_legacy::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(658)
	if ((tmp)){
		HX_STACK_LINE(658)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(658)
		tmp1 = value->clone();
	}
	HX_STACK_LINE(658)
	this->__scrollRect = tmp1;
	HX_STACK_LINE(659)
	Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(659)
	::openfl::_legacy::geom::Rectangle tmp3 = this->__scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(659)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_scroll_rect(tmp2,tmp3);
	HX_STACK_LINE(660)
	::openfl::_legacy::geom::Rectangle tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(660)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::_legacy::display::Stage DisplayObject_obj::get_stage( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_stage",0xd9fb1d58,"openfl._legacy.display.DisplayObject.get_stage","openfl/_legacy/display/DisplayObject.hx",665,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(667)
	::openfl::_legacy::display::DisplayObjectContainer tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(667)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(667)
	if ((tmp1)){
		HX_STACK_LINE(669)
		::openfl::_legacy::display::DisplayObjectContainer tmp2 = this->__parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(669)
		::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(669)
		return tmp3;
	}
	HX_STACK_LINE(673)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_stage,return )

::openfl::_legacy::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_transform",0xbdf93506,"openfl._legacy.display.DisplayObject.get_transform","openfl/_legacy/display/DisplayObject.hx",678,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(678)
	::openfl::_legacy::geom::Transform tmp = ::openfl::_legacy::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(678)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::_legacy::geom::Transform DisplayObject_obj::set_transform( ::openfl::_legacy::geom::Transform value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_transform",0x02ff1712,"openfl._legacy.display.DisplayObject.set_transform","openfl/_legacy/display/DisplayObject.hx",679,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(681)
	::openfl::_legacy::geom::Matrix tmp = value->get_matrix();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(681)
	this->__setMatrix(tmp);
	HX_STACK_LINE(682)
	::openfl::_legacy::geom::ColorTransform tmp1 = value->get_colorTransform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(682)
	this->__setColorTransform(tmp1);
	HX_STACK_LINE(683)
	::openfl::_legacy::geom::Transform tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(683)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_visible",0x1a59858c,"openfl._legacy.display.DisplayObject.get_visible","openfl/_legacy/display/DisplayObject.hx",688,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(688)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	bool tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_visible(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_visible",0x24c68c98,"openfl._legacy.display.DisplayObject.set_visible","openfl/_legacy/display/DisplayObject.hx",689,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(691)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(691)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(691)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_visible(tmp,tmp1);
	HX_STACK_LINE(692)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(692)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_width",0x205268a0,"openfl._legacy.display.DisplayObject.get_width","openfl/_legacy/display/DisplayObject.hx",697,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(697)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(697)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_width",0x03a354ac,"openfl._legacy.display.DisplayObject.set_width","openfl/_legacy/display/DisplayObject.hx",698,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(700)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(700)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(700)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_width(tmp,tmp1);
	HX_STACK_LINE(701)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(701)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_x",0xcc87de12,"openfl._legacy.display.DisplayObject.get_x","openfl/_legacy/display/DisplayObject.hx",706,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(706)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(706)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_x(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(706)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_x",0xb556d41e,"openfl._legacy.display.DisplayObject.set_x","openfl/_legacy/display/DisplayObject.hx",707,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(709)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(709)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(709)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_x(tmp,tmp1);
	HX_STACK_LINE(710)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(710)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_y",0xcc87de13,"openfl._legacy.display.DisplayObject.get_y","openfl/_legacy/display/DisplayObject.hx",715,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(715)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(715)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_y(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(715)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_y",0xb556d41f,"openfl._legacy.display.DisplayObject.set_y","openfl/_legacy/display/DisplayObject.hx",716,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(718)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(718)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(718)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_y(tmp,tmp1);
	HX_STACK_LINE(719)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

Float DisplayObject_obj::get_z( ){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","get_z",0xcc87de14,"openfl._legacy.display.DisplayObject.get_z","openfl/_legacy/display/DisplayObject.hx",724,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(724)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(724)
	Float tmp1 = ::openfl::_legacy::display::DisplayObject_obj::lime_display_object_get_z(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(724)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_z,return )

Float DisplayObject_obj::set_z( Float value){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObject","set_z",0xb556d420,"openfl._legacy.display.DisplayObject.set_z","openfl/_legacy/display/DisplayObject.hx",725,0x32220b70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(727)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(727)
	::openfl::_legacy::display::DisplayObject_obj::lime_display_object_set_z(tmp,tmp1);
	HX_STACK_LINE(728)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(728)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_z,return )

Dynamic DisplayObject_obj::lime_create_display_object;

Dynamic DisplayObject_obj::lime_display_object_get_graphics;

Dynamic DisplayObject_obj::lime_display_object_draw_to_surface;

Dynamic DisplayObject_obj::lime_display_object_get_id;

Dynamic DisplayObject_obj::lime_display_object_get_x;

Dynamic DisplayObject_obj::lime_display_object_set_x;

Dynamic DisplayObject_obj::lime_display_object_get_y;

Dynamic DisplayObject_obj::lime_display_object_set_y;

Dynamic DisplayObject_obj::lime_display_object_get_z;

Dynamic DisplayObject_obj::lime_display_object_set_z;

Dynamic DisplayObject_obj::lime_display_object_get_scale_x;

Dynamic DisplayObject_obj::lime_display_object_set_scale_x;

Dynamic DisplayObject_obj::lime_display_object_get_scale_y;

Dynamic DisplayObject_obj::lime_display_object_set_scale_y;

Dynamic DisplayObject_obj::lime_display_object_get_mouse_x;

Dynamic DisplayObject_obj::lime_display_object_get_mouse_y;

Dynamic DisplayObject_obj::lime_display_object_get_rotation;

Dynamic DisplayObject_obj::lime_display_object_set_rotation;

Dynamic DisplayObject_obj::lime_display_object_get_bg;

Dynamic DisplayObject_obj::lime_display_object_set_bg;

Dynamic DisplayObject_obj::lime_display_object_get_name;

Dynamic DisplayObject_obj::lime_display_object_set_name;

Dynamic DisplayObject_obj::lime_display_object_get_width;

Dynamic DisplayObject_obj::lime_display_object_set_width;

Dynamic DisplayObject_obj::lime_display_object_get_height;

Dynamic DisplayObject_obj::lime_display_object_set_height;

Dynamic DisplayObject_obj::lime_display_object_get_alpha;

Dynamic DisplayObject_obj::lime_display_object_set_alpha;

Dynamic DisplayObject_obj::lime_display_object_get_blend_mode;

Dynamic DisplayObject_obj::lime_display_object_set_blend_mode;

Dynamic DisplayObject_obj::lime_display_object_get_cache_as_bitmap;

Dynamic DisplayObject_obj::lime_display_object_set_cache_as_bitmap;

Dynamic DisplayObject_obj::lime_display_object_get_pedantic_bitmap_caching;

Dynamic DisplayObject_obj::lime_display_object_set_pedantic_bitmap_caching;

Dynamic DisplayObject_obj::lime_display_object_get_visible;

Dynamic DisplayObject_obj::lime_display_object_set_visible;

Dynamic DisplayObject_obj::lime_display_object_set_filters;

Dynamic DisplayObject_obj::lime_display_object_global_to_local;

Dynamic DisplayObject_obj::lime_display_object_local_to_global;

Dynamic DisplayObject_obj::lime_display_object_set_scale9_grid;

Dynamic DisplayObject_obj::lime_display_object_set_scroll_rect;

Dynamic DisplayObject_obj::lime_display_object_set_mask;

Dynamic DisplayObject_obj::lime_display_object_set_matrix;

Dynamic DisplayObject_obj::lime_display_object_get_matrix;

Dynamic DisplayObject_obj::lime_display_object_get_color_transform;

Dynamic DisplayObject_obj::lime_display_object_set_color_transform;

Dynamic DisplayObject_obj::lime_display_object_get_pixel_bounds;

Dynamic DisplayObject_obj::lime_display_object_get_bounds;

Dynamic DisplayObject_obj::lime_display_object_hit_test_point;


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__graphicsCache,"__graphicsCache");
	HX_MARK_MEMBER_NAME(__id,"__id");
	HX_MARK_MEMBER_NAME(__parent,"__parent");
	HX_MARK_MEMBER_NAME(__scale9Grid,"__scale9Grid");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__graphicsCache,"__graphicsCache");
	HX_VISIT_MEMBER_NAME(__id,"__id");
	HX_VISIT_MEMBER_NAME(__parent,"__parent");
	HX_VISIT_MEMBER_NAME(__scale9Grid,"__scale9Grid");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return get_z(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp == hx::paccAlways ? get_root() : root; }
		if (HX_FIELD_EQ(inName,"__id") ) { return __id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp == hx::paccAlways ? get_stage() : stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp == hx::paccAlways ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp == hx::paccAlways ? get_graphics() : graphics; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"__parent") ) { return __parent; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return get_blendMode(); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__onAdded") ) { return __onAdded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { if (inCallProp == hx::paccAlways) return get_scale9Grid(); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__contains") ) { return __contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__findByID") ) { return __findByID_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__fireEvent") ) { return __fireEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__getMatrix") ) { return __getMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"__onRemoved") ) { return __onRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"__setMatrix") ) { return __setMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"__setParent") ) { return __setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__scale9Grid") ) { return __scale9Grid; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmap(); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return get_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_scale9Grid") ) { return get_scale9Grid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale9Grid") ) { return set_scale9Grid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__graphicsCache") ) { return __graphicsCache; }
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return __dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawToSurface") ) { return __drawToSurface_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { if (inCallProp == hx::paccAlways) return get_opaqueBackground(); }
		if (HX_FIELD_EQ(inName,"__getPixelBounds") ) { return __getPixelBounds_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return get_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return set_cacheAsBitmap_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getColorTransform") ) { return __getColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__setColorTransform") ) { return __setColorTransform_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_opaqueBackground") ) { return get_opaqueBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"set_opaqueBackground") ) { return set_opaqueBackground_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pedanticBitmapCaching") ) { if (inCallProp == hx::paccAlways) return get_pedanticBitmapCaching(); }
		if (HX_FIELD_EQ(inName,"__asInteractiveObject") ) { return __asInteractiveObject_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__getObjectsUnderPoint") ) { return __getObjectsUnderPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__getConcatenatedMatrix") ) { return __getConcatenatedMatrix_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_pedanticBitmapCaching") ) { return get_pedanticBitmapCaching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pedanticBitmapCaching") ) { return set_pedanticBitmapCaching_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__getInteractiveObjectStack") ) { return __getInteractiveObjectStack_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__getConcatenatedColorTransform") ) { return __getConcatenatedColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_x") ) { outValue = lime_display_object_get_x; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_x") ) { outValue = lime_display_object_set_x; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_y") ) { outValue = lime_display_object_get_y; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_y") ) { outValue = lime_display_object_set_y; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_z") ) { outValue = lime_display_object_get_z; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_z") ) { outValue = lime_display_object_set_z; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_create_display_object") ) { outValue = lime_create_display_object; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_id") ) { outValue = lime_display_object_get_id; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_bg") ) { outValue = lime_display_object_get_bg; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_bg") ) { outValue = lime_display_object_set_bg; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_name") ) { outValue = lime_display_object_get_name; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_name") ) { outValue = lime_display_object_set_name; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_mask") ) { outValue = lime_display_object_set_mask; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_width") ) { outValue = lime_display_object_get_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_width") ) { outValue = lime_display_object_set_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_alpha") ) { outValue = lime_display_object_get_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_alpha") ) { outValue = lime_display_object_set_alpha; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_height") ) { outValue = lime_display_object_get_height; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_height") ) { outValue = lime_display_object_set_height; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_matrix") ) { outValue = lime_display_object_set_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_matrix") ) { outValue = lime_display_object_get_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_bounds") ) { outValue = lime_display_object_get_bounds; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_scale_x") ) { outValue = lime_display_object_get_scale_x; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scale_x") ) { outValue = lime_display_object_set_scale_x; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_scale_y") ) { outValue = lime_display_object_get_scale_y; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scale_y") ) { outValue = lime_display_object_set_scale_y; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_mouse_x") ) { outValue = lime_display_object_get_mouse_x; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_mouse_y") ) { outValue = lime_display_object_get_mouse_y; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_visible") ) { outValue = lime_display_object_get_visible; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_visible") ) { outValue = lime_display_object_set_visible; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_filters") ) { outValue = lime_display_object_set_filters; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_graphics") ) { outValue = lime_display_object_get_graphics; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_rotation") ) { outValue = lime_display_object_get_rotation; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_rotation") ) { outValue = lime_display_object_set_rotation; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_blend_mode") ) { outValue = lime_display_object_get_blend_mode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_blend_mode") ) { outValue = lime_display_object_set_blend_mode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_hit_test_point") ) { outValue = lime_display_object_hit_test_point; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_display_object_draw_to_surface") ) { outValue = lime_display_object_draw_to_surface; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_global_to_local") ) { outValue = lime_display_object_global_to_local; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_local_to_global") ) { outValue = lime_display_object_local_to_global; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scale9_grid") ) { outValue = lime_display_object_set_scale9_grid; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scroll_rect") ) { outValue = lime_display_object_set_scroll_rect; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_bounds") ) { outValue = lime_display_object_get_pixel_bounds; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_cache_as_bitmap") ) { outValue = lime_display_object_get_cache_as_bitmap; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_cache_as_bitmap") ) { outValue = lime_display_object_set_cache_as_bitmap; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_color_transform") ) { outValue = lime_display_object_get_color_transform; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_color_transform") ) { outValue = lime_display_object_set_color_transform; return true;  }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pedantic_bitmap_caching") ) { outValue = lime_display_object_get_pedantic_bitmap_caching; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pedantic_bitmap_caching") ) { outValue = lime_display_object_set_pedantic_bitmap_caching; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue);mask=inValue.Cast< ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__id") ) { __id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::_legacy::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::_legacy::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::_legacy::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__parent") ) { __parent=inValue.Cast< ::openfl::_legacy::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return set_blendMode(inValue); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::openfl::_legacy::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { if (inCallProp == hx::paccAlways) return set_scale9Grid(inValue); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return set_scrollRect(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__scale9Grid") ) { __scale9Grid=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmap(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__graphicsCache") ) { __graphicsCache=inValue.Cast< ::openfl::_legacy::display::Graphics >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { if (inCallProp == hx::paccAlways) return set_opaqueBackground(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pedanticBitmapCaching") ) { if (inCallProp == hx::paccAlways) return set_pedanticBitmapCaching(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_x") ) { lime_display_object_get_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_x") ) { lime_display_object_set_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_y") ) { lime_display_object_get_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_y") ) { lime_display_object_set_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_z") ) { lime_display_object_get_z=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_z") ) { lime_display_object_set_z=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_create_display_object") ) { lime_create_display_object=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_id") ) { lime_display_object_get_id=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_bg") ) { lime_display_object_get_bg=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_bg") ) { lime_display_object_set_bg=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_name") ) { lime_display_object_get_name=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_name") ) { lime_display_object_set_name=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_mask") ) { lime_display_object_set_mask=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_width") ) { lime_display_object_get_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_width") ) { lime_display_object_set_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_alpha") ) { lime_display_object_get_alpha=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_alpha") ) { lime_display_object_set_alpha=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_height") ) { lime_display_object_get_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_height") ) { lime_display_object_set_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_matrix") ) { lime_display_object_set_matrix=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_matrix") ) { lime_display_object_get_matrix=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_bounds") ) { lime_display_object_get_bounds=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_scale_x") ) { lime_display_object_get_scale_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scale_x") ) { lime_display_object_set_scale_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_scale_y") ) { lime_display_object_get_scale_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scale_y") ) { lime_display_object_set_scale_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_mouse_x") ) { lime_display_object_get_mouse_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_mouse_y") ) { lime_display_object_get_mouse_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_visible") ) { lime_display_object_get_visible=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_visible") ) { lime_display_object_set_visible=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_filters") ) { lime_display_object_set_filters=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_graphics") ) { lime_display_object_get_graphics=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_rotation") ) { lime_display_object_get_rotation=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_rotation") ) { lime_display_object_set_rotation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_blend_mode") ) { lime_display_object_get_blend_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_blend_mode") ) { lime_display_object_set_blend_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_hit_test_point") ) { lime_display_object_hit_test_point=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_display_object_draw_to_surface") ) { lime_display_object_draw_to_surface=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_global_to_local") ) { lime_display_object_global_to_local=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_local_to_global") ) { lime_display_object_local_to_global=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scale9_grid") ) { lime_display_object_set_scale9_grid=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_scroll_rect") ) { lime_display_object_set_scroll_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_bounds") ) { lime_display_object_get_pixel_bounds=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_cache_as_bitmap") ) { lime_display_object_get_cache_as_bitmap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_cache_as_bitmap") ) { lime_display_object_set_cache_as_bitmap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_color_transform") ) { lime_display_object_get_color_transform=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_color_transform") ) { lime_display_object_set_color_transform=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pedantic_bitmap_caching") ) { lime_display_object_get_pedantic_bitmap_caching=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pedantic_bitmap_caching") ) { lime_display_object_set_pedantic_bitmap_caching=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("pedanticBitmapCaching","\x1e","\x45","\x20","\x18"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"));
	outFields->push(HX_HCSTRING("__graphicsCache","\x57","\x8a","\x1b","\xe0"));
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"));
	outFields->push(HX_HCSTRING("__scale9Grid","\xf5","\xcb","\xb5","\xc7"));
	outFields->push(HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsObject /*::openfl::_legacy::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::openfl::_legacy::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphicsCache),HX_HCSTRING("__graphicsCache","\x57","\x8a","\x1b","\xe0")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,__parent),HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scale9Grid),HX_HCSTRING("__scale9Grid","\xf5","\xcb","\xb5","\xc7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_create_display_object,HX_HCSTRING("lime_create_display_object","\x95","\x97","\x97","\x78")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_graphics,HX_HCSTRING("lime_display_object_get_graphics","\x6d","\x80","\x9a","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_draw_to_surface,HX_HCSTRING("lime_display_object_draw_to_surface","\xcb","\x21","\x6a","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_id,HX_HCSTRING("lime_display_object_get_id","\xfd","\x9d","\x7b","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_x,HX_HCSTRING("lime_display_object_get_x","\x96","\xd8","\x21","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_x,HX_HCSTRING("lime_display_object_set_x","\xa2","\xce","\xf0","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_y,HX_HCSTRING("lime_display_object_get_y","\x97","\xd8","\x21","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_y,HX_HCSTRING("lime_display_object_set_y","\xa3","\xce","\xf0","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_z,HX_HCSTRING("lime_display_object_get_z","\x98","\xd8","\x21","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_z,HX_HCSTRING("lime_display_object_set_z","\xa4","\xce","\xf0","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_scale_x,HX_HCSTRING("lime_display_object_get_scale_x","\xe1","\x1a","\x9f","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_scale_x,HX_HCSTRING("lime_display_object_set_scale_x","\xed","\x21","\x0c","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_scale_y,HX_HCSTRING("lime_display_object_get_scale_y","\xe2","\x1a","\x9f","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_scale_y,HX_HCSTRING("lime_display_object_set_scale_y","\xee","\x21","\x0c","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_mouse_x,HX_HCSTRING("lime_display_object_get_mouse_x","\x3c","\xbf","\x0a","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_mouse_y,HX_HCSTRING("lime_display_object_get_mouse_y","\x3d","\xbf","\x0a","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_rotation,HX_HCSTRING("lime_display_object_get_rotation","\xe0","\xc4","\xb8","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_rotation,HX_HCSTRING("lime_display_object_set_rotation","\x54","\xe8","\xb1","\x58")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_bg,HX_HCSTRING("lime_display_object_get_bg","\xe7","\x97","\x7b","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_bg,HX_HCSTRING("lime_display_object_set_bg","\x5b","\xec","\xc3","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_name,HX_HCSTRING("lime_display_object_get_name","\xed","\x00","\x69","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_name,HX_HCSTRING("lime_display_object_set_name","\x61","\x5a","\xc6","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_width,HX_HCSTRING("lime_display_object_get_width","\x24","\xf5","\x55","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_width,HX_HCSTRING("lime_display_object_set_width","\x30","\xe1","\xa6","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_height,HX_HCSTRING("lime_display_object_get_height","\x09","\x03","\x30","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_height,HX_HCSTRING("lime_display_object_set_height","\x7d","\xa1","\xad","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_alpha,HX_HCSTRING("lime_display_object_get_alpha","\x7c","\xe6","\x89","\x38")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_alpha,HX_HCSTRING("lime_display_object_set_alpha","\x88","\xd2","\xda","\x1b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_blend_mode,HX_HCSTRING("lime_display_object_get_blend_mode","\x73","\x75","\x39","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_blend_mode,HX_HCSTRING("lime_display_object_set_blend_mode","\xe7","\x5d","\x59","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_cache_as_bitmap,HX_HCSTRING("lime_display_object_get_cache_as_bitmap","\xfd","\xfb","\x60","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_cache_as_bitmap,HX_HCSTRING("lime_display_object_set_cache_as_bitmap","\x09","\xef","\xfd","\xb9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_pedantic_bitmap_caching,HX_HCSTRING("lime_display_object_get_pedantic_bitmap_caching","\x9a","\x40","\xc2","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_pedantic_bitmap_caching,HX_HCSTRING("lime_display_object_set_pedantic_bitmap_caching","\xa6","\x1f","\x5b","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_visible,HX_HCSTRING("lime_display_object_get_visible","\x10","\x3b","\xbc","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_visible,HX_HCSTRING("lime_display_object_set_visible","\x1c","\x42","\x29","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_filters,HX_HCSTRING("lime_display_object_set_filters","\x65","\x6b","\x4b","\x3d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_global_to_local,HX_HCSTRING("lime_display_object_global_to_local","\x0a","\xf8","\xf2","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_local_to_global,HX_HCSTRING("lime_display_object_local_to_global","\xda","\x5d","\x3a","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_scale9_grid,HX_HCSTRING("lime_display_object_set_scale9_grid","\x80","\xbc","\xff","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_scroll_rect,HX_HCSTRING("lime_display_object_set_scroll_rect","\x80","\x28","\x24","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_mask,HX_HCSTRING("lime_display_object_set_mask","\x02","\x29","\x1d","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_matrix,HX_HCSTRING("lime_display_object_set_matrix","\xd7","\xcf","\x29","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_matrix,HX_HCSTRING("lime_display_object_get_matrix","\x63","\x31","\xac","\xb9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_color_transform,HX_HCSTRING("lime_display_object_get_color_transform","\xee","\x64","\x15","\x35")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_set_color_transform,HX_HCSTRING("lime_display_object_set_color_transform","\xfa","\x57","\xb2","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_pixel_bounds,HX_HCSTRING("lime_display_object_get_pixel_bounds","\xf0","\x4e","\x69","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_get_bounds,HX_HCSTRING("lime_display_object_get_bounds","\x97","\x81","\x01","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::lime_display_object_hit_test_point,HX_HCSTRING("lime_display_object_hit_test_point","\xe8","\x4a","\x23","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"),
	HX_HCSTRING("__graphicsCache","\x57","\x8a","\x1b","\xe0"),
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"),
	HX_HCSTRING("__scale9Grid","\xf5","\xcb","\xb5","\xc7"),
	HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__asInteractiveObject","\xcf","\xa1","\x7e","\x5e"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__contains","\x3f","\xcd","\xb3","\xcf"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	HX_HCSTRING("__drawToSurface","\x2e","\xea","\xb6","\x73"),
	HX_HCSTRING("__findByID","\x6b","\x79","\xef","\x36"),
	HX_HCSTRING("__fireEvent","\x64","\x79","\x99","\x9f"),
	HX_HCSTRING("__getColorTransform","\x9f","\xaf","\xa3","\xd2"),
	HX_HCSTRING("__getConcatenatedColorTransform","\x0e","\x8a","\xad","\x0d"),
	HX_HCSTRING("__getConcatenatedMatrix","\xc6","\x5b","\x9d","\x43"),
	HX_HCSTRING("__getInteractiveObjectStack","\x5d","\xa3","\x8c","\x71"),
	HX_HCSTRING("__getMatrix","\x57","\x08","\x4b","\x66"),
	HX_HCSTRING("__getObjectsUnderPoint","\xb6","\xb3","\x7d","\x48"),
	HX_HCSTRING("__getPixelBounds","\xc5","\x47","\x88","\x93"),
	HX_HCSTRING("__onAdded","\x01","\xc4","\xcf","\x33"),
	HX_HCSTRING("__onRemoved","\x21","\x21","\xd7","\xf8"),
	HX_HCSTRING("__setColorTransform","\xab","\x87","\x11","\xf6"),
	HX_HCSTRING("__setMatrix","\x63","\xf4","\x9b","\x49"),
	HX_HCSTRING("__setParent","\x4c","\xc3","\x51","\x7b"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_opaqueBackground","\x38","\x1d","\x12","\x39"),
	HX_HCSTRING("set_opaqueBackground","\xac","\xd4","\xc9","\x05"),
	HX_HCSTRING("get_blendMode","\x2b","\xb8","\x9b","\xcd"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("get_cacheAsBitmap","\x3a","\x8e","\x7f","\x70"),
	HX_HCSTRING("set_cacheAsBitmap","\x46","\x66","\xed","\x93"),
	HX_HCSTRING("get_pedanticBitmapCaching","\x75","\xff","\x1d","\x1e"),
	HX_HCSTRING("set_pedanticBitmapCaching","\x81","\xc3","\x74","\x8a"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scale9Grid","\x1e","\xd9","\x17","\x05"),
	HX_HCSTRING("set_scale9Grid","\x92","\xc1","\x37","\x25"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_z","\x51","\xa5","\x60","\x91"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_create_display_object,"lime_create_display_object");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_graphics,"lime_display_object_get_graphics");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_draw_to_surface,"lime_display_object_draw_to_surface");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_id,"lime_display_object_get_id");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_x,"lime_display_object_get_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_x,"lime_display_object_set_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_y,"lime_display_object_get_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_y,"lime_display_object_set_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_z,"lime_display_object_get_z");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_z,"lime_display_object_set_z");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_scale_x,"lime_display_object_get_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scale_x,"lime_display_object_set_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_scale_y,"lime_display_object_get_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scale_y,"lime_display_object_set_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_mouse_x,"lime_display_object_get_mouse_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_mouse_y,"lime_display_object_get_mouse_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_rotation,"lime_display_object_get_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_rotation,"lime_display_object_set_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_bg,"lime_display_object_get_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_bg,"lime_display_object_set_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_name,"lime_display_object_get_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_name,"lime_display_object_set_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_width,"lime_display_object_get_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_width,"lime_display_object_set_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_height,"lime_display_object_get_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_height,"lime_display_object_set_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_alpha,"lime_display_object_get_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_alpha,"lime_display_object_set_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_blend_mode,"lime_display_object_get_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_blend_mode,"lime_display_object_set_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_cache_as_bitmap,"lime_display_object_get_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_cache_as_bitmap,"lime_display_object_set_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_pedantic_bitmap_caching,"lime_display_object_get_pedantic_bitmap_caching");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_pedantic_bitmap_caching,"lime_display_object_set_pedantic_bitmap_caching");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_visible,"lime_display_object_get_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_visible,"lime_display_object_set_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_filters,"lime_display_object_set_filters");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_global_to_local,"lime_display_object_global_to_local");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_local_to_global,"lime_display_object_local_to_global");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scale9_grid,"lime_display_object_set_scale9_grid");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scroll_rect,"lime_display_object_set_scroll_rect");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_mask,"lime_display_object_set_mask");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_matrix,"lime_display_object_set_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_matrix,"lime_display_object_get_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_color_transform,"lime_display_object_get_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_color_transform,"lime_display_object_set_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_pixel_bounds,"lime_display_object_get_pixel_bounds");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_bounds,"lime_display_object_get_bounds");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::lime_display_object_hit_test_point,"lime_display_object_hit_test_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_create_display_object,"lime_create_display_object");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_graphics,"lime_display_object_get_graphics");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_draw_to_surface,"lime_display_object_draw_to_surface");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_id,"lime_display_object_get_id");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_x,"lime_display_object_get_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_x,"lime_display_object_set_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_y,"lime_display_object_get_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_y,"lime_display_object_set_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_z,"lime_display_object_get_z");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_z,"lime_display_object_set_z");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_scale_x,"lime_display_object_get_scale_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scale_x,"lime_display_object_set_scale_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_scale_y,"lime_display_object_get_scale_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scale_y,"lime_display_object_set_scale_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_mouse_x,"lime_display_object_get_mouse_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_mouse_y,"lime_display_object_get_mouse_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_rotation,"lime_display_object_get_rotation");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_rotation,"lime_display_object_set_rotation");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_bg,"lime_display_object_get_bg");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_bg,"lime_display_object_set_bg");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_name,"lime_display_object_get_name");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_name,"lime_display_object_set_name");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_width,"lime_display_object_get_width");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_width,"lime_display_object_set_width");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_height,"lime_display_object_get_height");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_height,"lime_display_object_set_height");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_alpha,"lime_display_object_get_alpha");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_alpha,"lime_display_object_set_alpha");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_blend_mode,"lime_display_object_get_blend_mode");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_blend_mode,"lime_display_object_set_blend_mode");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_cache_as_bitmap,"lime_display_object_get_cache_as_bitmap");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_cache_as_bitmap,"lime_display_object_set_cache_as_bitmap");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_pedantic_bitmap_caching,"lime_display_object_get_pedantic_bitmap_caching");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_pedantic_bitmap_caching,"lime_display_object_set_pedantic_bitmap_caching");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_visible,"lime_display_object_get_visible");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_visible,"lime_display_object_set_visible");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_filters,"lime_display_object_set_filters");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_global_to_local,"lime_display_object_global_to_local");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_local_to_global,"lime_display_object_local_to_global");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scale9_grid,"lime_display_object_set_scale9_grid");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_scroll_rect,"lime_display_object_set_scroll_rect");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_mask,"lime_display_object_set_mask");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_matrix,"lime_display_object_set_matrix");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_matrix,"lime_display_object_get_matrix");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_color_transform,"lime_display_object_get_color_transform");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_set_color_transform,"lime_display_object_set_color_transform");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_pixel_bounds,"lime_display_object_get_pixel_bounds");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_get_bounds,"lime_display_object_get_bounds");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::lime_display_object_hit_test_point,"lime_display_object_hit_test_point");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_create_display_object","\x95","\x97","\x97","\x78"),
	HX_HCSTRING("lime_display_object_get_graphics","\x6d","\x80","\x9a","\x4d"),
	HX_HCSTRING("lime_display_object_draw_to_surface","\xcb","\x21","\x6a","\x19"),
	HX_HCSTRING("lime_display_object_get_id","\xfd","\x9d","\x7b","\x9e"),
	HX_HCSTRING("lime_display_object_get_x","\x96","\xd8","\x21","\x9f"),
	HX_HCSTRING("lime_display_object_set_x","\xa2","\xce","\xf0","\x87"),
	HX_HCSTRING("lime_display_object_get_y","\x97","\xd8","\x21","\x9f"),
	HX_HCSTRING("lime_display_object_set_y","\xa3","\xce","\xf0","\x87"),
	HX_HCSTRING("lime_display_object_get_z","\x98","\xd8","\x21","\x9f"),
	HX_HCSTRING("lime_display_object_set_z","\xa4","\xce","\xf0","\x87"),
	HX_HCSTRING("lime_display_object_get_scale_x","\xe1","\x1a","\x9f","\x8e"),
	HX_HCSTRING("lime_display_object_set_scale_x","\xed","\x21","\x0c","\x99"),
	HX_HCSTRING("lime_display_object_get_scale_y","\xe2","\x1a","\x9f","\x8e"),
	HX_HCSTRING("lime_display_object_set_scale_y","\xee","\x21","\x0c","\x99"),
	HX_HCSTRING("lime_display_object_get_mouse_x","\x3c","\xbf","\x0a","\xea"),
	HX_HCSTRING("lime_display_object_get_mouse_y","\x3d","\xbf","\x0a","\xea"),
	HX_HCSTRING("lime_display_object_get_rotation","\xe0","\xc4","\xb8","\x43"),
	HX_HCSTRING("lime_display_object_set_rotation","\x54","\xe8","\xb1","\x58"),
	HX_HCSTRING("lime_display_object_get_bg","\xe7","\x97","\x7b","\x9e"),
	HX_HCSTRING("lime_display_object_set_bg","\x5b","\xec","\xc3","\x6a"),
	HX_HCSTRING("lime_display_object_get_name","\xed","\x00","\x69","\xee"),
	HX_HCSTRING("lime_display_object_set_name","\x61","\x5a","\xc6","\x9c"),
	HX_HCSTRING("lime_display_object_get_width","\x24","\xf5","\x55","\xe1"),
	HX_HCSTRING("lime_display_object_set_width","\x30","\xe1","\xa6","\xc4"),
	HX_HCSTRING("lime_display_object_get_height","\x09","\x03","\x30","\x00"),
	HX_HCSTRING("lime_display_object_set_height","\x7d","\xa1","\xad","\x03"),
	HX_HCSTRING("lime_display_object_get_alpha","\x7c","\xe6","\x89","\x38"),
	HX_HCSTRING("lime_display_object_set_alpha","\x88","\xd2","\xda","\x1b"),
	HX_HCSTRING("lime_display_object_get_blend_mode","\x73","\x75","\x39","\x53"),
	HX_HCSTRING("lime_display_object_set_blend_mode","\xe7","\x5d","\x59","\x73"),
	HX_HCSTRING("lime_display_object_get_cache_as_bitmap","\xfd","\xfb","\x60","\x7d"),
	HX_HCSTRING("lime_display_object_set_cache_as_bitmap","\x09","\xef","\xfd","\xb9"),
	HX_HCSTRING("lime_display_object_get_pedantic_bitmap_caching","\x9a","\x40","\xc2","\xb1"),
	HX_HCSTRING("lime_display_object_set_pedantic_bitmap_caching","\xa6","\x1f","\x5b","\xf4"),
	HX_HCSTRING("lime_display_object_get_visible","\x10","\x3b","\xbc","\xcc"),
	HX_HCSTRING("lime_display_object_set_visible","\x1c","\x42","\x29","\xd7"),
	HX_HCSTRING("lime_display_object_set_filters","\x65","\x6b","\x4b","\x3d"),
	HX_HCSTRING("lime_display_object_global_to_local","\x0a","\xf8","\xf2","\x54"),
	HX_HCSTRING("lime_display_object_local_to_global","\xda","\x5d","\x3a","\x8e"),
	HX_HCSTRING("lime_display_object_set_scale9_grid","\x80","\xbc","\xff","\x6b"),
	HX_HCSTRING("lime_display_object_set_scroll_rect","\x80","\x28","\x24","\xa8"),
	HX_HCSTRING("lime_display_object_set_mask","\x02","\x29","\x1d","\x9c"),
	HX_HCSTRING("lime_display_object_set_matrix","\xd7","\xcf","\x29","\xbd"),
	HX_HCSTRING("lime_display_object_get_matrix","\x63","\x31","\xac","\xb9"),
	HX_HCSTRING("lime_display_object_get_color_transform","\xee","\x64","\x15","\x35"),
	HX_HCSTRING("lime_display_object_set_color_transform","\xfa","\x57","\xb2","\x71"),
	HX_HCSTRING("lime_display_object_get_pixel_bounds","\xf0","\x4e","\x69","\x0c"),
	HX_HCSTRING("lime_display_object_get_bounds","\x97","\x81","\x01","\x64"),
	HX_HCSTRING("lime_display_object_hit_test_point","\xe8","\x4a","\x23","\xd3"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.DisplayObject","\xf1","\xd4","\xb0","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
	lime_create_display_object= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_create_display_object","\x73","\x68","\x78","\xd8"),(int)0);
	lime_display_object_get_graphics= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_graphics","\xcb","\x4b","\x94","\x55"),(int)1);
	lime_display_object_draw_to_surface= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_draw_to_surface","\x2d","\x45","\x83","\xff"),(int)-1);
	lime_display_object_get_id= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_id","\xdb","\x6e","\x5c","\xfe"),(int)1);
	lime_display_object_get_x= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_x","\x78","\x4d","\x07","\x08"),(int)1);
	lime_display_object_set_x= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_x","\x84","\x43","\xd6","\xf0"),(int)2);
	lime_display_object_get_y= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_y","\x79","\x4d","\x07","\x08"),(int)1);
	lime_display_object_set_y= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_y","\x85","\x43","\xd6","\xf0"),(int)2);
	lime_display_object_get_z= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_z","\x7a","\x4d","\x07","\x08"),(int)1);
	lime_display_object_set_z= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_z","\x86","\x43","\xd6","\xf0"),(int)2);
	lime_display_object_get_scale_x= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_scale_x","\x43","\x65","\x06","\xa1"),(int)1);
	lime_display_object_set_scale_x= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_scale_x","\x4f","\x6c","\x73","\xab"),(int)2);
	lime_display_object_get_scale_y= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_scale_y","\x44","\x65","\x06","\xa1"),(int)1);
	lime_display_object_set_scale_y= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_scale_y","\x50","\x6c","\x73","\xab"),(int)2);
	lime_display_object_get_mouse_x= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_mouse_x","\x9e","\x09","\x72","\xfc"),(int)1);
	lime_display_object_get_mouse_y= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_mouse_y","\x9f","\x09","\x72","\xfc"),(int)1);
	lime_display_object_get_rotation= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_rotation","\x3e","\x90","\xb2","\x4b"),(int)1);
	lime_display_object_set_rotation= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_rotation","\xb2","\xb3","\xab","\x60"),(int)2);
	lime_display_object_get_bg= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_bg","\xc5","\x68","\x5c","\xfe"),(int)1);
	lime_display_object_set_bg= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_bg","\x39","\xbd","\xa4","\xca"),(int)2);
	lime_display_object_get_name= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_name","\x4b","\x45","\xc6","\xa4"),(int)1);
	lime_display_object_set_name= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_name","\xbf","\x9e","\x23","\x53"),(int)2);
	lime_display_object_get_width= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_width","\x06","\x83","\x94","\xbc"),(int)1);
	lime_display_object_set_width= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_width","\x12","\x6f","\xe5","\x9f"),(int)2);
	lime_display_object_get_height= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_height","\xe7","\x9a","\xad","\xfb"),(int)1);
	lime_display_object_set_height= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_height","\x5b","\x39","\x2b","\xff"),(int)2);
	lime_display_object_get_alpha= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_alpha","\x5e","\x74","\xc8","\x13"),(int)1);
	lime_display_object_set_alpha= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_alpha","\x6a","\x60","\x19","\xf7"),(int)2);
	lime_display_object_get_blend_mode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_blend_mode","\x51","\x54","\xc3","\xa5"),(int)1);
	lime_display_object_set_blend_mode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_blend_mode","\xc5","\x3c","\xe3","\xc5"),(int)2);
	lime_display_object_get_cache_as_bitmap= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_cache_as_bitmap","\x5f","\x78","\x8c","\x57"),(int)1);
	lime_display_object_set_cache_as_bitmap= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_cache_as_bitmap","\x6b","\x6b","\x29","\x94"),(int)2);
	lime_display_object_get_pedantic_bitmap_caching= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_pedantic_bitmap_caching","\xfc","\xee","\x33","\xde"),(int)1);
	lime_display_object_set_pedantic_bitmap_caching= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_pedantic_bitmap_caching","\x08","\xce","\xcc","\x20"),(int)2);
	lime_display_object_get_visible= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_visible","\x72","\x85","\x23","\xdf"),(int)1);
	lime_display_object_set_visible= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_visible","\x7e","\x8c","\x90","\xe9"),(int)2);
	lime_display_object_set_filters= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_filters","\xc7","\xb5","\xb2","\x4f"),(int)2);
	lime_display_object_global_to_local= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_global_to_local","\x6c","\x1b","\x0c","\x3b"),(int)2);
	lime_display_object_local_to_global= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_local_to_global","\x3c","\x81","\x53","\x74"),(int)2);
	lime_display_object_set_scale9_grid= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_scale9_grid","\xe2","\xdf","\x18","\x52"),(int)2);
	lime_display_object_set_scroll_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_scroll_rect","\xe2","\x4b","\x3d","\x8e"),(int)2);
	lime_display_object_set_mask= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_mask","\x60","\x6d","\x7a","\x52"),(int)2);
	lime_display_object_set_matrix= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_matrix","\xb5","\x67","\xa7","\xb8"),(int)2);
	lime_display_object_get_matrix= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_matrix","\x41","\xc9","\x29","\xb5"),(int)3);
	lime_display_object_get_color_transform= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_color_transform","\x50","\xe1","\x40","\x0f"),(int)3);
	lime_display_object_set_color_transform= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_color_transform","\x5c","\xd4","\xdd","\x4b"),(int)2);
	lime_display_object_get_pixel_bounds= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_pixel_bounds","\x4e","\x21","\x4f","\x7c"),(int)2);
	lime_display_object_get_bounds= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_bounds","\x75","\x19","\x7f","\x5f"),(int)4);
	lime_display_object_hit_test_point= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_hit_test_point","\xc6","\x29","\xad","\x25"),(int)5);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
