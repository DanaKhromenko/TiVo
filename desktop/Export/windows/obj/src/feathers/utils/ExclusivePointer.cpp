// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils_ExclusivePointer
#include <feathers/utils/ExclusivePointer.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e3297bb1294f2583_28_new,"feathers.utils.ExclusivePointer","new",0x87c29c2c,"feathers.utils.ExclusivePointer.new","feathers/utils/ExclusivePointer.hx",28,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_85_claimTouch,"feathers.utils.ExclusivePointer","claimTouch",0x4859fc57,"feathers.utils.ExclusivePointer.claimTouch","feathers/utils/ExclusivePointer.hx",85,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_115_claimMouse,"feathers.utils.ExclusivePointer","claimMouse",0x408bfabd,"feathers.utils.ExclusivePointer.claimMouse","feathers/utils/ExclusivePointer.hx",115,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_140_removeTouchClaim,"feathers.utils.ExclusivePointer","removeTouchClaim",0x7a9f3555,"feathers.utils.ExclusivePointer.removeTouchClaim","feathers/utils/ExclusivePointer.hx",140,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_161_removeMouseClaim,"feathers.utils.ExclusivePointer","removeMouseClaim",0x9edb452f,"feathers.utils.ExclusivePointer.removeMouseClaim","feathers/utils/ExclusivePointer.hx",161,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_182_hasClaim,"feathers.utils.ExclusivePointer","hasClaim",0xa18faa76,"feathers.utils.ExclusivePointer.hasClaim","feathers/utils/ExclusivePointer.hx",182,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_200_getTouchClaim,"feathers.utils.ExclusivePointer","getTouchClaim",0x0b93b23f,"feathers.utils.ExclusivePointer.getTouchClaim","feathers/utils/ExclusivePointer.hx",200,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_210_getMouseClaim,"feathers.utils.ExclusivePointer","getMouseClaim",0x2fcfc219,"feathers.utils.ExclusivePointer.getMouseClaim","feathers/utils/ExclusivePointer.hx",210,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_218_removeAllClaims,"feathers.utils.ExclusivePointer","removeAllClaims",0x41e28260,"feathers.utils.ExclusivePointer.removeAllClaims","feathers/utils/ExclusivePointer.hx",218,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_226_dispose,"feathers.utils.ExclusivePointer","dispose",0x5f3b226b,"feathers.utils.ExclusivePointer.dispose","feathers/utils/ExclusivePointer.hx",226,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_229_hasClaimOn,"feathers.utils.ExclusivePointer","hasClaimOn",0xe4a7f935,"feathers.utils.ExclusivePointer.hasClaimOn","feathers/utils/ExclusivePointer.hx",229,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_241_exclusivePointer_target_removedFromStageHandler,"feathers.utils.ExclusivePointer","exclusivePointer_target_removedFromStageHandler",0x212ec894,"feathers.utils.ExclusivePointer.exclusivePointer_target_removedFromStageHandler","feathers/utils/ExclusivePointer.hx",241,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_254_exclusivePointer_stage_mouseUpHandler,"feathers.utils.ExclusivePointer","exclusivePointer_stage_mouseUpHandler",0x3b4cc637,"feathers.utils.ExclusivePointer.exclusivePointer_stage_mouseUpHandler","feathers/utils/ExclusivePointer.hx",254,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_258_exclusivePointer_stage_touchEndHandler,"feathers.utils.ExclusivePointer","exclusivePointer_stage_touchEndHandler",0x32e1aec1,"feathers.utils.ExclusivePointer.exclusivePointer_stage_touchEndHandler","feathers/utils/ExclusivePointer.hx",258,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_37_forStage,"feathers.utils.ExclusivePointer","forStage",0x4aaee3a9,"feathers.utils.ExclusivePointer.forStage","feathers/utils/ExclusivePointer.hx",37,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_55_disposeForStage,"feathers.utils.ExclusivePointer","disposeForStage",0x2495b480,"feathers.utils.ExclusivePointer.disposeForStage","feathers/utils/ExclusivePointer.hx",55,0x735e1742)
HX_LOCAL_STACK_FRAME(_hx_pos_e3297bb1294f2583_29_boot,"feathers.utils.ExclusivePointer","boot",0x3a9f0ae6,"feathers.utils.ExclusivePointer.boot","feathers/utils/ExclusivePointer.hx",29,0x735e1742)
namespace feathers{
namespace utils{

void ExclusivePointer_obj::__construct( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_e3297bb1294f2583_28_new)
HXLINE(  76)		this->_touchClaims =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  75)		this->_mouseClaim = null();
HXLINE(  71)		this->_stageListenerCount = 0;
HXLINE(  65)		if (::hx::IsNull( stage )) {
HXLINE(  66)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Stage cannot be null.",e5,20,4b,17)));
            		}
HXLINE(  68)		this->_stage = stage;
            	}

