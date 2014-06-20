#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_TestLambda
#include <TestLambda.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void TestLambda_obj::__construct()
{
	return null();
}

//TestLambda_obj::~TestLambda_obj() { }

Dynamic TestLambda_obj::__CreateEmpty() { return  new TestLambda_obj; }
hx::ObjectPtr< TestLambda_obj > TestLambda_obj::__new()
{  hx::ObjectPtr< TestLambda_obj > result = new TestLambda_obj();
	result->__construct();
	return result;}

Dynamic TestLambda_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestLambda_obj > result = new TestLambda_obj();
	result->__construct();
	return result;}

Void TestLambda_obj::test( ){
{
		HX_STACK_FRAME("TestLambda","test",0x75e9dfc7,"TestLambda.test","TestLambda.hx",12,0xdd103b45)
		HX_STACK_LINE(12)
		::TestLambda_obj::map();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TestLambda_obj,test,(void))

Void TestLambda_obj::map( ){
{
		HX_STACK_FRAME("TestLambda","map",0x912758c7,"TestLambda.map","TestLambda.hx",16,0xdd103b45)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(int X){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","TestLambda.hx",18,0xdd103b45)
			HX_STACK_ARG(X,"X")
			{
				HX_STACK_LINE(18)
				return (X * (int)2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(18)
		::List a = ::Lambda_obj::map(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3), Dynamic(new _Function_1_1()));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(19)
		::haxe::Log_obj::trace(a,hx::SourceInfo(HX_CSTRING("TestLambda.hx"),19,HX_CSTRING("TestLambda"),HX_CSTRING("map")));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int run(int X){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","TestLambda.hx",22,0xdd103b45)
			HX_STACK_ARG(X,"X")
			{
				HX_STACK_LINE(22)
				return (X * (int)2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(22)
		::List _g = ::Lambda_obj::map(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3), Dynamic(new _Function_1_2()));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		Array< int > b = ::Lambda_obj::array(_g);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(23)
		::haxe::Log_obj::trace(b,hx::SourceInfo(HX_CSTRING("TestLambda.hx"),23,HX_CSTRING("TestLambda"),HX_CSTRING("map")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TestLambda_obj,map,(void))


TestLambda_obj::TestLambda_obj()
{
}

Dynamic TestLambda_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestLambda_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TestLambda_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("test"),
	HX_CSTRING("map"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestLambda_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestLambda_obj::__mClass,"__mClass");
};

#endif

Class TestLambda_obj::__mClass;

void TestLambda_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TestLambda"), hx::TCanCast< TestLambda_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TestLambda_obj::__boot()
{
}

