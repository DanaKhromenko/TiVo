// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TVShow
#include <TVShow.h>
#endif
#ifndef INCLUDED_TVShowBuilder
#include <TVShowBuilder.h>
#endif
#ifndef INCLUDED_TVShowsXmlParser
#include <TVShowsXmlParser.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
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
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_dd15533d5ace917c_12_new,"TVShowsXmlParser","new",0x2de4cd74,"TVShowsXmlParser.new","TVShowsXmlParser.hx",12,0xc5a89c7c)
HX_LOCAL_STACK_FRAME(_hx_pos_dd15533d5ace917c_15_getTVShows,"TVShowsXmlParser","getTVShows",0x904ae38a,"TVShowsXmlParser.getTVShows","TVShowsXmlParser.hx",15,0xc5a89c7c)
HX_LOCAL_STACK_FRAME(_hx_pos_dd15533d5ace917c_31_parseTVShow,"TVShowsXmlParser","parseTVShow",0xe5769d26,"TVShowsXmlParser.parseTVShow","TVShowsXmlParser.hx",31,0xc5a89c7c)
HX_LOCAL_STACK_FRAME(_hx_pos_dd15533d5ace917c_77_getStringValueFromXml,"TVShowsXmlParser","getStringValueFromXml",0xca3a65d7,"TVShowsXmlParser.getStringValueFromXml","TVShowsXmlParser.hx",77,0xc5a89c7c)
HX_LOCAL_STACK_FRAME(_hx_pos_dd15533d5ace917c_84_getIntValueFromXml,"TVShowsXmlParser","getIntValueFromXml",0xf5172421,"TVShowsXmlParser.getIntValueFromXml","TVShowsXmlParser.hx",84,0xc5a89c7c)

void TVShowsXmlParser_obj::__construct(::String fileName){
            	HX_STACKFRAME(&_hx_pos_dd15533d5ace917c_12_new)
HXDLIN(  12)		this->fileName = fileName;
            	}

Dynamic TVShowsXmlParser_obj::__CreateEmpty() { return new TVShowsXmlParser_obj; }

void *TVShowsXmlParser_obj::_hx_vtable = 0;

Dynamic TVShowsXmlParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TVShowsXmlParser_obj > _hx_result = new TVShowsXmlParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TVShowsXmlParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0815f642;
}

 ::feathers::data::ArrayCollection TVShowsXmlParser_obj::getTVShows(){
            	HX_GC_STACKFRAME(&_hx_pos_dd15533d5ace917c_15_getTVShows)
HXLINE(  16)		 ::feathers::data::ArrayCollection tvShows =  ::feathers::data::ArrayCollection_obj::__alloc( HX_CTX ,null());
HXLINE(  18)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  19)			::String fileContent = ::openfl::utils::Assets_obj::getText(this->fileName);
HXLINE(  20)			 ::Xml xmlData = ::haxe::xml::Parser_obj::parse(fileContent,null());
HXLINE(  21)			{
HXLINE(  21)				 ::Dynamic elements = xmlData->firstElement()->elementsNamed(HX_("show",fd,d4,52,4c));
HXDLIN(  21)				while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  21)					 ::Xml elements1 = ( ( ::Xml)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  22)					tvShows->add(this->parseTVShow(elements1));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  24)				{
HXLINE(  24)					null();
            				}
HXDLIN(  24)				 ::Dynamic e = _g;
HXLINE(  25)				{
HXLINE(  25)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  25)					::String _hx_tmp1 = ((HX_("Cannot parse XML-file ",a4,4e,d9,8c) + this->fileName) + HX_(": ",a6,32,00,00));
HXDLIN(  25)					::String _hx_tmp2 = (_hx_tmp1 + ::Std_obj::string(e));
HXDLIN(  25)					_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("Source/TVShowsXmlParser.hx",28,7a,60,0d),25,HX_("TVShowsXmlParser",82,43,34,32),HX_("getTVShows",1e,56,21,99)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  28)		return tvShows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TVShowsXmlParser_obj,getTVShows,return )

 ::TVShow TVShowsXmlParser_obj::parseTVShow( ::Xml elements){
            	HX_GC_STACKFRAME(&_hx_pos_dd15533d5ace917c_31_parseTVShow)
HXLINE(  32)		 ::TVShowBuilder tvShowBuilder =  ::TVShowBuilder_obj::__alloc( HX_CTX );
HXLINE(  34)		int showId = this->getIntValueFromXml(elements,HX_("showId",38,0e,70,26));
HXLINE(  35)		if ((showId != 0)) {
HXLINE(  36)			tvShowBuilder->withShowId(showId);
            		}
HXLINE(  39)		int channelId = this->getIntValueFromXml(elements,HX_("channelId",7e,37,e6,25));
HXLINE(  40)		if ((channelId != 0)) {
HXLINE(  41)			tvShowBuilder->withChannelId(channelId);
            		}
HXLINE(  44)		::String showName = this->getStringValueFromXml(elements,HX_("showName",e8,35,86,b0));
HXLINE(  45)		if ((showName != HX_("",00,00,00,00))) {
HXLINE(  46)			tvShowBuilder->withShowName(showName);
            		}
HXLINE(  49)		int year = this->getIntValueFromXml(elements,HX_("year",bd,c9,47,50));
HXLINE(  50)		if ((year != 0)) {
HXLINE(  51)			tvShowBuilder->withYear(year);
            		}
HXLINE(  54)		::String description = this->getStringValueFromXml(elements,HX_("description",fc,08,1d,5f));
HXLINE(  55)		if ((description != HX_("",00,00,00,00))) {
HXLINE(  56)			tvShowBuilder->withDescription(description);
            		}
HXLINE(  59)		int startDate = this->getIntValueFromXml(elements,HX_("startDate",b0,cf,56,fb));
HXLINE(  60)		if ((startDate != 0)) {
HXLINE(  61)			tvShowBuilder->withStartDate(startDate);
            		}
HXLINE(  64)		int endDate = this->getIntValueFromXml(elements,HX_("endDate",a9,0f,88,24));
HXLINE(  65)		if ((endDate != 0)) {
HXLINE(  66)			tvShowBuilder->withEndDate(endDate);
            		}
HXLINE(  69)		::String imgName = this->getStringValueFromXml(elements,HX_("imgName",ee,67,52,25));
HXLINE(  70)		if ((imgName != HX_("",00,00,00,00))) {
HXLINE(  71)			tvShowBuilder->withImgName(imgName);
            		}
HXLINE(  74)		return tvShowBuilder->build();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TVShowsXmlParser_obj,parseTVShow,return )

