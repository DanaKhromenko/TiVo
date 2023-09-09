package;

class CompanyBuilder {
	private var companyName:String;
	private var description:String;
	private var website:String;
	private var imgUri:String;

	public function new() { }

	public function withCompanyName(companyName:String):CompanyBuilder {
		this.companyName = companyName;
		return this;
	}

	public function withDescription(description:String):CompanyBuilder {
		this.description = description;
		return this;
	}

	public function withWebsite(website:String):CompanyBuilder {
		this.website = website;
		return this;
	}

	public function withImgUri(imgUri:String):CompanyBuilder {
		this.imgUri = imgUri;
		return this;
	}

	public function build():Company {
		return new Company(companyName, description, website, imgUri);
	}
}

class Company {
	public var companyName:String;
	public var description:String;
	public var website:String;
	public var imgUri:String;

	public function new(companyName:String, description:String, website:String, imgUri:String) {
		this.companyName = companyName;
		this.description = description;
		this.website = website;
		this.imgUri = imgUri;
	}
}
