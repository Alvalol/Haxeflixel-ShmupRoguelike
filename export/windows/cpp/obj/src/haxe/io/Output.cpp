#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace haxe{
namespace io{

Void Output_obj::__construct()
{
	return null();
}

//Output_obj::~Output_obj() { }

Dynamic Output_obj::__CreateEmpty() { return  new Output_obj; }
hx::ObjectPtr< Output_obj > Output_obj::__new()
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct();
	return _result_;}

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct();
	return _result_;}

Void Output_obj::writeByte( int c){
{
		HX_STACK_FRAME("haxe.io.Output","writeByte",0xb4fe513a,"haxe.io.Output.writeByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",47,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(HX_HCSTRING("Not implemented","\x15","\x1e","\x32","\x34"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeByte,(void))

int Output_obj::writeBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Output","writeBytes",0xa988c1f9,"haxe.io.Output.writeBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",57,0x05ec9a64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(58)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(59)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(61)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	if ((tmp2)){
		HX_STACK_LINE(61)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(61)
		tmp3 = true;
	}
	HX_STACK_LINE(61)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	if ((tmp4)){
		HX_STACK_LINE(61)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		int tmp8 = s->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(61)
		tmp5 = true;
	}
	HX_STACK_LINE(61)
	if ((tmp5)){
		HX_STACK_LINE(62)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(64)
	while((true)){
		HX_STACK_LINE(64)
		bool tmp6 = (k > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		if ((tmp7)){
			HX_STACK_LINE(64)
			break;
		}
		HX_STACK_LINE(70)
		int tmp8 = b->__get(pos);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		this->writeByte(tmp8);
		HX_STACK_LINE(74)
		(pos)++;
		HX_STACK_LINE(75)
		(k)--;
	}
	HX_STACK_LINE(77)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeBytes,return )

Void Output_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Output","close",0xe726bfeb,"haxe.io.Output.close","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",91,0x05ec9a64)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,close,(void))

Void Output_obj::write( ::haxe::io::Bytes s){
{
		HX_STACK_FRAME("haxe.io.Output","write",0x6f1d1512,"haxe.io.Output.write","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",104,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(105)
		int l = s->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(106)
		int p = (int)0;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			bool tmp = (l > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			if ((tmp1)){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(108)
			::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			int tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			int tmp4 = l;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			int tmp5 = this->writeBytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			int k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(109)
			bool tmp6 = (k == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			if ((tmp6)){
				HX_STACK_LINE(109)
				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
			}
			HX_STACK_LINE(110)
			hx::AddEq(p,k);
			HX_STACK_LINE(111)
			hx::SubEq(l,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,write,(void))

Void Output_obj::writeFullBytes( ::haxe::io::Bytes s,int pos,int len){
{
		HX_STACK_FRAME("haxe.io.Output","writeFullBytes",0xc2c420ea,"haxe.io.Output.writeFullBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",121,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp = (len > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(121)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(121)
			if ((tmp1)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(122)
			::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			int tmp5 = this->writeBytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			int k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(123)
			hx::AddEq(pos,k);
			HX_STACK_LINE(124)
			hx::SubEq(len,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeFullBytes,(void))

Void Output_obj::writeString( ::String s){
{
		HX_STACK_FRAME("haxe.io.Output","writeString",0x97e1cb83,"haxe.io.Output.writeString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Output.hx",276,0x05ec9a64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(280)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		::haxe::io::Bytes b = tmp1;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(282)
		::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		int tmp3 = b->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		this->writeFullBytes(tmp2,(int)0,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeString,(void))


Output_obj::Output_obj()
{
}

Dynamic Output_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return writeString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeFullBytes") ) { return writeFullBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("writeFullBytes","\x7d","\xe7","\x66","\xa4"),
	HX_HCSTRING("writeString","\x10","\x7b","\x29","\xa6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

hx::Class Output_obj::__mClass;

void Output_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Output","\x61","\x10","\x0b","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Output_obj >;
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
