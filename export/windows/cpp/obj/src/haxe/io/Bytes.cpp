#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace haxe{
namespace io{

Void Bytes_obj::__construct(int length,Array< unsigned char > b)
{
HX_STACK_FRAME("haxe.io.Bytes","new",0x3938d57d,"haxe.io.Bytes.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",33,0x20b05d0c)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(b,"b")
{
	HX_STACK_LINE(34)
	this->length = length;
	HX_STACK_LINE(35)
	this->b = b;
}
;
	return null();
}

//Bytes_obj::~Bytes_obj() { }

Dynamic Bytes_obj::__CreateEmpty() { return  new Bytes_obj; }
hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,Array< unsigned char > b)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(length,b);
	return _result_;}

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Bytes_obj::blit( int pos,::haxe::io::Bytes src,int srcpos,int len){
{
		HX_STACK_FRAME("haxe.io.Bytes","blit",0xd098ac78,"haxe.io.Bytes.blit","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",79,0x20b05d0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(srcpos,"srcpos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(81)
		bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(81)
			tmp3 = (srcpos < (int)0);
		}
		else{
			HX_STACK_LINE(81)
			tmp3 = true;
		}
		HX_STACK_LINE(81)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		if ((tmp5)){
			HX_STACK_LINE(81)
			tmp6 = (len < (int)0);
		}
		else{
			HX_STACK_LINE(81)
			tmp6 = true;
		}
		HX_STACK_LINE(81)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(81)
		if ((tmp8)){
			HX_STACK_LINE(81)
			int tmp10 = (pos + len);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(81)
			tmp9 = (tmp12 > tmp15);
		}
		else{
			HX_STACK_LINE(81)
			tmp9 = true;
		}
		HX_STACK_LINE(81)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(81)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		if ((tmp10)){
			HX_STACK_LINE(81)
			int tmp12 = (srcpos + len);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			int tmp14 = src->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			tmp11 = (tmp13 > tmp14);
		}
		else{
			HX_STACK_LINE(81)
			tmp11 = true;
		}
		HX_STACK_LINE(81)
		if ((tmp11)){
			HX_STACK_LINE(81)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			int tmp13 = srcpos;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(97)
			this->b->blit(tmp12,src->b,tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bytes_obj,blit,(void))

::haxe::io::Bytes Bytes_obj::sub( int pos,int len){
	HX_STACK_FRAME("haxe.io.Bytes","sub",0x393cae9d,"haxe.io.Bytes.sub","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",133,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(135)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	if ((tmp2)){
		HX_STACK_LINE(135)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(135)
		tmp3 = true;
	}
	HX_STACK_LINE(135)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(135)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(135)
	if ((tmp4)){
		HX_STACK_LINE(135)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		tmp5 = (tmp7 > tmp9);
	}
	else{
		HX_STACK_LINE(135)
		tmp5 = true;
	}
	HX_STACK_LINE(135)
	if ((tmp5)){
		HX_STACK_LINE(135)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(157)
	int tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	int tmp7 = (pos + len);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(157)
	::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::__new(len,this->b->slice(tmp6,tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(157)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,sub,return )

::String Bytes_obj::getString( int pos,int len){
	HX_STACK_FRAME("haxe.io.Bytes","getString",0xa16beae4,"haxe.io.Bytes.getString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",357,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(359)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(359)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(359)
	if ((tmp2)){
		HX_STACK_LINE(359)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(359)
		tmp3 = true;
	}
	HX_STACK_LINE(359)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(359)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(359)
	if ((tmp4)){
		HX_STACK_LINE(359)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(359)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(359)
		tmp5 = (tmp7 > tmp9);
	}
	else{
		HX_STACK_LINE(359)
		tmp5 = true;
	}
	HX_STACK_LINE(359)
	if ((tmp5)){
		HX_STACK_LINE(359)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(369)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(370)
	::__hxcpp_string_of_bytes(this->b,result,pos,len);
	HX_STACK_LINE(371)
	::String tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(371)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,getString,return )

::String Bytes_obj::toString( ){
	HX_STACK_FRAME("haxe.io.Bytes","toString",0x0291226f,"haxe.io.Bytes.toString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",416,0x20b05d0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(433)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	::String tmp1 = this->getString((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Bytes_obj,toString,return )

::haxe::io::Bytes Bytes_obj::alloc( int length){
	HX_STACK_FRAME("haxe.io.Bytes","alloc",0x2199ead2,"haxe.io.Bytes.alloc","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",455,0x20b05d0c)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(465)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(466)
	bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	if ((tmp)){
		HX_STACK_LINE(466)
		int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		a[tmp1] = (int)0;
	}
	HX_STACK_LINE(467)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(length,a);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(467)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

::haxe::io::Bytes Bytes_obj::ofString( ::String s){
	HX_STACK_FRAME("haxe.io.Bytes","ofString",0x6e53bb0b,"haxe.io.Bytes.ofString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",482,0x20b05d0c)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(493)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(494)
	::__hxcpp_bytes_of_string(a,s);
	HX_STACK_LINE(495)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(a->length,a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

::haxe::io::Bytes Bytes_obj::ofData( Array< unsigned char > b){
	HX_STACK_FRAME("haxe.io.Bytes","ofData",0x4f3005e4,"haxe.io.Bytes.ofData","C:\\HaxeToolkit\\haxe\\std/haxe/io/Bytes.hx",540,0x20b05d0c)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(550)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::__new(b->length,b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )


Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic Bytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return blit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true;  }
	}
	return false;
}

Dynamic Bytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Bytes_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(Bytes_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("blit","\x35","\x38","\x19","\x41"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

#endif

hx::Class Bytes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("ofString","\x48","\x69","\x31","\xa4"),
	HX_HCSTRING("ofData","\xe1","\xba","\xb8","\x49"),
	::String(null()) };

void Bytes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Bytes","\x0b","\x53","\x6f","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bytes_obj >;
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
