package lime.project;


import haxe.io.Path;


class Library {
	
	
	public var embed:Null<Bool>;
	public var generate:Bool;
	public var name:String;
	public var prefix:String;
	public var preload:Bool;
	public var sourcePath:String;
	public var type:String;
	
	
	public function new (sourcePath:String, name:String = "", type:String = null, embed:Null<Bool> = null, preload:Bool = false, generate:Bool = false, prefix:String = "") {
		
		this.sourcePath = sourcePath;
		
		if (name == "") {
			
			this.name = Path.withoutDirectory (Path.withoutExtension (sourcePath));
			
		} else {
			
			this.name = name;
			
		}
		
		this.type = type;
		this.embed = embed;
		this.preload = preload;
		this.generate = generate;
		this.prefix = prefix;
		
	}
	
	
	public function clone ():Library {
		
		return new Library (sourcePath, name, type, embed, preload, generate, prefix);
		
	}
	
	
}