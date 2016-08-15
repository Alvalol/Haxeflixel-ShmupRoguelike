package utils.pcg;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.math.FlxPoint;
import objects.Player;
import objects.gamesys.Goal;
import utils.pcg.MapChunkMerger;


class ObjectPlacement
{
	
	public static function loadLevelObjects()
	{
		
	var RAWCHUNKS = MapChunkMerger.get_RAWCHUNKS();
	for (chunk in RAWCHUNKS) 
	{
		
		for (object in getLevelObjects(chunk.get_tileFile(), "objects"))
		{
		    if (chunk.get_type() == "S")
			{
				if (object.type == "player")
				{
						Reg.PS.player.setPosition(object.x, object.y);
				}
				else
				{
					trace("no player in this chunk");
				}
			}
			
			if (chunk.get_type() == "E")
		{
			if (object.type == "goal")
			{
				var pos = new FlxPoint((RAWCHUNKS.indexOf(chunk) * (chunk.get_chunkWidth() * chunk.get_tileWidth()))
				+ object.x , object.y);
				Reg.PS.add(new Goal(pos.x));
			}
			else
			{
				trace("No GOAL found for this level");
			}
		}
		
			
		    }
			
			
			
		
	}// end for loop
		
    } 
	
	public static function getLevelObjects(map:TiledMap, layer:String):Array<TiledObject>
	{
		if ((map != null) &&(map.getLayer(layer) != null))
		{
			var objLayer:TiledObjectLayer = cast map.getLayer(layer);
			return objLayer.objects;
		}
		else
		{
		    trace("Object layer " + layer + " not found");
	        return [];
		}
	}
	
	
}
