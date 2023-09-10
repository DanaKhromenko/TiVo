// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_Direction
#include <feathers/layout/Direction.h>
#endif
namespace feathers{
namespace layout{

::feathers::layout::Direction Direction_obj::HORIZONTAL;

::feathers::layout::Direction Direction_obj::NONE;

::feathers::layout::Direction Direction_obj::VERTICAL;

bool Direction_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) { outValue = Direction_obj::HORIZONTAL; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = Direction_obj::NONE; return true; }
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) { outValue = Direction_obj::VERTICAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Direction_obj)

int Direction_obj::__FindIndex(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 1;
	if (inName==HX_("NONE",b8,da,ca,33)) return 2;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 0;
	return super::__FindIndex(inName);
}

int Direction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Direction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return HORIZONTAL;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String Direction_obj_sStaticFields[] = {
	HX_("VERTICAL",76,4c,9b,c3),
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("NONE",b8,da,ca,33),
	::String(null())
};

::hx::Class Direction_obj::__mClass;

Dynamic __Create_Direction_obj() { return new Direction_obj; }

void Direction_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.layout.Direction",99,8c,41,20), ::hx::TCanCast< Direction_obj >,Direction_obj_sStaticFields,0,
	&__Create_Direction_obj, &__Create,
	&super::__SGetClass(), &CreateDirection_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Direction_obj::__GetStatic;
}

void Direction_obj::__boot()
{
HORIZONTAL = ::hx::CreateConstEnum< Direction_obj >(HX_("HORIZONTAL",e4,70,cd,07),1);
NONE = ::hx::CreateConstEnum< Direction_obj >(HX_("NONE",b8,da,ca,33),2);
VERTICAL = ::hx::CreateConstEnum< Direction_obj >(HX_("VERTICAL",76,4c,9b,c3),0);
}


} // end namespace feathers
} // end namespace layout