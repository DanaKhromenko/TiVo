// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_VScrollBar
#include <feathers/controls/VScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollBar
#include <feathers/controls/supportClasses/BaseScrollBar.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
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
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelVScrollBarStyles
#include <feathers/themes/steel/components/SteelVScrollBarStyles.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7c7510edb0f146a1_32_new,"feathers.controls.VScrollBar","new",0xe52df2fc,"feathers.controls.VScrollBar.new","feathers/controls/VScrollBar.hx",32,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_40_initializeVScrollBarTheme,"feathers.controls.VScrollBar","initializeVScrollBarTheme",0xeba9a7a5,"feathers.controls.VScrollBar.initializeVScrollBarTheme","feathers/controls/VScrollBar.hx",40,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_44_valueToLocation,"feathers.controls.VScrollBar","valueToLocation",0xe5003a3d,"feathers.controls.VScrollBar.valueToLocation","feathers/controls/VScrollBar.hx",44,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_54_locationToValue,"feathers.controls.VScrollBar","locationToValue",0x155482dd,"feathers.controls.VScrollBar.locationToValue","feathers/controls/VScrollBar.hx",54,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_63_saveThumbStart,"feathers.controls.VScrollBar","saveThumbStart",0x63cabaed,"feathers.controls.VScrollBar.saveThumbStart","feathers/controls/VScrollBar.hx",63,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_74_measure,"feathers.controls.VScrollBar","measure",0x08ff9bfa,"feathers.controls.VScrollBar.measure","feathers/controls/VScrollBar.hx",74,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_146_layoutSplitTrack,"feathers.controls.VScrollBar","layoutSplitTrack",0x4cf4547f,"feathers.controls.VScrollBar.layoutSplitTrack","feathers/controls/VScrollBar.hx",146,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_172_layoutSingleTrack,"feathers.controls.VScrollBar","layoutSingleTrack",0x3ee55bf5,"feathers.controls.VScrollBar.layoutSingleTrack","feathers/controls/VScrollBar.hx",172,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_187_layoutThumb,"feathers.controls.VScrollBar","layoutThumb",0xaa6419a8,"feathers.controls.VScrollBar.layoutThumb","feathers/controls/VScrollBar.hx",187,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_991a3714533c85f3_42_get_styleContext,"feathers.controls.VScrollBar","get_styleContext",0x8cb7e92b,"feathers.controls.VScrollBar.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
namespace feathers{
namespace controls{

void VScrollBar_obj::__construct(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener){
            		Float value = __o_value.Default(((Float)0.0));
            		Float minimum = __o_minimum.Default(((Float)0.0));
            		Float maximum = __o_maximum.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_32_new)
HXLINE(  33)		this->initializeVScrollBarTheme();
HXLINE(  35)		super::__construct(value,minimum,maximum,changeListener);
            	}

Dynamic VScrollBar_obj::__CreateEmpty() { return new VScrollBar_obj; }

void *VScrollBar_obj::_hx_vtable = 0;

Dynamic VScrollBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VScrollBar_obj > _hx_result = new VScrollBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool VScrollBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1c8e1d36 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x4033f4be) {
				return inClassId==(int)0x28846938 || inClassId==(int)0x4033f4be;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}

void VScrollBar_obj::initializeVScrollBarTheme(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_40_initializeVScrollBarTheme)
HXDLIN(  40)		::feathers::themes::steel::components::SteelVScrollBarStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(VScrollBar_obj,initializeVScrollBarTheme,(void))

Float VScrollBar_obj::valueToLocation(Float value){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_44_valueToLocation)
HXLINE(  46)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  47)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            		}
HXLINE(  49)		Float normalized = this->normalizeValue(value);
HXLINE(  50)		Float trackScrollableHeight = this->actualHeight;
HXDLIN(  50)		Float trackScrollableHeight1 = (trackScrollableHeight - this->get_paddingTop());
HXDLIN(  50)		Float trackScrollableHeight2 = (trackScrollableHeight1 - this->get_paddingBottom());
HXDLIN(  50)		Float trackScrollableHeight3 = (trackScrollableHeight2 - this->_currentThumbSkin->get_height());
HXLINE(  51)		return (this->get_paddingTop() + (trackScrollableHeight3 * normalized));
            	}


