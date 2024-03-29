// Generated by Haxe 4.3.2
#ifndef INCLUDED_motion_actuators_SimpleActuator
#define INCLUDED_motion_actuators_SimpleActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,PropertyDetails)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Transform)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES SimpleActuator_obj : public  ::motion::actuators::GenericActuator_obj
{
	public:
		typedef  ::motion::actuators::GenericActuator_obj super;
		typedef SimpleActuator_obj OBJ_;
		SimpleActuator_obj();

	public:
		enum { _hx_ClassId = 0x05603dab };

		void __construct( ::Dynamic target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.actuators.SimpleActuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion.actuators.SimpleActuator"); }
		static ::hx::ObjectPtr< SimpleActuator_obj > __new( ::Dynamic target,Float duration, ::Dynamic properties);
		static ::hx::ObjectPtr< SimpleActuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleActuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SimpleActuator",ab,d3,f8,0c); }

		static void __boot();
		static ::Array< ::Dynamic> actuators;
		static int actuatorsLength;
		static bool addedEvent;
		static void stage_onEnterFrame( ::openfl::events::Event event);
		static ::Dynamic stage_onEnterFrame_dyn();

		void setField_flash_geom_Transform( ::openfl::geom::Transform target,::String propertyName, ::Dynamic value);
		::Dynamic setField_flash_geom_Transform_dyn();

		void setField_motion_actuators_TransformActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value);
		::Dynamic setField_motion_actuators_TransformActuator_T_dyn();

		void setField_motion_actuators_MotionPathActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value);
		::Dynamic setField_motion_actuators_MotionPathActuator_T_dyn();

		void setField_flash_display_DisplayObject( ::openfl::display::DisplayObject target,::String propertyName, ::Dynamic value);
		::Dynamic setField_flash_display_DisplayObject_dyn();

		void setField_feathers_motion_effects_actuate_SimpleEffectActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value);
		::Dynamic setField_feathers_motion_effects_actuate_SimpleEffectActuator_T_dyn();

		void setField_feathers_motion_effects_actuate_MethodEffectActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value);
		::Dynamic setField_feathers_motion_effects_actuate_MethodEffectActuator_T_dyn();

		void setField_motion_actuators_SimpleActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value);
		::Dynamic setField_motion_actuators_SimpleActuator_T_dyn();

		Float timeOffset;
		bool active;
		bool cacheVisible;
		int detailsLength;
		bool initialized;
		bool paused;
		Float pauseTime;
		::Array< ::Dynamic> propertyDetails;
		bool sendChange;
		bool setVisible;
		Float startTime;
		bool toggleVisible;
		 ::motion::actuators::GenericActuator reverse( ::Dynamic value);

		virtual void apply();

		 ::motion::actuators::GenericActuator autoVisible( ::Dynamic value);

		 ::motion::actuators::GenericActuator delay(Float duration);

		 ::Dynamic getField( ::Dynamic target,::String propertyName);
		::Dynamic getField_dyn();

		virtual void initialize();
		::Dynamic initialize_dyn();

		void move();

		 ::motion::actuators::GenericActuator onUpdate( ::Dynamic handler,::cpp::VirtualArray parameters);

		void pause();

		void resume();

		void setProperty( ::motion::actuators::PropertyDetails details, ::Dynamic value);
		::Dynamic setProperty_dyn();

		void stop( ::Dynamic properties,bool complete,bool sendEvent);

		virtual void update(Float currentTime);
		::Dynamic update_dyn();

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_SimpleActuator */ 
