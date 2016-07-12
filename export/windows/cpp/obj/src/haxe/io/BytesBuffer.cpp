#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
namespace haxe{
namespace io{

Void BytesBuffer_obj::__construct()
{
HX_STACK_FRAME("haxe.io.BytesBuffer","new",0x022790dd,"haxe.io.BytesBuffer.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",54,0xb51c4e6c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(54)
	this->b = Array_obj< unsigned char >::__new();
}
;
	return null();
}

//BytesBuffer_obj::~BytesBuffer_obj() { }

Dynamic BytesBuffer_obj::__CreateEmpty() { return  new BytesBuffer_obj; }
hx::ObjectPtr< BytesBuffer_obj > BytesBuffer_obj::__new()
{  hx::ObjectPtr< BytesBuffer_obj > _result_ = new BytesBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic BytesBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesBuffer_obj > _result_ = new BytesBuffer_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes BytesBuffer_obj::getBytes( ){
	HX_STACK_FRAME("haxe.io.BytesBuffer","getBytes",0x1e9f7258,"haxe.io.BytesBuffer.getBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/BytesBuffer.hx",191,0xb51c4e6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	int tmp = this->b->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(tmp,this->b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(214)
	this->b = null();
	HX_STACK_LINE(215)
	::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesBuffer_obj,getBytes,return )


BytesBuffer_obj::BytesBuffer_obj()
{
}

void BytesBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesBuffer);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic BytesBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(BytesBuffer_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesBuffer_obj::__mClass;

void BytesBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesBuffer","\x6b","\xde","\xc4","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesBuffer_obj >;
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

} // end namespace haxe
} // end namespace io
