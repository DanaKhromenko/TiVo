// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_TVShowsLayoutGroup
#include <TVShowsLayoutGroup.h>
#endif
#ifndef INCLUDED_TVShowsView
#include <TVShowsView.h>
#endif
#ifndef INCLUDED_TabDto
#include <TabDto.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabItem
#include <feathers/controls/navigators/TabItem.h>
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
#ifndef INCLUDED_feathers_data_ArrayCollection
#include <feathers/data/ArrayCollection.h>
#endif
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0e16feb51d1c2cc9_18_getTVShowsTabDto,"TVShowsView","getTVShowsTabDto",0x02b67fdd,"TVShowsView.getTVShowsTabDto","TVShowsView.hx",18,0x8513b3e5)

void TVShowsView_obj::__construct() { }

Dynamic TVShowsView_obj::__CreateEmpty() { return new TVShowsView_obj; }

void *TVShowsView_obj::_hx_vtable = 0;

Dynamic TVShowsView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TVShowsView_obj > _hx_result = new TVShowsView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TVShowsView_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4241a5b9;
}

 ::TabDto TVShowsView_obj::getTVShowsTabDto( ::feathers::data::ArrayCollection tvShows, ::feathers::controls::LayoutGroup container,int cellsInRow,int cellWidth,int cellHeight,int cellStartXPosition,int cellStartYPosition,int previewWidth,int previewHeight,int previewX,int previewY){
            	HX_GC_STACKFRAME(&_hx_pos_0e16feb51d1c2cc9_18_getTVShowsTabDto)
HXLINE(  19)		 ::TVShowsLayoutGroup tvShowsLayoutGroup =  ::TVShowsLayoutGroup_obj::__alloc( HX_CTX ,tvShows,container,cellsInRow,cellWidth,cellHeight,cellStartXPosition,cellStartYPosition,previewWidth,previewHeight,previewX,previewY);
HXLINE(  22)		 ::feathers::controls::navigators::TabItem tvShowsTab = ::feathers::controls::navigators::TabItem_obj::withDisplayObject(HX_("TV Shows",98,db,83,97),tvShowsLayoutGroup);
HXLINE(  23)		return  ::TabDto_obj::__alloc( HX_CTX ,tvShowsTab,tvShowsLayoutGroup->container);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(TVShowsView_obj,getTVShowsTabDto,return )


TVShowsView_obj::TVShowsView_obj()
{
}

bool TVShowsView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"getTVShowsTabDto") ) { outValue = getTVShowsTabDto_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TVShowsView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TVShowsView_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TVShowsView_obj::__mClass;

static ::String TVShowsView_obj_sStaticFields[] = {
	HX_("getTVShowsTabDto",48,3c,1d,6e),
	::String(null())
};

void TVShowsView_obj::__register()
{
	TVShowsView_obj _hx_dummy;
	TVShowsView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TVShowsView",79,60,46,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TVShowsView_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TVShowsView_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TVShowsView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TVShowsView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TVShowsView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

