// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_TVShow
#include <TVShow.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_295e276594f5dd65_70_new,"TVShow","new",0x6aa39011,"TVShow.new","TVShow.hx",70,0xb701dc7f)

void TVShow_obj::__construct(int showId,int channelId,::String showName,int year,::String description,int startDate,int endDate,::String imgName){
            	HX_STACKFRAME(&_hx_pos_295e276594f5dd65_70_new)
HXLINE(  71)		this->showId = showId;
HXLINE(  72)		this->channelId = channelId;
HXLINE(  73)		this->showName = showName;
HXLINE(  74)		this->year = year;
HXLINE(  75)		this->description = description;
HXLINE(  76)		this->startDate = startDate;
HXLINE(  77)		this->endDate = endDate;
HXLINE(  78)		this->imgName = imgName;
            	}

Dynamic TVShow_obj::__CreateEmpty() { return new TVShow_obj; }

void *TVShow_obj::_hx_vtable = 0;

Dynamic TVShow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TVShow_obj > _hx_result = new TVShow_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool TVShow_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1933fac3;
}


TVShow_obj::TVShow_obj()
{
}

void TVShow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TVShow);
	HX_MARK_MEMBER_NAME(showId,"showId");
	HX_MARK_MEMBER_NAME(channelId,"channelId");
	HX_MARK_MEMBER_NAME(showName,"showName");
	HX_MARK_MEMBER_NAME(year,"year");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(startDate,"startDate");
	HX_MARK_MEMBER_NAME(endDate,"endDate");
	HX_MARK_MEMBER_NAME(imgName,"imgName");
	HX_MARK_END_CLASS();
}

void TVShow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(showId,"showId");
	HX_VISIT_MEMBER_NAME(channelId,"channelId");
	HX_VISIT_MEMBER_NAME(showName,"showName");
	HX_VISIT_MEMBER_NAME(year,"year");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(startDate,"startDate");
	HX_VISIT_MEMBER_NAME(endDate,"endDate");
	HX_VISIT_MEMBER_NAME(imgName,"imgName");
}

::hx::Val TVShow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"year") ) { return ::hx::Val( year ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"showId") ) { return ::hx::Val( showId ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDate") ) { return ::hx::Val( endDate ); }
		if (HX_FIELD_EQ(inName,"imgName") ) { return ::hx::Val( imgName ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"showName") ) { return ::hx::Val( showName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"channelId") ) { return ::hx::Val( channelId ); }
		if (HX_FIELD_EQ(inName,"startDate") ) { return ::hx::Val( startDate ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return ::hx::Val( description ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TVShow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"year") ) { year=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"showId") ) { showId=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDate") ) { endDate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgName") ) { imgName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"showName") ) { showName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"channelId") ) { channelId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startDate") ) { startDate=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TVShow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("showId",38,0e,70,26));
	outFields->push(HX_("channelId",7e,37,e6,25));
	outFields->push(HX_("showName",e8,35,86,b0));
	outFields->push(HX_("year",bd,c9,47,50));
	outFields->push(HX_("description",fc,08,1d,5f));
	outFields->push(HX_("startDate",b0,cf,56,fb));
	outFields->push(HX_("endDate",a9,0f,88,24));
	outFields->push(HX_("imgName",ee,67,52,25));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TVShow_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TVShow_obj,showId),HX_("showId",38,0e,70,26)},
	{::hx::fsInt,(int)offsetof(TVShow_obj,channelId),HX_("channelId",7e,37,e6,25)},
	{::hx::fsString,(int)offsetof(TVShow_obj,showName),HX_("showName",e8,35,86,b0)},
	{::hx::fsInt,(int)offsetof(TVShow_obj,year),HX_("year",bd,c9,47,50)},
	{::hx::fsString,(int)offsetof(TVShow_obj,description),HX_("description",fc,08,1d,5f)},
	{::hx::fsInt,(int)offsetof(TVShow_obj,startDate),HX_("startDate",b0,cf,56,fb)},
	{::hx::fsInt,(int)offsetof(TVShow_obj,endDate),HX_("endDate",a9,0f,88,24)},
	{::hx::fsString,(int)offsetof(TVShow_obj,imgName),HX_("imgName",ee,67,52,25)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TVShow_obj_sStaticStorageInfo = 0;
#endif

static ::String TVShow_obj_sMemberFields[] = {
	HX_("showId",38,0e,70,26),
	HX_("channelId",7e,37,e6,25),
	HX_("showName",e8,35,86,b0),
	HX_("year",bd,c9,47,50),
	HX_("description",fc,08,1d,5f),
	HX_("startDate",b0,cf,56,fb),
	HX_("endDate",a9,0f,88,24),
	HX_("imgName",ee,67,52,25),
	::String(null()) };

::hx::Class TVShow_obj::__mClass;

void TVShow_obj::__register()
{
	TVShow_obj _hx_dummy;
	TVShow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TVShow",9f,33,9c,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TVShow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TVShow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TVShow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TVShow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