Float VScrollBar_obj::locationToValue(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_54_locationToValue)
HXLINE(  55)		Float percentage = ((Float)0.0);
HXLINE(  56)		Float trackScrollableHeight = this->actualHeight;
HXDLIN(  56)		Float trackScrollableHeight1 = (trackScrollableHeight - this->get_paddingTop());
HXDLIN(  56)		Float trackScrollableHeight2 = (trackScrollableHeight1 - this->get_paddingBottom());
HXDLIN(  56)		Float trackScrollableHeight3 = (trackScrollableHeight2 - this->_currentThumbSkin->get_height());
HXLINE(  57)		Float yOffset = (y - this->_pointerStartY);
HXLINE(  58)		Float yPosition = this->_thumbStartY;
HXDLIN(  58)		Float yPosition1 = ::Math_obj::min(::Math_obj::max(((Float)0.0),((yPosition - this->get_paddingTop()) + yOffset)),trackScrollableHeight3);
HXLINE(  59)		percentage = (yPosition1 / trackScrollableHeight3);
HXLINE(  60)		return (this->_minimum + (percentage * (this->_maximum - this->_minimum)));
            	}


void VScrollBar_obj::saveThumbStart(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_63_saveThumbStart)
HXLINE(  64)		Float trackHeightMinusThumbHeight = this->actualHeight;
HXLINE(  65)		Float locationMinusHalfThumbHeight = y;
HXLINE(  66)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE(  67)			trackHeightMinusThumbHeight = (trackHeightMinusThumbHeight - this->_currentThumbSkin->get_height());
HXLINE(  68)			locationMinusHalfThumbHeight = (locationMinusHalfThumbHeight - (this->_currentThumbSkin->get_height() / ((Float)2.0)));
            		}
HXLINE(  70)		this->_thumbStartX = x;
HXLINE(  71)		this->_thumbStartY = ::Math_obj::min(trackHeightMinusThumbHeight,locationMinusHalfThumbHeight);
            	}


bool VScrollBar_obj::measure(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_74_measure)
HXLINE(  75)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE(  76)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE(  77)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE(  78)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE(  79)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE(  80)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		bool _hx_tmp1;
HXDLIN(  81)		bool _hx_tmp2;
HXDLIN(  81)		bool _hx_tmp3;
HXDLIN(  81)		bool _hx_tmp4;
HXDLIN(  81)		if (!(needsWidth)) {
HXLINE(  81)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE(  81)			_hx_tmp4 = false;
            		}
HXDLIN(  81)		if (_hx_tmp4) {
HXLINE(  81)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE(  81)			_hx_tmp3 = false;
            		}
HXDLIN(  81)		if (_hx_tmp3) {
HXLINE(  81)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE(  81)			_hx_tmp2 = false;
            		}
HXDLIN(  81)		if (_hx_tmp2) {
HXLINE(  81)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE(  81)			_hx_tmp1 = false;
            		}
HXDLIN(  81)		if (_hx_tmp1) {
HXLINE(  81)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			return false;
            		}
HXLINE(  85)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE(  86)			this->_thumbSkinMeasurements->restore(this->_currentThumbSkin);
HXLINE(  87)			if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  88)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            			}
            		}
HXLINE(  91)		if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE(  92)			this->_trackSkinMeasurements->restore(this->_currentTrackSkin);
HXLINE(  93)			if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  94)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            			}
            		}
HXLINE(  97)		if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE(  98)			this->_secondaryTrackSkinMeasurements->restore(this->_currentSecondaryTrackSkin);
HXLINE(  99)			if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 100)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x64d4b3cd));
            			}
            		}
