package;

import feathers.controls.Label;
import feathers.controls.LayoutGroup;
import feathers.controls.navigators.TabItem;
import feathers.text.TextFormat;
import feathers.data.ArrayCollection;
import openfl.Assets;
import openfl.display.Bitmap;
import Company;
import TabDto;

class CompanyView {
	public static function getCompanyTabDto(company:Company, container:LayoutGroup):TabDto {
		var companyLayoutGroup = new CompanyLayoutGroup(company, container);
		var companyTab = TabItem.withDisplayObject(company.companyName, companyLayoutGroup);
		return new TabDto(companyTab, companyLayoutGroup.container);
	}
}

class CompanyLayoutGroup extends LayoutGroup {
	static inline var IMG_DIR_PATH:String = "assets/img/companies/";
	static inline var LOGO_HEIGHT:Int = 200;
	static inline var GAP_BETWEEN_FIELDS:Int = 10;
	static inline var LEFT_PADDING:Int = 10;

	private static var keyTextFormat:TextFormat = new TextFormat("Helvetica", 18, 0xc4c5c6);
	private static var valueTextFormat:TextFormat = new TextFormat("Helvetica", 18, 0xfcfcfc);

	public var container:LayoutGroup;

	private var company:Company;
	private var labelY:Int = 40;
	private var labelHeight:Int = 40;
	private var labelWidth:Int = 160;

	public function new(company:Company, tabsContainer:LayoutGroup) {
		super();

		var container = new LayoutGroup();
		tabsContainer.addChild(container);
		this.container = container;

		this.company = company;

		printCompanyInfo();
	}

	private function printCompanyInfo() {
		addLabel("Company name", company.companyName);
		addLabel("Description", company.description);
		addLabel("Website", company.website);
		
		var bitmapData = Assets.getBitmapData(IMG_DIR_PATH + company.imgUri);
		var scaleFactor = LOGO_HEIGHT / bitmapData.height;
		var bitmap = new Bitmap(bitmapData);
		bitmap.x = LEFT_PADDING;
		bitmap.y = labelY;
		bitmap.scaleX = scaleFactor;
		bitmap.scaleY = scaleFactor;
		container.addChild(bitmap);

		labelY += Math.round(bitmap.height);
	}

	private function addLabel(key:String, value:String) {
		var labelKey = new Label();
		labelKey.text = key + ": ";
		labelKey.textFormat = keyTextFormat;
		labelKey.x = LEFT_PADDING;
		labelKey.y = labelY;
		labelKey.height = labelHeight;
		labelKey.width = labelWidth;
		container.addChild(labelKey);

		var labelValue = new Label();
		labelValue.text = value;
		labelValue.textFormat = valueTextFormat;
		labelValue.x = LEFT_PADDING + labelWidth;
		labelValue.y = labelY;
		labelValue.height = labelHeight;
		container.addChild(labelValue);

		labelY += labelHeight;
	}
}
