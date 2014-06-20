#include <hxcpp.h>

#ifndef INCLUDED_Bench
#include <Bench.h>
#endif
#ifndef INCLUDED_BenchIntToRGB
#include <BenchIntToRGB.h>
#endif
#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

Void BenchIntToRGB_obj::__construct()
{
HX_STACK_FRAME("BenchIntToRGB","new",0x15966805,"BenchIntToRGB.new","BenchIntToRGB.hx",12,0x0f053f0b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BenchIntToRGB_obj::~BenchIntToRGB_obj() { }

Dynamic BenchIntToRGB_obj::__CreateEmpty() { return  new BenchIntToRGB_obj; }
hx::ObjectPtr< BenchIntToRGB_obj > BenchIntToRGB_obj::__new()
{  hx::ObjectPtr< BenchIntToRGB_obj > result = new BenchIntToRGB_obj();
	result->__construct();
	return result;}

Dynamic BenchIntToRGB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BenchIntToRGB_obj > result = new BenchIntToRGB_obj();
	result->__construct();
	return result;}

Void BenchIntToRGB_obj::test( ){
{
		HX_STACK_FRAME("BenchIntToRGB","test",0xd1fbe10d,"BenchIntToRGB.test","BenchIntToRGB.hx",17,0x0f053f0b)
		HX_STACK_LINE(18)
		Array< ::Dynamic > src = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new());		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(19)
			int _g = (int)65536;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(19)
			while((true)){
				HX_STACK_LINE(19)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(19)
					break;
				}
				HX_STACK_LINE(19)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(21)
				src->__get((int)0).StaticCast< Array< int > >()[i] = i;
			}
		}
		HX_STACK_LINE(23)
		::Debug_obj::_assert(HX_CSTRING("array size"),(src->__get((int)0).StaticCast< Array< int > >()->length == (int)65536));
		HX_STACK_LINE(24)
		::haxe::Log_obj::trace((HX_CSTRING("* src length = ") + src->__get((int)0).StaticCast< Array< int > >()->length),hx::SourceInfo(HX_CSTRING("BenchIntToRGB.hx"),24,HX_CSTRING("BenchIntToRGB"),HX_CSTRING("test")));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,src)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","BenchIntToRGB.hx",26,0x0f053f0b)
			{
				HX_STACK_LINE(27)
				::haxe::io::Bytes dst = ::haxe::io::Bytes_obj::alloc((src->__get((int)0).StaticCast< Array< int > >()->length * (int)4));		HX_STACK_VAR(dst,"dst");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(28)
					int _g = src->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(28)
					while(((_g1 < _g))){
						HX_STACK_LINE(28)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(30)
						{
							HX_STACK_LINE(30)
							int v = (int(::Std_obj::_int((Float(i) / Float((int)1000)))) & int((int)255));		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(30)
							dst->b[(i * (int)4)] = v;
						}
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							int v = (int(::Std_obj::_int((Float(i) / Float((int)100)))) & int((int)255));		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(31)
							dst->b[((i * (int)4) + (int)1)] = v;
						}
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							int v = (int(::Std_obj::_int((Float(i) / Float((int)10)))) & int((int)255));		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(32)
							dst->b[((i * (int)4) + (int)2)] = v;
						}
						HX_STACK_LINE(33)
						if (((hx::Mod(i,(int)2) == (int)0))){
							HX_STACK_LINE(33)
							dst->b[((i * (int)4) + (int)3)] = (int)255;
						}
						else{
							HX_STACK_LINE(33)
							dst->b[((i * (int)4) + (int)3)] = (int)0;
						}
					}
				}
				HX_STACK_LINE(35)
				Array< unsigned char > data = dst->b;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(37)
				::cpp::vm::Gc_obj::compact();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(26)
		::Bench_obj::bench(HX_CSTRING("IntToRGB"),(int)1000, Dynamic(new _Function_1_1(src)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BenchIntToRGB_obj,test,(void))


BenchIntToRGB_obj::BenchIntToRGB_obj()
{
}

Dynamic BenchIntToRGB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BenchIntToRGB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BenchIntToRGB_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BenchIntToRGB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BenchIntToRGB_obj::__mClass,"__mClass");
};

#endif

Class BenchIntToRGB_obj::__mClass;

void BenchIntToRGB_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BenchIntToRGB"), hx::TCanCast< BenchIntToRGB_obj> ,sStaticFields,sMemberFields,
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

void BenchIntToRGB_obj::__boot()
{
}

