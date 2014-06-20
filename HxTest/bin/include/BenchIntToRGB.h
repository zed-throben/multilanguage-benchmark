#ifndef INCLUDED_BenchIntToRGB
#define INCLUDED_BenchIntToRGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BenchIntToRGB)


class HXCPP_CLASS_ATTRIBUTES  BenchIntToRGB_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BenchIntToRGB_obj OBJ_;
		BenchIntToRGB_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BenchIntToRGB_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BenchIntToRGB_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BenchIntToRGB"); }

		static Void test( );
		static Dynamic test_dyn();

};


#endif /* INCLUDED_BenchIntToRGB */ 
