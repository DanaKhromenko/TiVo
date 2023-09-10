// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TVShow
#include <TVShow.h>
#endif
#ifndef INCLUDED_TVShowBuilder
#include <TVShowBuilder.h>
#endif
#ifndef INCLUDED_TVShowsTxtParser
#include <TVShowsTxtParser.h>
#endif
#ifndef INCLUDED_feathers_data_ArrayCollection
#include <feathers/data/ArrayCollection.h>
#endif
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6bb51b0cab6f2cd0_11_new,"TVShowsTxtParser","new",0xf10fe74d,"TVShowsTxtParser.new","TVShowsTxtParser.hx",11,0x4a8d40c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bb51b0cab6f2cd0_14_getTVShows,"TVShowsTxtParser","getTVShows",0xc167a6d1,"TVShowsTxtParser.getTVShows","TVShowsTxtParser.hx",14,0x4a8d40c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bb51b0cab6f2cd0_31_parseTVShow,"TVShowsTxtParser","parseTVShow",0xad84b7ff,"TVShowsTxtParser.parseTVShow","TVShowsTxtParser.hx",31,0x4a8d40c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bb51b0cab6f2cd0_77_getStringValueFromStrLine,"TVShowsTxtParser","getStringValueFromStrLine",0xb29195de,"TVShowsTxtParser.getStringValueFromStrLine","TVShowsTxtParser.hx",77,0x4a8d40c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bb51b0cab6f2cd0_86_getIntValueFromStrLine,"TVShowsTxtParser","getIntValueFromStrLine",0x40524e56,"TVShowsTxtParser.getIntValueFromStrLine","TVShowsTxtParser.hx",86,0x4a8d40c3)

void TVShowsTxtParser_obj::__construct(::String fileName){
            	HX_STACKFRAME(&_hx_pos_6bb51b0cab6f2cd0_11_new)
HXDLIN(  11)		this->fileName = fileName;
            	}

Dynamic TVShowsTxtParser_obj::__CreateEmpty() { return new TVShowsTxtParser_obj; }

void *TVShowsTxtParser_obj::_hx_vtable = 0;

Dynamic TVShowsTxtParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TVShowsTxtParser_obj > _hx_result = new TVShowsTxtParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TVShowsTxtParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e26ef9b;
}

 ::feathers::data::ArrayCollection TVShowsTxtParser_obj::getTVShows(){
            	HX_GC_STACKFRAME(&_hx_pos_6bb51b0cab6f2cd0_14_getTVShows)
HXLINE(  15)		 ::feathers::data::ArrayCollection tvShows =  ::feathers::data::ArrayCollection_obj::__alloc( HX_CTX ,null());
HXLINE(  17)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  18)			::String fileContent = ::openfl::utils::Assets_obj::getText(this->fileName);
HXLINE(  19)			fileContent = ::StringTools_obj::trim(fileContent);
HXLINE(  21)			{
HXLINE(  21)				int _g = 0;
HXDLIN(  21)				::Array< ::String > _g1 = fileContent.split(HX_("\n",0a,00,00,00));
HXDLIN(  21)				while((_g < _g1->length)){
HXLINE(  21)					::String line = _g1->__get(_g);
HXDLIN(  21)					_g = (_g + 1);
HXLINE(  22)					tvShows->add(this->parseTVShow(line));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g2 = _hx_e;
HXLINE(  24)				{
HXLINE(  24)					null();
            				}
HXDLIN(  24)				 ::Dynamic e = _g2;
HXLINE(  25)				{
HXLINE(  25)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  25)					::String _hx_tmp1 = ((HX_("Cannot parse TXT-file ",fd,47,ea,02) + this->fileName) + HX_(": ",a6,32,00,00));
HXDLIN(  25)					::String _hx_tmp2 = (_hx_tmp1 + ::Std_obj::string(e));
HXDLIN(  25)					_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("Source/TVShowsTxtParser.hx",6f,1e,45,92),25,HX_("TVShowsTxtParser",db,3c,45,a8),HX_("getTVShows",1e,56,21,99)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  28)		return tvShows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TVShowsTxtParser_obj,getTVShows,return )

 ::TVShow TVShowsTxtParser_obj::parseTVShow(::String line){
            	HX_GC_STACKFRAME(&_hx_pos_6bb51b0cab6f2cd0_31_parseTVShow)
HXLINE(  32)		 ::TVShowBuilder tvShowBuilder =  ::TVShowBuilder_obj::__alloc( HX_CTX );
HXLINE(  34)		int showId = this->getIntValueFromStrLine(line,HX_("showId",38,0e,70,26));
HXLINE(  35)		if ((showId != 0)) {
HXLINE(  36)			tvShowBuilder->withShowId(showId);
            		}
HXLINE(  39)		int channelId = this->getIntValueFromStrLine(line,HX_("channelId",7e,37,e6,25));
HXLINE(  40)		if ((channelId != 0)) {
HXLINE(  41)			tvShowBuilder->withChannelId(channelId);
            		}
HXLINE(  44)		::String showName = this->getStringValueFromStrLine(line,HX_("showName",e8,35,86,b0));
HXLINE(  45)		if ((showName != HX_("",00,00,00,00))) {
HXLINE(  46)			tvShowBuilder->withShowName(showName);
            		}
HXLINE(  49)		int year = this->getIntValueFromStrLine(line,HX_("year",bd,c9,47,50));
HXLINE(  50)		if ((year != 0)) {
HXLINE(  51)			tvShowBuilder->withYear(year);
            		}
HXLINE(  54)		::String description = this->getStringValueFromStrLine(line,HX_("description",fc,08,1d,5f));
HXLINE(  55)		if ((description != HX_("",00,00,00,00))) {
HXLINE(  56)			tvShowBuilder->withDescription(description);
            		}
HXLINE(  59)		int startDate = this->getIntValueFromStrLine(line,HX_("startDate",b0,cf,56,fb));
HXLINE(  60)		if ((startDate != 0)) {
HXLINE(  61)			tvShowBuilder->withStartDate(startDate);
            		}
HXLINE(  64)		int endDate = this->getIntValueFromStrLine(line,HX_("endDate",a9,0f,88,24));
HXLINE(  65)		if ((endDate != 0)) {
HXLINE(  66)			tvShowBuilder->withEndDate(endDate);
            		}
HXLINE(  69)		::String imgName = this->getStringValueFromStrLine(line,HX_("imgName",ee,67,52,25));
HXLINE(  70)		if ((imgName != HX_("",00,00,00,00))) {
HXLINE(  71)			tvShowBuilder->withImgName(imgName);
            		}
HXLINE(  74)		return tvShowBuilder->build();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TVShowsTxtParser_obj,parseTVShow,return )

