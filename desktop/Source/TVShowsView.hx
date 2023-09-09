package;

import feathers.controls.Button;
import feathers.controls.Label;
import feathers.controls.LayoutGroup;
import feathers.controls.TextArea;
import feathers.controls.navigators.TabItem;
import feathers.data.ArrayCollection;
import feathers.events.TriggerEvent;
import feathers.text.TextFormat;
import openfl.Assets;
import openfl.display.Bitmap;
import Popup;
import TabDto;

class TVShowsView {
	public static function getTVShowsTabDto(tvShows:ArrayCollection<TVShow>, container:LayoutGroup, cellsInRow:Int, cellWidth:Int, cellHeight:Int,
			cellStartXPosition:Int, cellStartYPosition:Int, previewWidth:Int, previewHeight:Int, previewX:Int, previewY:Int):TabDto {
		var tvShowsLayoutGroup = new TVShowsLayoutGroup(tvShows, container, cellsInRow, cellWidth, cellHeight, cellStartXPosition, cellStartYPosition,
			previewWidth, previewHeight, previewX, previewY);

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
	private var cellStartXPosition:Int;
	private var cellStartYPosition:Int;

	private var previewWidth:Int;
	private var previewHeight:Int;
	private var previewX:Int;
	private var previewY:Int;
	private var previewInfoStartXPosition:Int = 350;
	private var previewInfoStartYPosition:Int = 60;

	private var activePreviewIndex:Int;
	private var activePreviewInfoIndex:Int;

	public function new(tvShows:ArrayCollection<TVShow>, tabsContainer:LayoutGroup, cellsInRow:Int, cellWidth:Int, cellHeight:Int, cellStartXPosition:Int,
			cellStartYPosition:Int, previewWidth:Int, previewHeight:Int, previewX:Int, previewY:Int) {
		super();

		var container = new LayoutGroup();
		tabsContainer.addChild(container);

		this.tvShows = tvShows;
		this.container = container;
		this.cellsInRow = cellsInRow;
		this.cellWidth = cellWidth;
		this.cellHeight = cellHeight;
		this.cellStartXPosition = cellStartXPosition;
		this.cellStartYPosition = cellStartYPosition;
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

			var x = cellStartXPosition + columnNumber * cellWidth;
			var y = cellStartYPosition + rowNumber * cellHeight;
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
				container.removeChildAt(activePreviewInfoIndex);
				container.removeChildAt(activePreviewIndex);
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

			printTVShowInfoOnPreview(tvShow);

			Popup.Show(tvShow.showName, tvShow.description, parent);
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

	private function printTVShowInfoOnPreview(tvShow:TVShow) {
		var layoutGroup = new LayoutGroup();
		container.addChild(layoutGroup);
		activePreviewInfoIndex = container.numChildren - 1;

		var x:Int = previewInfoStartXPosition;
		var y:Int = previewInfoStartYPosition;

		if (tvShow.showId != 0) {
			var textFormat = new TextFormat("Helvetica", 14, 0xcfd1d1);
			addLabel(layoutGroup, 'Show #${tvShow.showId}', textFormat, x, y);
			if (tvShow.channelId != 0) {
				addLabel(layoutGroup, 'Ch #${tvShow.channelId}', textFormat, x + 500, y);
			}
			y += 40;
		}

		var showName:String = tvShow.showName;
		if (showName == "") {
			showName = "Unknown";
		}
		addLabel(layoutGroup, showName, new TextFormat("Helvetica", 24, 0xe6e7e7), x, y);
		y += 50;

		if (tvShow.description != "") {
			addTextField(layoutGroup, tvShow.description, new TextFormat("Helvetica", 18, 0xd4cba7), x, y, Math.round(previewWidth / 1.8),
				Math.round(previewHeight / 1.8));
		}

		if (tvShow.startDate != 0) {
			var time:String;

			var dateString = Std.string(tvShow.startDate);
			var startDate:Date = new Date(Std.parseInt(dateString.substr(0, 4)), Std.parseInt(dateString.substr(4, 2)) - 1,
				Std.parseInt(dateString.substr(6, 2)), Std.parseInt(dateString.substr(8, 2)), Std.parseInt(dateString.substr(10, 2)),
				Std.parseInt(dateString.substr(12, 2)));

			var format:String = "%m/%d/%Y %H:%M";
			time = DateTools.format(startDate, format);

			if (tvShow.endDate != 0) {
				dateString = Std.string(tvShow.endDate);
				var endDate:Date = new Date(Std.parseInt(dateString.substr(0, 4)), Std.parseInt(dateString.substr(4, 2)) - 1,
					Std.parseInt(dateString.substr(6, 2)), Std.parseInt(dateString.substr(8, 2)), Std.parseInt(dateString.substr(10, 2)),
					Std.parseInt(dateString.substr(12, 2)));

				time += " - " + DateTools.format(endDate, format);
			}
			addLabel(layoutGroup, time, new TextFormat("Helvetica", 16, 0xeae7be), x, previewHeight + 20);
		}
	}

	private function addLabel(layoutGroup:LayoutGroup, text:String, textFormat:TextFormat, x:Int, y:Int) {
		var labelKey = new Label();
		labelKey.text = text;
		labelKey.textFormat = textFormat;
		labelKey.x = x;
		labelKey.y = y;
		layoutGroup.addChild(labelKey);
	}

	private function addTextField(layoutGroup:LayoutGroup, text:String, textFormat:TextFormat, x:Int, y:Int, width:Int, height:Int) {
		var textArea = new TextArea();
		textArea.text = text;
		textArea.smoothScrolling = true;
		textArea.editable = false;
		textArea.textFormat = textFormat;
		textArea.wordWrap = true;
		var leftShift = 10;
		textArea.x = x - leftShift;
		textArea.y = y;
		textArea.width = width;
		textArea.height = height;
		textArea.backgroundSkin = null;
		layoutGroup.addChild(textArea);
	}
}
