// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_BaseNavigator
#include <feathers/controls/navigators/BaseNavigator.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabItem
#include <feathers/controls/navigators/TabItem.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabNavigator
#include <feathers/controls/navigators/TabNavigator.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
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
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_feathers_utils__AbstractDisplayObjectFactory_AbstractDisplayObjectFactory_Impl_
#include <feathers/utils/_AbstractDisplayObjectFactory/AbstractDisplayObjectFactory_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6e23bd5990762f52_88_new,"feathers.controls.navigators.TabItem","new",0x2e3492a2,"feathers.controls.navigators.TabItem.new","feathers/controls/navigators/TabItem.hx",88,0x72cbbe6f)
HX_LOCAL_STACK_FRAME(_hx_pos_6e23bd5990762f52_107_getView,"feathers.controls.navigators.TabItem","getView",0x7baded5d,"feathers.controls.navigators.TabItem.getView","feathers/controls/navigators/TabItem.hx",107,0x72cbbe6f)
HX_LOCAL_STACK_FRAME(_hx_pos_6e23bd5990762f52_114_returnView,"feathers.controls.navigators.TabItem","returnView",0x321b0533,"feathers.controls.navigators.TabItem.returnView","feathers/controls/navigators/TabItem.hx",114,0x72cbbe6f)
HX_LOCAL_STACK_FRAME(_hx_pos_6e23bd5990762f52_42_withClass,"feathers.controls.navigators.TabItem","withClass",0x9eacbc14,"feathers.controls.navigators.TabItem.withClass","feathers/controls/navigators/TabItem.hx",42,0x72cbbe6f)
HX_LOCAL_STACK_FRAME(_hx_pos_6e23bd5990762f52_55_withFunction,"feathers.controls.navigators.TabItem","withFunction",0x453538bc,"feathers.controls.navigators.TabItem.withFunction","feathers/controls/navigators/TabItem.hx",55,0x72cbbe6f)
HX_LOCAL_STACK_FRAME(_hx_pos_6e23bd5990762f52_68_withDisplayObject,"feathers.controls.navigators.TabItem","withDisplayObject",0x16e7ba7d,"feathers.controls.navigators.TabItem.withDisplayObject","feathers/controls/navigators/TabItem.hx",68,0x72cbbe6f)
HX_LOCAL_STACK_FRAME(_hx_pos_6e23bd5990762f52_81_withFactory,"feathers.controls.navigators.TabItem","withFactory",0x6eaa0fa6,"feathers.controls.navigators.TabItem.withFactory","feathers/controls/navigators/TabItem.hx",81,0x72cbbe6f)
HX_LOCAL_STACK_FRAME(_hx_pos_6e23bd5990762f52_93_boot,"feathers.controls.navigators.TabItem","boot",0x37e4bbb0,"feathers.controls.navigators.TabItem.boot","feathers/controls/navigators/TabItem.hx",93,0x72cbbe6f)
namespace feathers{
namespace controls{
namespace navigators{

void TabItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6e23bd5990762f52_88_new)
HXLINE(  89)		this->internalID = ::Std_obj::string(::feathers::controls::navigators::TabItem_obj::internalIDCounter);
HXLINE(  90)		::feathers::controls::navigators::TabItem_obj::internalIDCounter++;
            	}

Dynamic TabItem_obj::__CreateEmpty() { return new TabItem_obj; }

void *TabItem_obj::_hx_vtable = 0;

Dynamic TabItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabItem_obj > _hx_result = new TabItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5f2d05a2;
}

 ::openfl::display::DisplayObject TabItem_obj::getView( ::feathers::controls::navigators::TabNavigator navigator){
            	HX_STACKFRAME(&_hx_pos_6e23bd5990762f52_107_getView)
HXLINE( 108)		 ::openfl::display::DisplayObject view = ( ( ::openfl::display::DisplayObject)(this->viewFactory->create()) );
HXLINE( 109)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabItem_obj,getView,return )

