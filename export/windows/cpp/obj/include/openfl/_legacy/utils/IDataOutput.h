#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#define INCLUDED_openfl__legacy_utils_IDataOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  IDataOutput_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDataOutput_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String get_endian( )=0;
virtual Dynamic get_endian_dyn()=0;
		virtual ::String set_endian( ::String value)=0;
virtual Dynamic set_endian_dyn()=0;
		virtual Void writeBoolean( bool value)=0;
virtual Dynamic writeBoolean_dyn()=0;
		virtual Void writeByte( int value)=0;
virtual Dynamic writeByte_dyn()=0;
		virtual Void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  offset,hx::Null< int >  length)=0;
virtual Dynamic writeBytes_dyn()=0;
		virtual Void writeDouble( Float value)=0;
virtual Dynamic writeDouble_dyn()=0;
		virtual Void writeFloat( Float value)=0;
virtual Dynamic writeFloat_dyn()=0;
		virtual Void writeInt( int value)=0;
virtual Dynamic writeInt_dyn()=0;
		virtual Void writeShort( int value)=0;
virtual Dynamic writeShort_dyn()=0;
		virtual Void writeUnsignedInt( int value)=0;
virtual Dynamic writeUnsignedInt_dyn()=0;
		virtual Void writeUTF( ::String value)=0;
virtual Dynamic writeUTF_dyn()=0;
		virtual Void writeUTFBytes( ::String value)=0;
virtual Dynamic writeUTFBytes_dyn()=0;
};



template<typename IMPL>
class IDataOutput_delegate_ : public IDataOutput_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataOutput_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::String get_endian( ) { return mDelegate->get_endian();}
		Dynamic get_endian_dyn() { return mDelegate->get_endian_dyn();}
		::String set_endian( ::String value) { return mDelegate->set_endian(value);}
		Dynamic set_endian_dyn() { return mDelegate->set_endian_dyn();}
		Void writeBoolean( bool value) { return mDelegate->writeBoolean(value);}
		Dynamic writeBoolean_dyn() { return mDelegate->writeBoolean_dyn();}
		Void writeByte( int value) { return mDelegate->writeByte(value);}
		Dynamic writeByte_dyn() { return mDelegate->writeByte_dyn();}
		Void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  offset,hx::Null< int >  length) { return mDelegate->writeBytes(bytes,offset,length);}
		Dynamic writeBytes_dyn() { return mDelegate->writeBytes_dyn();}
		Void writeDouble( Float value) { return mDelegate->writeDouble(value);}
		Dynamic writeDouble_dyn() { return mDelegate->writeDouble_dyn();}
		Void writeFloat( Float value) { return mDelegate->writeFloat(value);}
		Dynamic writeFloat_dyn() { return mDelegate->writeFloat_dyn();}
		Void writeInt( int value) { return mDelegate->writeInt(value);}
		Dynamic writeInt_dyn() { return mDelegate->writeInt_dyn();}
		Void writeShort( int value) { return mDelegate->writeShort(value);}
		Dynamic writeShort_dyn() { return mDelegate->writeShort_dyn();}
		Void writeUnsignedInt( int value) { return mDelegate->writeUnsignedInt(value);}
		Dynamic writeUnsignedInt_dyn() { return mDelegate->writeUnsignedInt_dyn();}
		Void writeUTF( ::String value) { return mDelegate->writeUTF(value);}
		Dynamic writeUTF_dyn() { return mDelegate->writeUTF_dyn();}
		Void writeUTFBytes( ::String value) { return mDelegate->writeUTFBytes(value);}
		Dynamic writeUTFBytes_dyn() { return mDelegate->writeUTFBytes_dyn();}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_IDataOutput */ 
