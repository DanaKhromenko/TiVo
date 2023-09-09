package;

class TVShowBuilder {
	private var showId:Int;
	private var channelId:Int;
	private var showName:String;
	private var year:Int;
	private var description:String;
	private var startDate:Int;
	private var endDate:Int;
	private var imgName:String;

	public function new() { }

	public function withShowId(showId:Int):TVShowBuilder {
		this.showId = showId;
		return this;
	}

	public function withChannelId(channelId:Int):TVShowBuilder {
		this.channelId = channelId;
		return this;
	}

	public function withShowName(showName:String):TVShowBuilder {
		this.showName = showName;
		return this;
	}

	public function withYear(year:Int):TVShowBuilder {
		this.year = year;
		return this;
	}

	public function withDescription(description:String):TVShowBuilder {
		this.description = description;
		return this;
	}

	public function withStartDate(startDate:Int):TVShowBuilder {
		this.startDate = startDate;
		return this;
	}

	public function withEndDate(endDate:Int):TVShowBuilder {
		this.endDate = endDate;
		return this;
	}

	public function withImgName(imgName:String):TVShowBuilder {
		this.imgName = imgName;
		return this;
	}

	public function build():TVShow {
		return new TVShow(showId, channelId, showName, year, description, startDate, endDate, imgName);
	}
}

class TVShow {
	public var showId:Int;
	public var channelId:Int;
	public var showName:String;
	public var year:Int;
	public var description:String;
	public var startDate:Int;
	public var endDate:Int;
	public var imgName:String;

	public function new(showId:Int, channelId:Int, showName:String, year:Int, description:String, startDate:Int, endDate:Int, imgName:String) {
		this.showId = showId;
		this.channelId = channelId;
		this.showName = showName;
		this.year = year;
		this.description = description;
		this.startDate = startDate;
		this.endDate = endDate;
		this.imgName = imgName;
	}
}