Dynamic ExclusivePointer_obj::__CreateEmpty() { return new ExclusivePointer_obj; }

void *ExclusivePointer_obj::_hx_vtable = 0;

Dynamic ExclusivePointer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExclusivePointer_obj > _hx_result = new ExclusivePointer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ExclusivePointer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x037dc098;
}

bool ExclusivePointer_obj::claimTouch(int touchPointID, ::openfl::display::DisplayObject target){
            	HX_GC_STACKFRAME(&_hx_pos_e3297bb1294f2583_85_claimTouch)
HXLINE(  86)		if (::hx::IsNull( target )) {
HXLINE(  87)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Target cannot be null.",b8,c3,61,11)));
            		}
HXLINE(  89)		if (::hx::IsInstanceNotEq( target->stage,this->_stage )) {
HXLINE(  90)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Target cannot claim a pointer on the selected stage because it appears on a different stage.",e5,0d,11,e4)));
            		}
HXLINE(  92)		 ::openfl::display::DisplayObject existingTarget = ( ( ::openfl::display::DisplayObject)(this->_touchClaims->get(touchPointID)) );
HXLINE(  93)		if (::hx::IsNotNull( existingTarget )) {
HXLINE(  94)			return false;
            		}
HXLINE(  96)		this->_touchClaims->set(touchPointID,target);
HXLINE(  97)		target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->exclusivePointer_target_removedFromStageHandler_dyn(),false,0,true);
HXLINE(  98)		if ((this->_stageListenerCount == 0)) {
HXLINE(  99)			this->_stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->exclusivePointer_stage_mouseUpHandler_dyn(),false,0,true);
HXLINE( 100)			this->_stage->addEventListener(HX_("touchEnd",5c,c5,09,00),this->exclusivePointer_stage_touchEndHandler_dyn(),false,0,true);
            		}
HXLINE( 102)		this->_stageListenerCount++;
HXLINE( 103)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ExclusivePointer_obj,claimTouch,return )

bool ExclusivePointer_obj::claimMouse( ::openfl::display::DisplayObject target){
            	HX_GC_STACKFRAME(&_hx_pos_e3297bb1294f2583_115_claimMouse)
HXLINE( 116)		if (::hx::IsNull( target )) {
HXLINE( 117)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Target cannot be null.",b8,c3,61,11)));
            		}
HXLINE( 119)		if (::hx::IsInstanceNotEq( target->stage,this->_stage )) {
HXLINE( 120)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Target cannot claim a pointer on the selected stage because it appears on a different stage.",e5,0d,11,e4)));
            		}
HXLINE( 122)		if (::hx::IsNotNull( this->_mouseClaim )) {
HXLINE( 123)			return false;
            		}
HXLINE( 125)		this->_mouseClaim = target;
HXLINE( 126)		target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->exclusivePointer_target_removedFromStageHandler_dyn(),false,0,true);
HXLINE( 127)		if ((this->_stageListenerCount == 0)) {
HXLINE( 128)			this->_stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->exclusivePointer_stage_mouseUpHandler_dyn(),false,0,true);
HXLINE( 129)			this->_stage->addEventListener(HX_("touchEnd",5c,c5,09,00),this->exclusivePointer_stage_touchEndHandler_dyn(),false,0,true);
            		}
HXLINE( 131)		this->_stageListenerCount++;
HXLINE( 132)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,claimMouse,return )

void ExclusivePointer_obj::removeTouchClaim(int touchPointID){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_140_removeTouchClaim)
HXLINE( 141)		 ::openfl::display::DisplayObject existingTarget = ( ( ::openfl::display::DisplayObject)(this->_touchClaims->get(touchPointID)) );
HXLINE( 142)		if (::hx::IsNull( existingTarget )) {
HXLINE( 143)			return;
            		}
HXLINE( 145)		this->_touchClaims->remove(touchPointID);
HXLINE( 146)		if (!(this->hasClaimOn(existingTarget))) {
HXLINE( 147)			existingTarget->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->exclusivePointer_target_removedFromStageHandler_dyn(),null());
            		}
HXLINE( 149)		this->_stageListenerCount--;
HXLINE( 150)		if ((this->_stageListenerCount == 0)) {
HXLINE( 151)			this->_stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->exclusivePointer_stage_mouseUpHandler_dyn(),null());
HXLINE( 152)			this->_stage->removeEventListener(HX_("touchEnd",5c,c5,09,00),this->exclusivePointer_stage_touchEndHandler_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,removeTouchClaim,(void))

