package;

import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy25:assets%2Fimg%2Fgithub.pngy4:sizei29486y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y23:assets%2Fimg%2Ftivo.pngR2i72178R3R4R5R7R6tgoR0y22:assets%2Fimg%2Ftpe.jpgR2i5147R3R4R5R8R6tgoR0y24:assets%2Fimg%2Fxperi.jpgR2i75035R3R4R5R9R6tgoR0y24:assets%2Ftabs%2Ftabs.txtR2i240R3y4:TEXTR5R10R6tgoR0y24:assets%2Ftabs%2Ftabs.xmlR2i478R3R11R5R12R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_github_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_tivo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_tpe_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_xperi_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_tabs_tabs_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_tabs_tabs_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:image("Assets/img/github.png") @:noCompletion #if display private #end class __ASSET__assets_img_github_png extends lime.graphics.Image {}
@:keep @:image("Assets/img/tivo.png") @:noCompletion #if display private #end class __ASSET__assets_img_tivo_png extends lime.graphics.Image {}
@:keep @:image("Assets/img/tpe.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_tpe_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/xperi.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_xperi_jpg extends lime.graphics.Image {}
@:keep @:file("Assets/tabs/tabs.txt") @:noCompletion #if display private #end class __ASSET__assets_tabs_tabs_txt extends haxe.io.Bytes {}
@:keep @:file("Assets/tabs/tabs.xml") @:noCompletion #if display private #end class __ASSET__assets_tabs_tabs_xml extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)

#if html5

#else

#end

#end
#end

#end

#end