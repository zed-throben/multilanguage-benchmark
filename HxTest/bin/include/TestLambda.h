#ifndef INCLUDED_TestLambda
#define INCLUDED_TestLambda

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TestLambda)


class HXCPP_CLASS_ATTRIBUTES  TestLambda_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestLambda_obj OBJ_;
		TestLambda_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TestLambda_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestLambda_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TestLambda"); }

		static Void test( );
		static Dynamic test_dyn();

		static Void map( );
		static Dynamic map_dyn();

};


#endif /* INCLUDED_TestLambda */ 
