package lime.graphics.cairo;


import lime.math.Matrix3;
import lime.math.Vector2;
import lime.system.CFFI;
import lime.system.CFFIPointer;
import lime.text.Glyph;

#if !macro
@:build(lime.system.CFFI.build())
#end


class Cairo {
	
	
	public static var version (get, null):Int;
	public static var versionString (get, null):String;
	
	public var antialias (get, set):CairoAntialias;
	public var currentPoint (get, never):Vector2;
	public var dash (get, set):Array<Float>;
	public var dashCount (get, never):Int;
	public var fillRule (get, set):CairoFillRule;
	public var fontFace (get, set):CairoFontFace;
	public var fontOptions (get, set):CairoFontOptions;
	public var groupTarget (get, never):CairoSurface;
	public var hasCurrentPoint (get, never):Bool;
	public var lineCap (get, set):CairoLineCap;
	public var lineJoin (get, set):CairoLineJoin;
	public var lineWidth (get, set):Float;
	public var matrix (get, set):Matrix3;
	public var miterLimit (get, set):Float;
	public var operator (get, set):CairoOperator;
	public var source (get, set):CairoPattern;
	public var target (get, null):CairoSurface;
	public var tolerance (get, set):Float;
	public var userData:Dynamic;
	
	@:noCompletion private var handle:CFFIPointer;
	
	
	public function new (surface:CairoSurface = null):Void {
		
		if (surface != null) {
			
			#if (lime_cairo && !macro)
			handle = lime_cairo_create (surface);
			#end
			
		}
		
	}
	
	
	public function arc (xc:Float, yc:Float, radius:Float, angle1:Float, angle2:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_arc (handle, xc, yc, radius, angle1, angle2);
		#end
		
	}
	
	
	public function arcNegative (xc:Float, yc:Float, radius:Float, angle1:Float, angle2:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_arc_negative (handle, xc, yc, radius, angle1, angle2);
		#end
		
	}
	
	
	public function clip ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_clip (handle);
		#end
		
	}
	
	
	public function clipExtents (x1:Float, y1:Float, x2:Float, y2:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_clip_extents (handle, x1, y1, x2, y2);
		#end
		
	}
	
	
	public function clipPreserve ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_clip_preserve (handle);
		#end
		
	}
	
	
	public function closePath ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_close_path (handle);
		#end
		
	}
	
	
	public function copyPage ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_copy_page (handle);
		#end
		
	}
	
	
	public function curveTo (x1:Float, y1:Float, x2:Float, y2:Float, x3:Float, y3:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_curve_to (handle, x1, y1, x2, y2, x3, y3);
		#end
		
	}
	
	
	public function fill ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_fill (handle);
		#end
		
	}
	
	
	public function fillExtents (x1:Float, y1:Float, x2:Float, y2:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_fill_extents (handle, x1, y1, x2, y2);
		#end
		
	}
	
	
	public function fillPreserve ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_fill_preserve (handle);
		#end
		
	}
	
	
	public function identityMatrix ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_identity_matrix (handle);
		#end
		
	}
	
	
	public function inClip (x:Float, y:Float):Bool {
		
		#if (lime_cairo && !macro)
		return lime_cairo_in_clip (handle, x, y);
		#else
		return false;
		#end
		
	}
	
	
	public function inFill (x:Float, y:Float):Bool {
		
		#if (lime_cairo && !macro)
		return lime_cairo_in_fill (handle, x, y);
		#else
		return false;
		#end
		
	}
	
	
	public function inStroke (x:Float, y:Float):Bool {
		
		#if (lime_cairo && !macro)
		return lime_cairo_in_stroke (handle, x, y);
		#else
		return false;
		#end
		
	}
	
	
	public function lineTo (x:Float, y:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_line_to (handle, x, y);
		#end
		
	}
	
	
	public function moveTo (x:Float, y:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_move_to (handle, x, y);
		#end
		
	}
	
	
	public function mask (pattern:CairoPattern):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_mask (handle, pattern);
		#end
		
	}
	
	
	public function maskSurface (surface:CairoSurface, x:Float, y:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_mask_surface (handle, surface, x, y);
		#end
		
	}
	
	
	public function newPath ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_new_path (handle);
		#end
		
	}
	
	
	public function paint ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_paint (handle);
		#end
		
	}
	
	
	public function paintWithAlpha (alpha:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_paint_with_alpha (handle, alpha);
		#end
		
	}
	
	
	public function popGroup ():CairoPattern {
		
		#if (lime_cairo && !macro)
		return lime_cairo_pop_group (handle);
		#else
		return null;
		#end
		
	}
	
	
	public function popGroupToSource ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_pop_group_to_source (handle);
		#end
		
	}
	
	
	public function pushGroup ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_push_group (handle);
		#end
		
	}
	
	
	public function pushGroupWithContent (content:CairoContent):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_push_group_with_content (handle, content);
		#end
		
	}
	
	
	private function recreate (surface:CairoSurface):Void {
		
		#if (lime_cairo && !macro)
		handle = lime_cairo_create (surface);
		#end
	}
	
	
	public function rectangle (x:Float, y:Float, width:Float, height:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_rectangle (handle, x, y, width, height);
		#end
		
	}
	
	
	public function relCurveTo (dx1:Float, dy1:Float, dx2:Float, dy2:Float, dx3:Float, dy3:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_rel_curve_to (handle, dx1, dy1, dx2, dy2, dx3, dy3);
		#end
		
	}
	
	
	public function relLineTo (dx:Float, dy:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_rel_line_to (handle, dx, dy);
		#end
		
	}
	
	
	public function relMoveTo (dx:Float, dy:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_rel_move_to (handle, dx, dy);
		#end
		
	}
	
	
	public function resetClip ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_reset_clip (handle);
		#end
		
	}
	
	
	public function restore ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_restore (handle);
		#end
		
	}
	
	
	public function save ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_save (handle);
		#end
		
	}
	
	
	public function setFontSize (size:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_font_size (handle, size);
		#end
		
	}
	
	
	public function setSourceRGB (r:Float, g:Float, b:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_source_rgb (handle, r, g, b);
		#end
		
	}
	
	
	public function setSourceRGBA (r:Float, g:Float, b:Float, a:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_source_rgba (handle, r, g, b, a);
		#end
		
	}
	
	
	public function setSourceSurface (surface:CairoSurface, x:Float, y:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_source_surface (handle, surface, x, y);
		#end
		
	}
	
	
	public function showGlyphs (glyphs:Array<CairoGlyph>):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_show_glyphs (handle, glyphs);
		#end
		
	}
	
	
	public function showPage ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_show_page (handle);
		#end
		
	}
	
	
	public function showText (utf8:String):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_show_text (handle, utf8);
		#end
		
	}
	
	
	public function status ():CairoStatus {
		
		#if (lime_cairo && !macro)
		return lime_cairo_status (handle);
		#else
		return cast 0;
		#end
		
	}
	
	
	public function stroke ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_stroke (handle);
		#end
		
	}
	
	
	public function strokeExtents (x1:Float, y1:Float, x2:Float, y2:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_stroke_extents (handle, x1, y1, x2, y2);
		#end
		
	}
	
	
	public function strokePreserve ():Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_stroke_preserve (handle);
		#end
		
	}
	
	
	public function transform (matrix:Matrix3):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_transform (handle, matrix);
		#end
		
	}
	
	public function rotate (amount:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_rotate (handle, amount);
		#end
		
	}
	
	public function scale (x:Float, y:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_scale (handle, x, y);
		#end
		
	}
	
	
	public function translate (x:Float, y:Float):Void {
		
		#if (lime_cairo && !macro)
		lime_cairo_translate (handle, x, y);
		#end
		
	}
	
	
	
	
	// Get & Set Methods
	
	
	
	
	@:noCompletion private function get_antialias ():CairoAntialias {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_antialias (handle);
		#end
		
		return cast 0;
		
	}
	
	
	@:noCompletion private function set_antialias (value:CairoAntialias):CairoAntialias {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_antialias (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_currentPoint ():Vector2 {
		
		#if (lime_cairo && !macro)
		var vec:Dynamic = lime_cairo_get_current_point (handle);
		return new Vector2 (vec.x, vec.y);
		#end
		
		return null;
		
	}
	
	
	@:noCompletion private function get_dash ():Array<Float> {
		
		#if (lime_cairo && !macro)
		var result:Dynamic = lime_cairo_get_dash (handle);
		return result;
		#end
		
		return [];
		
	}
	
	
	@:noCompletion private function set_dash (value:Array<Float>):Array<Float> {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_dash (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_dashCount ():Int {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_dash_count (handle);
		#end
		
		return 0;
		
	}
	
	
	@:noCompletion private function get_fillRule ():CairoFillRule {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_fill_rule (handle);
		#end
		
		return cast 0;
		
	}
	
	
	@:noCompletion private function set_fillRule (value:CairoFillRule):CairoFillRule {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_fill_rule (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_fontFace ():CairoFontFace {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_font_face (handle);
		#end
		
		return cast 0;
		
	}
	
	
	@:noCompletion private function set_fontFace (value:CairoFontFace):CairoFontFace {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_font_face (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_fontOptions ():CairoFontOptions {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_font_options (handle);
		#else
		return null;
		#end
		
	}
	
	
	@:noCompletion private function set_fontOptions (value:CairoFontOptions):CairoFontOptions {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_font_options (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_groupTarget ():CairoSurface {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_group_target (handle);
		#else
		return cast 0;
		#end
		
	}
	
	
	@:noCompletion private function get_hasCurrentPoint ():Bool {
		
		#if (lime_cairo && !macro)
		return lime_cairo_has_current_point (handle);
		#end
		
		return false;
		
	}
	
	
	@:noCompletion private function get_lineCap ():CairoLineCap {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_line_cap (handle);
		#end
		
		return 0;
		
	}
	
	
	@:noCompletion private function set_lineCap (value:CairoLineCap):CairoLineCap {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_line_cap (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_lineJoin ():CairoLineJoin {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_line_join (handle);
		#end
		
		return 0;
		
	}
	
	
	@:noCompletion private function set_lineJoin (value:CairoLineJoin):CairoLineJoin {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_line_join (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_lineWidth ():Float {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_line_width (handle);
		#end
		
		return 0;
		
	}
	
	
	@:noCompletion private function set_lineWidth (value:Float):Float {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_line_width (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_matrix ():Matrix3 {
		
		#if (lime_cairo && !macro)
		var m:Dynamic = lime_cairo_get_matrix (handle);
		return new Matrix3 (m.a, m.b, m.c, m.d, m.tx, m.ty);
		#end
		
		return null;
		
	}
	
	
	@:noCompletion private function set_matrix (value:Matrix3):Matrix3 {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_matrix (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_miterLimit ():Float {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_miter_limit (handle);
		#end
		
		return 0;
		
	}
	
	
	@:noCompletion private function set_miterLimit (value:Float):Float {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_miter_limit (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_operator ():CairoOperator {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_operator (handle);
		#end
		
		return cast 0;
		
	}
	
	
	@:noCompletion private function set_operator (value:CairoOperator):CairoOperator {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_operator (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_source ():CairoPattern {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_source (handle);
		#end
		
		return cast 0;
		
	}
	
	
	@:noCompletion private function set_source (value:CairoPattern):CairoPattern {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_source (handle, value);
		#end
		
		return value;
		
	}
	
	
	@:noCompletion private function get_target ():CairoSurface {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_target (handle);
		#else
		return cast 0;
		#end
		
	}
	
	
	@:noCompletion private function get_tolerance ():Float {
		
		#if (lime_cairo && !macro)
		return lime_cairo_get_tolerance (handle);
		#else
		return 0;
		#end
		
	}
	
	
	@:noCompletion private function set_tolerance (value:Float):Float {
		
		#if (lime_cairo && !macro)
		lime_cairo_set_tolerance (handle, value);
		#end
		
		return value;
		
	}
	
	
	private static function get_version ():Int {
		
		#if (lime_cairo && !macro)
		return lime_cairo_version ();
		#else
		return 0;
		#end
		
	}
	
	
	private static function get_versionString ():String {
		
		#if (lime_cairo && !macro)
		return lime_cairo_version_string ();
		#else
		return "";
		#end
		
	}
	
	
	
	
	// Native Methods
	
	
	
	
	#if (lime_cairo && !macro)
	@:cffi private static function lime_cairo_arc (handle:CFFIPointer, xc:Float, yc:Float, radius:Float, angle1:Float, angle2:Float):Void;
	@:cffi private static function lime_cairo_arc_negative (handle:CFFIPointer, xc:Float, yc:Float, radius:Float, angle1:Float, angle2:Float):Void;
	@:cffi private static function lime_cairo_clip (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_clip_preserve (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_clip_extents (handle:CFFIPointer, x1:Float, y1:Float, x2:Float, y2:Float):Void;
	@:cffi private static function lime_cairo_close_path (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_copy_page (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_create (handle:CFFIPointer):Dynamic;
	@:cffi private static function lime_cairo_curve_to (handle:CFFIPointer, x1:Float, y1:Float, x2:Float, y2:Float, x3:Float, y3:Float):Void;
	@:cffi private static function lime_cairo_fill (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_fill_extents (handle:CFFIPointer, x1:Float, y1:Float, x2:Float, y2:Float):Void;
	@:cffi private static function lime_cairo_fill_preserve (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_get_antialias (handle:CFFIPointer):Int;
	@:cffi private static function lime_cairo_get_current_point (handle:CFFIPointer):Dynamic;
	@:cffi private static function lime_cairo_get_dash (handle:CFFIPointer):Dynamic;
	@:cffi private static function lime_cairo_get_dash_count (handle:CFFIPointer):Int;
	@:cffi private static function lime_cairo_get_fill_rule (handle:CFFIPointer):Int;
	@:cffi private static function lime_cairo_get_font_face (handle:CFFIPointer):CFFIPointer;
	@:cffi private static function lime_cairo_get_font_options (handle:CFFIPointer):CFFIPointer;
	@:cffi private static function lime_cairo_get_group_target (handle:CFFIPointer):CFFIPointer;
	@:cffi private static function lime_cairo_get_line_cap (handle:CFFIPointer):Int;
	@:cffi private static function lime_cairo_get_line_join (handle:CFFIPointer):Int;
	@:cffi private static function lime_cairo_get_line_width (handle:CFFIPointer):Float;
	@:cffi private static function lime_cairo_get_matrix (handle:CFFIPointer):Dynamic;
	@:cffi private static function lime_cairo_get_miter_limit (handle:CFFIPointer):Float;
	@:cffi private static function lime_cairo_get_operator (handle:CFFIPointer):Int;
	@:cffi private static function lime_cairo_get_source (handle:CFFIPointer):CFFIPointer;
	@:cffi private static function lime_cairo_get_target (handle:CFFIPointer):CFFIPointer;
	@:cffi private static function lime_cairo_get_tolerance (handle:CFFIPointer):Float;
	@:cffi private static function lime_cairo_has_current_point (handle:CFFIPointer):Bool;
	@:cffi private static function lime_cairo_identity_matrix (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_in_clip (handle:CFFIPointer, x:Float, y:Float):Bool;
	@:cffi private static function lime_cairo_in_fill (handle:CFFIPointer, x:Float, y:Float):Bool;
	@:cffi private static function lime_cairo_in_stroke (handle:CFFIPointer, x:Float, y:Float):Bool;
	@:cffi private static function lime_cairo_line_to (handle:CFFIPointer, x:Float, y:Float):Void;
	@:cffi private static function lime_cairo_mask (handle:CFFIPointer, pattern:CFFIPointer):Void;
	@:cffi private static function lime_cairo_mask_surface (handle:CFFIPointer, surface:CFFIPointer, x:Float, y:Float):Void;
	@:cffi private static function lime_cairo_move_to (handle:CFFIPointer, x:Float, y:Float):Void;
	@:cffi private static function lime_cairo_new_path (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_paint (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_paint_with_alpha (handle:CFFIPointer, alpha:Float):Void;
	@:cffi private static function lime_cairo_pop_group (handle:CFFIPointer):CFFIPointer;
	@:cffi private static function lime_cairo_pop_group_to_source (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_push_group (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_push_group_with_content (handle:CFFIPointer, content:Int):Void;
	@:cffi private static function lime_cairo_rectangle (handle:CFFIPointer, x:Float, y:Float, width:Float, height:Float):Void;
	@:cffi private static function lime_cairo_rel_curve_to (handle:CFFIPointer, dx1:Float, dy1:Float, dx2:Float, dy2:Float, dx3:Float, dy3:Float):Void;
	@:cffi private static function lime_cairo_rel_line_to (handle:CFFIPointer, dx:Float, dy:Float):Void;
	@:cffi private static function lime_cairo_rel_move_to (handle:CFFIPointer, dx:Float, dy:Float):Void;
	@:cffi private static function lime_cairo_reset_clip (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_restore (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_rotate (handle:CFFIPointer, amount:Float):Void;
	@:cffi private static function lime_cairo_save (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_scale (handle:CFFIPointer, x:Float, y:Float):Void;
	@:cffi private static function lime_cairo_set_antialias (handle:CFFIPointer, cap:Int):Void;
	@:cffi private static function lime_cairo_set_dash (handle:CFFIPointer, dash:Dynamic):Void;
	@:cffi private static function lime_cairo_set_fill_rule (handle:CFFIPointer, cap:Int):Void;
	@:cffi private static function lime_cairo_set_font_face (handle:CFFIPointer, face:CFFIPointer):Void;
	@:cffi private static function lime_cairo_set_font_options (handle:CFFIPointer, options:CFFIPointer):Void;
	@:cffi private static function lime_cairo_set_font_size (handle:CFFIPointer, size:Float):Void;
	@:cffi private static function lime_cairo_set_line_cap (handle:CFFIPointer, cap:Int):Void;
	@:cffi private static function lime_cairo_set_line_join (handle:CFFIPointer, join:Int):Void;
	@:cffi private static function lime_cairo_set_line_width (handle:CFFIPointer, width:Float):Void;
	@:cffi private static function lime_cairo_set_matrix (handle:CFFIPointer, matrix:Dynamic):Void;
	@:cffi private static function lime_cairo_set_miter_limit (handle:CFFIPointer, miterLimit:Float):Void;
	@:cffi private static function lime_cairo_set_operator (handle:CFFIPointer, op:Int):Void;
	@:cffi private static function lime_cairo_set_source (handle:CFFIPointer, pattern:CFFIPointer):Void;
	@:cffi private static function lime_cairo_set_source_rgb (handle:CFFIPointer, r:Float, g:Float, b:Float):Void;
	@:cffi private static function lime_cairo_set_source_rgba (handle:CFFIPointer, r:Float, g:Float, b:Float, a:Float):Void;
	@:cffi private static function lime_cairo_set_source_surface (handle:CFFIPointer, surface:CFFIPointer, x:Float, y:Float):Void;
	@:cffi private static function lime_cairo_set_tolerance (handle:CFFIPointer, tolerance:Float):Void;
	@:cffi private static function lime_cairo_show_glyphs (handle:CFFIPointer, glyphs:Dynamic):Void;
	@:cffi private static function lime_cairo_show_page (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_show_text (handle:CFFIPointer, text:String):Void;
	@:cffi private static function lime_cairo_status (handle:CFFIPointer):Int;
	@:cffi private static function lime_cairo_stroke (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_stroke_extents (handle:CFFIPointer, x1:Float, y1:Float, x2:Float, y2:Float):Void;
	@:cffi private static function lime_cairo_stroke_preserve (handle:CFFIPointer):Void;
	@:cffi private static function lime_cairo_transform (handle:CFFIPointer, matrix:Dynamic):Void;
	@:cffi private static function lime_cairo_translate (handle:CFFIPointer, x:Float, y:Float):Void;
	@:cffi private static function lime_cairo_version ():Int;
	@:cffi private static function lime_cairo_version_string ():String;
	#end
	
	
}