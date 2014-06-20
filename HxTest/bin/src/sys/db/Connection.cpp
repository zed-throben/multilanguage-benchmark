#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{

HX_DEFINE_DYNAMIC_FUNC1(Connection_obj,request,return )

HX_DEFINE_DYNAMIC_FUNC2(Connection_obj,addValue,)

HX_DEFINE_DYNAMIC_FUNC0(Connection_obj,lastInsertId,return )


static ::String sMemberFields[] = {
	HX_CSTRING("request"),
	HX_CSTRING("addValue"),
	HX_CSTRING("lastInsertId"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

#endif

Class Connection_obj::__mClass;

void Connection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.Connection"), hx::TCanCast< Connection_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Connection_obj::__boot()
{
}

} // end namespace sys
} // end namespace db
