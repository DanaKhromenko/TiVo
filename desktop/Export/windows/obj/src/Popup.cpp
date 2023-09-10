// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Popup
#include <Popup.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_Button
#include <feathers/controls/Button.h>
#endif
#ifndef INCLUDED_feathers_controls_Header
#include <feathers/controls/Header.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_Panel
#include <feathers/controls/Panel.h>
#endif
#ifndef INCLUDED_feathers_controls_ScrollContainer
#include <feathers/controls/ScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_controls_TextArea
#include <feathers/controls/TextArea.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_PopUpManager
#include <feathers/core/PopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a9c9e3c5ed25c694_42_Show,"Popup","Show",0x10e64abf,"Popup.Show","Popup.hx",42,0x57979832)
HX_LOCAL_STACK_FRAME(_hx_pos_a9c9e3c5ed25c694_12_Show,"Popup","Show",0x10e64abf,"Popup.Show","Popup.hx",12,0x57979832)

void Popup_obj::__construct() { }

Dynamic Popup_obj::__CreateEmpty() { return new Popup_obj; }

void *Popup_obj::_hx_vtable = 0;

Dynamic Popup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Popup_obj > _hx_result = new Popup_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Popup_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e06e368;
}

void Popup_obj::Show(::String header,::String message, ::openfl::display::DisplayObject parent){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::feathers::events::TriggerEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_a9c9e3c5ed25c694_42_Show)
HXLINE(  42)			::feathers::core::PopUpManager_obj::removeAllPopUps();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a9c9e3c5ed25c694_12_Show)
HXLINE(  13)		 ::feathers::controls::Panel panel =  ::feathers::controls::Panel_obj::__alloc( HX_CTX );
HXLINE(  14)		panel->set_width(( (Float)(500) ));
HXLINE(  15)		panel->set_height(( (Float)(300) ));
HXLINE(  16)		 ::feathers::controls::Header header1 =  ::feathers::controls::Header_obj::__alloc( HX_CTX ,header);
HXLINE(  17)		header1->set_height(( (Float)(60) ));
HXLINE(  18)		panel->set_header(header1);
HXLINE(  20)		int buttonHeight = 30;
HXLINE(  22)		 ::feathers::controls::TextArea textArea =  ::feathers::controls::TextArea_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  23)		textArea->set_text(message);
HXLINE(  24)		textArea->set_smoothScrolling(true);
HXLINE(  25)		textArea->set_editable(false);
HXLINE(  26)		textArea->set_enabled(false);
HXLINE(  27)		textArea->set_wordWrap(true);
HXLINE(  28)		textArea->set_x(( (Float)(10) ));
HXLINE(  29)		textArea->set_y(( (Float)(10) ));
HXLINE(  30)		Float _hx_tmp = panel->get_width();
HXDLIN(  30)		textArea->set_width((_hx_tmp - (( (Float)(4) ) * textArea->get_x())));
HXLINE(  31)		Float headerHeight = panel->get_header()->get_height();
HXLINE(  32)		::haxe::Log_obj::trace((HX_("headerHeight",54,ad,5f,1c) + headerHeight),::hx::SourceInfo(HX_("Source/Popup.hx",06,c3,42,a4),32,HX_("Popup",0c,7a,c2,59),HX_("Show",1d,01,2c,37)));
HXLINE(  33)		Float _hx_tmp1 = (panel->get_height() - ( (Float)(buttonHeight) ));
HXDLIN(  33)		textArea->set_height(((_hx_tmp1 - (textArea->get_y() * ( (Float)(2) ))) - headerHeight));
HXLINE(  34)		textArea->set_backgroundSkin(null());
HXLINE(  35)		panel->addChild(textArea);
HXLINE(  37)		 ::feathers::controls::Button button =  ::feathers::controls::Button_obj::__alloc( HX_CTX ,HX_("OK",1c,45,00,00),null());
HXLINE(  38)		button->set_height(( (Float)(buttonHeight) ));
HXLINE(  39)		Float _hx_tmp2 = (textArea->get_width() / ( (Float)(2) ));
HXDLIN(  39)		button->set_x((_hx_tmp2 - (button->get_width() / ( (Float)(2) ))));
HXLINE(  40)		button->set_y((textArea->get_height() + (( (Float)(buttonHeight) ) / ( (Float)(2) ))));
HXLINE(  41)		button->addEventListener(HX_("trigger",38,55,df,25), ::Dynamic(new _hx_Closure_0()),null(),null(),null());
HXLINE(  44)		panel->addChild(button);
HXLINE(  46)		::feathers::core::PopUpManager_obj::addPopUp(panel,parent,true,true,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Popup_obj,Show,(void))


Popup_obj::Popup_obj()
{
}

bool Popup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Show") ) { outValue = Show_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Popup_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Popup_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Popup_obj::__mClass;

static ::String Popup_obj_sStaticFields[] = {
	HX_("Show",1d,01,2c,37),
	::String(null())
};

void Popup_obj::__register()
{
	Popup_obj _hx_dummy;
	Popup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Popup",0c,7a,c2,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Popup_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Popup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Popup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Popup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Popup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

