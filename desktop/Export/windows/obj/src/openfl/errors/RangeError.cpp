// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc09bde916c21592_11_new,"openfl.errors.RangeError","new",0xae8f9562,"openfl.errors.RangeError.new","openfl/errors/RangeError.hx",11,0xfc04662e)
namespace openfl{
namespace errors{

void RangeError_obj::__construct(::String __o_message){
            		::String message = __o_message;
            		if (::hx::IsNull(__o_message)) message = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_bc09bde916c21592_11_new)
HXLINE(  12)		super::__construct(message,0);
HXLINE(  14)		this->name = HX_("RangeError",eb,ac,85,3c);
            	}

Dynamic RangeError_obj::__CreateEmpty() { return new RangeError_obj; }

void *RangeError_obj::_hx_vtable = 0;

Dynamic RangeError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RangeError_obj > _hx_result = new RangeError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5467b8e6) {
		if (inClassId<=(int)0x3495c9c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3495c9c5;
		} else {
			return inClassId==(int)0x5467b8e6;
		}
	} else {
		return inClassId==(int)0x677ddc49;
	}
}


::hx::ObjectPtr< RangeError_obj > RangeError_obj::__new(::String __o_message) {
	::hx::ObjectPtr< RangeError_obj > __this = new RangeError_obj();
	__this->__construct(__o_message);
	return __this;
}

::hx::ObjectPtr< RangeError_obj > RangeError_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_message) {
	RangeError_obj *__this = (RangeError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RangeError_obj), true, "openfl.errors.RangeError"));
	*(void **)__this = RangeError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

RangeError_obj::RangeError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RangeError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RangeError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class RangeError_obj::__mClass;

void RangeError_obj::__register()
{
	RangeError_obj _hx_dummy;
	RangeError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.errors.RangeError",70,fc,c4,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RangeError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
