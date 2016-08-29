package layout;


class LayoutItem {
	
	
	public var horizontalLayout:LayoutType;
	public var marginLeft:Float;
	public var marginRight:Float;
	public var marginTop:Float;
	public var marginBottom:Float;
	public var minHeight:Null<Float>;
	public var minWidth:Null<Float>;
	public var object:Dynamic;
	public var rigidHorizontal:Bool;
	public var rigidVertical:Bool;
	public var verticalLayout:LayoutType;
	
	private var objectHeight (get, set):Float;
	private var objectScaleX (get, set):Float;
	private var objectScaleY (get, set):Float;
	private var objectWidth (get, set):Float;
	private var objectX (get, set):Float;
	private var objectY (get, set):Float;
	
	
	public function new (object:Dynamic, verticalLayout:LayoutType = null, horizontalLayout:LayoutType = null, rigidVertical:Bool = true, rigidHorizontal:Bool = true) {
		
		if (verticalLayout == null) {
			
			verticalLayout = LayoutType.TOP;
			
		}
		
		if (horizontalLayout == null) {
			
			horizontalLayout = LayoutType.LEFT;
			
		}
		
		this.object = object;
		this.verticalLayout = verticalLayout;
		this.horizontalLayout = horizontalLayout;
		this.rigidVertical = rigidVertical;
		this.rigidHorizontal = rigidHorizontal;
		
		initialize ();
		
	}
	
	
	private function configureItems ():Void {
		
		
		
	}
	
	
	private inline function getField (target:Dynamic, propertyName:String):Dynamic {
		
		#if (haxe_209 || haxe3)
		
		var value = null;
		
		if (Reflect.hasField (target, propertyName)) {
			
			#if flash
			value = untyped target[propertyName];
			#else
			value = Reflect.field (target, propertyName);
			#end
			
		} else {
			
			value = Reflect.getProperty (target, propertyName);
			
		}
		
		return value;
		
		#else
		
		return Reflect.field (target, propertyName);
		
		#end
		
	}
	
	
	private function ifDefined<T> (value:T, defaultValue:T):T {
		
		if (value != null) {
			
			if (!Std.is (value, String) || (Std.is (value, String) && value != cast "")) {
				
				return value;
				
			}
			
		}
		
		return defaultValue;
		
	}
	
	
	private function initialize ():Void {
		
		setMargins ();
		
	}
	
	
	private function layoutItem (layoutGroup:LayoutGroup):Void {
		
		switch (verticalLayout) {
			
			case BOTTOM:
				
				objectY = layoutGroup.height - objectHeight - marginBottom;
			
			case CENTER:
				
				objectY = layoutGroup.height / 2 - objectHeight / 2 + marginTop - marginBottom;
			
			case STRETCH:
				
				objectY = marginTop;
				
				var stretchHeight = layoutGroup.height - marginTop - marginBottom;
				
				if (stretchHeight < 0) {
					
					stretchHeight = 0;
					
				}
				
				if (rigidVertical && minHeight != null && stretchHeight < minHeight) {
					
					objectHeight = minHeight;
					
				} else {
					
					objectHeight = stretchHeight;
					
				}
			
			case TOP:
				
				objectY = marginTop;
			
			default:
			
		}
		
		switch (horizontalLayout) {
			
			case CENTER:
				
				objectX = layoutGroup.width / 2 - objectWidth / 2 + marginLeft - marginRight;
			
			case LEFT:
				
				objectX = marginLeft;
			
			case RIGHT:
				
				objectX = layoutGroup.width - objectWidth - marginRight;
			
			case STRETCH:
				
				objectX = marginLeft;
				
				var stretchWidth = layoutGroup.width - marginLeft - marginRight;
				
				if (stretchWidth < 0) {
					
					stretchWidth = 0;
					
				}
				
				if (rigidHorizontal && minWidth != null && stretchWidth < minWidth) {
					
					objectWidth = minWidth;
					
				} else {
					
					objectWidth = stretchWidth;
					
				}
			
			default:
			
		}
		
		objectX += layoutGroup.x;
		objectY += layoutGroup.y;
		
	}
	
	
	private function refreshSize ():Void {
		
		
		
	}
	
	
	private inline function setField (target:Dynamic, propertyName:String, value:Dynamic):Void {
		
		if (Reflect.hasField (target, propertyName)) {
			
			#if flash
			untyped target[propertyName] = value;
			#else
			Reflect.setField (target, propertyName, value);
			#end
			
		} else {
			
			#if (haxe_209 || haxe3)
			Reflect.setProperty (target, propertyName, value);
			#end
			
		}
		
	}
	
	
	public function setMargins (marginTop:Float = 0, marginRight:Float = 0, marginBottom:Float = 0, marginLeft:Float = 0):Void {
		
		this.marginTop = marginTop;
		this.marginRight = marginRight;
		this.marginBottom = marginBottom;
		this.marginLeft = marginLeft;
		
	}
	
	
	public function setMinSize (minWidth:Float = 0, minHeight:Float = 0):Void {
		
		this.minWidth = minWidth;
		this.minHeight = minHeight;
		
	}
	
	
	
	
	// Get & Set Methods
	
	
	
	
	private #if (!neko && !js) inline #end function get_objectHeight ():Float {
		
		return getField (object, "height");
		
	}
	
	
	private #if (!neko && !js) inline #end function set_objectHeight (value:Float):Float {
		
		setField (object, "height", value);
		return value;
		
	}
	
	
	private #if (!neko && !js) inline #end function get_objectScaleX ():Float {
		
		return getField (object, "scaleX");
		
	}
	
	
	private #if (!neko && !js) inline #end function set_objectScaleX (value:Float):Float {
		
		setField (object, "scaleX", value);
		return value;
		
	}
	
	
	private #if (!neko && !js) inline #end function get_objectScaleY ():Float {
		
		return getField (object, "scaleY");
		
	}
	
	
	private #if (!neko && !js) inline #end function set_objectScaleY (value:Float):Float {
		
		setField (object, "scaleY", value);
		return value;
		
	}
	
	
	private #if (!neko && !js) inline #end function get_objectWidth ():Float {
		
		return getField (object, "width");
		
	}
	
	
	private #if (!neko && !js) inline #end function set_objectWidth (value:Float):Float {
		
		setField (object, "width", value);
		return value;
		
	}
	
	
	private #if (!neko && !js) inline #end function get_objectX ():Float {
		
		return getField (object, "x");
		
	}
	
	
	private #if (!neko && !js) inline #end function set_objectX (value:Float):Float {
		
		setField (object, "x", value);
		return value;
		
	}
	
	
	private #if (!neko && !js) inline #end function get_objectY ():Float {
		
		return getField (object, "y");
		
	}
	
	
	private #if (!neko && !js) inline #end function set_objectY (value:Float):Float {
		
		setField (object, "y", value);
		return value;
		
	}
	
	
}