package lime.audio;


import lime.audio.openal.AL;
import lime.utils.ArrayBufferView;


class ALAudioContext {
	
	
	public var NONE:Int = 0;
	public var FALSE:Int = 0;
	public var TRUE:Int = 1;
	public var SOURCE_RELATIVE:Int = 0x202;
	public var CONE_INNER_ANGLE:Int = 0x1001;
	public var CONE_OUTER_ANGLE:Int = 0x1002;
	public var PITCH:Int = 0x1003;
	public var POSITION:Int = 0x1004;
	public var DIRECTION:Int = 0x1005;
	public var VELOCITY:Int = 0x1006;
	public var LOOPING:Int = 0x1007;
	public var BUFFER:Int = 0x1009;
	public var GAIN:Int = 0x100A;
	public var MIN_GAIN:Int = 0x100D;
	public var MAX_GAIN:Int = 0x100E;
	public var ORIENTATION:Int = 0x100F;
	public var SOURCE_STATE:Int = 0x1010;
	public var INITIAL:Int = 0x1011;
	public var PLAYING:Int = 0x1012;
	public var PAUSED:Int = 0x1013;
	public var STOPPED:Int = 0x1014;
	public var BUFFERS_QUEUED:Int = 0x1015;
	public var BUFFERS_PROCESSED:Int = 0x1016;
	public var REFERENCE_DISTANCE:Int = 0x1020;
	public var ROLLOFF_FACTOR:Int = 0x1021;
	public var CONE_OUTER_GAIN:Int = 0x1022;
	public var MAX_DISTANCE:Int = 0x1023;
	public var SEC_OFFSET:Int = 0x1024;
	public var SAMPLE_OFFSET:Int = 0x1025;
	public var BYTE_OFFSET:Int = 0x1026;
	public var SOURCE_TYPE:Int = 0x1027;
	public var STATIC:Int = 0x1028;
	public var STREAMING:Int = 0x1029;
	public var UNDETERMINED:Int = 0x1030;
	public var FORMAT_MONO8:Int = 0x1100;
	public var FORMAT_MONO16:Int = 0x1101;
	public var FORMAT_STEREO8:Int = 0x1102;
	public var FORMAT_STEREO16:Int = 0x1103;
	public var FREQUENCY:Int = 0x2001;
	public var BITS:Int = 0x2002;
	public var CHANNELS:Int = 0x2003;
	public var SIZE:Int = 0x2004;
	public var NO_ERROR:Int = 0;
	public var INVALID_NAME:Int = 0xA001;
	public var INVALID_ENUM:Int = 0xA002;
	public var INVALID_VALUE:Int = 0xA003;
	public var INVALID_OPERATION:Int = 0xA004;
	public var OUT_OF_MEMORY:Int = 0xA005;
	public var VENDOR:Int = 0xB001;
	public var VERSION:Int = 0xB002;
	public var RENDERER:Int = 0xB003;
	public var EXTENSIONS:Int = 0xB004;
	public var DOPPLER_FACTOR:Int = 0xC000;
	public var SPEED_OF_SOUND:Int = 0xC003;
	public var DOPPLER_VELOCITY:Int = 0xC001;
	public var DISTANCE_MODEL:Int = 0xD000;
	public var INVERSE_DISTANCE:Int = 0xD001;
	public var INVERSE_DISTANCE_CLAMPED:Int = 0xD002;
	public var LINEAR_DISTANCE:Int = 0xD003;
	public var LINEAR_DISTANCE_CLAMPED:Int = 0xD004;
	public var EXPONENT_DISTANCE:Int = 0xD005;
	public var EXPONENT_DISTANCE_CLAMPED:Int = 0xD006;
	
	
	public function new () {
		
		
		
	}
	
	
	public function bufferData (buffer:Int, format:Int, data:ArrayBufferView, size:Int, freq:Int):Void {
		
		AL.bufferData (buffer, format, data, size, freq);
		
	}
	
	
	public function buffer3f (buffer:Int, param:Int, value1:Float, value2:Float, value3:Float):Void {
		
		AL.buffer3f (buffer, param, value1, value2, value3);
		
	}
	
	
	public function buffer3i (buffer:Int, param:Int, value1:Int, value2:Int, value3:Int):Void {
		
		AL.buffer3i (buffer, param, value1, value2, value3);
		
	}
	
	
	public function bufferf (buffer:Int, param:Int, value:Float):Void {
		
		AL.bufferf (buffer, param, value);
		
	}
	
	
	public function bufferfv (buffer:Int, param:Int, values:Array<Float>):Void {
		
		AL.bufferfv (buffer, param, values);
		
	}
	
	
	public function bufferi (buffer:Int, param:Int, value:Int):Void {
		
		AL.bufferi (buffer, param, value);
		
	}
	
	
	public function bufferiv (buffer:Int, param:Int, values:Array<Int>):Void {
		
		AL.bufferiv (buffer, param, values);
		
	}
	
	
	public function deleteBuffer (buffer:Int):Void {
		
		AL.deleteBuffer (buffer);
		
	}
	
	
	public function deleteBuffers (buffers:Array<Int>):Void {
		
		AL.deleteBuffers (buffers);
		
	}
	
	
	public function deleteSource (source:Int):Void {
		
		AL.deleteSource (source);
		
	}
	
	
	public function deleteSources (sources:Array<Int>):Void {
		
		AL.deleteSources (sources);
		
	}
	
	
	public function disable (capability:Int):Void {
		
		AL.disable (capability);
		
	}
	
	
	public function distanceModel (distanceModel:Int):Void {
		
		AL.distanceModel (distanceModel);
		
	}
	
	
	public function dopplerFactor (value:Float):Void {
		
		AL.dopplerFactor (value);
		
	}
	
	
	public function dopplerVelocity (value:Float):Void {
		
		AL.dopplerVelocity (value);
		
	}
	
	
	public function enable (capability:Int):Void {
		
		AL.enable (capability);
		
	}
	
	
	public function genSource ():Int {
		
		return AL.genSource ();
		
	}
	
	
	public function genSources (n:Int):Array<Int> {
		
		return AL.genSources (n);
		
	}
	
	
	public function genBuffer ():Int {
		
		return AL.genBuffer ();
		
	}
	
	
	public function genBuffers (n:Int):Array<Int> {
		
		return AL.genBuffers (n);
		
	}
	
	
	public function getBoolean (param:Int):Bool {
		
		return AL.getBoolean (param);
		
	}
	
	
	public function getBooleanv (param:Int, count:Int = 1 ):Array<Bool> {
		
		return AL.getBooleanv (param, count);
		
	}
	
	
	public function getBuffer3f (buffer:Int, param:Int):Array<Float> {
		
		return AL.getBuffer3f (buffer, param);
		
	}
	
	
	public function getBuffer3i (buffer:Int, param:Int):Array<Int> {
		
		return AL.getBuffer3i (buffer, param);
		
	}
	
	
	public function getBufferf (buffer:Int, param:Int):Float {
		
		return AL.getBufferf (buffer, param);
		
	}
	
	
	public function getBufferfv (buffer:Int, param:Int, count:Int = 1):Array<Float> {
		
		return AL.getBufferfv (buffer, param, count);
		
	}
	
	
	public function getBufferi (buffer:Int, param:Int):Int {
		
		return AL.getBufferi (buffer, param);
		
	}
	
	
	public function getBufferiv (buffer:Int, param:Int, count:Int = 1):Array<Int> {
		
		return AL.getBufferiv (buffer, param, count);
		
	}
	
	
	public function getDouble (param:Int):Float {
		
		return AL.getDouble (param);
		
	}
	
	
	public function getDoublev (param:Int, count:Int = 1):Array<Float> {
		
		return AL.getDoublev (param, count);
		
	}
	
	
	public function getEnumValue (ename:String):Int {
		
		return AL.getEnumValue (ename);
		
	}
	
	
	public function getError ():Int {
		
		return AL.getError ();
		
	}
	
	
	public function getErrorString ():String {
		
		return AL.getErrorString ();
		
	}
	
	
	public function getFloat (param:Int):Float {
		
		return AL.getFloat (param);
		
	}
	
	
	public function getFloatv (param:Int, count:Int = 1):Array<Float> {
		
		return AL.getFloatv (param, count);
		
	}
	
	
	public function getInteger (param:Int):Int {
		
		return AL.getInteger (param);
		
	}
	
	
	public function getIntegerv (param:Int, count:Int = 1):Array<Int> {
		
		return AL.getIntegerv (param, count);
		
	}
	
	
	public function getListener3f (param:Int):Array<Float> {
		
		return AL.getListener3f (param);
		
	}
	
	
	public function getListener3i (param:Int):Array<Int> {
		
		return AL.getListener3i (param);
		
	}
	
	
	public function getListenerf (param:Int):Float {
		
		return AL.getListenerf (param);
		
	}
	
	
	public function getListenerfv (param:Int, count:Int = 1):Array<Float> {
		
		return AL.getListenerfv (param, count);
		
	}
	
	
	public function getListeneri (param:Int):Int {
		
		return AL.getListeneri (param);
		
	}
	
	
	public function getListeneriv (param:Int, count:Int = 1):Array<Int> {
		
		return AL.getListeneriv (param, count);
		
	}
	
	
	public function getProcAddress (fname:String):Dynamic {
		
		return AL.getProcAddress (fname);
		
	}
	
	
	public function getSource3f (source:Int, param:Int):Array<Float> {
		
		return AL.getSource3f (source, param);
		
	}
	
	
	public function getSourcef (source:Int, param:Int):Float {
		
		return AL.getSourcef (source, param);
		
	}
	
	
	public function getSource3i (source:Int, param:Int):Array<Int> {
		
		return AL.getSource3i (source, param);
		
	}
	
	
	public function getSourcefv (source:Int, param:Int, count:Int = 1):Array<Float> {
		
		return AL.getSourcefv (source, param);
		
	}
	
	
	public function getSourcei (source:Int, param:Int):Int {
		
		return AL.getSourcei (source, param);
		
	}
	
	
	public function getSourceiv (source:Int, param:Int, count:Int = 1):Array<Int> {
		
		return AL.getSourceiv (source, param, count);
		
	}
	
	
	public function getString (param:Int):String {
		
		return AL.getString (param);
		
	}
	
	
	public function isBuffer (buffer:Int):Bool {
		
		return AL.isBuffer (buffer);
		
	}	
	
	
	public function isEnabled (capability:Int):Bool {
		
		return AL.isEnabled (capability);
		
	}
	
	
	public function isExtensionPresent (extname:String):Bool {
		
		return AL.isExtensionPresent (extname);
		
	}
	
	
	public function isSource (source:Int):Bool {
		
		return AL.isSource (source);
		
	}
	
	
	public function listener3f (param:Int, value1:Float, value2:Float, value3:Float):Void {
		
		AL.listener3f (param, value1, value2, value3);
		
	}
	
	
	public function listener3i (param:Int, value1:Int, value2:Int, value3:Int):Void {
		
		AL.listener3i (param, value1, value2, value3);
		
	}
	
	
	public function listenerf (param:Int, value:Float):Void {
		
		AL.listenerf (param, value);
		
	}
	
	
	public function listenerfv (param:Int, values:Array<Float>):Void {
		
		AL.listenerfv (param, values);
		
	}
	
	
	public function listeneri (param:Int, value:Int):Void {
		
		AL.listeneri (param, value);
		
	}
	
	
	public function listeneriv (param:Int, values:Array<Int>):Void {
		
		AL.listeneriv (param, values);
		
	}
	
	
	public function source3f (source:Int, param:Int, value1:Float, value2:Float, value3:Float):Void {
		
		AL.source3f (source, param, value1, value2, value3);
		
	}
	
	
	public function source3i (source:Int, param:Int, value1:Int, value2:Int, value3:Int):Void {
		
		AL.source3i (source, param, value1, value2, value3);
		
	}
	
	
	public function sourcef (source:Int, param:Int, value:Float):Void {
		
		AL.sourcef (source, param, value);
		
	}
	
	
	public function sourcefv (source:Int, param:Int, values:Array<Float>):Void {
		
		AL.sourcefv (source, param, values);
		
	}
	
	
	public function sourcei (source:Int, param:Int, value:Int):Void {
		
		AL.sourcei (source, param, value);
		
	}
	
	
	public function sourceiv (source:Int, param:Int, values:Array<Int>):Void {
		
		AL.sourceiv (source, param, values);
		
	}
	
	
	public function sourcePlay (source:Int):Void {
		
		AL.sourcePlay (source);
		
	}
	
	
	public function sourcePlayv (sources:Array<Int>):Void {
		
		AL.sourcePlayv (sources);
		
	}
	
	
	public function sourceStop (source:Int):Void {
		
		AL.sourceStop (source);
		
	}
	
	
	public function sourceStopv (sources:Array<Int>):Void {
		
		AL.sourceStopv (sources);
		
	}
	
	
	public function sourceRewind (source:Int):Void {
		
		AL.sourceRewind (source);
		
	}
	
	
	public function sourceRewindv (sources:Array<Int>):Void {
		
		AL.sourceRewindv (sources);
		
	}
	
	
	public function sourcePause (source:Int):Void {
		
		AL.sourcePause (source);
		
	}
	
	
	public function sourcePausev (sources:Array<Int>):Void {
		
		AL.sourcePausev (sources);
		
	}
	
	
	public function sourceQueueBuffer (source:Int, buffer:Int):Void {
		
		AL.sourceQueueBuffer (source, buffer);
		
	}
	
	
	public function sourceQueueBuffers (source:Int, nb:Int, buffers:Array<Int>):Void {
		
		AL.sourceQueueBuffers (source, nb, buffers);
		
	}
	
	
	public function sourceUnqueueBuffer (source:Int):Int {
		
		return AL.sourceUnqueueBuffer (source);
		
	}
	
	
	public function sourceUnqueueBuffers (source:Int, nb:Int):Array<Int> {
		
		return AL.sourceUnqueueBuffers (source, nb);
		
	}
	
	
	public function speedOfSound (value:Float):Void {
		
		AL.speedOfSound (value);
		
	}
	
	
}