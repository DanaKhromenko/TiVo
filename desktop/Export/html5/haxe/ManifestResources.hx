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

		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Fcompanies%2Fcompanies.xmly4:sizei504y4:typey4:TEXTy2:idR1y7:preloadtgoR0y35:assets%2Fimg%2Fcompanies%2Ftivo.pngR2i71730R3y5:IMAGER5R7R6tgoR0y34:assets%2Fimg%2Fcompanies%2Ftpe.jpgR2i5147R3R8R5R9R6tgoR0y47:assets%2Fimg%2Fshows%2Fdesperate-housewives.jpgR2i122952R3R8R5R10R6tgoR0y35:assets%2Fimg%2Fshows%2Fdr-house.jpgR2i523400R3R8R5R11R6tgoR0y40:assets%2Fimg%2Fshows%2Fgravity-falls.jpgR2i346909R3R8R5R12R6tgoR0y39:assets%2Fimg%2Fshows%2Fhell-kitchen.jpgR2i1571740R3R8R5R13R6tgoR0y36:assets%2Fimg%2Fshows%2Finsidious.jpgR2i105400R3R8R5R14R6tgoR0y31:assets%2Fimg%2Fshows%2Fleon.jpgR2i2211479R3R8R5R15R6tgoR0y34:assets%2Fimg%2Fshows%2Fmatilda.jpgR2i71555R3R8R5R16R6tgoR0y40:assets%2Fimg%2Fshows%2Fmortal-combat.jpgR2i1565309R3R8R5R17R6tgoR0y43:assets%2Fimg%2Fshows%2Fphineas-and-ferb.jpgR2i404628R3R8R5R18R6tgoR0y39:assets%2Fimg%2Fshows%2Fpulp-fiction.jpgR2i1039506R3R8R5R19R6tgoR0y46:assets%2Fimg%2Fshows%2Fshakespeare-in-love.jpgR2i368123R3R8R5R20R6tgoR0y34:assets%2Fimg%2Fshows%2Fshining.jpgR2i724987R3R8R5R21R6tgoR0y33:assets%2Fimg%2Fshows%2Fsnatch.jpgR2i656451R3R8R5R22R6tgoR0y59:assets%2Fimg%2Fshows%2Fthe-hobbit-an-unexpected-journey.jpgR2i86592R3R8R5R23R6tgoR0y67:assets%2Fimg%2Fshows%2Fthe-hobbit-the-battle-of-the-five-armies.jpgR2i160288R3R8R5R24R6tgoR0y61:assets%2Fimg%2Fshows%2Fthe-hobbit-the-desolation-of-smaug.jpgR2i21069R3R8R5R25R6tgoR0y29:assets%2Fimg%2Fwallpapers.jpgR2i32876R3R8R5R26R6tgoR0y26:assets%2Fshows%2Fshows.txtR2i1168R3R4R5R27R6tgoR0y26:assets%2Fshows%2Fshows.xmlR2i7643R3R4R5R28R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
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

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_companies_companies_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_companies_tivo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_companies_tpe_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_desperate_housewives_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_dr_house_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_gravity_falls_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_hell_kitchen_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_insidious_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_leon_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_matilda_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_mortal_combat_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_phineas_and_ferb_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_pulp_fiction_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_shakespeare_in_love_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_shining_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_snatch_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_the_hobbit_an_unexpected_journey_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_the_hobbit_the_battle_of_the_five_armies_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_shows_the_hobbit_the_desolation_of_smaug_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_img_wallpapers_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shows_shows_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shows_shows_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("Assets/companies/companies.xml") @:noCompletion #if display private #end class __ASSET__assets_companies_companies_xml extends haxe.io.Bytes {}
@:keep @:image("Assets/img/companies/tivo.png") @:noCompletion #if display private #end class __ASSET__assets_img_companies_tivo_png extends lime.graphics.Image {}
@:keep @:image("Assets/img/companies/tpe.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_companies_tpe_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/desperate-housewives.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_desperate_housewives_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/dr-house.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_dr_house_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/gravity-falls.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_gravity_falls_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/hell-kitchen.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_hell_kitchen_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/insidious.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_insidious_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/leon.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_leon_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/matilda.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_matilda_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/mortal-combat.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_mortal_combat_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/phineas-and-ferb.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_phineas_and_ferb_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/pulp-fiction.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_pulp_fiction_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/shakespeare-in-love.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_shakespeare_in_love_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/shining.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_shining_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/snatch.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_snatch_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/the-hobbit-an-unexpected-journey.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_the_hobbit_an_unexpected_journey_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/the-hobbit-the-battle-of-the-five-armies.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_the_hobbit_the_battle_of_the_five_armies_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/shows/the-hobbit-the-desolation-of-smaug.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_shows_the_hobbit_the_desolation_of_smaug_jpg extends lime.graphics.Image {}
@:keep @:image("Assets/img/wallpapers.jpg") @:noCompletion #if display private #end class __ASSET__assets_img_wallpapers_jpg extends lime.graphics.Image {}
@:keep @:file("Assets/shows/shows.txt") @:noCompletion #if display private #end class __ASSET__assets_shows_shows_txt extends haxe.io.Bytes {}
@:keep @:file("Assets/shows/shows.xml") @:noCompletion #if display private #end class __ASSET__assets_shows_shows_xml extends haxe.io.Bytes {}
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