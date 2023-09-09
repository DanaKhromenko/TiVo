package;

import feathers.controls.Button;
import feathers.controls.Header;
import feathers.controls.Label;
import feathers.controls.Panel;
import feathers.controls.TextArea;
import feathers.core.PopUpManager;
import feathers.events.TriggerEvent;

class Popup {
	public static function Show(header:String, message:String, parent) {
		var panel = new Panel();
		panel.width = 500;
		panel.height = 300;
		var header = new Header(header);
		header.height = 60;
		panel.header = header;

		var buttonHeight = 30;

		var textArea = new TextArea();
		textArea.text = message;
		textArea.smoothScrolling = true;
		textArea.editable = false;
		textArea.enabled = false;
		textArea.wordWrap = true;
		textArea.x = 10;
		textArea.y = 10;
		textArea.width = panel.width - 4 * textArea.x;
		var headerHeight = panel.header.height;
		trace("headerHeight"+headerHeight);
		textArea.height = panel.height - buttonHeight - textArea.y * 2 - headerHeight;
		textArea.backgroundSkin = null;
		panel.addChild(textArea);

		var button = new Button("OK");
		button.height = buttonHeight;
		button.x = textArea.width / 2 - button.width / 2;
		button.y = textArea.height + buttonHeight/2;
		button.addEventListener(TriggerEvent.TRIGGER, (event) -> {
			PopUpManager.removeAllPopUps();
		});
		panel.addChild(button);

		PopUpManager.addPopUp(panel, parent, true, true);
	}
}
