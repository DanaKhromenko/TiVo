// Generated by Haxe 4.3.2
#ifndef INCLUDED_motion_easing_IEasing
#define INCLUDED_motion_easing_IEasing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES IEasing_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Float (::hx::Object :: *_hx_calculate)(Float k); 
		static inline Float calculate( ::Dynamic _hx_,Float k) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::easing::IEasing_obj *>(_hx_.mPtr->_hx_getInterface(0x864e8b53)))->_hx_calculate)(k);
		}
		Float (::hx::Object :: *_hx_ease)(Float t,Float b,Float c,Float d); 
		static inline Float ease( ::Dynamic _hx_,Float t,Float b,Float c,Float d) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::easing::IEasing_obj *>(_hx_.mPtr->_hx_getInterface(0x864e8b53)))->_hx_ease)(t,b,c,d);
		}
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_IEasing */ 
