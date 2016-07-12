#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif
namespace haxe{
namespace zip{

Void Compress_obj::__construct(int level)
{
HX_STACK_FRAME("haxe.zip.Compress","new",0x4ddc50a9,"haxe.zip.Compress.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Compress.hx",29,0xd451ba8b)
HX_STACK_THIS(this)
HX_STACK_ARG(level,"level")
{
	HX_STACK_LINE(30)
	int tmp = level;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	Dynamic tmp1 = ::haxe::zip::Compress_obj::_deflate_init(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->s = tmp1;
}
;
	return null();
}

//Compress_obj::~Compress_obj() { }

Dynamic Compress_obj::__CreateEmpty() { return  new Compress_obj; }
hx::ObjectPtr< Compress_obj > Compress_obj::__new(int level)
{  hx::ObjectPtr< Compress_obj > _result_ = new Compress_obj();
	_result_->__construct(level);
	return _result_;}

Dynamic Compress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Compress_obj > _result_ = new Compress_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Compress_obj::execute( ::haxe::io::Bytes src,int srcPos,::haxe::io::Bytes dst,int dstPos){
	HX_STACK_FRAME("haxe.zip.Compress","execute",0xd015e2fe,"haxe.zip.Compress.execute","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Compress.hx",33,0xd451ba8b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(srcPos,"srcPos")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(dstPos,"dstPos")
	HX_STACK_LINE(34)
	Dynamic tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = srcPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = dstPos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Dynamic tmp3 = ::haxe::zip::Compress_obj::_deflate_buffer(tmp,src->b,tmp1,dst->b,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC4(Compress_obj,execute,return )

Void Compress_obj::setFlushMode( ::haxe::zip::FlushMode f){
{
		HX_STACK_FRAME("haxe.zip.Compress","setFlushMode",0x35ab82dc,"haxe.zip.Compress.setFlushMode","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Compress.hx",37,0xd451ba8b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(38)
		Dynamic tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::haxe::zip::FlushMode tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::haxe::zip::Compress_obj::_set_flush_mode(tmp,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compress_obj,setFlushMode,(void))

Void Compress_obj::close( ){
{
		HX_STACK_FRAME("haxe.zip.Compress","close",0x6942fc41,"haxe.zip.Compress.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Compress.hx",41,0xd451ba8b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		Dynamic tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::haxe::zip::Compress_obj::_deflate_end(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Compress_obj,close,(void))

::haxe::io::Bytes Compress_obj::run( ::haxe::io::Bytes s,int level){
	HX_STACK_FRAME("haxe.zip.Compress","run",0x4ddf6794,"haxe.zip.Compress.run","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Compress.hx",45,0xd451ba8b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(level,"level")
	HX_STACK_LINE(46)
	::haxe::zip::Compress tmp = ::haxe::zip::Compress_obj::__new(level);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::haxe::zip::Compress c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(47)
	c->setFlushMode(::haxe::zip::FlushMode_obj::FINISH);
	HX_STACK_LINE(48)
	Dynamic tmp1 = c->s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	int tmp2 = s->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	int tmp3 = ::haxe::zip::Compress_obj::_deflate_bound(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::alloc(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	::haxe::io::Bytes out = tmp4;		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(49)
	::haxe::io::Bytes tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	::haxe::io::Bytes tmp6 = out;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	Dynamic tmp7 = c->execute(tmp5,(int)0,tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	Dynamic r = tmp7;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(50)
	c->close();
	HX_STACK_LINE(51)
	bool tmp8 = r->__Field(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(51)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(51)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(51)
	if ((tmp11)){
		HX_STACK_LINE(51)
		tmp12 = (r->__Field(HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"), hx::paccDynamic ) != s->length);
	}
	else{
		HX_STACK_LINE(51)
		tmp12 = true;
	}
	HX_STACK_LINE(51)
	if ((tmp12)){
		HX_STACK_LINE(52)
		HX_STACK_DO_THROW(HX_HCSTRING("Compression failed","\x57","\x63","\x12","\x3c"));
	}
	HX_STACK_LINE(53)
	int tmp13 = r->__Field(HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(53)
	::haxe::io::Bytes tmp14 = out->sub((int)0,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(53)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Compress_obj,run,return )

Dynamic Compress_obj::_deflate_init;

Dynamic Compress_obj::_deflate_bound;

Dynamic Compress_obj::_deflate_buffer;

Dynamic Compress_obj::_deflate_end;

Dynamic Compress_obj::_set_flush_mode;


Compress_obj::Compress_obj()
{
}

void Compress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Compress);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Compress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic Compress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool Compress_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deflate_end") ) { outValue = _deflate_end; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_deflate_init") ) { outValue = _deflate_init; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_deflate_bound") ) { outValue = _deflate_bound; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_deflate_buffer") ) { outValue = _deflate_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"_set_flush_mode") ) { outValue = _set_flush_mode; return true;  }
	}
	return false;
}

Dynamic Compress_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Compress_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_deflate_end") ) { _deflate_end=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_deflate_init") ) { _deflate_init=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_deflate_bound") ) { _deflate_bound=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_deflate_buffer") ) { _deflate_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_set_flush_mode") ) { _set_flush_mode=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Compress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Compress_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Compress_obj::_deflate_init,HX_HCSTRING("_deflate_init","\x83","\x9a","\x28","\xe3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Compress_obj::_deflate_bound,HX_HCSTRING("_deflate_bound","\x6b","\xd5","\x42","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Compress_obj::_deflate_buffer,HX_HCSTRING("_deflate_buffer","\x33","\x1f","\xaf","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Compress_obj::_deflate_end,HX_HCSTRING("_deflate_end","\xc8","\x93","\x5d","\x51")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Compress_obj::_set_flush_mode,HX_HCSTRING("_set_flush_mode","\x5a","\xbf","\xbb","\xdd")},
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
	HX_MARK_MEMBER_NAME(Compress_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_init,"_deflate_init");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_bound,"_deflate_bound");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_buffer,"_deflate_buffer");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_end,"_deflate_end");
	HX_MARK_MEMBER_NAME(Compress_obj::_set_flush_mode,"_set_flush_mode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compress_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_init,"_deflate_init");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_bound,"_deflate_bound");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_buffer,"_deflate_buffer");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_end,"_deflate_end");
	HX_VISIT_MEMBER_NAME(Compress_obj::_set_flush_mode,"_set_flush_mode");
};

#endif

hx::Class Compress_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("_deflate_init","\x83","\x9a","\x28","\xe3"),
	HX_HCSTRING("_deflate_bound","\x6b","\xd5","\x42","\xd9"),
	HX_HCSTRING("_deflate_buffer","\x33","\x1f","\xaf","\xab"),
	HX_HCSTRING("_deflate_end","\xc8","\x93","\x5d","\x51"),
	HX_HCSTRING("_set_flush_mode","\x5a","\xbf","\xbb","\xdd"),
	::String(null()) };

void Compress_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Compress","\x37","\xc8","\x12","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Compress_obj::__GetStatic;
	__mClass->mSetStaticField = &Compress_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Compress_obj >;
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

void Compress_obj::__boot()
{
	_deflate_init= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("deflate_init","\xa4","\x07","\xba","\x00"),(int)1);
	_deflate_bound= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("deflate_bound","\x2a","\xe5","\xf0","\x9a"),(int)2);
	_deflate_buffer= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("deflate_buffer","\x94","\xd6","\x4e","\x62"),(int)5);
	_deflate_end= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("deflate_end","\xc7","\xe5","\x53","\xeb"),(int)1);
	_set_flush_mode= ::cpp::Lib_obj::load(HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"),HX_HCSTRING("set_flush_mode","\xbb","\x76","\x5b","\x94"),(int)2);
}

} // end namespace haxe
} // end namespace zip
