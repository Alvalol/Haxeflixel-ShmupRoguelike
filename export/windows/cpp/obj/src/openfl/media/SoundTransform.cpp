#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace media{

Void SoundTransform_obj::__construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning)
{
HX_STACK_FRAME("openfl.media.SoundTransform","new",0x75fea817,"openfl.media.SoundTransform.new","openfl/media/SoundTransform.hx",15,0xcbc8f637)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_vol,"vol")
HX_STACK_ARG(__o_panning,"panning")
Float vol = __o_vol.Default(1);
Float panning = __o_panning.Default(0);
{
	HX_STACK_LINE(17)
	this->volume = vol;
	HX_STACK_LINE(18)
	this->pan = panning;
	HX_STACK_LINE(19)
	this->leftToLeft = (int)0;
	HX_STACK_LINE(20)
	this->leftToRight = (int)0;
	HX_STACK_LINE(21)
	this->rightToLeft = (int)0;
	HX_STACK_LINE(22)
	this->rightToRight = (int)0;
}
;
	return null();
}

//SoundTransform_obj::~SoundTransform_obj() { }

Dynamic SoundTransform_obj::__CreateEmpty() { return  new SoundTransform_obj; }
hx::ObjectPtr< SoundTransform_obj > SoundTransform_obj::__new(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning)
{  hx::ObjectPtr< SoundTransform_obj > _result_ = new SoundTransform_obj();
	_result_->__construct(__o_vol,__o_panning);
	return _result_;}

Dynamic SoundTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundTransform_obj > _result_ = new SoundTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::media::SoundTransform SoundTransform_obj::clone( ){
	HX_STACK_FRAME("openfl.media.SoundTransform","clone",0xa03c86d4,"openfl.media.SoundTransform.clone","openfl/media/SoundTransform.hx",27,0xcbc8f637)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	Float tmp = this->volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = this->pan;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	::openfl::media::SoundTransform tmp2 = ::openfl::media::SoundTransform_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundTransform_obj,clone,return )


SoundTransform_obj::SoundTransform_obj()
{
}

Dynamic SoundTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return pan; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftToLeft") ) { return leftToLeft; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { return leftToRight; }
		if (HX_FIELD_EQ(inName,"rightToLeft") ) { return rightToLeft; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightToRight") ) { return rightToRight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftToLeft") ) { leftToLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftToRight") ) { leftToRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightToLeft") ) { rightToLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightToRight") ) { rightToRight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("leftToLeft","\x89","\x2e","\x7a","\xac"));
	outFields->push(HX_HCSTRING("leftToRight","\x1a","\x97","\x7b","\xb5"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("rightToLeft","\x1e","\x40","\xee","\xe6"));
	outFields->push(HX_HCSTRING("rightToRight","\xe5","\xe7","\x96","\xa0"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,leftToLeft),HX_HCSTRING("leftToLeft","\x89","\x2e","\x7a","\xac")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,leftToRight),HX_HCSTRING("leftToRight","\x1a","\x97","\x7b","\xb5")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,pan),HX_HCSTRING("pan","\x5d","\x51","\x55","\x00")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,rightToLeft),HX_HCSTRING("rightToLeft","\x1e","\x40","\xee","\xe6")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,rightToRight),HX_HCSTRING("rightToRight","\xe5","\xe7","\x96","\xa0")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("leftToLeft","\x89","\x2e","\x7a","\xac"),
	HX_HCSTRING("leftToRight","\x1a","\x97","\x7b","\xb5"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("rightToLeft","\x1e","\x40","\xee","\xe6"),
	HX_HCSTRING("rightToRight","\xe5","\xe7","\x96","\xa0"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundTransform_obj::__mClass;

void SoundTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundTransform","\xa5","\x50","\x3d","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundTransform_obj >;
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
} // end namespace media
