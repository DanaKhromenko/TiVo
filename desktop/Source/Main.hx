package;

import feathers.controls.Label;
import feathers.controls.LayoutGroup;
import feathers.controls.navigators.TabItem;
import feathers.controls.navigators.TabNavigator;
import feathers.data.ArrayCollection;
import haxe.xml.Parser;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.DisplayObject;
import openfl.display.Sprite;

class Main extends Sprite {
	static inline var FILES_DIR_PATH:String = "assets/tabs/";
	static inline var TXT_FILE_PATH:String = FILES_DIR_PATH + "tabs.txt";
	static inline var XML_FILE_PATH:String = FILES_DIR_PATH + "tabs.xml";

	public function new() {
		super();

		var navigator:TabNavigator = new TabNavigator();
		addChild(navigator);

		var tabCollection:ArrayCollection<TabItem> = new ArrayCollection<TabItem>();
		tabCollection.addAll(loadTabsFromXmlFile());
		tabCollection.addAll(loadTabsFromTxtFile());
		navigator.dataProvider = tabCollection;
	}

	private function loadTabsFromXmlFile():ArrayCollection<TabItem> {
		var tabs = new ArrayCollection<TabItem>();
		try {
			var fileContent:String = Assets.getText(XML_FILE_PATH);
			var xmlData:Xml = Parser.parse(fileContent);

			for (elements in xmlData.firstElement().elementsNamed("tab")) {
				var companyName = getStringValueByName(elements, "companyName");
				var companyLayoutGroup = new CompanyLayoutGroupBuilder().withCompanyName(companyName)
					.withDescription(getStringValueByName(elements, "description"))
					.withWebsite(getStringValueByName(elements, "website"))
					.withImgUri(getStringValueByName(elements, "imgUri"))
					.build();
				tabs.add(TabItem.withDisplayObject(companyName, companyLayoutGroup));
			}
		} catch (e:Dynamic) {
			trace("Cannot parse XML-file: " + e);
		}
		return tabs;
	}

	private function loadTabsFromTxtFile():ArrayCollection<TabItem> {
		var tabs = new ArrayCollection<TabItem>();
		try {
			var fileContent:String = Assets.getText(TXT_FILE_PATH);
			fileContent = StringTools.trim(fileContent);

			for (line in fileContent.split('\n')) {
				var companyName = getAttributeValueFromLine(line, ~/companyName: (.*?) \|/);
				var companyLayoutGroup = new CompanyLayoutGroupBuilder().withCompanyName(companyName)
					.withDescription(getAttributeValueFromLine(line, ~/description: (.*?) \|/))
					.withWebsite(getAttributeValueFromLine(line, ~/website: (.*?) \|/))
					.withImgUri(getAttributeValueFromLine(line, ~/imgUri: (.*?) \}/))
					.build();

				tabs.add(TabItem.withDisplayObject(companyName, companyLayoutGroup));
			}
		} catch (e:Dynamic) {
			trace("Cannot parse txt-file: " + e);
		}
		return tabs;
	}

	private function getStringValueByName(elements:Xml, name:String):String {
		for (element in elements.elementsNamed(name)) {
			return element.firstChild().nodeValue;
		}
		return "";
	}

	private function getAttributeValueFromLine(line:String, regexp:EReg):String {
		return (regexp.match(line) ? regexp.matched(1) : "");
	}
}

class CompanyLayoutGroupBuilder extends LayoutGroup {
	private var companyName:String;
	private var description:String;
	private var website:String;
	private var imgUri:String;

	public function new() {
		super();
	}

	public function withCompanyName(companyName:String):CompanyLayoutGroupBuilder {
		this.companyName = companyName;
		return this;
	}

	public function withDescription(description:String):CompanyLayoutGroupBuilder {
		this.description = description;
		return this;
	}

	public function withWebsite(website:String):CompanyLayoutGroupBuilder {
		this.website = website;
		return this;
	}

	public function withImgUri(imgUri:String):CompanyLayoutGroupBuilder {
		this.imgUri = imgUri;
		return this;
	}

	public function build():CompanyLayoutGroup {
		return new CompanyLayoutGroup(companyName, description, website, imgUri);
	}
}

class CompanyLayoutGroup extends LayoutGroup {
	static inline var IMG_DIR_PATH:String = "assets/img/";
	static inline var LOGO_HEIGHT:Int = 200;

	private var companyName:String;
	private var description:String;
	private var website:String;
	private var imgUri:String;

	public function new(companyName:String, description:String, website:String, imgUri:String) {
		super();

		this.companyName = companyName;
		this.description = description;
		this.website = website;
		this.imgUri = imgUri;

		updateForm();
	}

	private function updateForm() {
		// TODO: simplify lines print (\n\n)

		var companyNameLabel = new Label();
		companyNameLabel.text = "Company name: " + companyName;
		addChild(companyNameLabel);

		var companyDescriptionLabel = new Label();
		companyDescriptionLabel.text = "\nDescription: " + description;
		addChild(companyDescriptionLabel);

		var companyWebsiteLabel = new Label();
		companyWebsiteLabel.text = "\n\nWebsite: " + website;
		addChild(companyWebsiteLabel);

		var bitmapData = Assets.getBitmapData(IMG_DIR_PATH + imgUri);
		var scaleFactor = LOGO_HEIGHT / bitmapData.height;
		var bitmap = new Bitmap(bitmapData);
		bitmap.x = 100;
        bitmap.y = 200;
		bitmap.scaleX = scaleFactor;
		bitmap.scaleY = scaleFactor;

		addChild(bitmap);
	}
}
