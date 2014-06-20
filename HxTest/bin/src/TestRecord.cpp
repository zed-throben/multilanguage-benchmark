#include <hxcpp.h>

#ifndef INCLUDED_TestRecord
#include <TestRecord.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void TestRecord_obj::__construct()
{
	return null();
}

//TestRecord_obj::~TestRecord_obj() { }

Dynamic TestRecord_obj::__CreateEmpty() { return  new TestRecord_obj; }
hx::ObjectPtr< TestRecord_obj > TestRecord_obj::__new()
{  hx::ObjectPtr< TestRecord_obj > result = new TestRecord_obj();
	result->__construct();
	return result;}

Dynamic TestRecord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestRecord_obj > result = new TestRecord_obj();
	result->__construct();
	return result;}

Void TestRecord_obj::test( ){
{
		HX_STACK_FRAME("TestRecord","test",0x9faa87fd,"TestRecord.test","TestRecord.hx",16,0x57e749fb)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TestRecord.hx",17,0x57e749fb)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (int)10,false);
					__result->Add(HX_CSTRING("y") , (int)20,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(17)
		Dynamic a = _Function_1_1::Block();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(18)
		::haxe::Log_obj::trace(a,hx::SourceInfo(HX_CSTRING("TestRecord.hx"),18,HX_CSTRING("TestRecord"),HX_CSTRING("test")));
		HX_STACK_LINE(20)
		Dynamic b = a;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(21)
		::haxe::Log_obj::trace(b,hx::SourceInfo(HX_CSTRING("TestRecord.hx"),21,HX_CSTRING("TestRecord"),HX_CSTRING("test")));
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TestRecord.hx",23,0x57e749fb)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (int)100,false);
					__result->Add(HX_CSTRING("y") , (int)200,false);
					__result->Add(HX_CSTRING("z") , (int)300,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		Dynamic c = _Function_1_2::Block();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(24)
		Dynamic d = c;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(25)
		::haxe::Log_obj::trace(d,hx::SourceInfo(HX_CSTRING("TestRecord.hx"),25,HX_CSTRING("TestRecord"),HX_CSTRING("test")));
		HX_STACK_LINE(27)
		::haxe::Log_obj::trace(HX_CSTRING("1:"),hx::SourceInfo(HX_CSTRING("TestRecord.hx"),27,HX_CSTRING("TestRecord"),HX_CSTRING("test")));
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int xx = b->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(28)
			int yy = b->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(30)
			::haxe::Log_obj::trace(((xx + HX_CSTRING(",")) + yy),hx::SourceInfo(HX_CSTRING("TestRecord.hx"),30,HX_CSTRING("TestRecord"),HX_CSTRING("test")));
		}
		HX_STACK_LINE(33)
		::haxe::Log_obj::trace(HX_CSTRING("2:"),hx::SourceInfo(HX_CSTRING("TestRecord.hx"),33,HX_CSTRING("TestRecord"),HX_CSTRING("test")));
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			int x = d->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(34)
			int y = d->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(34)
			int z = d->__Field(HX_CSTRING("z"),true);		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(36)
			::haxe::Log_obj::trace(((((x + HX_CSTRING(",")) + y) + HX_CSTRING(",")) + z),hx::SourceInfo(HX_CSTRING("TestRecord.hx"),36,HX_CSTRING("TestRecord"),HX_CSTRING("test")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TestRecord_obj,test,(void))


TestRecord_obj::TestRecord_obj()
{
}

Dynamic TestRecord_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestRecord_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TestRecord_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("test"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestRecord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestRecord_obj::__mClass,"__mClass");
};

#endif

Class TestRecord_obj::__mClass;

void TestRecord_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TestRecord"), hx::TCanCast< TestRecord_obj> ,sStaticFields,sMemberFields,
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

void TestRecord_obj::__boot()
{
}