::String TVShowsTxtParser_obj::getStringValueFromStrLine(::String line,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_6bb51b0cab6f2cd0_77_getStringValueFromStrLine)
HXLINE(  78)		 ::EReg regexp =  ::EReg_obj::__alloc( HX_CTX ,(name + HX_(":([^;\\}]+)(;|})",a5,a9,29,41)),HX_("g",67,00,00,00));
HXLINE(  79)		if (regexp->match(line)) {
HXLINE(  80)			return regexp->matched(1);
            		}
HXLINE(  82)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  82)		::String _hx_tmp1 = (((((HX_("Line \"",16,8d,34,21) + line) + HX_("\" doesn't match the regexp ",51,3c,e1,d4)) + ::Std_obj::string(regexp)) + HX_(" for ",17,f1,92,b0)) + name);
HXDLIN(  82)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("Source/TVShowsTxtParser.hx",6f,1e,45,92),82,HX_("TVShowsTxtParser",db,3c,45,a8),HX_("getStringValueFromStrLine",31,25,91,48)));
HXLINE(  83)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TVShowsTxtParser_obj,getStringValueFromStrLine,return )

int TVShowsTxtParser_obj::getIntValueFromStrLine(::String line,::String name){
            	HX_STACKFRAME(&_hx_pos_6bb51b0cab6f2cd0_86_getIntValueFromStrLine)
HXLINE(  87)		::String strValue = this->getStringValueFromStrLine(line,name);
HXLINE(  88)		 ::Dynamic intValue = ::Std_obj::parseInt(strValue);
HXLINE(  89)		if (::hx::IsNull( intValue )) {
HXLINE(  89)			return 0;
            		}
            		else {
HXLINE(  89)			return ( (int)(intValue) );
            		}
HXDLIN(  89)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TVShowsTxtParser_obj,getIntValueFromStrLine,return )


::hx::ObjectPtr< TVShowsTxtParser_obj > TVShowsTxtParser_obj::__new(::String fileName) {
	::hx::ObjectPtr< TVShowsTxtParser_obj > __this = new TVShowsTxtParser_obj();
	__this->__construct(fileName);
	return __this;
}

::hx::ObjectPtr< TVShowsTxtParser_obj > TVShowsTxtParser_obj::__alloc(::hx::Ctx *_hx_ctx,::String fileName) {
	TVShowsTxtParser_obj *__this = (TVShowsTxtParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TVShowsTxtParser_obj), true, "TVShowsTxtParser"));
	*(void **)__this = TVShowsTxtParser_obj::_hx_vtable;
	__this->__construct(fileName);
	return __this;
}

TVShowsTxtParser_obj::TVShowsTxtParser_obj()
{
}

void TVShowsTxtParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TVShowsTxtParser);
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_END_CLASS();
}

void TVShowsTxtParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
}

::hx::Val TVShowsTxtParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTVShows") ) { return ::hx::Val( getTVShows_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseTVShow") ) { return ::hx::Val( parseTVShow_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getIntValueFromStrLine") ) { return ::hx::Val( getIntValueFromStrLine_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getStringValueFromStrLine") ) { return ::hx::Val( getStringValueFromStrLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TVShowsTxtParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TVShowsTxtParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fileName",e7,5a,43,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TVShowsTxtParser_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TVShowsTxtParser_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TVShowsTxtParser_obj_sStaticStorageInfo = 0;
#endif

static ::String TVShowsTxtParser_obj_sMemberFields[] = {
	HX_("fileName",e7,5a,43,62),
	HX_("getTVShows",1e,56,21,99),
	HX_("parseTVShow",12,6c,44,98),
	HX_("getStringValueFromStrLine",31,25,91,48),
	HX_("getIntValueFromStrLine",23,3d,3c,da),
	::String(null()) };

::hx::Class TVShowsTxtParser_obj::__mClass;

void TVShowsTxtParser_obj::__register()
{
	TVShowsTxtParser_obj _hx_dummy;
	TVShowsTxtParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TVShowsTxtParser",db,3c,45,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TVShowsTxtParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TVShowsTxtParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TVShowsTxtParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TVShowsTxtParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
