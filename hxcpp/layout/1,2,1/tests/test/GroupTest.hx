package;


import layout.Layout;
import layout.LayoutGroup;
import layout.LayoutItem;
import layout.LayoutType;
import massive.munit.Assert;

@:access(layout)


class GroupTest {
	
	
	public static var background:DisplayObject;
	public static var logo:DisplayObject;
	public static var sidebar:DisplayObject;
	public static var footer:DisplayObject;
	
	private static var layoutHeight = 200;
	private static var layoutWidth = 200;
	
	
	@Before public function setup ():Void {
		
		background = new DisplayObject ();
		background.x = 0;
		background.y = 0;
		background.width = layoutWidth;
		background.height = layoutHeight;
		
		logo = new DisplayObject ();
		logo.x = 10;
		logo.y = 10;
		logo.width = 40;
		logo.height = 25;
		
		sidebar = new DisplayObject ();
		sidebar.x = layoutWidth - 60;
		sidebar.y = 0;
		sidebar.width = 60;
		sidebar.height = layoutHeight - 40;
		
		footer = new DisplayObject ();
		footer.x = 0;
		footer.y = layoutHeight - 40;
		footer.width = layoutWidth;
		footer.height = 40;
		
	}
	
	
	private inline function testLayout (verticalType:LayoutType, horizontalType:LayoutType, ?pos:haxe.PosInfos) {
		
		var layout = new Layout (layoutWidth, layoutHeight);
		var layoutGroup = new LayoutGroup (STRETCH, STRETCH);
		
		layoutGroup.width = layoutWidth;
		layoutGroup.height = layoutHeight;
		
		layoutGroup.addItem (new LayoutItem (background, verticalType, horizontalType));
		layoutGroup.addItem (new LayoutItem (logo, verticalType, horizontalType));
		layoutGroup.addItem (new LayoutItem (sidebar, verticalType, horizontalType));
		layoutGroup.addItem (new LayoutItem (footer, verticalType, horizontalType));
		
		layout.addItem (layoutGroup);
		
		testLayoutSize (layout, verticalType, horizontalType, 200, 200, pos);
		testLayoutSize (layout, verticalType, horizontalType, 300, 240, pos);
		testLayoutSize (layout, verticalType, horizontalType, 1200, 1370, pos);
		testLayoutSize (layout, verticalType, horizontalType, 1500, 1200, pos);
		testLayoutSize (layout, verticalType, horizontalType, 220, 1200, pos);
		testLayoutSize (layout, verticalType, horizontalType, 100, 220, pos);
		testLayoutSize (layout, verticalType, horizontalType, 220, 100, pos);
		testLayoutSize (layout, verticalType, horizontalType, 10, 10, pos);
		
		setup ();
		
		var layout = new Layout ();
		var layoutGroup = new LayoutGroup (STRETCH, STRETCH);
		
		layoutGroup.addItem (new LayoutItem (background, verticalType, horizontalType));
		layoutGroup.addItem (new LayoutItem (logo, verticalType, horizontalType));
		layoutGroup.addItem (new LayoutItem (sidebar, verticalType, horizontalType));
		layoutGroup.addItem (new LayoutItem (footer, verticalType, horizontalType));
		
		layout.addItem (layoutGroup);
		
		testLayoutSize (layout, verticalType, horizontalType, 200, 200, pos);
		testLayoutSize (layout, verticalType, horizontalType, 300, 240, pos);
		testLayoutSize (layout, verticalType, horizontalType, 1200, 1370, pos);
		testLayoutSize (layout, verticalType, horizontalType, 1500, 1200, pos);
		testLayoutSize (layout, verticalType, horizontalType, 220, 1200, pos);
		testLayoutSize (layout, verticalType, horizontalType, 100, 220, pos);
		testLayoutSize (layout, verticalType, horizontalType, 220, 100, pos);
		testLayoutSize (layout, verticalType, horizontalType, 10, 10, pos);
		
	}
	
	
	private inline function testLayoutSize (layout:Layout, verticalType:LayoutType, horizontalType:LayoutType, width:Float, height:Float, ?pos:haxe.PosInfos) {
		
		layout.resize (width, height);
		
		if (width < layoutWidth) width = layoutWidth;
		if (height < layoutHeight) height = layoutHeight;
		
		var scaleWidth = (horizontalType == STRETCH) ? width : layoutWidth;
		var scaleHeight = (verticalType == STRETCH) ? height : layoutHeight;
		
		var offsetY = switch (verticalType) {
			
			case CENTER: (height / 2) - (layoutHeight / 2);
			case BOTTOM: height - layoutHeight;
			default: 0;
			
		}
		
		var offsetX = switch (horizontalType) {
			
			case CENTER: (width / 2) - (layoutWidth / 2);
			case RIGHT: width - layoutWidth;
			default: 0;
			
		}
		
		//Assert.areEqual (offsetX, background.x, pos);
		//Assert.areEqual (offsetY, background.y, pos);
		//Assert.areEqual (scaleWidth, background.width, pos);
		//Assert.areEqual (scaleHeight, background.height, pos);
		//
		//Assert.areEqual (offsetX + 10, logo.x, pos);
		//Assert.areEqual (offsetY + 10, logo.y, pos);
		//Assert.areEqual (scaleWidth - layoutWidth + 40, logo.width, pos);
		//Assert.areEqual (scaleHeight - layoutHeight + 25, logo.height, pos);
		//
		//Assert.areEqual (offsetX + layoutWidth - 60, sidebar.x, pos);
		//Assert.areEqual (offsetY, sidebar.y, pos);
		//Assert.areEqual (scaleWidth - layoutWidth + 60, sidebar.width, pos);
		//Assert.areEqual (scaleHeight - 40, sidebar.height, pos);
		//
		//Assert.areEqual (offsetX, footer.x, pos);
		//Assert.areEqual (offsetY + layoutHeight - 40, footer.y, pos);
		//Assert.areEqual (scaleWidth, footer.width, pos);
		//Assert.areEqual (scaleHeight - layoutHeight + 40, footer.height, pos);
		
		Assert.areEqual (offsetX, background.x);
		Assert.areEqual (offsetY, background.y);
		Assert.areEqual (scaleWidth, background.width);
		Assert.areEqual (scaleHeight, background.height);
		
		Assert.areEqual (offsetX + 10, logo.x);
		Assert.areEqual (offsetY + 10, logo.y);
		Assert.areEqual (scaleWidth - layoutWidth + 40, logo.width);
		Assert.areEqual (scaleHeight - layoutHeight + 25, logo.height);
		
		Assert.areEqual (offsetX + layoutWidth - 60, sidebar.x);
		Assert.areEqual (offsetY, sidebar.y);
		Assert.areEqual (scaleWidth - layoutWidth + 60, sidebar.width);
		Assert.areEqual (scaleHeight - 40, sidebar.height);
		
		Assert.areEqual (offsetX, footer.x);
		Assert.areEqual (offsetY + layoutHeight - 40, footer.y);
		Assert.areEqual (scaleWidth, footer.width);
		Assert.areEqual (scaleHeight - layoutHeight + 40, footer.height);
		
	}
	
	
	@Test public function testTopLeft ():Void {
		
		testLayout (TOP, LEFT);
		
	}
	
	
	@Test public function testTopCenter ():Void {
		
		testLayout (TOP, CENTER);
		
	}
	
	
	@Test public function testTopRight ():Void {
		
		testLayout (TOP, RIGHT);
		
	}
	
	
	@Test public function testCenterLeft ():Void {
		
		testLayout (CENTER, LEFT);
		
	}
	
	
	@Test public function testCenterCenter ():Void {
		
		testLayout (CENTER, CENTER);
		
	}
	
	
	@Test public function testCenterRight ():Void {
		
		testLayout (CENTER, RIGHT);
		
	}
	
	
	@Test public function testBottomLeft ():Void {
		
		testLayout (BOTTOM, LEFT);
		
	}
	
	
	@Test public function testBottomCenter ():Void {
		
		testLayout (BOTTOM, CENTER);
		
	}
	
	
	@Test public function testBottomRight ():Void {
		
		testLayout (BOTTOM, RIGHT);
		
	}
	
	
	@Test public function testStretchLeft ():Void {
		
		testLayout (STRETCH, LEFT);
		
	}
	
	
	@Test public function testStretchCenter ():Void {
		
		testLayout (STRETCH, CENTER);
		
	}
	
	
	@Test public function testStretchRight ():Void {
		
		testLayout (STRETCH, RIGHT);
		
	}
	
	
	@Test public function testStretchStretch ():Void {
		
		testLayout (STRETCH, STRETCH);
		
	}
	
	
	@Test public function testTopStretch ():Void {
		
		testLayout (TOP, STRETCH);
		
	}
	
	
	@Test public function testCenterStretch ():Void {
		
		testLayout (CENTER, STRETCH);
		
	}
	
	
	@Test public function testBottomStretch ():Void {
		
		testLayout (BOTTOM, STRETCH);
		
	}
	
	
	@Test public function testNoneLeft ():Void {
		
		testLayout (NONE, LEFT);
		
	}
	
	
	@Test public function testNoneCenter ():Void {
		
		testLayout (NONE, CENTER);
		
	}
	
	
	@Test public function testNoneRight ():Void {
		
		testLayout (NONE, RIGHT);
		
	}
	
	
	@Test public function testNoneStretch ():Void {
		
		testLayout (NONE, STRETCH);
		
	}
	
	
	@Test public function testNoneNone ():Void {
		
		testLayout (NONE, NONE);
		
	}
	
	
	@Test public function testStretchNone ():Void {
		
		testLayout (STRETCH, NONE);
		
	}
	
	
	@Test public function testTopNone ():Void {
		
		testLayout (TOP, NONE);
		
	}
	
	
	@Test public function testCenterNone ():Void {
		
		testLayout (CENTER, NONE);
		
	}
	
	
	@Test public function testBottomNone ():Void {
		
		testLayout (BOTTOM, NONE);
		
	}
	
	
}


private class DisplayObject {
	
	
	public var x:Float;
	public var y:Float;
	public var width:Float;
	public var height:Float;
	
	
	public function new () {
		
		
		
	}
	
	
}