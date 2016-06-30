package;

import states.PlayState;


class Reg
{
	public static var PS:PlayState;
	public static var currentLevel:Int = 0;
	
	public static var pause:Bool = false;
	public static var score:Int = 0;
	
	
	public static var mapChunkTemplates = [       
	
												[[2,2,2,2,2,2,2,2,2,2,2,2],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,1,1,0,0,0,0,0],
												[0,0,0,0,0,1,1,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,1,1,0,0],
												[0,0,0,0,0,0,0,0,1,1,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,1,1,0,0,0,0,0,0,0],
												[0,0,0,1,1,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,3,0,0],
												[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]],
												
												
												[[2,2,2,2,2,2,2,2,2,2,2,2],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,1,1,1,1,1,0,0,0,0],
												[0,0,0,1,1,1,1,1,0,0,0,0],
												[0,0,0,1,1,1,1,1,0,0,0,0],
												[0,0,0,1,1,1,1,1,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,3,0,0,0,0],
												[0,0,0,0,0,1,1,1,1,1,0,0],
												[0,0,0,0,0,1,1,1,1,1,0,0],
												[0,0,0,0,0,1,1,1,1,1,0,0],
												[0,0,0,0,0,1,1,1,1,1,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,3,0,0,0,0,0,0,0,0],
												[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]],
												
												
												
												[[2,2,2,2,2,2,2,2,2,2,2,2],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,1,1,1,1,1,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,4],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,0,0,0,1,0,0,0,0,0],
												[0,0,0,3,0,0,1,0,0,0,0,0],
												[0,0,1,1,1,1,1,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]],
												
												
												[[2,2,2,2,2,2,2,2,2,2,2,2],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,3,0,0,0,0],
												[0,0,0,0,0,0,2,2,2,2,0,0],
												[0,0,0,0,0,0,0,2,2,0,0,0],
												[0,0,0,0,0,0,0,0,2,2,2,2],
												[0,0,0,0,0,0,0,0,2,2,2,2],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[0,0,0,0,0,0,0,0,0,0,2,2],
												[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]],
												
												[[2,2,2,2,2,2,2,2,2,2,2,2],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,4],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]],
												
																								[[2,2,2,2,2,2,2,2,2,2,2,2],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[5,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[0,0,0,0,0,0,0,0,0,0,0,0],
												[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]]
												
												
												
												
												];



	
}