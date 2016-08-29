package lime.ui;


abstract JoystickHatPosition(Int) from Int to Int from UInt to UInt {
	
	
	public static inline var CENTER:JoystickHatPosition = 0x00;
	public static inline var DOWN:JoystickHatPosition = 0x04;
	public static inline var LEFT:JoystickHatPosition = 0x08;
	public static inline var RIGHT:JoystickHatPosition = 0x02;
	public static inline var UP:JoystickHatPosition = 0x01;
	
	public static inline var DOWN_LEFT:JoystickHatPosition = (0x04 | 0x08);
	public static inline var DOWN_RIGHT:JoystickHatPosition = (0x04 | 0x02);
	public static inline var UP_LEFT:JoystickHatPosition = (0x01 | 0x08);
	public static inline var UP_RIGHT:JoystickHatPosition = (0x01 | 0x02);
	
	public var center (get, set):Bool;
	public var down (get, set):Bool;
	public var left (get, set):Bool;
	public var right (get, set):Bool;
	public var up (get, set):Bool;
	
	
	public function new (value:Int) {
		
		this = value;
		
	}
	
	
	private function get_center ():Bool {
		
		return (this == 0);
		
	}
	
	
	private inline function set_center (value:Bool):Bool {
		
		if (value) {
			
			this = 0;
			
		}
		
		return value;
		
	}
	
	
	private function get_down ():Bool {
		
		return (this & DOWN > 0);
		
	}
	
	
	private inline function set_down (value:Bool):Bool {
		
		if (value) {
			
			this |= DOWN;
			
		} else {
			
			this &= 0xFFFFFFF - DOWN;
			
		}
		
		return value;
		
	}
	
	
	private function get_left ():Bool {
		
		return (this & LEFT > 0);
		
	}
	
	
	private inline function set_left (value:Bool):Bool {
		
		if (value) {
			
			this |= LEFT;
			
		} else {
			
			this &= 0xFFFFFFF - LEFT;
			
		}
		
		return value;
		
	}
	
	
	private function get_right ():Bool {
		
		return (this & RIGHT > 0);
		
	}
	
	
	private inline function set_right (value:Bool):Bool {
		
		if (value) {
			
			this |= RIGHT;
			
		} else {
			
			this &= 0xFFFFFFF - RIGHT;
			
		}
		
		return value;
		
	}
	
	
	private function get_up ():Bool {
		
		return (this & UP > 0);
		
	}
	
	
	private inline function set_up (value:Bool):Bool {
		
		if (value) {
			
			this |= UP;
			
		} else {
			
			this &= 0xFFFFFFF - UP;
			
		}
		
		return value;
		
	}
	
	
}