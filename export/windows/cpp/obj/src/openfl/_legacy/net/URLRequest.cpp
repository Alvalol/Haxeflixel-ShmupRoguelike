#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{

Void URLRequest_obj::__construct(::String url)
{
HX_STACK_FRAME("openfl._legacy.net.URLRequest","new",0xde83de87,"openfl._legacy.net.URLRequest.new","openfl/_legacy/net/URLRequest.hx",34,0xc5bb36e6)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
{
	HX_STACK_LINE(36)
	bool tmp = (url != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	if ((tmp)){
		HX_STACK_LINE(38)
		this->url = url;
	}
	HX_STACK_LINE(42)
	this->requestHeaders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	this->method = HX_HCSTRING("GET","\x76","\x1c","\x36","\x00");
	HX_STACK_LINE(45)
	this->verbose = false;
	HX_STACK_LINE(46)
	this->cookieString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(47)
	this->authType = (int)0;
	HX_STACK_LINE(48)
	this->contentType = HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa");
	HX_STACK_LINE(49)
	this->credentials = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(50)
	this->followRedirects = true;
}
;
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String url)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(url);
	return _result_;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLRequest_obj::basicAuth( ::String user,::String password){
{
		HX_STACK_FRAME("openfl._legacy.net.URLRequest","basicAuth",0x6693ca9d,"openfl._legacy.net.URLRequest.basicAuth","openfl/_legacy/net/URLRequest.hx",55,0xc5bb36e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(user,"user")
		HX_STACK_ARG(password,"password")
		HX_STACK_LINE(57)
		this->authType = (int)1;
		HX_STACK_LINE(58)
		::String tmp = (user + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::String tmp1 = password;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		this->credentials = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,basicAuth,(void))

Void URLRequest_obj::digestAuth( ::String user,::String password){
{
		HX_STACK_FRAME("openfl._legacy.net.URLRequest","digestAuth",0xbef19285,"openfl._legacy.net.URLRequest.digestAuth","openfl/_legacy/net/URLRequest.hx",63,0xc5bb36e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(user,"user")
		HX_STACK_ARG(password,"password")
		HX_STACK_LINE(65)
		this->authType = (int)2;
		HX_STACK_LINE(66)
		::String tmp = (user + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::String tmp1 = password;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		this->credentials = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,digestAuth,(void))

Void URLRequest_obj::__prepare( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLRequest","__prepare",0xdd9f87ce,"openfl._legacy.net.URLRequest.__prepare","openfl/_legacy/net/URLRequest.hx",71,0xc5bb36e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::String tmp = this->userAgent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(75)
			this->userAgent = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(79)
		Dynamic tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(81)
			::openfl::_legacy::utils::ByteArray tmp4 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			this->__bytes = tmp4;
		}
		else{
			HX_STACK_LINE(83)
			Dynamic tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::_legacy::utils::ByteArray >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			if ((tmp5)){
				HX_STACK_LINE(85)
				Dynamic tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(85)
				this->__bytes = tmp6;
			}
			else{
				HX_STACK_LINE(87)
				Dynamic tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::net::URLVariables >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				if ((tmp7)){
					HX_STACK_LINE(89)
					Dynamic tmp8 = this->data;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(89)
					::openfl::net::URLVariables vars = tmp8;		HX_STACK_VAR(vars,"vars");
					HX_STACK_LINE(90)
					::String tmp9 = vars->toString();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(90)
					::String str = tmp9;		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(91)
					::openfl::_legacy::utils::ByteArray tmp10 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(91)
					this->__bytes = tmp10;
					HX_STACK_LINE(92)
					::openfl::_legacy::utils::ByteArray tmp11 = this->__bytes;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					::String tmp12 = str;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					tmp11->writeUTFBytes(tmp12);
				}
				else{
					HX_STACK_LINE(94)
					Dynamic tmp8 = this->data;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(94)
					bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(94)
					if ((tmp9)){
						HX_STACK_LINE(96)
						Dynamic tmp10 = this->data;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(96)
						::String str = tmp10;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(97)
						::openfl::_legacy::utils::ByteArray tmp11 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(97)
						this->__bytes = tmp11;
						HX_STACK_LINE(98)
						::openfl::_legacy::utils::ByteArray tmp12 = this->__bytes;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(98)
						::String tmp13 = str;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(98)
						tmp12->writeUTFBytes(tmp13);
					}
					else{
						HX_STACK_LINE(100)
						Dynamic tmp10 = this->data;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(100)
						bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::Dynamic >());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(100)
						if ((tmp11)){
							HX_STACK_LINE(102)
							::openfl::net::URLVariables tmp12 = ::openfl::net::URLVariables_obj::__new(null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(102)
							::openfl::net::URLVariables vars = tmp12;		HX_STACK_VAR(vars,"vars");
							HX_STACK_LINE(104)
							{
								HX_STACK_LINE(104)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(104)
								Dynamic tmp13 = this->data;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(104)
								Array< ::String > _g1 = ::Reflect_obj::fields(tmp13);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(104)
								while((true)){
									HX_STACK_LINE(104)
									bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(104)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(104)
									if ((tmp15)){
										HX_STACK_LINE(104)
										break;
									}
									HX_STACK_LINE(104)
									::String tmp16 = _g1->__get(_g);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(104)
									::String i = tmp16;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(104)
									++(_g);
									HX_STACK_LINE(106)
									::openfl::net::URLVariables tmp17 = vars;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(106)
									::String tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(106)
									Dynamic tmp19 = this->data;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(106)
									::String tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(106)
									Dynamic tmp21 = ::Reflect_obj::field(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(106)
									::Reflect_obj::setField(tmp17,tmp18,tmp21);
								}
							}
							HX_STACK_LINE(110)
							::String tmp13 = vars->toString();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(110)
							::String str = tmp13;		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(111)
							::openfl::_legacy::utils::ByteArray tmp14 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(111)
							this->__bytes = tmp14;
							HX_STACK_LINE(112)
							::openfl::_legacy::utils::ByteArray tmp15 = this->__bytes;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(112)
							::String tmp16 = str;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(112)
							tmp15->writeUTFBytes(tmp16);
						}
						else{
							HX_STACK_LINE(116)
							HX_STACK_DO_THROW(HX_HCSTRING("Unknown data type","\x3a","\x04","\x3d","\xa1"));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,__prepare,(void))

int URLRequest_obj::AUTH_BASIC;

int URLRequest_obj::AUTH_DIGEST;

int URLRequest_obj::AUTH_GSSNEGOTIATE;

int URLRequest_obj::AUTH_NTLM;

int URLRequest_obj::AUTH_DIGEST_IE;

int URLRequest_obj::AUTH_DIGEST_ANY;


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(authType,"authType");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(cookieString,"cookieString");
	HX_MARK_MEMBER_NAME(credentials,"credentials");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(followRedirects,"followRedirects");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(__bytes,"__bytes");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(authType,"authType");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(cookieString,"cookieString");
	HX_VISIT_MEMBER_NAME(credentials,"credentials");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(followRedirects,"followRedirects");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(__bytes,"__bytes");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return verbose; }
		if (HX_FIELD_EQ(inName,"__bytes") ) { return __bytes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"authType") ) { return authType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return userAgent; }
		if (HX_FIELD_EQ(inName,"basicAuth") ) { return basicAuth_dyn(); }
		if (HX_FIELD_EQ(inName,"__prepare") ) { return __prepare_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"digestAuth") ) { return digestAuth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		if (HX_FIELD_EQ(inName,"credentials") ) { return credentials; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { return cookieString; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return requestHeaders; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { return followRedirects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bytes") ) { __bytes=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"authType") ) { authType=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"credentials") ) { credentials=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { cookieString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { followRedirects=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("authType","\x42","\xd2","\x60","\x28"));
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("cookieString","\x95","\x08","\x16","\xfc"));
	outFields->push(HX_HCSTRING("credentials","\xbc","\x12","\x86","\x7b"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"));
	outFields->push(HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"));
	outFields->push(HX_HCSTRING("__bytes","\x4b","\x61","\xf6","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLRequest_obj,authType),HX_HCSTRING("authType","\x42","\xd2","\x60","\x28")},
	{hx::fsString,(int)offsetof(URLRequest_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsString,(int)offsetof(URLRequest_obj,cookieString),HX_HCSTRING("cookieString","\x95","\x08","\x16","\xfc")},
	{hx::fsString,(int)offsetof(URLRequest_obj,credentials),HX_HCSTRING("credentials","\xbc","\x12","\x86","\x7b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsBool,(int)offsetof(URLRequest_obj,followRedirects),HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75")},
	{hx::fsString,(int)offsetof(URLRequest_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(URLRequest_obj,requestHeaders),HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8")},
	{hx::fsBool,(int)offsetof(URLRequest_obj,verbose),HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(URLRequest_obj,__bytes),HX_HCSTRING("__bytes","\x4b","\x61","\xf6","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_BASIC,HX_HCSTRING("AUTH_BASIC","\x37","\xcf","\x36","\x7b")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_DIGEST,HX_HCSTRING("AUTH_DIGEST","\x7b","\x53","\xb8","\xb4")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_GSSNEGOTIATE,HX_HCSTRING("AUTH_GSSNEGOTIATE","\x0e","\x90","\xe4","\xa1")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_NTLM,HX_HCSTRING("AUTH_NTLM","\xbe","\x3f","\xa8","\xe2")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_DIGEST_IE,HX_HCSTRING("AUTH_DIGEST_IE","\x60","\x21","\x93","\x3c")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_DIGEST_ANY,HX_HCSTRING("AUTH_DIGEST_ANY","\xc8","\x08","\x24","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("authType","\x42","\xd2","\x60","\x28"),
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("cookieString","\x95","\x08","\x16","\xfc"),
	HX_HCSTRING("credentials","\xbc","\x12","\x86","\x7b"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("__bytes","\x4b","\x61","\xf6","\x27"),
	HX_HCSTRING("basicAuth","\x36","\x25","\x20","\x42"),
	HX_HCSTRING("digestAuth","\xcc","\x7d","\x34","\xfe"),
	HX_HCSTRING("__prepare","\x67","\xe2","\x2b","\xb9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_BASIC,"AUTH_BASIC");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST,"AUTH_DIGEST");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_GSSNEGOTIATE,"AUTH_GSSNEGOTIATE");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_NTLM,"AUTH_NTLM");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_IE,"AUTH_DIGEST_IE");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_ANY,"AUTH_DIGEST_ANY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_BASIC,"AUTH_BASIC");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST,"AUTH_DIGEST");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_GSSNEGOTIATE,"AUTH_GSSNEGOTIATE");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_NTLM,"AUTH_NTLM");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_IE,"AUTH_DIGEST_IE");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_ANY,"AUTH_DIGEST_ANY");
};

#endif

hx::Class URLRequest_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("AUTH_BASIC","\x37","\xcf","\x36","\x7b"),
	HX_HCSTRING("AUTH_DIGEST","\x7b","\x53","\xb8","\xb4"),
	HX_HCSTRING("AUTH_GSSNEGOTIATE","\x0e","\x90","\xe4","\xa1"),
	HX_HCSTRING("AUTH_NTLM","\xbe","\x3f","\xa8","\xe2"),
	HX_HCSTRING("AUTH_DIGEST_IE","\x60","\x21","\x93","\x3c"),
	HX_HCSTRING("AUTH_DIGEST_ANY","\xc8","\x08","\x24","\xc4"),
	::String(null()) };

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.net.URLRequest","\x15","\x8f","\x6a","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLRequest_obj >;
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

void URLRequest_obj::__boot()
{
	AUTH_BASIC= (int)1;
	AUTH_DIGEST= (int)2;
	AUTH_GSSNEGOTIATE= (int)4;
	AUTH_NTLM= (int)8;
	AUTH_DIGEST_IE= (int)16;
	AUTH_DIGEST_ANY= (int)15;
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
