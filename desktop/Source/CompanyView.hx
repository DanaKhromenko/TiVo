package;

import feathers.controls.Label;
import feathers.controls.LayoutGroup;
import feathers.controls.navigators.TabItem;
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
	static inline var LOGO_HEIGHT:Int = 100;
    static inline var GAP_BETWEEN_FIELDS:Int = 10;

	public var container:LayoutGroup;

	private var company:Company;

	public function new(company:Company, tabsContainer:LayoutGroup) {
		super();

		var container = new LayoutGroup();
		tabsContainer.addChild(container);
		this.container = container;

		this.company = company;
		
		printCompanyInfo();
	}

	private function printCompanyInfo() {
		var companyNameLabel = new Label();
		companyNameLabel.text = "Company name: " + company.companyName;
		container.addChild(companyNameLabel);

		var companyDescriptionLabel = new Label();
		companyDescriptionLabel.text = "\nDescription: " + company.description;
		container.addChild(companyDescriptionLabel);

		var companyWebsiteLabel = new Label();
		companyWebsiteLabel.text = "\n\nWebsite: " + company.website;
		container.addChild(companyWebsiteLabel);

		var bitmapData = Assets.getBitmapData(IMG_DIR_PATH + company.imgUri);
		var scaleFactor = LOGO_HEIGHT / bitmapData.height;
		var bitmap = new Bitmap(bitmapData);
		bitmap.x = 50;
        bitmap.y = 50;
		bitmap.scaleX = scaleFactor;
		bitmap.scaleY = scaleFactor;

		container.addChild(bitmap);
	}
}
