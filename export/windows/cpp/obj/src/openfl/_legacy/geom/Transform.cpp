#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
namespace openfl{
namespace _legacy{
namespace geom{

Void Transform_obj::__construct(::openfl::_legacy::display::DisplayObject parent)
{
HX_STACK_FRAME("openfl._legacy.geom.Transform","new",0x96893ff0,"openfl._legacy.geom.Transform.new","openfl/_legacy/geom/Transform.hx",23,0xd117dfbf)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(25)
	this->__parent = parent;
	HX_STACK_LINE(26)
	this->__hasMatrix = true;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::openfl::_legacy::display::DisplayObject parent)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","get_colorTransform",0xe3304ac2,"openfl._legacy.geom.Transform.get_colorTransform","openfl/_legacy/geom/Transform.hx",38,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::openfl::_legacy::display::DisplayObject tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::openfl::_legacy::geom::ColorTransform tmp1 = tmp->__getColorTransform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::openfl::_legacy::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::_legacy::geom::ColorTransform value){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","set_colorTransform",0xbfdf7d36,"openfl._legacy.geom.Transform.set_colorTransform","openfl/_legacy/geom/Transform.hx",39,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(39)
	::openfl::_legacy::display::DisplayObject tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::openfl::_legacy::geom::ColorTransform tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	tmp->__setColorTransform(tmp1);
	HX_STACK_LINE(39)
	::openfl::_legacy::geom::ColorTransform tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::openfl::_legacy::geom::ColorTransform Transform_obj::get_concatenatedColorTransform( ){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","get_concatenatedColorTransform",0xd587cdb1,"openfl._legacy.geom.Transform.get_concatenatedColorTransform","openfl/_legacy/geom/Transform.hx",40,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::openfl::_legacy::display::DisplayObject tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::openfl::_legacy::geom::ColorTransform tmp1 = tmp->__getConcatenatedColorTransform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedColorTransform,return )

::openfl::_legacy::geom::Matrix Transform_obj::get_concatenatedMatrix( ){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","get_concatenatedMatrix",0xcd19c469,"openfl._legacy.geom.Transform.get_concatenatedMatrix","openfl/_legacy/geom/Transform.hx",41,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::openfl::_legacy::display::DisplayObject tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	::openfl::_legacy::geom::Matrix tmp1 = tmp->__getConcatenatedMatrix();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

::openfl::_legacy::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","get_matrix",0x8296487a,"openfl._legacy.geom.Transform.get_matrix","openfl/_legacy/geom/Transform.hx",44,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	bool tmp = this->__hasMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(48)
		::openfl::_legacy::display::DisplayObject tmp1 = this->__parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::openfl::_legacy::geom::Matrix tmp2 = tmp1->__getMatrix();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		return tmp2;
	}
	HX_STACK_LINE(52)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::openfl::_legacy::geom::Matrix Transform_obj::set_matrix( ::openfl::_legacy::geom::Matrix value){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","set_matrix",0x8613e6ee,"openfl._legacy.geom.Transform.set_matrix","openfl/_legacy/geom/Transform.hx",57,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(59)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	if ((tmp)){
		HX_STACK_LINE(61)
		this->__hasMatrix = false;
		HX_STACK_LINE(62)
		return null();
	}
	HX_STACK_LINE(66)
	this->__hasMatrix = true;
	HX_STACK_LINE(67)
	this->__hasMatrix3D = false;
	HX_STACK_LINE(69)
	::openfl::_legacy::display::DisplayObject tmp1 = this->__parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	if ((tmp2)){
		HX_STACK_LINE(71)
		::openfl::_legacy::display::DisplayObject tmp3 = this->__parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		::openfl::_legacy::geom::Matrix tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		tmp3->__setMatrix(tmp4);
	}
	HX_STACK_LINE(75)
	::openfl::_legacy::geom::Matrix tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::openfl::geom::Matrix3D Transform_obj::get_matrix3D( ){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","get_matrix3D",0x0b1507ab,"openfl._legacy.geom.Transform.get_matrix3D","openfl/_legacy/geom/Transform.hx",80,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	bool tmp = this->__hasMatrix3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(84)
		::openfl::_legacy::display::DisplayObject tmp1 = this->__parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::openfl::_legacy::geom::Matrix tmp2 = tmp1->__getMatrix();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::openfl::_legacy::geom::Matrix matrix = tmp2;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(85)
		::openfl::geom::Matrix3D tmp3 = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(matrix->a).Add(matrix->b).Add(((Float)0.0)).Add(((Float)0.0)).Add(matrix->c).Add(matrix->d).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(matrix->tx).Add(matrix->ty).Add(((Float)0.0)).Add(((Float)1.0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		return tmp3;
	}
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","set_matrix3D",0x200e2b1f,"openfl._legacy.geom.Transform.set_matrix3D","openfl/_legacy/geom/Transform.hx",94,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(96)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	if ((tmp)){
		HX_STACK_LINE(98)
		this->__hasMatrix3D = false;
		HX_STACK_LINE(99)
		return null();
	}
	HX_STACK_LINE(103)
	this->__hasMatrix = false;
	HX_STACK_LINE(104)
	this->__hasMatrix3D = true;
	HX_STACK_LINE(106)
	::openfl::_legacy::display::DisplayObject tmp1 = this->__parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	if ((tmp2)){
		HX_STACK_LINE(108)
		Float tmp3 = value->rawData->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		Float tmp5 = value->rawData->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		Float tmp7 = value->rawData->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		Float tmp9 = value->rawData->__get((int)5);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		Float tmp11 = value->rawData->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(108)
		Float tmp13 = value->rawData->__get((int)13);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(108)
		Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(108)
		::openfl::_legacy::geom::Matrix tmp15 = ::openfl::_legacy::geom::Matrix_obj::__new(tmp4,tmp6,tmp8,tmp10,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(108)
		::openfl::_legacy::geom::Matrix matrix = tmp15;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(109)
		::openfl::_legacy::display::DisplayObject tmp16 = this->__parent;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(109)
		::openfl::_legacy::geom::Matrix tmp17 = matrix;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(109)
		tmp16->__setMatrix(tmp17);
	}
	HX_STACK_LINE(113)
	::openfl::geom::Matrix3D tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )

::openfl::_legacy::geom::Rectangle Transform_obj::get_pixelBounds( ){
	HX_STACK_FRAME("openfl._legacy.geom.Transform","get_pixelBounds",0xdcf2a8c2,"openfl._legacy.geom.Transform.get_pixelBounds","openfl/_legacy/geom/Transform.hx",118,0xd117dfbf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	::openfl::_legacy::display::DisplayObject tmp = this->__parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	::openfl::_legacy::geom::Rectangle tmp1 = tmp->__getPixelBounds();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_pixelBounds,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
	HX_MARK_MEMBER_NAME(__parent,"__parent");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
	HX_VISIT_MEMBER_NAME(__parent,"__parent");
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return get_matrix3D(); }
		if (HX_FIELD_EQ(inName,"__parent") ) { return __parent; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return inCallProp == hx::paccAlways ? get_pixelBounds() : pixelBounds; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return __hasMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return get_matrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return set_matrix3D_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return __hasMatrix3D; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_pixelBounds") ) { return get_pixelBounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { return inCallProp == hx::paccAlways ? get_concatenatedMatrix() : concatenatedMatrix; }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return get_concatenatedMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return inCallProp == hx::paccAlways ? get_concatenatedColorTransform() : concatenatedColorTransform; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_concatenatedColorTransform") ) { return get_concatenatedColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return set_matrix3D(inValue); }
		if (HX_FIELD_EQ(inName,"__parent") ) { __parent=inValue.Cast< ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { __hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { __hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return set_colorTransform(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { concatenatedMatrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("matrix3D","\x32","\x35","\xf3","\x66"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"));
	outFields->push(HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"));
	outFields->push(HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(Transform_obj,concatenatedMatrix),HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix),HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix3D),HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(Transform_obj,__parent),HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"),
	HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"),
	HX_HCSTRING("__parent","\x4a","\x70","\xad","\x95"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_concatenatedColorTransform","\x41","\x53","\x67","\xc6"),
	HX_HCSTRING("get_concatenatedMatrix","\xf9","\x39","\x31","\x52"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_matrix3D","\x3b","\xe9","\x0c","\x1c"),
	HX_HCSTRING("set_matrix3D","\xaf","\x0c","\x06","\x31"),
	HX_HCSTRING("get_pixelBounds","\x32","\x21","\x8c","\x98"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Transform","\xfe","\xc7","\x96","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