HXLINE( 104)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 105)		if (needsWidth) {
HXLINE( 106)			Float newWidth1 = this->get_paddingLeft();
HXDLIN( 106)			newWidth = (newWidth1 + this->get_paddingRight());
HXLINE( 107)			if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE( 108)				newWidth = (newWidth + this->_currentThumbSkin->get_width());
            			}
HXLINE( 110)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 111)				if (::hx::IsLess( newWidth,this->_currentTrackSkin->get_width() )) {
HXLINE( 112)					newWidth = this->_currentTrackSkin->get_width();
            				}
HXLINE( 114)				bool _hx_tmp5;
HXDLIN( 114)				if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE( 114)					_hx_tmp5 = ::hx::IsLess( newWidth,this->_currentSecondaryTrackSkin->get_width() );
            				}
            				else {
HXLINE( 114)					_hx_tmp5 = false;
            				}
HXDLIN( 114)				if (_hx_tmp5) {
HXLINE( 115)					newWidth = this->_currentSecondaryTrackSkin->get_width();
            				}
            			}
            		}
HXLINE( 120)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 121)		if (needsHeight) {
HXLINE( 122)			newHeight = ((Float)0.0);
HXLINE( 123)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 124)				newHeight = (newHeight + this->_currentTrackSkin->get_height());
HXLINE( 125)				if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE( 126)					newHeight = (newHeight + this->_currentSecondaryTrackSkin->get_height());
            				}
            			}
HXLINE( 129)			Float thumbHeight = this->get_paddingTop();
HXDLIN( 129)			Float thumbHeight1 = (thumbHeight + this->get_paddingBottom());
HXLINE( 130)			if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE( 131)				thumbHeight1 = (thumbHeight1 + this->_currentThumbSkin->get_height());
            			}
HXLINE( 133)			if (::hx::IsLess( newHeight,thumbHeight1 )) {
HXLINE( 134)				newHeight = thumbHeight1;
            			}
            		}
HXLINE( 139)		 ::Dynamic newMinWidth = newWidth;
HXLINE( 140)		 ::Dynamic newMinHeight = newHeight;
HXLINE( 141)		 ::Dynamic newMaxWidth = newWidth;
HXLINE( 143)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,newMaxWidth,null());
            	}


void VScrollBar_obj::layoutSplitTrack(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_146_layoutSplitTrack)
HXLINE( 147)		Float location = this->valueToLocation(this->get_value());
HXLINE( 148)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE( 149)			if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 150)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            			}
HXLINE( 152)			location = (location + ::Math_obj::round((this->_currentThumbSkin->get_height() / ((Float)2.0))));
            		}
HXLINE( 155)		this->_currentSecondaryTrackSkin->set_y(((Float)0.0));
HXLINE( 156)		this->_currentSecondaryTrackSkin->set_height(location);
HXLINE( 158)		this->_currentTrackSkin->set_y(location);
HXLINE( 159)		this->_currentTrackSkin->set_height((this->actualHeight - location));
HXLINE( 161)		if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 162)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x64d4b3cd));
            		}
HXLINE( 164)		if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 165)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            		}
HXLINE( 168)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentSecondaryTrackSkin;
HXDLIN( 168)		Float _hx_tmp1 = this->actualWidth;
HXDLIN( 168)		_hx_tmp->set_x(((_hx_tmp1 - this->_currentSecondaryTrackSkin->get_width()) / ((Float)2.0)));
HXLINE( 169)		 ::openfl::display::InteractiveObject _hx_tmp2 = this->_currentTrackSkin;
HXDLIN( 169)		Float _hx_tmp3 = this->actualWidth;
HXDLIN( 169)		_hx_tmp2->set_x(((_hx_tmp3 - this->_currentTrackSkin->get_width()) / ((Float)2.0)));
            	}


