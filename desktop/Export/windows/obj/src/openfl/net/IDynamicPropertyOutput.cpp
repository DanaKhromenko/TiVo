// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_IDynamicPropertyOutput
#include <openfl/net/IDynamicPropertyOutput.h>
#endif

namespace openfl{
namespace net{


static ::String IDynamicPropertyOutput_obj_sMemberFields[] = {
	HX_("writeDynamicProperty",d5,a8,99,9f),
	::String(null()) };

::hx::Class IDynamicPropertyOutput_obj::__mClass;

void IDynamicPropertyOutput_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.IDynamicPropertyOutput",1b,08,f6,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDynamicPropertyOutput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x78651bd9 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
