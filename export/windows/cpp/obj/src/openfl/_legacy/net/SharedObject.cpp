#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_filesystem_File
#include <openfl/_legacy/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_SharedObject
#include <openfl/_legacy/net/SharedObject.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{

Void SharedObject_obj::__construct(::String name,::String localPath,Dynamic data)
{
HX_STACK_FRAME("openfl._legacy.net.SharedObject","new",0xdcdfaf6b,"openfl._legacy.net.SharedObject.new","openfl/_legacy/net/SharedObject.hx",27,0xecec0fc2)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(localPath,"localPath")
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(29)
	super::__construct(null());
	HX_STACK_LINE(31)
	this->name = name;
	HX_STACK_LINE(32)
	this->localPath = localPath;
	HX_STACK_LINE(33)
	this->data = data;
}
;
	return null();
}

//SharedObject_obj::~SharedObject_obj() { }

Dynamic SharedObject_obj::__CreateEmpty() { return  new SharedObject_obj; }
hx::ObjectPtr< SharedObject_obj > SharedObject_obj::__new(::String name,::String localPath,Dynamic data)
{  hx::ObjectPtr< SharedObject_obj > _result_ = new SharedObject_obj();
	_result_->__construct(name,localPath,data);
	return _result_;}

Dynamic SharedObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SharedObject_obj > _result_ = new SharedObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void SharedObject_obj::clear( ){
{
		HX_STACK_FRAME("openfl._legacy.net.SharedObject","clear",0x46e56958,"openfl._legacy.net.SharedObject.clear","openfl/_legacy/net/SharedObject.hx",38,0xecec0fc2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::String tmp1 = this->localPath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		::String tmp2 = ::openfl::_legacy::net::SharedObject_obj::getFilePath(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		::String filePath = tmp2;		HX_STACK_VAR(filePath,"filePath");
		HX_STACK_LINE(48)
		::String tmp3 = filePath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		bool tmp4 = ::sys::FileSystem_obj::exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		if ((tmp4)){
			HX_STACK_LINE(50)
			::String tmp5 = filePath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			::sys::FileSystem_obj::deleteFile(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,clear,(void))

Void SharedObject_obj::close( ){
{
		HX_STACK_FRAME("openfl._legacy.net.SharedObject","close",0x46ed0f83,"openfl._legacy.net.SharedObject.close","openfl/_legacy/net/SharedObject.hx",59,0xecec0fc2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,close,(void))

Dynamic SharedObject_obj::flush( hx::Null< int >  __o_minDiskSpace){
int minDiskSpace = __o_minDiskSpace.Default(0);
	HX_STACK_FRAME("openfl._legacy.net.SharedObject","flush",0x01255a8f,"openfl._legacy.net.SharedObject.flush","openfl/_legacy/net/SharedObject.hx",123,0xecec0fc2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(minDiskSpace,"minDiskSpace")
{
		HX_STACK_LINE(125)
		Dynamic tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		::String tmp1 = ::haxe::Serializer_obj::run(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		::String encodedData = tmp1;		HX_STACK_VAR(encodedData,"encodedData");
		HX_STACK_LINE(133)
		::String tmp2 = this->name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::String tmp3 = this->localPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		::String tmp4 = ::openfl::_legacy::net::SharedObject_obj::getFilePath(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		::String filePath = tmp4;		HX_STACK_VAR(filePath,"filePath");
		HX_STACK_LINE(134)
		::String tmp5 = filePath;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		::String tmp6 = ::haxe::io::Path_obj::directory(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		::String folderPath = tmp6;		HX_STACK_VAR(folderPath,"folderPath");
		HX_STACK_LINE(136)
		::String tmp7 = folderPath;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(136)
		bool tmp8 = ::sys::FileSystem_obj::exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(136)
		if ((tmp9)){
			HX_STACK_LINE(138)
			::String tmp10 = folderPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(138)
			::openfl::_legacy::net::SharedObject_obj::mkdir(tmp10);
		}
		HX_STACK_LINE(142)
		::String tmp10 = filePath;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		::sys::io::FileOutput tmp11 = ::sys::io::File_obj::write(tmp10,false);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(142)
		::sys::io::FileOutput output = tmp11;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(143)
		::String tmp12 = encodedData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(143)
		output->writeString(tmp12);
		HX_STACK_LINE(144)
		output->close();
		HX_STACK_LINE(148)
		return ((Dynamic)((int)0));
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,flush,return )

Void SharedObject_obj::setProperty( ::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("openfl._legacy.net.SharedObject","setProperty",0x16fb7422,"openfl._legacy.net.SharedObject.setProperty","openfl/_legacy/net/SharedObject.hx",252,0xecec0fc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(254)
		Dynamic tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		if ((tmp1)){
			HX_STACK_LINE(256)
			Dynamic tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			::String tmp3 = propertyName;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			::Reflect_obj::setField(tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,setProperty,(void))

int SharedObject_obj::get_size( ){
	HX_STACK_FRAME("openfl._legacy.net.SharedObject","get_size",0x9307155f,"openfl._legacy.net.SharedObject.get_size","openfl/_legacy/net/SharedObject.hx",272,0xecec0fc2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,get_size,return )

Void SharedObject_obj::mkdir( ::String directory){
{
		HX_STACK_FRAME("openfl._legacy.net.SharedObject","mkdir",0x083d447a,"openfl._legacy.net.SharedObject.mkdir","openfl/_legacy/net/SharedObject.hx",68,0xecec0fc2)
		HX_STACK_ARG(directory,"directory")
		HX_STACK_LINE(70)
		::String tmp = directory;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		directory = tmp1;
		HX_STACK_LINE(71)
		::String total = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(73)
		::String tmp2 = directory.substr((int)0,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		bool tmp3 = (tmp2 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		if ((tmp3)){
			HX_STACK_LINE(75)
			total = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		HX_STACK_LINE(79)
		Array< ::String > parts = directory.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(80)
		::String oldPath = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(oldPath,"oldPath");
		HX_STACK_LINE(82)
		bool tmp4 = (parts->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		if ((tmp4)){
			HX_STACK_LINE(82)
			::String tmp6 = parts->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			int tmp8 = tmp7.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			tmp5 = (tmp9 > (int)-1);
		}
		else{
			HX_STACK_LINE(82)
			tmp5 = false;
		}
		HX_STACK_LINE(82)
		if ((tmp5)){
			HX_STACK_LINE(84)
			::String tmp6 = ::Sys_obj::getCwd();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			oldPath = tmp6;
			HX_STACK_LINE(85)
			::String tmp7 = parts->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			::String tmp8 = (tmp7 + HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			::Sys_obj::setCwd(tmp8);
			HX_STACK_LINE(86)
			parts->shift();
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				bool tmp6 = (_g < parts->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(90)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(90)
				if ((tmp7)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				::String tmp8 = parts->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(90)
				::String part = tmp8;		HX_STACK_VAR(part,"part");
				HX_STACK_LINE(90)
				++(_g);
				HX_STACK_LINE(92)
				bool tmp9 = (part != HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(92)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(92)
				if ((tmp9)){
					HX_STACK_LINE(92)
					tmp10 = (part != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(92)
					tmp10 = false;
				}
				HX_STACK_LINE(92)
				if ((tmp10)){
					HX_STACK_LINE(94)
					bool tmp11 = (total != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(94)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(94)
					if ((tmp11)){
						HX_STACK_LINE(94)
						tmp12 = (total != HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(94)
						tmp12 = false;
					}
					HX_STACK_LINE(94)
					if ((tmp12)){
						HX_STACK_LINE(96)
						hx::AddEq(total,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(100)
					hx::AddEq(total,part);
					HX_STACK_LINE(102)
					::String tmp13 = total;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(102)
					bool tmp14 = ::sys::FileSystem_obj::exists(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(102)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(102)
					if ((tmp15)){
						HX_STACK_LINE(104)
						::String tmp16 = total;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(104)
						::sys::FileSystem_obj::createDirectory(tmp16);
					}
				}
			}
		}
		HX_STACK_LINE(112)
		bool tmp6 = (oldPath != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		if ((tmp6)){
			HX_STACK_LINE(114)
			::String tmp7 = oldPath;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			::Sys_obj::setCwd(tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,mkdir,(void))

::String SharedObject_obj::getFilePath( ::String name,::String localPath){
	HX_STACK_FRAME("openfl._legacy.net.SharedObject","getFilePath",0xc3ebf302,"openfl._legacy.net.SharedObject.getFilePath","openfl/_legacy/net/SharedObject.hx",153,0xecec0fc2)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(localPath,"localPath")
	HX_STACK_LINE(155)
	::openfl::_legacy::filesystem::File tmp = ::openfl::_legacy::filesystem::File_obj::get_applicationStorageDirectory();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	::String path = tmp->nativePath;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(156)
	::String tmp1 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + localPath);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::String tmp2 = (tmp1 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	::String tmp5 = (tmp4 + HX_HCSTRING(".sol","\xe2","\x74","\xbf","\x1e"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(156)
	hx::AddEq(path,tmp5);
	HX_STACK_LINE(157)
	::String tmp6 = path;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,getFilePath,return )

::openfl::_legacy::net::SharedObject SharedObject_obj::getLocal( ::String name,::String localPath,hx::Null< bool >  __o_secure){
bool secure = __o_secure.Default(false);
	HX_STACK_FRAME("openfl._legacy.net.SharedObject","getLocal",0x9fc0920a,"openfl._legacy.net.SharedObject.getLocal","openfl/_legacy/net/SharedObject.hx",162,0xecec0fc2)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(localPath,"localPath")
	HX_STACK_ARG(secure,"secure")
{
		HX_STACK_LINE(164)
		bool tmp = (localPath == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		if ((tmp)){
			HX_STACK_LINE(166)
			localPath = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(176)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		::String tmp2 = localPath;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		::String tmp3 = ::openfl::_legacy::net::SharedObject_obj::getFilePath(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		::String filePath = tmp3;		HX_STACK_VAR(filePath,"filePath");
		HX_STACK_LINE(177)
		::String rawData = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(rawData,"rawData");
		HX_STACK_LINE(179)
		::String tmp4 = filePath;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		bool tmp5 = ::sys::FileSystem_obj::exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		if ((tmp5)){
			HX_STACK_LINE(181)
			::String tmp6 = filePath;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			::String tmp7 = ::sys::io::File_obj::getContent(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			rawData = tmp7;
		}
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/net/SharedObject.hx",187,0xecec0fc2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(187)
		Dynamic tmp6 = _Function_1_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		Dynamic loadedData = tmp6;		HX_STACK_VAR(loadedData,"loadedData");
		HX_STACK_LINE(189)
		bool tmp7 = (rawData != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		if ((tmp7)){
			HX_STACK_LINE(189)
			tmp8 = (rawData != null());
		}
		else{
			HX_STACK_LINE(189)
			tmp8 = false;
		}
		HX_STACK_LINE(189)
		if ((tmp8)){
			HX_STACK_LINE(191)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(193)
				::haxe::Unserializer tmp9 = ::haxe::Unserializer_obj::__new(rawData);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(193)
				::haxe::Unserializer unserializer = tmp9;		HX_STACK_VAR(unserializer,"unserializer");
				HX_STACK_LINE(194)
				Dynamic tmp10 = ::Type_obj::resolveEnum_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(194)
				Dynamic tmp11 = ::openfl::_legacy::net::SharedObject_obj::resolveClass_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &tmp11,Dynamic &tmp10){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/net/SharedObject.hx",194,0xecec0fc2)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde") , tmp10,false);
							__result->Add(HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80") , tmp11,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(194)
				Dynamic tmp12 = _Function_3_1::Block(tmp11,tmp10);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(194)
				unserializer->setResolver(tmp13);
				HX_STACK_LINE(195)
				Dynamic tmp14 = unserializer->unserialize();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(195)
				loadedData = tmp14;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(199)
						::String tmp9 = (HX_HCSTRING("Could not unserialize SharedObject: ","\xef","\xee","\xc6","\xae") + name);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(199)
						Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("SharedObject.hx","\xda","\x51","\x3d","\xf3"),199,HX_HCSTRING("openfl._legacy.net.SharedObject","\xf9","\x1d","\x0b","\xdf"),HX_HCSTRING("getLocal","\xf5","\xd8","\xc7","\xd8"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(199)
						::haxe::Log_obj::trace(tmp9,tmp10);
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/net/SharedObject.hx",200,0xecec0fc2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(200)
						Dynamic tmp11 = _Function_3_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(200)
						loadedData = tmp11;
					}
				}
			}
		}
		HX_STACK_LINE(206)
		::openfl::_legacy::net::SharedObject tmp9 = ::openfl::_legacy::net::SharedObject_obj::__new(name,localPath,loadedData);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(206)
		::openfl::_legacy::net::SharedObject so = tmp9;		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(207)
		::openfl::_legacy::net::SharedObject tmp10 = so;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SharedObject_obj,getLocal,return )

::hx::Class SharedObject_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl._legacy.net.SharedObject","resolveClass",0x5c912541,"openfl._legacy.net.SharedObject.resolveClass","openfl/_legacy/net/SharedObject.hx",212,0xecec0fc2)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(214)
	bool tmp = (name != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	if ((tmp)){
		HX_STACK_LINE(216)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		bool tmp2 = ::StringTools_obj::startsWith(tmp1,HX_HCSTRING("neash.","\xef","\x97","\x2f","\x63"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		if ((tmp2)){
			HX_STACK_LINE(218)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			::String tmp4 = ::StringTools_obj::replace(tmp3,HX_HCSTRING("neash.","\xef","\x97","\x2f","\x63"),HX_HCSTRING("openfl.","\x9e","\xba","\x42","\x40"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			name = tmp4;
		}
		HX_STACK_LINE(222)
		::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		bool tmp4 = ::StringTools_obj::startsWith(tmp3,HX_HCSTRING("native.","\xb7","\x9a","\x13","\xb7"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		if ((tmp4)){
			HX_STACK_LINE(224)
			::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			::String tmp6 = ::StringTools_obj::replace(tmp5,HX_HCSTRING("native.","\xb7","\x9a","\x13","\xb7"),HX_HCSTRING("openfl.","\x9e","\xba","\x42","\x40"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			name = tmp6;
		}
		HX_STACK_LINE(228)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		bool tmp6 = ::StringTools_obj::startsWith(tmp5,HX_HCSTRING("flash.","\x7e","\xc4","\x22","\x38"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		if ((tmp6)){
			HX_STACK_LINE(230)
			::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			::String tmp8 = ::StringTools_obj::replace(tmp7,HX_HCSTRING("flash.","\x7e","\xc4","\x22","\x38"),HX_HCSTRING("openfl.","\x9e","\xba","\x42","\x40"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(230)
			name = tmp8;
		}
		HX_STACK_LINE(234)
		::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		bool tmp8 = ::StringTools_obj::startsWith(tmp7,HX_HCSTRING("openfl._v2.","\x51","\x5c","\x9c","\x49"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		if ((tmp8)){
			HX_STACK_LINE(236)
			::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(236)
			::String tmp10 = ::StringTools_obj::replace(tmp9,HX_HCSTRING("openfl._v2.","\x51","\x5c","\x9c","\x49"),HX_HCSTRING("openfl._legacy.","\xe4","\x67","\x0c","\x9f"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(236)
			name = tmp10;
		}
		HX_STACK_LINE(240)
		::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(240)
		::hx::Class tmp10 = ::Type_obj::resolveClass(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(240)
		::hx::Class value = tmp10;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(241)
		bool tmp11 = (value == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(241)
		if ((tmp11)){
			HX_STACK_LINE(241)
			::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(241)
			::String tmp13 = ::StringTools_obj::replace(tmp12,HX_HCSTRING("openfl.","\x9e","\xba","\x42","\x40"),HX_HCSTRING("openfl._legacy.","\xe4","\x67","\x0c","\x9f"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(241)
			::hx::Class tmp14 = ::Type_obj::resolveClass(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			value = tmp14;
		}
		HX_STACK_LINE(243)
		::hx::Class tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(243)
		return tmp12;
	}
	HX_STACK_LINE(247)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,resolveClass,return )


SharedObject_obj::SharedObject_obj()
{
}

void SharedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedObject);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(localPath,"localPath");
	HX_MARK_MEMBER_NAME(name,"name");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SharedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(localPath,"localPath");
	HX_VISIT_MEMBER_NAME(name,"name");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SharedObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp == hx::paccAlways ? get_size() : size; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { return localPath; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SharedObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mkdir") ) { outValue = mkdir_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLocal") ) { outValue = getLocal_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFilePath") ) { outValue = getFilePath_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
	}
	return false;
}

Dynamic SharedObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { localPath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SharedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("localPath","\xb0","\x6c","\x94","\x0c"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SharedObject_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(SharedObject_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsString,(int)offsetof(SharedObject_obj,localPath),HX_HCSTRING("localPath","\xb0","\x6c","\x94","\x0c")},
	{hx::fsString,(int)offsetof(SharedObject_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("localPath","\xb0","\x6c","\x94","\x0c"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
};

#endif

hx::Class SharedObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("mkdir","\xaf","\x4c","\xb3","\x09"),
	HX_HCSTRING("getFilePath","\xf7","\x90","\x89","\x89"),
	HX_HCSTRING("getLocal","\xf5","\xd8","\xc7","\xd8"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	::String(null()) };

void SharedObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.net.SharedObject","\xf9","\x1d","\x0b","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SharedObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SharedObject_obj >;
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
} // end namespace net
