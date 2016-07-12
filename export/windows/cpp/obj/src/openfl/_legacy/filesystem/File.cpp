#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_filesystem_File
#include <openfl/_legacy/filesystem/File.h>
#endif
namespace openfl{
namespace _legacy{
namespace filesystem{

Void File_obj::__construct(::String path)
{
HX_STACK_FRAME("openfl._legacy.filesystem.File","new",0x623bfe8d,"openfl._legacy.filesystem.File.new","openfl/_legacy/filesystem/File.hx",34,0x0d6c1524)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(36)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->set_url(tmp);
	HX_STACK_LINE(37)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->set_nativePath(tmp1);
}
;
	return null();
}

//File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new(::String path)
{  hx::ObjectPtr< File_obj > _result_ = new File_obj();
	_result_->__construct(path);
	return _result_;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > _result_ = new File_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String File_obj::set_nativePath( ::String value){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","set_nativePath",0x32e83a8c,"openfl._legacy.filesystem.File.set_nativePath","openfl/_legacy/filesystem/File.hx",56,0x0d6c1524)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	this->nativePath = value;
	HX_STACK_LINE(59)
	::String tmp = this->nativePath;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_nativePath,return )

::String File_obj::set_url( ::String value){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","set_url",0xe76ecdbf,"openfl._legacy.filesystem.File.set_url","openfl/_legacy/filesystem/File.hx",64,0x0d6c1524)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	if ((tmp)){
		HX_STACK_LINE(68)
		this->url = null();
	}
	else{
		HX_STACK_LINE(72)
		::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		::String tmp2 = ::StringTools_obj::replace(tmp1,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),HX_HCSTRING("%20","\x23","\x3f","\x1c","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		this->url = tmp2;
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(82)
			::String tmp3 = this->url;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			::String tmp4 = (HX_HCSTRING("file:","\x3e","\xde","\x98","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			this->url = tmp4;
		}
	}
	HX_STACK_LINE(87)
	::String tmp1 = this->url;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_url,return )

::openfl::_legacy::filesystem::File File_obj::applicationDirectory;

::openfl::_legacy::filesystem::File File_obj::applicationStorageDirectory;

::openfl::_legacy::filesystem::File File_obj::desktopDirectory;

::openfl::_legacy::filesystem::File File_obj::documentsDirectory;

::openfl::_legacy::filesystem::File File_obj::userDirectory;

int File_obj::APP;

int File_obj::STORAGE;

int File_obj::DESKTOP;

int File_obj::DOCS;

int File_obj::USER;

::openfl::_legacy::filesystem::File File_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_applicationDirectory",0xe0457f39,"openfl._legacy.filesystem.File.get_applicationDirectory","openfl/_legacy/filesystem/File.hx",49,0x0d6c1524)
	HX_STACK_LINE(49)
	::String tmp = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::openfl::_legacy::filesystem::File tmp1 = ::openfl::_legacy::filesystem::File_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_applicationStorageDirectory",0x22a09866,"openfl._legacy.filesystem.File.get_applicationStorageDirectory","openfl/_legacy/filesystem/File.hx",50,0x0d6c1524)
	HX_STACK_LINE(50)
	::String tmp = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::openfl::_legacy::filesystem::File tmp1 = ::openfl::_legacy::filesystem::File_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationStorageDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_desktopDirectory",0xf740e52d,"openfl._legacy.filesystem.File.get_desktopDirectory","openfl/_legacy/filesystem/File.hx",51,0x0d6c1524)
	HX_STACK_LINE(51)
	::String tmp = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::openfl::_legacy::filesystem::File tmp1 = ::openfl::_legacy::filesystem::File_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_desktopDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_documentsDirectory",0x14a6a591,"openfl._legacy.filesystem.File.get_documentsDirectory","openfl/_legacy/filesystem/File.hx",52,0x0d6c1524)
	HX_STACK_LINE(52)
	::String tmp = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::openfl::_legacy::filesystem::File tmp1 = ::openfl::_legacy::filesystem::File_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_documentsDirectory,return )

::openfl::_legacy::filesystem::File File_obj::get_userDirectory( ){
	HX_STACK_FRAME("openfl._legacy.filesystem.File","get_userDirectory",0xea40ece6,"openfl._legacy.filesystem.File.get_userDirectory","openfl/_legacy/filesystem/File.hx",53,0x0d6c1524)
	HX_STACK_LINE(53)
	::String tmp = ::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::openfl::_legacy::filesystem::File tmp1 = ::openfl::_legacy::filesystem::File_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_userDirectory,return )

Dynamic File_obj::lime_filesystem_get_special_dir;


File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(nativePath,"nativePath");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nativePath,"nativePath");
	HX_VISIT_MEMBER_NAME(url,"url");
}

Dynamic File_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_url") ) { return set_url_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { return nativePath; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_nativePath") ) { return set_nativePath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_userDirectory() : userDirectory; return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_desktopDirectory() : desktopDirectory; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_documentsDirectory() : documentsDirectory; return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationDirectory() : applicationDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationStorageDirectory() : applicationStorageDirectory; return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { outValue = lime_filesystem_get_special_dir; return true;  }
	}
	return false;
}