void ExclusivePointer_obj::removeMouseClaim(){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_161_removeMouseClaim)
HXLINE( 162)		 ::openfl::display::DisplayObject existingTarget = this->_mouseClaim;
HXLINE( 163)		if (::hx::IsNull( existingTarget )) {
HXLINE( 164)			return;
            		}
HXLINE( 166)		this->_mouseClaim = null();
HXLINE( 167)		if (!(this->hasClaimOn(existingTarget))) {
HXLINE( 168)			existingTarget->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->exclusivePointer_target_removedFromStageHandler_dyn(),null());
            		}
HXLINE( 170)		this->_stageListenerCount--;
HXLINE( 171)		if ((this->_stageListenerCount == 0)) {
HXLINE( 172)			this->_stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->exclusivePointer_stage_mouseUpHandler_dyn(),null());
HXLINE( 173)			this->_stage->removeEventListener(HX_("touchEnd",5c,c5,09,00),this->exclusivePointer_stage_touchEndHandler_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ExclusivePointer_obj,removeMouseClaim,(void))

bool ExclusivePointer_obj::hasClaim(){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_182_hasClaim)
HXLINE( 183)		if (::hx::IsNotNull( this->_mouseClaim )) {
HXLINE( 184)			return true;
            		}
HXLINE( 186)		{
HXLINE( 186)			 ::Dynamic touchPointID = this->_touchClaims->keys();
HXDLIN( 186)			while(( (bool)(touchPointID->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 186)				int touchPointID1 = ( (int)(touchPointID->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 187)				return true;
            			}
            		}
HXLINE( 189)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ExclusivePointer_obj,hasClaim,return )

 ::openfl::display::DisplayObject ExclusivePointer_obj::getTouchClaim(int touchPointID){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_200_getTouchClaim)
HXDLIN( 200)		return ( ( ::openfl::display::DisplayObject)(this->_touchClaims->get(touchPointID)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,getTouchClaim,return )

 ::openfl::display::DisplayObject ExclusivePointer_obj::getMouseClaim(){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_210_getMouseClaim)
HXDLIN( 210)		return this->_mouseClaim;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ExclusivePointer_obj,getMouseClaim,return )

void ExclusivePointer_obj::removeAllClaims(){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_218_removeAllClaims)
HXLINE( 219)		{
HXLINE( 219)			 ::Dynamic touchPointID = this->_touchClaims->keys();
HXDLIN( 219)			while(( (bool)(touchPointID->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 219)				int touchPointID1 = ( (int)(touchPointID->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 220)				this->removeTouchClaim(touchPointID1);
            			}
            		}
HXLINE( 222)		this->removeMouseClaim();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ExclusivePointer_obj,removeAllClaims,(void))

void ExclusivePointer_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_226_dispose)
HXDLIN( 226)		this->removeAllClaims();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ExclusivePointer_obj,dispose,(void))

bool ExclusivePointer_obj::hasClaimOn( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_229_hasClaimOn)
HXLINE( 230)		if (::hx::IsInstanceEq( this->_mouseClaim,target )) {
HXLINE( 231)			return true;
            		}
HXLINE( 233)		{
HXLINE( 233)			::Dynamic map = this->_touchClaims;
HXDLIN( 233)			::Dynamic _g_map = map;
HXDLIN( 233)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 233)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 233)				int key = ( (int)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 233)				 ::openfl::display::DisplayObject _g_value = ( ( ::openfl::display::DisplayObject)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 233)				int _g_key = key;
HXDLIN( 233)				int touchPointID = _g_key;
HXDLIN( 233)				 ::openfl::display::DisplayObject existingTarget = _g_value;
HXLINE( 234)				if (::hx::IsInstanceEq( existingTarget,target )) {
HXLINE( 235)					return true;
            				}
            			}
            		}
HXLINE( 238)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,hasClaimOn,return )

void ExclusivePointer_obj::exclusivePointer_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_241_exclusivePointer_target_removedFromStageHandler)
HXLINE( 242)		 ::openfl::display::DisplayObject target = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->currentTarget);
HXLINE( 243)		if (::hx::IsInstanceEq( this->_mouseClaim,target )) {
HXLINE( 244)			this->removeMouseClaim();
            		}
