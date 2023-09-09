package;

import feathers.controls.LayoutGroup;
import feathers.controls.navigators.TabItem;
import feathers.controls.navigators.TabNavigator;
import feathers.data.ArrayCollection;
import openfl.display.Sprite;
import openfl.events.Event;
import Company;
import CompanyView;
import CompaniesXmlParser;
import TVShow;
import TVShowsTxtParser;
import TVShowsView;
import TVShowsXmlParser;

class Main extends Sprite {
	static inline var XML_COMPANIES_FILE_PATH:String = "assets/companies/companies.xml";
	static inline var TXT_TV_SHOWS_FILE_PATH:String = "assets/shows/shows.txt";
	static inline var XML_TV_SHOWS_FILE_PATH:String = "assets/shows/shows.xml";

	static inline var TV_SHOW_CELLS_IN_ROW:Int = 4;
	static inline var TV_SHOW_CELL_WIDTH:Int = 380;
	static inline var TV_SHOW_CELL_HEIGHT:Int = 60;
	static inline var TV_SHOW_CELLS_START_X:Int = 10;
	static inline var TV_SHOW_CELLS_START_Y:Int = 400;
	static inline var TV_SHOW_PREVIEW_WIDTH:Int = 1900;
	static inline var TV_SHOW_PREVIEW_HEIGHT:Int = 400;
	static inline var TV_SHOW_PREVIEW_START_X:Int = 10;
	static inline var TV_SHOW_PREVIEW_START_Y:Int = 40;

	private var rootContainer:LayoutGroup;
	private var navigator:TabNavigator;
	private var tabsContainers = new ArrayCollection<LayoutGroup>();

	public function new() {
		super();

		rootContainer = new LayoutGroup();
		addChild(rootContainer);

		var bgSprite:Sprite = new Sprite();
		bgSprite.graphics.beginFill(0x2A2A2A);
		bgSprite.graphics.drawRect(0, 0, stage.stageWidth, stage.stageHeight);
		bgSprite.graphics.endFill();
		rootContainer.addChild(bgSprite);

		navigator = new TabNavigator();
		navigator.dataProvider = getAllTabs();
		navigator.addEventListener(Event.CHANGE, tabNavigatorChangeHandler);
		rootContainer.addChild(navigator);
	}

	private function getAllTabs():ArrayCollection<TabItem> {
		var tabs = new ArrayCollection<TabItem>();

		// 1.1. Get all TV shows
		var tvShows:ArrayCollection<TVShow> = new ArrayCollection<TVShow>();

		var tvShowsXmlParser = new TVShowsXmlParser(XML_TV_SHOWS_FILE_PATH);
		tvShows.addAll(tvShowsXmlParser.getTVShows());

		var tvShowsTxtParser = new TVShowsTxtParser(TXT_TV_SHOWS_FILE_PATH);
		tvShows.addAll(tvShowsTxtParser.getTVShows());

		// 1.2. Get tab for the TV shows
		var tabDto:TabDto = TVShowsView.getTVShowsTabDto(tvShows, rootContainer, TV_SHOW_CELLS_IN_ROW, TV_SHOW_CELL_WIDTH, TV_SHOW_CELL_HEIGHT,
			TV_SHOW_CELLS_START_X, TV_SHOW_CELLS_START_Y, TV_SHOW_PREVIEW_WIDTH, TV_SHOW_PREVIEW_HEIGHT, TV_SHOW_PREVIEW_START_X, TV_SHOW_PREVIEW_START_Y);

		// 1.3. Add tab with the TV shows
		tabs.add(tabDto.tabItem);
		tabsContainers.add(tabDto.container);

		// 2.1. Get all companies
		var companiesXmlParser = new CompaniesXmlParser(XML_COMPANIES_FILE_PATH);
		var companies:ArrayCollection<Company> = companiesXmlParser.getCompanies();

		for (i in 0...companies.length) {
			// 2.2. Get tabs for the companies
			var company = companies.get(i);
			var tabDto:TabDto = CompanyView.getCompanyTabDto(company, rootContainer);

			// 2.3. Add tabs with the companies
			tabs.add(tabDto.tabItem);
			tabsContainers.add(tabDto.container);
		}

		return tabs;
	}

	private function tabNavigatorChangeHandler(event:Event):Void {
		var activeTabId:Int = Std.parseInt(this.navigator.activeItemID);

		for (i in 0...tabsContainers.length) {
			var tabContainer = tabsContainers.get(i);
			tabContainer.visible = (i == activeTabId);
		}
	}
}
