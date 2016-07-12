#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#define INCLUDED_openfl__legacy_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,Lib)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,CompressionAlgorithm)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ByteArray_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();
		Void __construct(hx::Null< int >  __o_size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.ByteArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< int >  __o_size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::_legacy::utils::IDataOutput_obj *();
		operator ::openfl::_legacy::utils::IMemoryRange_obj *();
		operator ::openfl::_legacy::utils::IDataInput_obj *();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("ByteArray","\x51","\x21","\x97","\x5d"); }

		static void __boot();
		typedef int __array_access;
		static ::openfl::_legacy::utils::ByteArray fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::openfl::_legacy::utils::ByteArray readFile( ::String path);
		static Dynamic readFile_dyn();

		static Dynamic _double_bytes;
		static Dynamic &_double_bytes_dyn() { return _double_bytes;}
		static Dynamic _double_of_bytes;
		static Dynamic &_double_of_bytes_dyn() { return _double_of_bytes;}
		static Dynamic _float_bytes;
		static Dynamic &_float_bytes_dyn() { return _float_bytes;}
		static Dynamic _float_of_bytes;
		static Dynamic &_float_of_bytes_dyn() { return _float_of_bytes;}
		static Dynamic lime_byte_array_overwrite_file;
		static Dynamic &lime_byte_array_overwrite_file_dyn() { return lime_byte_array_overwrite_file;}
		static Dynamic lime_byte_array_read_file;
		static Dynamic &lime_byte_array_read_file_dyn() { return lime_byte_array_read_file;}
		static Dynamic lime_byte_array_get_native_pointer;
		static Dynamic &lime_byte_array_get_native_pointer_dyn() { return lime_byte_array_get_native_pointer;}
		static Dynamic lime_lzma_encode;
		static Dynamic &lime_lzma_encode_dyn() { return lime_lzma_encode;}
		static Dynamic lime_lzma_decode;
		static Dynamic &lime_lzma_decode_dyn() { return lime_lzma_decode;}
		bool bigEndian;
		int bytesAvailable;
		int position;
		int byteLength;
		virtual ::String asString( );
		Dynamic asString_dyn();

		virtual Void checkData( int length);
		Dynamic checkData_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void compress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm);
		Dynamic compress_dyn();

		virtual Void deflate( );
		Dynamic deflate_dyn();

		virtual Void ensureElem( int size,bool updateLength);
		Dynamic ensureElem_dyn();

		virtual ::openfl::_legacy::utils::ByteArray getByteBuffer( );
		Dynamic getByteBuffer_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual Dynamic getNativePointer( );
		Dynamic getNativePointer_dyn();

		virtual int getStart( );
		Dynamic getStart_dyn();

		virtual Void inflate( );
		Dynamic inflate_dyn();

		virtual bool readBoolean( );
		Dynamic readBoolean_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Void readBytes( ::openfl::_legacy::utils::ByteArray data,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic readBytes_dyn();

		virtual Float readDouble( );
		Dynamic readDouble_dyn();

		virtual Float readFloat( );
		Dynamic readFloat_dyn();

		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::String readMultiByte( int length,::String charSet);
		Dynamic readMultiByte_dyn();

		virtual Void writeMultiByte( ::String value,::String charSet);
		Dynamic writeMultiByte_dyn();

		virtual int readShort( );
		Dynamic readShort_dyn();

		virtual int readUnsignedByte( );
		Dynamic readUnsignedByte_dyn();

		virtual int readUnsignedInt( );
		Dynamic readUnsignedInt_dyn();

		virtual int readUnsignedShort( );
		Dynamic readUnsignedShort_dyn();

		virtual ::String readUTF( );
		Dynamic readUTF_dyn();

		virtual ::String readUTFBytes( int length);
		Dynamic readUTFBytes_dyn();

		virtual Void setLength( int length);
		Dynamic setLength_dyn();

		virtual ::openfl::_legacy::utils::ByteArray slice( int begin,Dynamic end);
		Dynamic slice_dyn();

		virtual Void uncompress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm);
		Dynamic uncompress_dyn();

		virtual Void write_uncheck( int byte);
		Dynamic write_uncheck_dyn();

		virtual Void writeBoolean( bool value);
		Dynamic writeBoolean_dyn();

		virtual Void writeObject( Dynamic object);
		Dynamic writeObject_dyn();

		virtual Void writeByte( int value);
		Dynamic writeByte_dyn();

		virtual Void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic writeBytes_dyn();

		virtual Void writeDouble( Float x);
		Dynamic writeDouble_dyn();

		virtual Void writeFile( ::String path);
		Dynamic writeFile_dyn();

		virtual Void writeFloat( Float x);
		Dynamic writeFloat_dyn();

		virtual Void writeInt( int value);
		Dynamic writeInt_dyn();

		virtual Void writeShort( int value);
		Dynamic writeShort_dyn();

		virtual Void writeUnsignedInt( int value);
		Dynamic writeUnsignedInt_dyn();

		virtual Void writeUTF( ::String s);
		Dynamic writeUTF_dyn();

		virtual Void writeUTFBytes( ::String s);
		Dynamic writeUTFBytes_dyn();

		virtual Void __fromBytes( ::haxe::io::Bytes bytes);
		Dynamic __fromBytes_dyn();

		virtual int __get( int pos);
		Dynamic __get_dyn();

		virtual Void __set( int pos,int v);
		Dynamic __set_dyn();

		virtual Void __resize( int length);
		Dynamic __resize_dyn();

		virtual int __throwEOFi( );
		Dynamic __throwEOFi_dyn();

		virtual int get_bytesAvailable( );
		Dynamic get_bytesAvailable_dyn();

		virtual int get_byteLength( );
		Dynamic get_byteLength_dyn();

		virtual ::String get_endian( );
		Dynamic get_endian_dyn();

		virtual ::String set_endian( ::String value);
		Dynamic set_endian_dyn();

		virtual int get___length( );
		Dynamic get___length_dyn();

		virtual int set___length( int value);
		Dynamic set___length_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_ByteArray */ 