void VScrollBar_obj::layoutSingleTrack(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_172_layoutSingleTrack)
HXLINE( 173)		if (::hx::IsNull( this->_currentTrackSkin )) {
HXLINE( 174)			return;
            		}
HXLINE( 177)		this->_currentTrackSkin->set_y(((Float)0.0));
HXLINE( 178)		this->_currentTrackSkin->set_height(this->actualHeight);
HXLINE( 180)		if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 181)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            		}
HXLINE( 184)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentTrackSkin;
HXDLIN( 184)		Float _hx_tmp1 = this->actualWidth;
HXDLIN( 184)		_hx_tmp->set_x(((_hx_tmp1 - this->_currentTrackSkin->get_width()) / ((Float)2.0)));
            	}


void VScrollBar_obj::layoutThumb(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_187_layoutThumb)
HXLINE( 188)		if (::hx::IsNull( this->_currentThumbSkin )) {
HXLINE( 189)			return;
            		}
HXLINE( 192)		Float range = (this->_maximum - this->_minimum);
HXLINE( 193)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentThumbSkin;
HXDLIN( 193)		bool _hx_tmp1;
HXDLIN( 193)		bool _hx_tmp2;
HXDLIN( 193)		if (this->get_hideThumbWhenDisabled()) {
HXLINE( 193)			_hx_tmp2 = this->_enabled;
            		}
            		else {
HXLINE( 193)			_hx_tmp2 = true;
            		}
HXDLIN( 193)		if (_hx_tmp2) {
HXLINE( 193)			_hx_tmp1 = (range > ((Float)0.0));
            		}
            		else {
HXLINE( 193)			_hx_tmp1 = false;
            		}
HXDLIN( 193)		_hx_tmp->set_visible(_hx_tmp1);
HXLINE( 194)		if (!(this->_currentThumbSkin->get_visible())) {
HXLINE( 195)			return;
            		}
HXLINE( 198)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 199)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            		}
HXLINE( 202)		Float valueOffset = ((Float)0.0);
HXLINE( 203)		if ((this->_value < this->_minimum)) {
HXLINE( 204)			valueOffset = (this->_minimum - this->_value);
            		}
            		else {
HXLINE( 205)			if ((this->_value > this->_maximum)) {
HXLINE( 206)				valueOffset = (this->_value - this->_maximum);
            			}
            		}
HXLINE( 209)		Float contentWidth = this->actualWidth;
HXDLIN( 209)		Float contentWidth1 = (contentWidth - this->get_paddingLeft());
HXDLIN( 209)		Float contentWidth2 = (contentWidth1 - this->get_paddingRight());
HXLINE( 210)		Float contentHeight = this->actualHeight;
HXDLIN( 210)		Float contentHeight1 = (contentHeight - this->get_paddingTop());
HXDLIN( 210)		Float contentHeight2 = (contentHeight1 - this->get_paddingBottom());
HXLINE( 212)		if (this->get_fixedThumbSize()) {
HXLINE( 213)			if (::hx::IsNotNull( this->_thumbSkinMeasurements->height )) {
HXLINE( 214)				this->_currentThumbSkin->set_height(( (Float)(this->_thumbSkinMeasurements->height) ));
            			}
            		}
            		else {
HXLINE( 217)			Float adjustedPage = this->getAdjustedPage();
HXLINE( 218)			Float thumbHeight = ((contentHeight2 * adjustedPage) / (range + adjustedPage));
HXLINE( 219)			if ((thumbHeight > ((Float)0.0))) {
HXLINE( 220)				Float heightOffset = (contentHeight2 - thumbHeight);
HXLINE( 221)				if ((heightOffset > thumbHeight)) {
HXLINE( 222)					heightOffset = thumbHeight;
            				}
HXLINE( 224)				heightOffset = (heightOffset * (valueOffset / ((range * thumbHeight) / contentHeight2)));
HXLINE( 225)				thumbHeight = (thumbHeight - heightOffset);
            			}
HXLINE( 227)			if (::hx::IsNotNull( this->_thumbSkinMeasurements->minHeight )) {
HXLINE( 228)				if (::hx::IsLess( thumbHeight,this->_thumbSkinMeasurements->minHeight )) {
HXLINE( 229)					thumbHeight = ( (Float)(this->_thumbSkinMeasurements->minHeight) );
            				}
            			}
            			else {
HXLINE( 231)				if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 232)					::Dynamic measureSkin =  ::hx::interface_check(this->_currentThumbSkin,0xcfc32883);
HXLINE( 233)					if ((thumbHeight < ::feathers::core::IMeasureObject_obj::get_minHeight(measureSkin))) {
HXLINE( 234)						thumbHeight = ::feathers::core::IMeasureObject_obj::get_minHeight(measureSkin);
            					}
            				}
            			}
