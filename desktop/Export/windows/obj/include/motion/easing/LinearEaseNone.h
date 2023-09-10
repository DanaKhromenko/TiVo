// Generated by Haxe 4.3.2
#ifndef INCLUDED_motion_easing_LinearEaseNone
#define INCLUDED_motion_easing_LinearEaseNone

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,LinearEaseNone)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES LinearEaseNone_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LinearEaseNone_obj OBJ_;
		LinearEaseNone_obj();

	public:
		enum { _hx_ClassId = 0x5ab85cd4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.LinearEaseNone")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing.LinearEaseNone"); }
		static ::hx::ObjectPtr< LinearEaseNone_obj > __new();
		static ::hx::ObjectPtr< LinearEaseNone_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinearEaseNone_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LinearEaseNone",eb,e8,c2,cd); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_LinearEaseNone */ 
