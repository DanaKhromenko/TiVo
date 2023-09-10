// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMTilemap
#include <openfl/display/_internal/DOMTilemap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5d17d441f5636d23_20_clear,"openfl.display._internal.DOMTilemap","clear",0x74ca2867,"openfl.display._internal.DOMTilemap.clear","openfl/display/_internal/DOMTilemap.hx",20,0xd46d0293)
HX_LOCAL_STACK_FRAME(_hx_pos_5d17d441f5636d23_34_render,"openfl.display._internal.DOMTilemap","render",0xb99ab33c,"openfl.display._internal.DOMTilemap.render","openfl/display/_internal/DOMTilemap.hx",34,0xd46d0293)
HX_LOCAL_STACK_FRAME(_hx_pos_5d17d441f5636d23_71_renderDrawable,"openfl.display._internal.DOMTilemap","renderDrawable",0x6444f6fa,"openfl.display._internal.DOMTilemap.renderDrawable","openfl/display/_internal/DOMTilemap.hx",71,0xd46d0293)
HX_LOCAL_STACK_FRAME(_hx_pos_5d17d441f5636d23_92_renderDrawableClear,"openfl.display._internal.DOMTilemap","renderDrawableClear",0x40c06033,"openfl.display._internal.DOMTilemap.renderDrawableClear","openfl/display/_internal/DOMTilemap.hx",92,0xd46d0293)
HX_LOCAL_STACK_FRAME(_hx_pos_5d17d441f5636d23_17_boot,"openfl.display._internal.DOMTilemap","boot",0xdb22e698,"openfl.display._internal.DOMTilemap.boot","openfl/display/_internal/DOMTilemap.hx",17,0xd46d0293)
namespace openfl{
namespace display{
namespace _internal{

void DOMTilemap_obj::__construct() { }

Dynamic DOMTilemap_obj::__CreateEmpty() { return new DOMTilemap_obj; }

void *DOMTilemap_obj::_hx_vtable = 0;

Dynamic DOMTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMTilemap_obj > _hx_result = new DOMTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMTilemap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a774196;
}

void DOMTilemap_obj::clear( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_5d17d441f5636d23_20_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTilemap_obj,clear,(void))

void DOMTilemap_obj::render( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_5d17d441f5636d23_34_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTilemap_obj,render,(void))

void DOMTilemap_obj::renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_5d17d441f5636d23_71_renderDrawable)
HXLINE(  72)		renderer->_hx___updateCacheBitmap(tilemap,false);
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( tilemap->_hx___cacheBitmap )) {
HXLINE(  74)			_hx_tmp = !(tilemap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  76)			renderer->_hx___renderDrawableClear(tilemap);
HXLINE(  77)			tilemap->_hx___cacheBitmap->stage = tilemap->stage;
            		}
HXLINE(  87)		renderer->_hx___renderEvent(tilemap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTilemap_obj,renderDrawable,(void))

void DOMTilemap_obj::renderDrawableClear( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_5d17d441f5636d23_92_renderDrawableClear)
HXDLIN(  92)		::openfl::display::_internal::DOMTilemap_obj::clear(tilemap,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTilemap_obj,renderDrawableClear,(void))


DOMTilemap_obj::DOMTilemap_obj()
{
}

bool DOMTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMTilemap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMTilemap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMTilemap_obj::__mClass;

static ::String DOMTilemap_obj_sStaticFields[] = {
	HX_("clear",8d,71,5b,48),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	::String(null())
};

void DOMTilemap_obj::__register()
{
	DOMTilemap_obj _hx_dummy;
	DOMTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMTilemap",c8,17,94,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMTilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5d17d441f5636d23_17_boot)
HXDLIN(  17)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