HXLINE( 246)		{
HXLINE( 246)			::Dynamic map = this->_touchClaims;
HXDLIN( 246)			::Dynamic _g_map = map;
HXDLIN( 246)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 246)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 246)				int key = ( (int)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 246)				 ::openfl::display::DisplayObject _g_value = ( ( ::openfl::display::DisplayObject)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 246)				int _g_key = key;
HXDLIN( 246)				int touchPointID = _g_key;
HXDLIN( 246)				 ::openfl::display::DisplayObject existingTarget = _g_value;
HXLINE( 247)				if (::hx::IsInstanceEq( existingTarget,target )) {
HXLINE( 248)					this->removeTouchClaim(touchPointID);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,exclusivePointer_target_removedFromStageHandler,(void))

void ExclusivePointer_obj::exclusivePointer_stage_mouseUpHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_254_exclusivePointer_stage_mouseUpHandler)
HXDLIN( 254)		this->removeMouseClaim();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,exclusivePointer_stage_mouseUpHandler,(void))

void ExclusivePointer_obj::exclusivePointer_stage_touchEndHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_258_exclusivePointer_stage_touchEndHandler)
HXDLIN( 258)		this->removeTouchClaim(event->touchPointID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,exclusivePointer_stage_touchEndHandler,(void))

 ::haxe::ds::ObjectMap ExclusivePointer_obj::stageToObject;

 ::feathers::utils::ExclusivePointer ExclusivePointer_obj::forStage( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_e3297bb1294f2583_37_forStage)
HXLINE(  38)		if (::hx::IsNull( stage )) {
HXLINE(  39)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Stage cannot be null.",e5,20,4b,17)));
            		}
HXLINE(  41)		 ::feathers::utils::ExclusivePointer exclusivePointer = ( ( ::feathers::utils::ExclusivePointer)(::feathers::utils::ExclusivePointer_obj::stageToObject->get(stage)) );
HXLINE(  42)		if (::hx::IsNotNull( exclusivePointer )) {
HXLINE(  43)			return exclusivePointer;
            		}
HXLINE(  45)		exclusivePointer =  ::feathers::utils::ExclusivePointer_obj::__alloc( HX_CTX ,stage);
HXLINE(  46)		::feathers::utils::ExclusivePointer_obj::stageToObject->set(stage,exclusivePointer);
HXLINE(  47)		return exclusivePointer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,forStage,return )

void ExclusivePointer_obj::disposeForStage( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_e3297bb1294f2583_55_disposeForStage)
HXLINE(  56)		 ::feathers::utils::ExclusivePointer exclusivePointer = ( ( ::feathers::utils::ExclusivePointer)(::feathers::utils::ExclusivePointer_obj::stageToObject->get(stage)) );
HXLINE(  57)		if (::hx::IsNull( exclusivePointer )) {
HXLINE(  58)			return;
            		}
HXLINE(  60)		exclusivePointer->dispose();
HXLINE(  61)		::feathers::utils::ExclusivePointer_obj::stageToObject->remove(stage);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExclusivePointer_obj,disposeForStage,(void))


::hx::ObjectPtr< ExclusivePointer_obj > ExclusivePointer_obj::__new( ::openfl::display::Stage stage) {
	::hx::ObjectPtr< ExclusivePointer_obj > __this = new ExclusivePointer_obj();
	__this->__construct(stage);
	return __this;
}

::hx::ObjectPtr< ExclusivePointer_obj > ExclusivePointer_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage) {
	ExclusivePointer_obj *__this = (ExclusivePointer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExclusivePointer_obj), true, "feathers.utils.ExclusivePointer"));
	*(void **)__this = ExclusivePointer_obj::_hx_vtable;
	__this->__construct(stage);
	return __this;
}

ExclusivePointer_obj::ExclusivePointer_obj()
{
}

void ExclusivePointer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExclusivePointer);
	HX_MARK_MEMBER_NAME(_stageListenerCount,"_stageListenerCount");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_MEMBER_NAME(_mouseClaim,"_mouseClaim");
	HX_MARK_MEMBER_NAME(_touchClaims,"_touchClaims");
	HX_MARK_END_CLASS();
}

void ExclusivePointer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stageListenerCount,"_stageListenerCount");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
	HX_VISIT_MEMBER_NAME(_mouseClaim,"_mouseClaim");
	HX_VISIT_MEMBER_NAME(_touchClaims,"_touchClaims");
}