::String TVShowsXmlParser_obj::getStringValueFromXml( ::Xml elements,::String name){
            	HX_STACKFRAME(&_hx_pos_dd15533d5ace917c_77_getStringValueFromXml)
HXLINE(  78)		{
HXLINE(  78)			 ::Dynamic element = elements->elementsNamed(name);
HXDLIN(  78)			while(( (bool)(element->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  78)				 ::Xml element1 = ( ( ::Xml)(element->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  79)				bool _hx_tmp;
HXDLIN(  79)				if ((element1->nodeType != ::Xml_obj::Document)) {
HXLINE(  79)					_hx_tmp = (element1->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  79)					_hx_tmp = false;
            				}
HXDLIN(  79)				if (_hx_tmp) {
HXLINE(  79)					HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(element1->nodeType)));
            				}
HXDLIN(  79)				 ::Xml _this = element1->children->__get(0).StaticCast<  ::Xml >();
HXDLIN(  79)				bool _hx_tmp1;
HXDLIN(  79)				if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE(  79)					_hx_tmp1 = (_this->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE(  79)					_hx_tmp1 = true;
            				}
HXDLIN(  79)				if (_hx_tmp1) {
HXLINE(  79)					HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(_this->nodeType)));
            				}
HXDLIN(  79)				return _this->nodeValue;
            			}
            		}
HXLINE(  81)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TVShowsXmlParser_obj,getStringValueFromXml,return )

int TVShowsXmlParser_obj::getIntValueFromXml( ::Xml elements,::String name){
            	HX_STACKFRAME(&_hx_pos_dd15533d5ace917c_84_getIntValueFromXml)
HXLINE(  85)		::String strValue = this->getStringValueFromXml(elements,name);
HXLINE(  86)		 ::Dynamic intValue = ::Std_obj::parseInt(strValue);
HXLINE(  87)		if (::hx::IsNull( intValue )) {
HXLINE(  87)			return 0;
            		}
            		else {
HXLINE(  87)			return ( (int)(intValue) );
            		}
HXDLIN(  87)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TVShowsXmlParser_obj,getIntValueFromXml,return )


::hx::ObjectPtr< TVShowsXmlParser_obj > TVShowsXmlParser_obj::__new(::String fileName) {
	::hx::ObjectPtr< TVShowsXmlParser_obj > __this = new TVShowsXmlParser_obj();
	__this->__construct(fileName);
	return __this;
}

::hx::ObjectPtr< TVShowsXmlParser_obj > TVShowsXmlParser_obj::__alloc(::hx::Ctx *_hx_ctx,::String fileName) {
	TVShowsXmlParser_obj *__this = (TVShowsXmlParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TVShowsXmlParser_obj), true, "TVShowsXmlParser"));
	*(void **)__this = TVShowsXmlParser_obj::_hx_vtable;
	__this->__construct(fileName);
	return __this;
}

TVShowsXmlParser_obj::TVShowsXmlParser_obj()
{
}

void TVShowsXmlParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TVShowsXmlParser);
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_END_CLASS();
}

void TVShowsXmlParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
}

::hx::Val TVShowsXmlParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 18:
		if (HX_FIELD_EQ(inName,"getIntValueFromXml") ) { return ::hx::Val( getIntValueFromXml_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getStringValueFromXml") ) { return ::hx::Val( getStringValueFromXml_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TVShowsXmlParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TVShowsXmlParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fileName",e7,5a,43,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TVShowsXmlParser_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TVShowsXmlParser_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TVShowsXmlParser_obj_sStaticStorageInfo = 0;
#endif

static ::String TVShowsXmlParser_obj_sMemberFields[] = {
	HX_("fileName",e7,5a,43,62),
	HX_("getTVShows",1e,56,21,99),
	HX_("parseTVShow",12,6c,44,98),
	HX_("getStringValueFromXml",c3,93,a0,a6),
	HX_("getIntValueFromXml",b5,4a,40,38),
	::String(null()) };

::hx::Class TVShowsXmlParser_obj::__mClass;

void TVShowsXmlParser_obj::__register()
{
	TVShowsXmlParser_obj _hx_dummy;
	TVShowsXmlParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TVShowsXmlParser",82,43,34,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TVShowsXmlParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TVShowsXmlParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TVShowsXmlParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TVShowsXmlParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

