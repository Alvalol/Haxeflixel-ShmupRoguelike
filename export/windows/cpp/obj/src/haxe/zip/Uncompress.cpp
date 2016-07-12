#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
namespace haxe{
namespace zip{

Void Uncompress_obj::__construct(Dynamic windowBits)
{
HX_STACK_FRAME("haxe.zip.Uncompress","new",0x34f307c2,"haxe.zip.Uncompress.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",28,0x0a7f5a92)
HX_STACK_THIS(this)
HX_STACK_ARG(windowBits,"windowBits")
{
	HX_STACK_LINE(29)
	Dynamic tmp = windowBits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Dynamic tmp1 = ::haxe::zip::Uncompress_obj::_inflate_init(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->s = tmp1;
}
;
	return null();
}

//Uncompress_obj::~Uncompress_obj() { }

Dynamic Uncompress_obj::__CreateEmpty() { return  new Uncompress_obj; }
hx::ObjectPtr< Uncompress_obj > Uncompress_obj::__new(Dynamic windowBits)
{  hx::ObjectPtr< Uncompress_obj > _result_ = new Uncompress_obj();
	_result_->__construct(windowBits);
	return _result_;}

Dynamic Uncompress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uncompress_obj > _result_ = new Uncompress_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Uncompress_obj::execute( ::haxe::io::Bytes src,int srcPos,::haxe::io::Bytes dst,int dstPos){
	HX_STACK_FRAME("haxe.zip.Uncompress","execute",0xb3589a97,"haxe.zip.Uncompress.execute","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",32,0x0a7f5a92)
	HX_STACK_THIS(this)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(srcPos,"srcPos")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(dstPos,"dstPos")
	HX_STACK_LINE(33)
	Dynamic tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	int tmp1 = srcPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	int tmp2 = dstPos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	Dynamic tmp3 = ::haxe::zip::Uncompress_obj::_inflate_buffer(tmp,src->b,tmp1,dst->b,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC4(Uncompress_obj,execute,return )

Void Uncompress_obj::setFlushMode( ::haxe::zip::FlushMode f){
{
		HX_STACK_FRAME("haxe.zip.Uncompress","setFlushMode",0xbecba0a3,"haxe.zip.Uncompress.setFlushMode","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",36,0x0a7f5a92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(37)
		Dynamic tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		Dynamic tmp1 = f->__Tag();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::haxe::zip::Uncompress_obj::_set_flush_mode(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Uncompress_obj,setFlushMode,(void))

Void Uncompress_obj::close( ){
{
		HX_STACK_FRAME("haxe.zip.Uncompress","close",0x4cc86b9a,"haxe.zip.Uncompress.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",40,0x0a7f5a92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		Dynamic tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::haxe::zip::Uncompress_obj::_inflate_end(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uncompress_obj,close,(void))

::haxe::io::Bytes Uncompress_obj::run( ::haxe::io::Bytes src,Dynamic bufsize){
	HX_STACK_FRAME("haxe.zip.Uncompress","run",0x34f61ead,"haxe.zip.Uncompress.run","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",44,0x0a7f5a92)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(bufsize,"bufsize")
	HX_STACK_LINE(45)
	::haxe::zip::Uncompress tmp = ::haxe::zip::Uncompress_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::haxe::zip::Uncompress u = tmp;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(46)
	bool tmp1 = (bufsize == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	if ((tmp1)){
		HX_STACK_LINE(46)
		int tmp2 = (int)65536;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		bufsize = tmp2;
	}
	HX_STACK_LINE(47)
	Dynamic tmp2 = bufsize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	::haxe::io::Bytes tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	::haxe::io::BytesBuffer tmp5 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	::haxe::io::BytesBuffer b = tmp5;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(49)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(50)
	u->setFlushMode(::haxe::zip::FlushMode_obj::SYNC);
	HX_STACK_LINE(51)
	while((true)){
		HX_STACK_LINE(52)
		::haxe::io::Bytes tmp6 = src;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		::haxe::io::Bytes tmp8 = tmp4;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		Dynamic tmp9 = u->execute(tmp6,tmp7,tmp8,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		Dynamic r = tmp9;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int len = r->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic );		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(53)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			if ((tmp12)){
				HX_STACK_LINE(53)
				tmp13 = (len < (int)0);
			}
			else{
				HX_STACK_LINE(53)
				tmp13 = true;
			}
			HX_STACK_LINE(53)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(53)
			if ((tmp14)){
				HX_STACK_LINE(53)
				int tmp16 = len;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(53)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(53)
				int tmp18 = tmp4->length;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(53)
				tmp15 = (tmp17 > tmp18);
			}
			else{
				HX_STACK_LINE(53)
				tmp15 = true;
			}
			HX_STACK_LINE(53)
			if ((tmp15)){
				HX_STACK_LINE(53)
				HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
			}
			HX_STACK_LINE(53)
			Array< unsigned char > b1 = b->b;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(53)
			Array< unsigned char > b2 = tmp4->b;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(53)
				int tmp16 = len;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(53)
				int _g = tmp16;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(53)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(53)
					if ((tmp18)){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(53)
					int i = tmp19;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(53)
					unsigned char tmp20 = b2->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(53)
					b->b->push(tmp20);
				}
			}
		}
		HX_STACK_LINE(54)
		hx::AddEq(pos,r->__Field(HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"), hx::paccDynamic ));
		HX_STACK_LINE(55)
		bool tmp10 = r->__Field(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		if ((tmp10)){
			HX_STACK_LINE(56)
			break;
		}
	}
	HX_STACK_LINE(58)
	u->close();
	HX_STACK_LINE(59)
	::haxe::io::Bytes tmp6 = b->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(59)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Uncompress_obj,run,return )

Dynamic Uncompress_obj::_inflate_init;

Dynamic Uncompress_obj::_inflate_buffer;

Dynamic Uncompress_obj::_inflate_end;

Dynamic Uncompress_obj::_set_flush_mode;


Uncompress_obj::Uncompress_obj()
{
}

void Uncompress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uncompress);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Uncompress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic Uncompress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFlushMode") ) { return setFlushMode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Uncompress_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inflate_end") ) { outValue = _inflate_end; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inflate_init") ) { outValue = _inflate_init; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inflate_buffer") ) { outValue = _inflate_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"_set_flush_mode") ) { outValue = _set_flush_mode; return true;  }
	}
	return false;
}

Dynamic Uncompress_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Uncompress_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_inflate_end") ) { _inflate_end=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inflate_init") ) { _inflate_init=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inflate_buffer") ) { _inflate_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_set_flush_mode") ) { _set_flush_mode=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Uncompress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Uncompress_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Uncompress_obj::_inflate_init,HX_HCSTRING("_inflate_init","\xe7","\x83","\xb7","\xb3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Uncompress_obj::_inflate_buffer,HX_HCSTRING("_inflate_buffer","\x97","\x29","\xd6","\xec")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Uncompress_obj::_inflate_end,HX_HCSTRING("_inflate_end","\xe4","\xe2","\x53","\x98")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Uncompress_obj::_set_flush_mode,HX_HCSTRING("_set_flush_mode","\x5a","\xbf","\xbb","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("setFlushMode","\x45","\xd4","\x07","\x63"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uncompress_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Uncompress_obj::_inflate_init,"_inflate_init");
	HX_MARK_MEMBER_NAME(Uncompress_obj::_inflate_buffer,"_inflate_buffer");
	HX_MARK_MEMBER_NAME(Uncompress_obj::_inflate_end,"_inflate_end");
	HX_MARK_MEMBER_NAME(Uncompress_obj::_set_flush_mode,"_set_flush_mode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uncompress_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Uncompress_obj::_inflate_init,"_inflate_init");
	HX_VISIT_MEMBER_NAME(Uncompress_obj::_inflate_buffer,"_inflate_buffer");
	HX_VISIT_MEMBER_NAME(Uncompress_obj::_inflate_end,"_inflate_end");
	HX_VISIT_MEMBER_NAME(Uncompress_obj::_set_flush_mode,"_set_flush_mode");
};

#endif

hx::Class Uncompress_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("_inflate_init","\xe7","\x83","\xb7","\xb3"),
	HX_HCSTRING("_inflate_buffer","\x97","\x29","\xd6","\xec"),
	HX_HCSTRING("_inflate_end","\xe4","\xe2","\x53","\x98"),
	HX_HCSTRING("_set_flush_mode","\x5a","\xbf","\xbb","\xdd"),
	::String(null()) };

void Uncompress_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Uncompress","\xd0","\xbe","\x27","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uncompress_obj::__GetStatic;
	__mClass->mSetStaticField = &Uncompress_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uncompress_obj >;
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

void Uncompress_obj::__boot()
{
	_inflate_init= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("inflate_init","\x08","\xf1","\x48","\xd1"),(int)1);
	_inflate_buffer= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("inflate_buffer","\xf8","\xe0","\x75","\xa3"),(int)5);
	_inflate_end= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("inflate_end","\xe3","\x34","\x4a","\x32"),(int)1);
	_set_flush_mode= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("set_flush_mode","\xbb","\x76","\x5b","\x94"),(int)2);
}

} // end namespace haxe
} // end namespace zip
