package lime.system;


import lime.app.Application;
import lime.app.Event;

#if cpp
import cpp.vm.Deque;
import cpp.vm.Thread;
#elseif neko
import neko.vm.Deque;
import neko.vm.Thread;
#end


class BackgroundWorker {
	
	
	private static var MESSAGE_COMPLETE = "__COMPLETE__";
	private static var MESSAGE_ERROR = "__ERROR__";
	
	public var canceled (default, null):Bool;
	public var doWork = new Event<Dynamic->Void> ();
	public var onComplete = new Event<Dynamic->Void> ();
	public var onError = new Event<Dynamic->Void> ();
	public var onProgress = new Event<Dynamic->Void> ();
	
	private var __runMessage:Dynamic;
	
	#if (cpp || neko)
	private var __messageQueue:Deque<Dynamic>;
	private var __workerThread:Thread;
	#end
	
	
	public function new () {
		
		
		
	}
	
	
	public function cancel ():Void {
		
		canceled = true;
		
		#if (cpp || neko)
		
		__workerThread = null;
		
		#end
		
	}
	
	
	public function run (message:Dynamic = null):Void {
		
		canceled = false;
		__runMessage = message;
		
		#if (cpp || neko)
		
		__messageQueue = new Deque<Dynamic> ();
		__workerThread = Thread.create (__doWork);
		
		Application.current.onUpdate.add (__update);
		
		#else
		
		__doWork ();
		
		#end
		
	}
	
	
	public function sendComplete (message:Dynamic = null):Void {
		
		#if (cpp || neko)
		
		__messageQueue.add (MESSAGE_COMPLETE);
		__messageQueue.add (message);
		
		#else
		
		if (!canceled) {
			
			canceled = true;
			onComplete.dispatch (message);
			
		}
		
		#end
		
	}
	
	
	public function sendError (message:Dynamic = null):Void {
		
		#if (cpp || neko)
		
		__messageQueue.add (MESSAGE_ERROR);
		__messageQueue.add (message);
		
		#else
		
		if (!canceled) {
			
			canceled = true;
			onError.dispatch (message);
			
		}
		
		#end
		
	}
	
	
	public function sendProgress (message:Dynamic = null):Void {
		
		#if (cpp || neko)
		
		__messageQueue.add (message);
		
		#else
		
		if (!canceled) {
			
			onProgress.dispatch (message);
			
		}
		
		#end
		
	}
	
	
	private function __doWork ():Void {
		
		doWork.dispatch (__runMessage);
		
		//#if (cpp || neko)
		//
		//__messageQueue.add (MESSAGE_COMPLETE);
		//
		//#else
		//
		//if (!canceled) {
			//
			//canceled = true;
			//onComplete.dispatch (null);
			//
		//}
		//
		//#end
		
	}
	
	
	private function __update (deltaTime:Int):Void {
		
		#if (cpp || neko)
		
		var message = __messageQueue.pop (false);
		
		if (message != null) {
			
			if (message == MESSAGE_ERROR) {
				
				Application.current.onUpdate.remove (__update);
				
				if (!canceled) {
					
					canceled = true;
					onError.dispatch (__messageQueue.pop (false));
					
				}
				
			} else if (message == MESSAGE_COMPLETE) {
				
				Application.current.onUpdate.remove (__update);
				
				if (!canceled) {
					
					canceled = true;
					onComplete.dispatch (__messageQueue.pop (false));
					
				}
				
			} else {
				
				if (!canceled) {
					
					onProgress.dispatch (message);
					
				}
				
			}
			
		}
		
		#end
		
	}
	
	
}