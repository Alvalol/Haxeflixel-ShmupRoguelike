#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
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
namespace openfl{
namespace _legacy{
namespace text{

Void Font_obj::__construct(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{
HX_STACK_FRAME("openfl._legacy.text.Font","new",0x95905bde,"openfl._legacy.text.Font.new","openfl/_legacy/text/Font.hx",34,0x48d29f73)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_filename,"filename")
HX_STACK_ARG(style,"style")
HX_STACK_ARG(type,"type")
::String filename = __o_filename.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(36)
	bool tmp = (filename == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	if ((tmp)){
		HX_STACK_LINE(38)
		::hx::Class tmp1 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::hx::Class fontClass = tmp1;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(40)
		::hx::Class tmp2 = fontClass;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = ::Reflect_obj::hasField(tmp2,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		if ((tmp3)){
			HX_STACK_LINE(42)
			::hx::Class tmp4 = fontClass;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			::haxe::io::Bytes tmp6 = ::haxe::Resource_obj::getBytes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			::openfl::_legacy::utils::ByteArray tmp7 = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			this->__fromBytes(tmp7);
		}
		else{
		}
	}
	else{
		HX_STACK_LINE(55)
		this->__fontPath = filename;
		HX_STACK_LINE(56)
		this->fontName = filename;
		HX_STACK_LINE(57)
		bool tmp1 = (style == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		::openfl::_legacy::text::FontStyle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(57)
			tmp2 = ::openfl::_legacy::text::FontStyle_obj::REGULAR;
		}
		else{
			HX_STACK_LINE(57)
			tmp2 = style;
		}
		HX_STACK_LINE(57)
		this->fontStyle = tmp2;
		HX_STACK_LINE(58)
		bool tmp3 = (type == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::openfl::_legacy::text::FontType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		if ((tmp3)){
			HX_STACK_LINE(58)
			tmp4 = ::openfl::_legacy::text::FontType_obj::EMBEDDED;
		}
		else{
			HX_STACK_LINE(58)
			tmp4 = type;
		}
		HX_STACK_LINE(58)
		this->fontType = tmp4;
	}
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(__o_filename,style,type);
	return _result_;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String Font_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.text.Font","toString",0x25d1dc6e,"openfl._legacy.text.Font.toString","openfl/_legacy/text/Font.hx",141,0x48d29f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	::String tmp = this->fontName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	::String tmp1 = (HX_HCSTRING("{ name=","\x2d","\x2a","\xc0","\x5c") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	::String tmp2 = (tmp1 + HX_HCSTRING(", style=","\x60","\x5b","\x2d","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	::openfl::_legacy::text::FontStyle tmp3 = this->fontStyle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	::String tmp6 = (tmp5 + HX_HCSTRING(", type=","\x4f","\x65","\xe7","\x0b"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(143)
	::openfl::_legacy::text::FontType tmp7 = this->fontType;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(143)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(143)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(143)
	::String tmp10 = (tmp9 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(143)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,toString,return )

Void Font_obj::__fromBytes( ::openfl::_legacy::utils::ByteArray bytes){
{
		HX_STACK_FRAME("openfl._legacy.text.Font","__fromBytes",0xb85e74ff,"openfl._legacy.text.Font.__fromBytes","openfl/_legacy/text/Font.hx",148,0x48d29f73)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(150)
		::openfl::_legacy::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		Dynamic tmp1 = ::openfl::_legacy::text::Font_obj::loadBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		Dynamic details = tmp1;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(151)
		this->fontName = details->__Field(HX_HCSTRING("family_name","\x06","\xfc","\x9d","\x63"), hx::paccDynamic );
		HX_STACK_LINE(153)
		bool tmp2 = details->__Field(HX_HCSTRING("is_bold","\x3a","\xd1","\x84","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		if ((tmp2)){
			HX_STACK_LINE(153)
			tmp3 = details->__Field(HX_HCSTRING("is_italic","\xe5","\x95","\x88","\xab"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(153)
			tmp3 = false;
		}
		HX_STACK_LINE(153)
		if ((tmp3)){
			HX_STACK_LINE(155)
			this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD_ITALIC;
		}
		else{
			HX_STACK_LINE(157)
			bool tmp4 = details->__Field(HX_HCSTRING("is_bold","\x3a","\xd1","\x84","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			if ((tmp4)){
				HX_STACK_LINE(159)
				this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD;
			}
			else{
				HX_STACK_LINE(161)
				bool tmp5 = details->__Field(HX_HCSTRING("is_italic","\xe5","\x95","\x88","\xab"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(161)
				if ((tmp5)){
					HX_STACK_LINE(163)
					this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::ITALIC;
				}
				else{
					HX_STACK_LINE(167)
					this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::REGULAR;
				}
			}
		}
		HX_STACK_LINE(171)
		this->fontType = ::openfl::_legacy::text::FontType_obj::EMBEDDED;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromBytes,(void))

Void Font_obj::__fromFile( ::String path){
{
		HX_STACK_FRAME("openfl._legacy.text.Font","__fromFile",0x99cf1068,"openfl._legacy.text.Font.__fromFile","openfl/_legacy/text/Font.hx",176,0x48d29f73)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(178)
		this->__fontPath = path;
		HX_STACK_LINE(180)
		::String tmp = this->__fontPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(182)
			::String tmp2 = this->__fontPath;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			Dynamic tmp3 = ::openfl::_legacy::text::Font_obj::load(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			Dynamic details = tmp3;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(183)
			this->fontName = details->__Field(HX_HCSTRING("family_name","\x06","\xfc","\x9d","\x63"), hx::paccDynamic );
			HX_STACK_LINE(185)
			bool tmp4 = details->__Field(HX_HCSTRING("is_bold","\x3a","\xd1","\x84","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			if ((tmp4)){
				HX_STACK_LINE(185)
				tmp5 = details->__Field(HX_HCSTRING("is_italic","\xe5","\x95","\x88","\xab"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(185)
				tmp5 = false;
			}
			HX_STACK_LINE(185)
			if ((tmp5)){
				HX_STACK_LINE(187)
				this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD_ITALIC;
			}
			else{
				HX_STACK_LINE(189)
				bool tmp6 = details->__Field(HX_HCSTRING("is_bold","\x3a","\xd1","\x84","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				if ((tmp6)){
					HX_STACK_LINE(191)
					this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp7 = details->__Field(HX_HCSTRING("is_italic","\xe5","\x95","\x88","\xab"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(193)
					if ((tmp7)){
						HX_STACK_LINE(195)
						this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::ITALIC;
					}
					else{
						HX_STACK_LINE(199)
						this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::REGULAR;
					}
				}
			}
			HX_STACK_LINE(203)
			this->fontType = ::openfl::_legacy::text::FontType_obj::EMBEDDED;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromFile,(void))

Array< ::Dynamic > Font_obj::__registeredFonts;

Array< ::Dynamic > Font_obj::__deviceFonts;

Array< ::Dynamic > Font_obj::enumerateFonts( hx::Null< bool >  __o_enumerateDeviceFonts){
bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
	HX_STACK_FRAME("openfl._legacy.text.Font","enumerateFonts",0x85cd9342,"openfl._legacy.text.Font.enumerateFonts","openfl/_legacy/text/Font.hx",65,0x48d29f73)
	HX_STACK_ARG(enumerateDeviceFonts,"enumerateDeviceFonts")
{
		HX_STACK_LINE(67)
		Array< ::Dynamic > result = ::openfl::_legacy::text::Font_obj::__registeredFonts->copy();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(69)
		bool tmp = enumerateDeviceFonts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		if ((tmp)){
			HX_STACK_LINE(71)
			bool tmp1 = (::openfl::_legacy::text::Font_obj::__deviceFonts == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			if ((tmp1)){
				HX_STACK_LINE(73)
				::openfl::_legacy::text::Font_obj::__deviceFonts = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(74)
				Array< ::Dynamic > styles = Array_obj< ::Dynamic >::__new().Add(::openfl::_legacy::text::FontStyle_obj::BOLD).Add(::openfl::_legacy::text::FontStyle_obj::BOLD_ITALIC).Add(::openfl::_legacy::text::FontStyle_obj::ITALIC).Add(::openfl::_legacy::text::FontStyle_obj::REGULAR);		HX_STACK_VAR(styles,"styles");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,styles)
				int __ArgCount() const { return 2; }
				Void run(::String name,int style){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/_legacy/text/Font.hx",75,0x48d29f73)
					HX_STACK_ARG(name,"name")
					HX_STACK_ARG(style,"style")
					{
						HX_STACK_LINE(75)
						::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(75)
						::openfl::_legacy::text::FontStyle tmp3 = styles->__get(style).StaticCast< ::openfl::_legacy::text::FontStyle >();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(75)
						::openfl::_legacy::text::Font tmp4 = ::openfl::_legacy::text::Font_obj::__new(tmp2,tmp3,::openfl::_legacy::text::FontType_obj::DEVICE);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(75)
						::openfl::_legacy::text::Font_obj::__deviceFonts->push(tmp4);
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				HX_STACK_LINE(75)
				::openfl::_legacy::text::Font_obj::lime_font_iterate_device_fonts( Dynamic(new _Function_3_1(styles)));
			}
			HX_STACK_LINE(79)
			result = result->concat(::openfl::_legacy::text::Font_obj::__deviceFonts);
		}
		HX_STACK_LINE(83)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

::openfl::_legacy::text::Font Font_obj::fromBytes( ::openfl::_legacy::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl._legacy.text.Font","fromBytes",0x3b68309f,"openfl._legacy.text.Font.fromBytes","openfl/_legacy/text/Font.hx",88,0x48d29f73)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(90)
	::openfl::_legacy::text::Font tmp = ::openfl::_legacy::text::Font_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	::openfl::_legacy::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(91)
	::openfl::_legacy::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	font->__fromBytes(tmp1);
	HX_STACK_LINE(92)
	::openfl::_legacy::text::Font tmp2 = font;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::openfl::_legacy::text::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl._legacy.text.Font","fromFile",0x8eeaa8c8,"openfl._legacy.text.Font.fromFile","openfl/_legacy/text/Font.hx",97,0x48d29f73)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(99)
	::openfl::_legacy::text::Font tmp = ::openfl::_legacy::text::Font_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::openfl::_legacy::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(100)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	font->__fromFile(tmp1);
	HX_STACK_LINE(101)
	::openfl::_legacy::text::Font tmp2 = font;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

Dynamic Font_obj::load( ::String filename){
	HX_STACK_FRAME("openfl._legacy.text.Font","load",0x47751ce8,"openfl._legacy.text.Font.load","openfl/_legacy/text/Font.hx",106,0x48d29f73)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(108)
	::String tmp = filename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	int tmp1 = (int)20480;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	Dynamic tmp2 = ::openfl::_legacy::text::Font_obj::freetype_import_font(tmp,null(),tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	Dynamic result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(109)
	Dynamic tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,load,return )

Dynamic Font_obj::loadBytes( ::openfl::_legacy::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl._legacy.text.Font","loadBytes",0xa2169263,"openfl._legacy.text.Font.loadBytes","openfl/_legacy/text/Font.hx",114,0x48d29f73)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(116)
	int tmp = (int)20480;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	::openfl::_legacy::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	Dynamic tmp2 = ::openfl::_legacy::text::Font_obj::freetype_import_font(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	Dynamic result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(117)
	Dynamic tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(117)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadBytes,return )

Void Font_obj::registerFont( ::hx::Class font){
{
		HX_STACK_FRAME("openfl._legacy.text.Font","registerFont",0xb6b0b294,"openfl._legacy.text.Font.registerFont","openfl/_legacy/text/Font.hx",122,0x48d29f73)
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(124)
		::hx::Class tmp = font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		::openfl::_legacy::text::Font tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		::openfl::_legacy::text::Font instance = tmp1;		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(126)
		bool tmp2 = (instance != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		if ((tmp2)){
			HX_STACK_LINE(128)
			::hx::Class tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			if ((tmp4)){
				HX_STACK_LINE(130)
				::String tmp5 = instance->fontName;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				::hx::Class tmp6 = font;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(130)
				Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(130)
				::haxe::io::Bytes tmp8 = ::haxe::Resource_obj::getBytes(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(130)
				::openfl::_legacy::utils::ByteArray tmp9 = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(130)
				::openfl::_legacy::text::Font_obj::lime_font_register_font(tmp5,tmp9);
			}
			HX_STACK_LINE(134)
			::openfl::_legacy::text::Font tmp5 = instance;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			::openfl::_legacy::text::Font_obj::__registeredFonts->push(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))

Dynamic Font_obj::freetype_import_font;

Dynamic Font_obj::lime_font_register_font;

Dynamic Font_obj::lime_font_iterate_device_fonts;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	HX_MARK_MEMBER_NAME(__fontPath,"__fontPath");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
	HX_VISIT_MEMBER_NAME(__fontPath,"__fontPath");
}

Dynamic Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName; }
		if (HX_FIELD_EQ(inName,"fontType") ) { return fontType; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return __fontPath; }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerFont") ) { outValue = registerFont_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceFonts") ) { outValue = __deviceFonts; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { outValue = enumerateFonts_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { outValue = __registeredFonts; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { outValue = freetype_import_font; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_register_font") ) { outValue = lime_font_register_font; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_font_iterate_device_fonts") ) { outValue = lime_font_iterate_device_fonts; return true;  }
	}
	return false;
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast< ::openfl::_legacy::text::FontType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::openfl::_legacy::text::FontStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { __fontPath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Font_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceFonts") ) { __deviceFonts=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { __registeredFonts=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { freetype_import_font=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_register_font") ) { lime_font_register_font=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_font_iterate_device_fonts") ) { lime_font_iterate_device_fonts=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"));
	outFields->push(HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"));
	outFields->push(HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Font_obj,fontName),HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb")},
	{hx::fsObject /*::openfl::_legacy::text::FontStyle*/ ,(int)offsetof(Font_obj,fontStyle),HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f")},
	{hx::fsObject /*::openfl::_legacy::text::FontType*/ ,(int)offsetof(Font_obj,fontType),HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPath),HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Font_obj::__registeredFonts,HX_HCSTRING("__registeredFonts","\xc2","\x83","\x84","\x64")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Font_obj::__deviceFonts,HX_HCSTRING("__deviceFonts","\x2e","\x2c","\x4a","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::freetype_import_font,HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_register_font,HX_HCSTRING("lime_font_register_font","\xe5","\x54","\xb1","\x50")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_iterate_device_fonts,HX_HCSTRING("lime_font_iterate_device_fonts","\x86","\x2f","\xa2","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),
	HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"),
	HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"),
	HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
	HX_MARK_MEMBER_NAME(Font_obj::__deviceFonts,"__deviceFonts");
	HX_MARK_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_register_font,"lime_font_register_font");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_iterate_device_fonts,"lime_font_iterate_device_fonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::__deviceFonts,"__deviceFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_register_font,"lime_font_register_font");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_iterate_device_fonts,"lime_font_iterate_device_fonts");
};

#endif

hx::Class Font_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__registeredFonts","\xc2","\x83","\x84","\x64"),
	HX_HCSTRING("__deviceFonts","\x2e","\x2c","\x4a","\x3c"),
	HX_HCSTRING("enumerateFonts","\x00","\x4a","\xcc","\xfc"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("registerFont","\xd2","\x9d","\xaf","\xbf"),
	HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69"),
	HX_HCSTRING("lime_font_register_font","\xe5","\x54","\xb1","\x50"),
	HX_HCSTRING("lime_font_iterate_device_fonts","\x86","\x2f","\xa2","\xcf"),
	::String(null()) };

void Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.text.Font","\xec","\xd4","\xc9","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &Font_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
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

void Font_obj::__boot()
{
	__registeredFonts= Array_obj< ::Dynamic >::__new();
	freetype_import_font= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69"),(int)4);
	lime_font_register_font= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_font_register_font","\x47","\x6d","\xd6","\xd3"),(int)2);
	lime_font_iterate_device_fonts= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_font_iterate_device_fonts","\x64","\xc7","\x1f","\xcb"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace text
