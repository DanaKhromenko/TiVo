package;

import feathers.data.ArrayCollection;
import openfl.Assets;
import TVShow;

class TVShowsTxtParser {
    private var fileName:String;

    public function new(fileName:String) {
        this.fileName = fileName;
    }

    public function getTVShows():ArrayCollection<TVShow> {
        var tvShows = new ArrayCollection<TVShow>();
        
        try {
            var fileContent:String = Assets.getText(fileName);
			fileContent = StringTools.trim(fileContent);

            for (line in fileContent.split('\n')) {
                tvShows.add(parseTVShow(line));
            }
        } catch (e:Dynamic) {
            trace('Cannot parse TXT-file ${fileName}: ${e}');
        }

        return tvShows;
    }

    private function parseTVShow(line:String) :TVShow {
        var tvShowBuilder = new TVShowBuilder();

        var showId = getIntValueFromStrLine(line, "showId");
        if (showId != 0) {
            tvShowBuilder.withShowId(showId);
        }

        var channelId = getIntValueFromStrLine(line, "channelId");
        if (channelId != 0) {
            tvShowBuilder.withChannelId(channelId);
        }

        var showName = getStringValueFromStrLine(line, "showName");
        if (showName != "") {
            tvShowBuilder.withShowName(showName);
        }

        var year = getIntValueFromStrLine(line, "year");
        if (year != 0) {
            tvShowBuilder.withYear(year);
        }

        var description = getStringValueFromStrLine(line, "description");
        if (description != "") {
            tvShowBuilder.withDescription(description);
        }

        var startDate = getIntValueFromStrLine(line, "startDate");
        if (startDate != 0) {
            tvShowBuilder.withStartDate(startDate);
        }  
        
        var endDate = getIntValueFromStrLine(line, "endDate");
        if (endDate != 0) {
            tvShowBuilder.withEndDate(endDate);
        }

        var imgName = getStringValueFromStrLine(line, "imgName");
        if (imgName != "") {
            tvShowBuilder.withImgName(imgName);
        }

        return tvShowBuilder.build();
    }

    private function getStringValueFromStrLine(line:String, name:String):String {
        var regexp:EReg = new EReg(name + ":([^;\\}]+)(;|})", "g");
        if (regexp.match(line)) {
            return regexp.matched(1);
        }
        trace('Line "${line}" doesn\'t match the regexp ${regexp} for ${name}');
		return "";
	}

    private function getIntValueFromStrLine(line:String, name:String):Int {
		var strValue = getStringValueFromStrLine(line, name);
        var intValue = Std.parseInt(strValue);
        return (intValue == null ? 0 : intValue);
	}
}