void TabItem_obj::returnView( ::openfl::display::DisplayObject view){
            	HX_STACKFRAME(&_hx_pos_6e23bd5990762f52_114_returnView)
HXDLIN( 114)		if (::hx::IsNotNull( this->viewFactory->destroy )) {
HXLINE( 115)			this->viewFactory->destroy(view);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabItem_obj,returnView,(void))

 ::feathers::controls::navigators::TabItem TabItem_obj::withClass(::String text,::hx::Class viewClass){
            	HX_GC_STACKFRAME(&_hx_pos_6e23bd5990762f52_42_withClass)
HXLINE(  43)		 ::feathers::controls::navigators::TabItem item =  ::feathers::controls::navigators::TabItem_obj::__alloc( HX_CTX );
HXLINE(  44)		item->text = text;
HXLINE(  45)		item->viewFactory = ::feathers::utils::_AbstractDisplayObjectFactory::AbstractDisplayObjectFactory_Impl__obj::fromClass(viewClass);
HXLINE(  46)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabItem_obj,withClass,return )

 ::feathers::controls::navigators::TabItem TabItem_obj::withFunction(::String text, ::Dynamic viewFunction){
            	HX_GC_STACKFRAME(&_hx_pos_6e23bd5990762f52_55_withFunction)
HXLINE(  56)		 ::feathers::controls::navigators::TabItem item =  ::feathers::controls::navigators::TabItem_obj::__alloc( HX_CTX );
HXLINE(  57)		item->text = text;
HXLINE(  58)		item->viewFactory = ::feathers::utils::_AbstractDisplayObjectFactory::AbstractDisplayObjectFactory_Impl__obj::fromFunction(viewFunction);
HXLINE(  59)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabItem_obj,withFunction,return )

 ::feathers::controls::navigators::TabItem TabItem_obj::withDisplayObject(::String text, ::openfl::display::DisplayObject viewInstance){
            	HX_GC_STACKFRAME(&_hx_pos_6e23bd5990762f52_68_withDisplayObject)
HXLINE(  69)		 ::feathers::controls::navigators::TabItem item =  ::feathers::controls::navigators::TabItem_obj::__alloc( HX_CTX );
HXLINE(  70)		item->text = text;
HXLINE(  71)		item->viewFactory = ::feathers::utils::_AbstractDisplayObjectFactory::AbstractDisplayObjectFactory_Impl__obj::fromDisplayObject(viewInstance);
HXLINE(  72)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabItem_obj,withDisplayObject,return )

 ::feathers::controls::navigators::TabItem TabItem_obj::withFactory(::String text, ::feathers::utils::DisplayObjectFactory viewFactory){
            	HX_GC_STACKFRAME(&_hx_pos_6e23bd5990762f52_81_withFactory)
HXLINE(  82)		 ::feathers::controls::navigators::TabItem item =  ::feathers::controls::navigators::TabItem_obj::__alloc( HX_CTX );
HXLINE(  83)		item->text = text;
HXLINE(  84)		item->viewFactory = viewFactory;
HXLINE(  85)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabItem_obj,withFactory,return )

int TabItem_obj::internalIDCounter;


::hx::ObjectPtr< TabItem_obj > TabItem_obj::__new() {
	::hx::ObjectPtr< TabItem_obj > __this = new TabItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabItem_obj > TabItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabItem_obj *__this = (TabItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabItem_obj), true, "feathers.controls.navigators.TabItem"));
	*(void **)__this = TabItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabItem_obj::TabItem_obj()
{
}

void TabItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabItem);
	HX_MARK_MEMBER_NAME(internalID,"internalID");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(viewFactory,"viewFactory");
	HX_MARK_END_CLASS();
}

void TabItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(internalID,"internalID");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(viewFactory,"viewFactory");
}

::hx::Val TabItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getView") ) { return ::hx::Val( getView_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"internalID") ) { return ::hx::Val( internalID ); }
		if (HX_FIELD_EQ(inName,"returnView") ) { return ::hx::Val( returnView_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"viewFactory") ) { return ::hx::Val( viewFactory ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TabItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"withClass") ) { outValue = withClass_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"withFactory") ) { outValue = withFactory_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"withFunction") ) { outValue = withFunction_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"withDisplayObject") ) { outValue = withDisplayObject_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"internalIDCounter") ) { outValue = ( internalIDCounter ); return true; }
	}
	return false;
}

::hx::Val TabItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"internalID") ) { internalID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"viewFactory") ) { viewFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TabItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"internalIDCounter") ) { internalIDCounter=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void TabItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("internalID",58,b0,4c,00));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("viewFactory",e5,58,eb,89));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabItem_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TabItem_obj,internalID),HX_("internalID",58,b0,4c,00)},
	{::hx::fsString,(int)offsetof(TabItem_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(TabItem_obj,viewFactory),HX_("viewFactory",e5,58,eb,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TabItem_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TabItem_obj::internalIDCounter,HX_("internalIDCounter",84,61,ab,23)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TabItem_obj_sMemberFields[] = {
	HX_("internalID",58,b0,4c,00),
	HX_("text",ad,cc,f9,4c),
	HX_("viewFactory",e5,58,eb,89),
	HX_("getView",1b,e2,d1,20),
	HX_("returnView",35,1b,7e,ea),
	::String(null()) };

static void TabItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabItem_obj::internalIDCounter,"internalIDCounter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabItem_obj::internalIDCounter,"internalIDCounter");
};

#endif

::hx::Class TabItem_obj::__mClass;

static ::String TabItem_obj_sStaticFields[] = {
	HX_("withClass",52,dc,45,cc),
	HX_("withFunction",3e,53,0b,2d),
	HX_("withDisplayObject",bb,48,18,49),
	HX_("withFactory",64,3b,fa,0c),
	HX_("internalIDCounter",84,61,ab,23),
	::String(null())
};

void TabItem_obj::__register()
{
	TabItem_obj _hx_dummy;
	TabItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.navigators.TabItem",b0,59,52,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabItem_obj::__GetStatic;
	__mClass->mSetStaticField = &TabItem_obj::__SetStatic;
	__mClass->mMarkFunc = TabItem_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabItem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabItem_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6e23bd5990762f52_93_boot)
HXDLIN(  93)		internalIDCounter = 0;
            	}
}

} // end namespace feathers
} // end namespace controls
} // end namespace navigators