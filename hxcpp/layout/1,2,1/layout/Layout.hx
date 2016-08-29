package layout;


#if (flash || openfl || nme)
import flash.events.Event;
import flash.events.EventDispatcher;
#end

@:access(layout.LayoutGroup)


class Layout #if (flash || openfl || nme) extends EventDispatcher #end {
	
	
	public var clampHeight (get, set):Bool;
	public var clampWidth (get, set):Bool;
	public var height (get, null):Float;
	public var initHeight (default, null):Float;
	public var initWidth (get, null):Float;
	public var minHeight (get, set):Float;
	public var minWidth (get, set):Float;
	public var pixelScale (get, set):Float;
	public var width (get, null):Float;
	
	private var items:LayoutGroup;
	
	private var _initHeight:Float;
	private var _initWidth:Float;
	
	
	public function new (initWidth:Float = 0, initHeight:Float = 0) {
		
		#if (flash || openfl || nme)
		super ();
		#end
		
		_initWidth = initWidth;
		_initHeight = initHeight;
		
		initialize ();
		
	}
	
	
	public function addItem (item:LayoutItem, autoConfigureVertical:Bool = true, autoConfigureHorizontal:Bool = true):Void {
		
		items.addItem (item, autoConfigureVertical, autoConfigureHorizontal, false);
		
	}
	
	
	private function initialize ():Void {
		
		items = new LayoutGroup (LayoutType.NONE, LayoutType.NONE, false);
		items.resize (_initWidth, _initHeight);
		
	}
	
	
	public function layoutItems ():Void {
		
		items.layoutItemGroup ();
		
	}
	
	
	public function resize (width:Float, height:Float):Void {
		
		if (_initWidth == 0 && _initHeight == 0) {
			
			if (items.width == 0 && items.height == 0) {
				
				items.refreshSize ();
				
			}
			
			_initWidth = items.width;
			_initHeight = items.height;
			
			items.setInitSize (_initWidth, _initHeight);
			items.configureItems ();
			
		}
		
		var cacheWidth = items.width;
		var cacheHeight = items.height;
		
		items.resize (width, height);
		
		if (items.width != cacheWidth || items.height != cacheHeight) {
			
			#if (flash || openfl || nme)
			dispatchEvent (new Event (Event.RESIZE));
			#end
			
		}
		
	}
	
	
	public function setMinSize (minWidth:Float = 0, minHeight:Float = 0):Void {
		
		items.minWidth = minWidth;
		items.minHeight = minHeight;
		
	}
	
	
	
	
	// Get & Set Methods
	
	
	
	
	private function get_clampHeight ():Bool {
		
		return items.clampHeight;
		
	}
	
	
	private function set_clampHeight (value:Bool):Bool {
		
		return items.clampHeight = value;
		
	}
	
	
	private function get_clampWidth ():Bool {
		
		return items.clampWidth;
		
	}
	
	
	private function set_clampWidth (value:Bool):Bool {
		
		return items.clampWidth = value;
		
	}
	
	
	private function get_height ():Float {
		
		return items.height;
		
	}
	
	
	private function get_initHeight ():Float {
		
		return items.initHeight;
		
	}
	
	
	private function get_initWidth ():Float {
		
		return items.initWidth;
		
	}
	
	
	private function get_minHeight ():Float {
		
		return items.minHeight;
		
	}
	
	
	private function set_minHeight (value:Float):Float {
		
		return items.minHeight = value;
		
	}
	
	
	private function get_minWidth ():Float {
		
		return items.minWidth;
		
	}
	
	
	private function set_minWidth (value:Float):Float {
		
		return items.minWidth = value;
		
	}
	
	
	private function get_pixelScale ():Float {
		
		return items.pixelScale;
		
	}
	
	
	private function set_pixelScale (value:Float):Float {
		
		return items.pixelScale = value;
		
	}
	
	
	private function get_width ():Float {
		
		return items.width;
		
	}
	
	
}