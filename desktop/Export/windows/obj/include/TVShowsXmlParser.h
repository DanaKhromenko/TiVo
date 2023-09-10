// Generated by Haxe 4.3.2
#ifndef INCLUDED_TVShowsXmlParser
#define INCLUDED_TVShowsXmlParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TVShow)
HX_DECLARE_CLASS0(TVShowsXmlParser)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(feathers,data,ArrayCollection)
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,IExternalizable)



class HXCPP_CLASS_ATTRIBUTES TVShowsXmlParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TVShowsXmlParser_obj OBJ_;
		TVShowsXmlParser_obj();

	public:
		enum { _hx_ClassId = 0x0815f642 };

		void __construct(::String fileName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TVShowsXmlParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TVShowsXmlParser"); }
		static ::hx::ObjectPtr< TVShowsXmlParser_obj > __new(::String fileName);
		static ::hx::ObjectPtr< TVShowsXmlParser_obj > __alloc(::hx::Ctx *_hx_ctx,::String fileName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TVShowsXmlParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TVShowsXmlParser",82,43,34,32); }

		::String fileName;
		 ::feathers::data::ArrayCollection getTVShows();
		::Dynamic getTVShows_dyn();

		 ::TVShow parseTVShow( ::Xml elements);
		::Dynamic parseTVShow_dyn();

		::String getStringValueFromXml( ::Xml elements,::String name);
		::Dynamic getStringValueFromXml_dyn();

		int getIntValueFromXml( ::Xml elements,::String name);
		::Dynamic getIntValueFromXml_dyn();

};


#endif /* INCLUDED_TVShowsXmlParser */ 