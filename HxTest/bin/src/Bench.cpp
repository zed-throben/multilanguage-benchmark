#include <hxcpp.h>

#ifndef INCLUDED_Bench
#include <Bench.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Bench_obj::__construct()
{
HX_STACK_FRAME("Bench","new",0x6719cd82,"Bench.new","Bench.hx",11,0x67c7d82e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Bench_obj::~Bench_obj() { }

Dynamic Bench_obj::__CreateEmpty() { return  new Bench_obj; }
hx::ObjectPtr< Bench_obj > Bench_obj::__new()
{  hx::ObjectPtr< Bench_obj > result = new Bench_obj();
	result->__construct();
	return result;}

Dynamic Bench_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bench_obj > result = new Bench_obj();
	result->__construct();
	return result;}

Float Bench_obj::seconds( Dynamic f){
	HX_STACK_FRAME("Bench","seconds",0xfc35eca1,"Bench.seconds","Bench.hx",16,0x67c7d82e)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(17)
	::Date start = ::Date_obj::now();		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(18)
	f().Cast< Void >();
	HX_STACK_LINE(19)
	::Date end = ::Date_obj::now();		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(20)
	Float _g = end->getTime();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	Float _g1 = start->getTime();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(20)
	Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	return (Float(_g2) / Float(1000.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bench_obj,seconds,return )

Void Bench_obj::bench( ::String msg,int times,Dynamic f){
{
		HX_STACK_FRAME("Bench","bench",0xd2743e52,"Bench.bench","Bench.hx",23,0x67c7d82e)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(times,"times")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(23)
		Dynamic f1 = Dynamic( Array_obj<Dynamic>::__new().Add(f));		HX_STACK_VAR(f1,"f1");
		HX_STACK_LINE(23)
		Array< int > times1 = Array_obj< int >::__new().Add(times);		HX_STACK_VAR(times1,"times1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,f1,Array< int >,times1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Bench.hx",26,0x67c7d82e)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while(((_g < times1->__get((int)0)))){
					HX_STACK_LINE(26)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					f1->__GetItem((int)0)().Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(25)
		Float sec = ::Bench_obj::seconds( Dynamic(new _Function_1_1(f1,times1)));		HX_STACK_VAR(sec,"sec");
		HX_STACK_LINE(31)
		::haxe::Log_obj::trace(((msg + HX_CSTRING(" ")) + sec),hx::SourceInfo(HX_CSTRING("Bench.hx"),31,HX_CSTRING("Bench"),HX_CSTRING("bench")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Bench_obj,bench,(void))


Bench_obj::Bench_obj()
{
}

Dynamic Bench_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bench") ) { return bench_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"seconds") ) { return seconds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bench_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Bench_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("seconds"),
	HX_CSTRING("bench"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bench_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bench_obj::__mClass,"__mClass");
};

#endif

Class Bench_obj::__mClass;

void Bench_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Bench"), hx::TCanCast< Bench_obj> ,sStaticFields,sMemberFields,
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

void Bench_obj::__boot()
{
}

