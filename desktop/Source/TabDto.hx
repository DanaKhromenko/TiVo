package;

import feathers.controls.LayoutGroup;
import feathers.controls.navigators.TabItem;

class TabDto {
    public var tabItem:TabItem;
    public var container:LayoutGroup;
    
    public function new(tabItem:TabItem, container:LayoutGroup) {
        this.tabItem = tabItem;
        this.container = container;
    }
}
