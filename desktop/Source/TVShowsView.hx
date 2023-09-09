package;

import feathers.controls.Button;
import feathers.controls.LayoutGroup;
import feathers.controls.navigators.TabItem;
import feathers.data.ArrayCollection;
import feathers.events.TriggerEvent;
import openfl.Assets;
import openfl.display.Bitmap;
import TabDto;

class TVShowsView {
	public static function getTVShowsTabDto(tvShows:ArrayCollection<TVShow>, container:LayoutGroup, cellsInRow:Int, cellWidth:Int, cellHeight:Int, startX:Int,
			startY:Int, previewWidth:Int, previewHeight:Int, previewX:Int, previewY:Int) :TabDto {
		var tvShowsLayoutGroup = new TVShowsLayoutGroup(tvShows, container, cellsInRow, cellWidth, cellHeight, startX, startY, previewWidth, previewHeight,
			previewX, previewY);
		var tvShowsTab = TabItem.withDisplayObject("TV Shows", tvShowsLayoutGroup);
		return new TabDto(tvShowsTab, tvShowsLayoutGroup.container);
	}
}

class TVShowsLayoutGroup extends LayoutGroup {
	static inline var IMG_DIR_PATH:String = "assets/img/shows/";

	public var container:LayoutGroup;

	private var tvShows:ArrayCollection<TVShow>;
	private var cellsInRow:Int;
	private var cellWidth:Int;
	private var cellHeight:Int;
	private var startX:Int;
	private var startY:Int;
	private var previewWidth:Int;
	private var previewHeight:Int;
	private var previewX:Int;
	private var previewY:Int;

	private var activePreviewIndex:Int;

	public function new(tvShows:ArrayCollection<TVShow>, tabsContainer:LayoutGroup, cellsInRow:Int, cellWidth:Int, cellHeight:Int, startX:Int, startY:Int,
			previewWidth:Int, previewHeight:Int, previewX:Int, previewY:Int) {
		super();

		var container = new LayoutGroup();
		tabsContainer.addChild(container);

		this.tvShows = tvShows;
		this.container = container;
		this.cellsInRow = cellsInRow;
		this.cellWidth = cellWidth;
		this.cellHeight = cellHeight;
		this.startX = startX;
		this.startY = startY;
		this.previewWidth = previewWidth;
		this.previewHeight = previewHeight;
		this.previewX = previewX;
		this.previewY = previewY;

		printTVShowsGrid();
	}

	private function printTVShowsGrid() {
		var rowNumber = 1;
		var columnNumber = 0;

		for (i in 0...tvShows.length) {
			if (columnNumber >= cellsInRow) {
				columnNumber = 0;
				rowNumber++;
			}

			var x = startX + columnNumber * cellWidth;
			var y = startY + rowNumber * cellHeight;
			columnNumber++;

			var tvShow = tvShows.get(i);
			drawCell(tvShow, x, y);
		};
	}

	private function drawCell(tvShow:TVShow, x:Int, y:Int) {
		var imgPath = IMG_DIR_PATH + tvShow.imgName;

		var button = new Button();
		button.text = tvShow.showName;
		button.x = x;
		button.y = y;
		button.width = cellWidth;
		button.height = cellHeight;

		button.addEventListener(TriggerEvent.TRIGGER, (event) -> {
			if (activePreviewIndex >= 0) {
				container.removeChildAt(container.numChildren - 1);
				activePreviewIndex = -1;
			}
			
			var bitmapData = Assets.getBitmapData(imgPath);
			var bitmap = new Bitmap(bitmapData);
			bitmap.x = previewX;
			bitmap.y = previewY;
			var scaleFactor = previewHeight / bitmapData.height;
			bitmap.scaleX = scaleFactor;
			bitmap.scaleY = scaleFactor;

			container.addChild(bitmap);
			activePreviewIndex = container.numChildren - 1;
		});

		var bitmapData = Assets.getBitmapData(imgPath);
		var icon = new Bitmap(Assets.getBitmapData(imgPath));
		icon.x = cellHeight * 0.25 / 2;
		icon.y = cellHeight * 0.25 / 2;
		var scaleFactor = (cellHeight * 0.75) / bitmapData.height;
		icon.scaleX = scaleFactor;
		icon.scaleY = scaleFactor;
		button.addChild(icon);

		container.addChild(button);
	}
}