::hx::Val ExclusivePointer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { return ::hx::Val( _stage ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasClaim") ) { return ::hx::Val( hasClaim_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"claimTouch") ) { return ::hx::Val( claimTouch_dyn() ); }
		if (HX_FIELD_EQ(inName,"claimMouse") ) { return ::hx::Val( claimMouse_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasClaimOn") ) { return ::hx::Val( hasClaimOn_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mouseClaim") ) { return ::hx::Val( _mouseClaim ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_touchClaims") ) { return ::hx::Val( _touchClaims ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTouchClaim") ) { return ::hx::Val( getTouchClaim_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMouseClaim") ) { return ::hx::Val( getMouseClaim_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeAllClaims") ) { return ::hx::Val( removeAllClaims_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeTouchClaim") ) { return ::hx::Val( removeTouchClaim_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeMouseClaim") ) { return ::hx::Val( removeMouseClaim_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_stageListenerCount") ) { return ::hx::Val( _stageListenerCount ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"exclusivePointer_stage_mouseUpHandler") ) { return ::hx::Val( exclusivePointer_stage_mouseUpHandler_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"exclusivePointer_stage_touchEndHandler") ) { return ::hx::Val( exclusivePointer_stage_touchEndHandler_dyn() ); }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"exclusivePointer_target_removedFromStageHandler") ) { return ::hx::Val( exclusivePointer_target_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ExclusivePointer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"forStage") ) { outValue = forStage_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stageToObject") ) { outValue = ( stageToObject ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"disposeForStage") ) { outValue = disposeForStage_dyn(); return true; }
	}
	return false;
}

::hx::Val ExclusivePointer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_mouseClaim") ) { _mouseClaim=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_touchClaims") ) { _touchClaims=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_stageListenerCount") ) { _stageListenerCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ExclusivePointer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"stageToObject") ) { stageToObject=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void ExclusivePointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_stageListenerCount",3c,9a,8d,0b));
	outFields->push(HX_("_stage",ff,b1,f2,7f));
	outFields->push(HX_("_mouseClaim",36,30,af,38));
	outFields->push(HX_("_touchClaims",97,30,49,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ExclusivePointer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ExclusivePointer_obj,_stageListenerCount),HX_("_stageListenerCount",3c,9a,8d,0b)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(ExclusivePointer_obj,_stage),HX_("_stage",ff,b1,f2,7f)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(ExclusivePointer_obj,_mouseClaim),HX_("_mouseClaim",36,30,af,38)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(ExclusivePointer_obj,_touchClaims),HX_("_touchClaims",97,30,49,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ExclusivePointer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &ExclusivePointer_obj::stageToObject,HX_("stageToObject",78,3b,e1,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ExclusivePointer_obj_sMemberFields[] = {
	HX_("_stageListenerCount",3c,9a,8d,0b),
	HX_("_stage",ff,b1,f2,7f),
	HX_("_mouseClaim",36,30,af,38),
	HX_("_touchClaims",97,30,49,d0),
	HX_("claimTouch",a3,76,56,51),
	HX_("claimMouse",09,75,88,49),
	HX_("removeTouchClaim",a1,70,92,fb),
	HX_("removeMouseClaim",7b,80,ce,1f),
	HX_("hasClaim",c2,b9,b0,d4),
	HX_("getTouchClaim",73,af,5b,9e),
	HX_("getMouseClaim",4d,bf,97,c2),
	HX_("removeAllClaims",94,34,8b,14),
	HX_("dispose",9f,80,4c,bb),
	HX_("hasClaimOn",81,73,a4,ed),
	HX_("exclusivePointer_target_removedFromStageHandler",c8,ca,bc,0c),
	HX_("exclusivePointer_stage_mouseUpHandler",6b,bf,db,a5),
	HX_("exclusivePointer_stage_touchEndHandler",0d,c3,6c,05),
	::String(null()) };

static void ExclusivePointer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExclusivePointer_obj::stageToObject,"stageToObject");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ExclusivePointer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExclusivePointer_obj::stageToObject,"stageToObject");
};

#endif

::hx::Class ExclusivePointer_obj::__mClass;

static ::String ExclusivePointer_obj_sStaticFields[] = {
	HX_("stageToObject",78,3b,e1,a1),
	HX_("forStage",f5,f2,cf,7d),
	HX_("disposeForStage",b4,66,3e,f7),
	::String(null())
};

void ExclusivePointer_obj::__register()
{
	ExclusivePointer_obj _hx_dummy;
	ExclusivePointer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.ExclusivePointer",3a,56,e6,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExclusivePointer_obj::__GetStatic;
	__mClass->mSetStaticField = &ExclusivePointer_obj::__SetStatic;
	__mClass->mMarkFunc = ExclusivePointer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ExclusivePointer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ExclusivePointer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ExclusivePointer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ExclusivePointer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExclusivePointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExclusivePointer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ExclusivePointer_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_e3297bb1294f2583_29_boot)
HXDLIN(  29)		stageToObject =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace feathers
} // end namespace utils