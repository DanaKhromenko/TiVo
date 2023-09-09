package;

import feathers.data.ArrayCollection;
import haxe.xml.Parser;
import openfl.Assets;
import Company;

class CompaniesXmlParser {
	private var fileName:String;

	public function new(fileName:String) {
		this.fileName = fileName;
	}

	public function getCompanies():ArrayCollection<Company> {
		var companies = new ArrayCollection<Company>();
		try {
			var fileContent:String = Assets.getText(fileName);
			var xmlData:Xml = Parser.parse(fileContent);

			for (elements in xmlData.firstElement().elementsNamed("company")) {
				var companyName = getStringValueByName(elements, "companyName");
				var companyBuilder = new CompanyBuilder();

				companies.add(companyBuilder.withCompanyName(companyName)
					.withDescription(getStringValueByName(elements, "description"))
					.withWebsite(getStringValueByName(elements, "website"))
					.withImgUri(getStringValueByName(elements, "imgUri"))
					.build());
			}
		} catch (e:Dynamic) {
			trace('Cannot parse XML-file ${fileName}: ${e}');
		}
		return companies;
	}

	private function getStringValueByName(elements:Xml, name:String):String {
		for (element in elements.elementsNamed(name)) {
			return element.firstChild().nodeValue;
		}
		return "";
	}
}
