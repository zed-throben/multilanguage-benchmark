#ifndef INCLUDED_BenchString
#define INCLUDED_BenchString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BenchString)


class HXCPP_CLASS_ATTRIBUTES  BenchString_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BenchString_obj OBJ_;
		BenchString_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BenchString_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BenchString_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BenchString"); }

		static Void test( );
		static Dynamic test_dyn();

		static Void test2( );
		static Dynamic test2_dyn();

};


#endif /* INCLUDED_BenchString */ 