Dynamic File_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp == hx::paccAlways) return set_url(inValue);url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp == hx::paccAlways) return set_nativePath(inValue);nativePath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool File_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=ioValue.Cast< ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=ioValue.Cast< ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=ioValue.Cast< ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=ioValue.Cast< ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=ioValue.Cast< ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { lime_filesystem_get_special_dir=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nativePath","\xdc","\xf2","\x61","\x11"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(File_obj,nativePath),HX_HCSTRING("nativePath","\xdc","\xf2","\x61","\x11")},
	{hx::fsString,(int)offsetof(File_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::applicationDirectory,HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::applicationStorageDirectory,HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::desktopDirectory,HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::documentsDirectory,HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::userDirectory,HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94")},
	{hx::fsInt,(void *) &File_obj::APP,HX_HCSTRING("APP","\x81","\x98","\x31","\x00")},
	{hx::fsInt,(void *) &File_obj::STORAGE,HX_HCSTRING("STORAGE","\x1b","\xb3","\x7c","\xc4")},
	{hx::fsInt,(void *) &File_obj::DESKTOP,HX_HCSTRING("DESKTOP","\xbc","\x99","\x68","\x9e")},
	{hx::fsInt,(void *) &File_obj::DOCS,HX_HCSTRING("DOCS","\xfb","\xae","\x2e","\x2d")},
	{hx::fsInt,(void *) &File_obj::USER,HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::lime_filesystem_get_special_dir,HX_HCSTRING("lime_filesystem_get_special_dir","\xb4","\xbf","\xa5","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nativePath","\xdc","\xf2","\x61","\x11"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("set_nativePath","\x99","\x63","\x77","\xa7"),
	HX_HCSTRING("set_url","\x12","\x85","\xcf","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(File_obj::APP,"APP");
	HX_MARK_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_MARK_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_MARK_MEMBER_NAME(File_obj::USER,"USER");
	HX_MARK_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::APP,"APP");
	HX_VISIT_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_VISIT_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_VISIT_MEMBER_NAME(File_obj::USER,"USER");
	HX_VISIT_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#endif

hx::Class File_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25"),
	HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1"),
	HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf"),
	HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36"),
	HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94"),
	HX_HCSTRING("APP","\x81","\x98","\x31","\x00"),
	HX_HCSTRING("STORAGE","\x1b","\xb3","\x7c","\xc4"),
	HX_HCSTRING("DESKTOP","\xbc","\x99","\x68","\x9e"),
	HX_HCSTRING("DOCS","\xfb","\xae","\x2e","\x2d"),
	HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38"),
	HX_HCSTRING("get_applicationDirectory","\x86","\x5a","\x0d","\x68"),
	HX_HCSTRING("get_applicationStorageDirectory","\xb9","\x70","\x86","\x8d"),
	HX_HCSTRING("get_desktopDirectory","\xfa","\xd5","\xab","\xcd"),
	HX_HCSTRING("get_documentsDirectory","\x9e","\x23","\x49","\x90"),
	HX_HCSTRING("get_userDirectory","\xf9","\x29","\x69","\x9b"),
	HX_HCSTRING("lime_filesystem_get_special_dir","\xb4","\xbf","\xa5","\x5a"),
	::String(null()) };

void File_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.filesystem.File","\x1b","\xb4","\x44","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &File_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< File_obj >;
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

void File_obj::__boot()
{
	APP= (int)0;
	STORAGE= (int)1;
	DESKTOP= (int)2;
	DOCS= (int)3;
	USER= (int)4;
	lime_filesystem_get_special_dir= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_filesystem_get_special_dir","\x16","\x0a","\x0d","\x6d"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace filesystem
