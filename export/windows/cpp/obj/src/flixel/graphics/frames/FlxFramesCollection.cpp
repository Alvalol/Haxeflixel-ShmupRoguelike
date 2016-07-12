#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxFramesCollection_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::graphics::frames::FlxFrameCollectionType type,::flixel::math::FlxPoint border)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","new",0x41834b71,"flixel.graphics.frames.FlxFramesCollection.new","flixel/graphics/frames/FlxFramesCollection.hx",52,0xe09dd200)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(border,"border")
{
	HX_STACK_LINE(53)
	this->parent = parent;
	HX_STACK_LINE(54)
	this->type = type;
	HX_STACK_LINE(55)
	bool tmp = (border == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	if ((tmp)){
		HX_STACK_LINE(55)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(55)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(55)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(55)
		point->_inPool = false;
		HX_STACK_LINE(55)
		tmp1 = point;
	}
	else{
		HX_STACK_LINE(55)
		tmp1 = border;
	}
	HX_STACK_LINE(55)
	this->border = tmp1;
	HX_STACK_LINE(56)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(57)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(57)
	this->framesHash = tmp2;
	HX_STACK_LINE(59)
	bool tmp3 = (parent != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	if ((tmp3)){
		HX_STACK_LINE(61)
		parent->addFrameCollection(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//FlxFramesCollection_obj::~FlxFramesCollection_obj() { }

Dynamic FlxFramesCollection_obj::__CreateEmpty() { return  new FlxFramesCollection_obj; }
hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::graphics::frames::FlxFrameCollectionType type,::flixel::math::FlxPoint border)
{  hx::ObjectPtr< FlxFramesCollection_obj > _result_ = new FlxFramesCollection_obj();
	_result_->__construct(parent,type,border);
	return _result_;}

Dynamic FlxFramesCollection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFramesCollection_obj > _result_ = new FlxFramesCollection_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxFramesCollection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxFramesCollection_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxFramesCollection_obj >(this); }
::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByName( ::String name){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByName",0xec0f52c9,"flixel.graphics.frames.FlxFramesCollection.getByName","flixel/graphics/frames/FlxFramesCollection.hx",72,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(73)
	::haxe::ds::StringMap tmp = this->framesHash;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	::flixel::graphics::frames::FlxFrame tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	::flixel::graphics::frames::FlxFrame tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByName,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByIndex( int index){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByIndex",0xc8e928d4,"flixel.graphics.frames.FlxFramesCollection.getByIndex","flixel/graphics/frames/FlxFramesCollection.hx",83,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(84)
	::flixel::graphics::frames::FlxFrame tmp = this->frames->__get(index).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByIndex,return )

int FlxFramesCollection_obj::getIndexByName( ::String name){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getIndexByName",0x9190d40d,"flixel.graphics.frames.FlxFramesCollection.getIndexByName","flixel/graphics/frames/FlxFramesCollection.hx",94,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(95)
	int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int numFrames = tmp;		HX_STACK_VAR(numFrames,"numFrames");
	HX_STACK_LINE(96)
	::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			bool tmp1 = (_g < numFrames);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			if ((tmp2)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(100)
			::flixel::graphics::frames::FlxFrame tmp4 = this->frames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			::String tmp5 = tmp4->name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			if ((tmp7)){
				HX_STACK_LINE(102)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(106)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getIndexByName,return )

int FlxFramesCollection_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getFrameIndex",0x9be9862c,"flixel.graphics.frames.FlxFramesCollection.getFrameIndex","flixel/graphics/frames/FlxFramesCollection.hx",116,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_LINE(117)
	::flixel::graphics::frames::FlxFrame tmp = frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	int tmp1 = this->frames->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getFrameIndex,return )

Void FlxFramesCollection_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","destroy",0x3c5f048b,"flixel.graphics.frames.FlxFramesCollection.destroy","flixel/graphics/frames/FlxFramesCollection.hx",121,0xe09dd200)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->frames = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);
		HX_STACK_LINE(123)
		::flixel::math::FlxPoint tmp = this->border;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		this->border = tmp1;
		HX_STACK_LINE(124)
		this->framesHash = null();
		HX_STACK_LINE(125)
		this->parent = null();
		HX_STACK_LINE(126)
		this->type = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroy,(void))

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addEmptyFrame( ::flixel::math::FlxRect size){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addEmptyFrame",0x8f5bf232,"flixel.graphics.frames.FlxFramesCollection.addEmptyFrame","flixel/graphics/frames/FlxFramesCollection.hx",137,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(138)
	::flixel::graphics::FlxGraphic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::flixel::graphics::frames::FlxFrame tmp1 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	::flixel::graphics::frames::FlxFrame frame = tmp1;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(139)
	frame->type = (int)2;
	HX_STACK_LINE(140)
	::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(140)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(140)
		Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(140)
		Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(140)
		::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp4 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::flixel::math::FlxRect tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			::flixel::math::FlxRect _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(140)
			_this->x = X;
			HX_STACK_LINE(140)
			_this->y = Y;
			HX_STACK_LINE(140)
			_this->width = Width;
			HX_STACK_LINE(140)
			_this->height = Height;
			HX_STACK_LINE(140)
			tmp3 = _this;
		}
		HX_STACK_LINE(140)
		::flixel::math::FlxRect rect = tmp3;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(140)
		rect->_inPool = false;
		HX_STACK_LINE(140)
		tmp2 = rect;
	}
	HX_STACK_LINE(140)
	frame->set_frame(tmp2);
	HX_STACK_LINE(141)
	Float tmp3 = size->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	Float tmp4 = size->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	frame->sourceSize->set(tmp3,tmp4);
	HX_STACK_LINE(142)
	::flixel::graphics::frames::FlxFrame tmp5 = frame;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(142)
	this->frames->push(tmp5);
	HX_STACK_LINE(143)
	::flixel::graphics::frames::FlxFrame tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(143)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addEmptyFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addSpriteSheetFrame( ::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addSpriteSheetFrame",0x98036ac5,"flixel.graphics.frames.FlxFramesCollection.addSpriteSheetFrame","flixel/graphics/frames/FlxFramesCollection.hx",153,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(154)
	::flixel::graphics::FlxGraphic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::flixel::graphics::frames::FlxFrame tmp1 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	::flixel::graphics::frames::FlxFrame frame = tmp1;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(155)
	::flixel::math::FlxRect tmp2 = region;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	frame->set_frame(tmp2);
	HX_STACK_LINE(156)
	Float tmp3 = region->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	Float tmp4 = region->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	frame->sourceSize->set(tmp3,tmp4);
	HX_STACK_LINE(157)
	frame->offset->set((int)0,(int)0);
	HX_STACK_LINE(158)
	::flixel::graphics::frames::FlxFrame tmp5 = frame;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(158)
	::flixel::graphics::frames::FlxFrame tmp6 = this->pushFrame(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(158)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addSpriteSheetFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addAtlasFrame( ::flixel::math::FlxRect frame,::flixel::math::FlxPoint sourceSize,::flixel::math::FlxPoint offset,::String name,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int angle = __o_angle.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addAtlasFrame",0xf1c62eb4,"flixel.graphics.frames.FlxFramesCollection.addAtlasFrame","flixel/graphics/frames/FlxFramesCollection.hx",173,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(sourceSize,"sourceSize")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(174)
		bool tmp = (name != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		if ((tmp)){
			HX_STACK_LINE(174)
			::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(174)
			tmp1 = false;
		}
		HX_STACK_LINE(174)
		if ((tmp1)){
			HX_STACK_LINE(176)
			::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::flixel::graphics::frames::FlxFrame tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			::flixel::graphics::frames::FlxFrame tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			return tmp5;
		}
		HX_STACK_LINE(179)
		::flixel::graphics::FlxGraphic tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		int tmp3 = angle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		bool tmp4 = flipX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		bool tmp5 = flipY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		::flixel::graphics::frames::FlxFrame tmp6 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(179)
		::flixel::graphics::frames::FlxFrame texFrame = tmp6;		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(180)
		texFrame->name = name;
		HX_STACK_LINE(181)
		Float tmp7 = sourceSize->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		Float tmp8 = sourceSize->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		texFrame->sourceSize->set(tmp7,tmp8);
		HX_STACK_LINE(182)
		Float tmp9 = offset->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		Float tmp10 = offset->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(182)
		texFrame->offset->set(tmp9,tmp10);
		HX_STACK_LINE(183)
		::flixel::math::FlxRect tmp11 = frame;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(183)
		texFrame->set_frame(tmp11);
		HX_STACK_LINE(185)
		::flixel::math::FlxPoint tmp12 = sourceSize;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(185)
		::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxDestroyUtil_obj::put(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(185)
		sourceSize = tmp13;
		HX_STACK_LINE(186)
		::flixel::math::FlxPoint tmp14 = offset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(186)
		::flixel::math::FlxPoint tmp15 = ::flixel::util::FlxDestroyUtil_obj::put(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(186)
		offset = tmp15;
		HX_STACK_LINE(188)
		::flixel::graphics::frames::FlxFrame tmp16 = texFrame;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(188)
		::flixel::graphics::frames::FlxFrame tmp17 = this->pushFrame(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(188)
		return tmp17;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxFramesCollection_obj,addAtlasFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::pushFrame( ::flixel::graphics::frames::FlxFrame frameObj){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","pushFrame",0xac097dc4,"flixel.graphics.frames.FlxFramesCollection.pushFrame","flixel/graphics/frames/FlxFramesCollection.hx",198,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frameObj,"frameObj")
	HX_STACK_LINE(199)
	::String name = frameObj->name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(200)
	bool tmp = (name != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	if ((tmp)){
		HX_STACK_LINE(200)
		::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		tmp1 = tmp3->exists(tmp5);
	}
	else{
		HX_STACK_LINE(200)
		tmp1 = false;
	}
	HX_STACK_LINE(200)
	if ((tmp1)){
		HX_STACK_LINE(202)
		::haxe::ds::StringMap tmp2 = this->framesHash;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		::flixel::graphics::frames::FlxFrame tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		::flixel::graphics::frames::FlxFrame tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		return tmp5;
	}
	HX_STACK_LINE(205)
	::flixel::graphics::frames::FlxFrame tmp2 = frameObj;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	this->frames->push(tmp2);
	HX_STACK_LINE(206)
	frameObj->cacheFrameMatrix();
	HX_STACK_LINE(208)
	bool tmp3 = (name != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	if ((tmp3)){
		HX_STACK_LINE(210)
		::haxe::ds::StringMap tmp4 = this->framesHash;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		::flixel::graphics::frames::FlxFrame tmp6 = frameObj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(210)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(213)
	::flixel::graphics::frames::FlxFrame tmp4 = frameObj;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(213)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,pushFrame,return )

::flixel::graphics::frames::FlxFramesCollection FlxFramesCollection_obj::addBorder( ::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addBorder",0x7da91fbe,"flixel.graphics.frames.FlxFramesCollection.addBorder","flixel/graphics/frames/FlxFramesCollection.hx",223,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(224)
	HX_STACK_DO_THROW(HX_HCSTRING("To be overriden in subclasses","\x8b","\x78","\x89","\x60"));
	HX_STACK_LINE(225)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addBorder,return )

::String FlxFramesCollection_obj::toString( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","toString",0xfe5297fb,"flixel.graphics.frames.FlxFramesCollection.toString","flixel/graphics/frames/FlxFramesCollection.hx",229,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(231)
		_this->label = HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac");
		HX_STACK_LINE(231)
		_this->value = this->frames;
		HX_STACK_LINE(231)
		tmp = _this;
	}
	HX_STACK_LINE(232)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(232)
		_this->label = HX_HCSTRING("type","\xba","\xf2","\x08","\x4d");
		HX_STACK_LINE(232)
		::flixel::graphics::frames::FlxFrameCollectionType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		_this->value = tmp4;
		HX_STACK_LINE(232)
		tmp1 = _this;
	}
	HX_STACK_LINE(230)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,toString,return )

int FlxFramesCollection_obj::get_numFrames( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","get_numFrames",0xbd2728b4,"flixel.graphics.frames.FlxFramesCollection.get_numFrames","flixel/graphics/frames/FlxFramesCollection.hx",236,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_numFrames,return )


FlxFramesCollection_obj::FlxFramesCollection_obj()
{
}

void FlxFramesCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFramesCollection);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void FlxFramesCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(border,"border");
}

Dynamic FlxFramesCollection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == hx::paccAlways) return get_numFrames(); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return getByName_dyn(); }
		if (HX_FIELD_EQ(inName,"pushFrame") ) { return pushFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addBorder") ) { return addBorder_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return framesHash; }
		if (HX_FIELD_EQ(inName,"getByIndex") ) { return getByIndex_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"addEmptyFrame") ) { return addEmptyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addAtlasFrame") ) { return addAtlasFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return get_numFrames_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexByName") ) { return getIndexByName_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFramesCollection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::flixel::graphics::frames::FlxFrameCollectionType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFramesCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxFramesCollection_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxFramesCollection_obj,framesHash),HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFramesCollection_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrameCollectionType*/ ,(int)offsetof(FlxFramesCollection_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFramesCollection_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("getByName","\xf8","\xb4","\xa4","\x8a"),
	HX_HCSTRING("getByIndex","\xc5","\xaf","\x09","\xed"),
	HX_HCSTRING("getIndexByName","\x7e","\x27","\xfe","\xba"),
	HX_HCSTRING("getFrameIndex","\xdb","\x2b","\xad","\xfd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("addEmptyFrame","\xe1","\x97","\x1f","\xf1"),
	HX_HCSTRING("addSpriteSheetFrame","\xb4","\xfd","\xbc","\xf0"),
	HX_HCSTRING("addAtlasFrame","\x63","\xd4","\x89","\x53"),
	HX_HCSTRING("pushFrame","\xf3","\xdf","\x9e","\x4a"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFramesCollection_obj::__mClass;

void FlxFramesCollection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxFramesCollection","\xff","\xbe","\x62","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFramesCollection_obj >;
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
} // end namespace graphics
} // end namespace frames
