package;

import feathers.data.ArrayCollection;
import haxe.xml.Parser;
import openfl.Assets;
import TVShow;

class TVShowsXmlParser {
	private var fileName:String;

	public function new(fileName:String) {
		this.fileName = fileName;
	}

	public function getTVShows():ArrayCollection<TVShow> {
		var tvShows = new ArrayCollection<TVShow>();

		try {
			var fileContent:String = Assets.getText(fileName);
			var xmlData:Xml = Parser.parse(fileContent);
			for (elements in xmlData.firstElement().elementsNamed("show")) {
				tvShows.add(parseTVShow(elements));
			}
		} catch (e:Dynamic) {
			trace('Cannot parse XML-file ${fileName}: ${e}');
		}

		return tvShows;
	}

	private function parseTVShow(elements:Xml):TVShow {
		var tvShowBuilder = new TVShowBuilder();

		var showId = getIntValueFromXml(elements, "showId");
		if (showId != 0) {
			tvShowBuilder.withShowId(showId);
		}

		var channelId = getIntValueFromXml(elements, "channelId");
		if (channelId != 0) {
			tvShowBuilder.withChannelId(channelId);
		}

		var showName = getStringValueFromXml(elements, "showName");
		if (showName != "") {
			tvShowBuilder.withShowName(showName);
		}

		var year = getIntValueFromXml(elements, "year");
		if (year != 0) {
			tvShowBuilder.withYear(year);
		}

		var description = getStringValueFromXml(elements, "description");
		if (description != "") {
			tvShowBuilder.withDescription(description);
		}

		var startDate = getIntValueFromXml(elements, "startDate");
		if (startDate != 0) {
			tvShowBuilder.withStartDate(year);
		}

		var endDate = getIntValueFromXml(elements, "endDate");
		if (endDate != 0) {
			tvShowBuilder.withEndDate(endDate);
		}

		var imgName = getStringValueFromXml(elements, "imgName");
		if (imgName != "") {
			tvShowBuilder.withImgName(imgName);
		}

		return tvShowBuilder.build();
	}

	private function getStringValueFromXml(elements:Xml, name:String):String {
		for (element in elements.elementsNamed(name)) {
			return element.firstChild().nodeValue;
		}
		return "";
	}

	private function getIntValueFromXml(elements:Xml, name:String):Int {
		var strValue = getStringValueFromXml(elements, name);
		var intValue = Std.parseInt(strValue);
		return (intValue == null ? 0 : intValue);
	}
}
