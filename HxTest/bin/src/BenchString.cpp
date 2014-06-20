#include <hxcpp.h>

#ifndef INCLUDED_Bench
#include <Bench.h>
#endif
#ifndef INCLUDED_BenchString
#include <BenchString.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif

Void BenchString_obj::__construct()
{
HX_STACK_FRAME("BenchString","new",0xd3ea02f3,"BenchString.new","BenchString.hx",11,0x539adbdd)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BenchString_obj::~BenchString_obj() { }

Dynamic BenchString_obj::__CreateEmpty() { return  new BenchString_obj; }
hx::ObjectPtr< BenchString_obj > BenchString_obj::__new()
{  hx::ObjectPtr< BenchString_obj > result = new BenchString_obj();
	result->__construct();
	return result;}

Dynamic BenchString_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BenchString_obj > result = new BenchString_obj();
	result->__construct();
	return result;}

Void BenchString_obj::test( ){
{
		HX_STACK_FRAME("BenchString","test",0x9ccfd65f,"BenchString.test","BenchString.hx",17,0x539adbdd)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","BenchString.hx",17,0x539adbdd)
			{
				HX_STACK_LINE(18)
				::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(19)
				{
					HX_STACK_LINE(19)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(19)
					while(((_g < (int)10000))){
						HX_STACK_LINE(19)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(21)
						hx::AddEq(str,(::Std_obj::string(i) + HX_CSTRING(",")));
					}
				}
				HX_STACK_LINE(23)
				Array< ::String > token = str.split(HX_CSTRING(","));		HX_STACK_VAR(token,"token");
				HX_STACK_LINE(24)
				int sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(25)
				{
					HX_STACK_LINE(25)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(25)
					while(((_g < token->length))){
						HX_STACK_LINE(25)
						::String t = token->__get(_g);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(25)
						++(_g);
						HX_STACK_LINE(27)
						hx::AddEq(sum,::Std_obj::parseInt(t));
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(17)
		::Bench_obj::bench(HX_CSTRING("string"),(int)100, Dynamic(new _Function_1_1()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BenchString_obj,test,(void))

Void BenchString_obj::test2( ){
{
		HX_STACK_FRAME("BenchString","test2",0x990bbcf3,"BenchString.test2","BenchString.hx",35,0x539adbdd)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","BenchString.hx",35,0x539adbdd)
			{
				HX_STACK_LINE(36)
				::StringBuf str = ::StringBuf_obj::__new();		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(37)
					while(((_g < (int)10000))){
						HX_STACK_LINE(37)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(39)
						str->add(::Std_obj::string(i));
						HX_STACK_LINE(41)
						str->add(HX_CSTRING(","));
					}
				}
				HX_STACK_LINE(43)
				Array< ::String > token = str->b->join(HX_CSTRING("")).split(HX_CSTRING(","));		HX_STACK_VAR(token,"token");
				HX_STACK_LINE(44)
				int sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(45)
					while(((_g < token->length))){
						HX_STACK_LINE(45)
						::String t = token->__get(_g);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(45)
						++(_g);
						HX_STACK_LINE(47)
						hx::AddEq(sum,::Std_obj::parseInt(t));
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(35)
		::Bench_obj::bench(HX_CSTRING("string"),(int)100, Dynamic(new _Function_1_1()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BenchString_obj,test2,(void))


BenchString_obj::BenchString_obj()
{
}

Dynamic BenchString_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"test2") ) { return test2_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BenchString_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BenchString_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("test"),
	HX_CSTRING("test2"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BenchString_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BenchString_obj::__mClass,"__mClass");
};

#endif

Class BenchString_obj::__mClass;

void BenchString_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BenchString"), hx::TCanCast< BenchString_obj> ,sStaticFields,sMemberFields,
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

void BenchString_obj::__boot()
{
}