HXLINE( 237)			if ((thumbHeight < ((Float)0.0))) {
HXLINE( 238)				thumbHeight = ((Float)0.0);
            			}
HXLINE( 240)			this->_currentThumbSkin->set_height(thumbHeight);
            		}
HXLINE( 242)		 ::openfl::display::InteractiveObject _hx_tmp3 = this->_currentThumbSkin;
HXDLIN( 242)		Float _hx_tmp4 = this->get_paddingLeft();
HXDLIN( 242)		_hx_tmp3->set_x((_hx_tmp4 + ((contentWidth2 - this->_currentThumbSkin->get_width()) / ((Float)2.0))));
HXLINE( 243)		 ::openfl::display::InteractiveObject _hx_tmp5 = this->_currentThumbSkin;
HXDLIN( 243)		_hx_tmp5->set_y(this->valueToLocation(this->_value));
            	}


::hx::Class VScrollBar_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_991a3714533c85f3_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::VScrollBar >();
            	}



::hx::ObjectPtr< VScrollBar_obj > VScrollBar_obj::__new(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	::hx::ObjectPtr< VScrollBar_obj > __this = new VScrollBar_obj();
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

::hx::ObjectPtr< VScrollBar_obj > VScrollBar_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	VScrollBar_obj *__this = (VScrollBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VScrollBar_obj), true, "feathers.controls.VScrollBar"));
	*(void **)__this = VScrollBar_obj::_hx_vtable;
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

VScrollBar_obj::VScrollBar_obj()
{
}

::hx::Val VScrollBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"layoutThumb") ) { return ::hx::Val( layoutThumb_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"saveThumbStart") ) { return ::hx::Val( saveThumbStart_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"valueToLocation") ) { return ::hx::Val( valueToLocation_dyn() ); }
		if (HX_FIELD_EQ(inName,"locationToValue") ) { return ::hx::Val( locationToValue_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"layoutSplitTrack") ) { return ::hx::Val( layoutSplitTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"layoutSingleTrack") ) { return ::hx::Val( layoutSingleTrack_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"initializeVScrollBarTheme") ) { return ::hx::Val( initializeVScrollBarTheme_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VScrollBar_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VScrollBar_obj_sStaticStorageInfo = 0;
#endif

static ::String VScrollBar_obj_sMemberFields[] = {
	HX_("initializeVScrollBarTheme",09,b0,b3,35),
	HX_("valueToLocation",a1,9d,2e,0f),
	HX_("locationToValue",41,e6,82,3f),
	HX_("saveThumbStart",09,d0,2e,f1),
	HX_("measure",5e,fb,e9,3c),
	HX_("layoutSplitTrack",9b,e8,5c,0b),
	HX_("layoutSingleTrack",59,60,fe,1b),
	HX_("layoutThumb",0c,fb,7b,c0),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

::hx::Class VScrollBar_obj::__mClass;

void VScrollBar_obj::__register()
{
	VScrollBar_obj _hx_dummy;
	VScrollBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.VScrollBar",0a,05,8a,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VScrollBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VScrollBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VScrollBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
