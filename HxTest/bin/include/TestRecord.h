#ifndef INCLUDED_TestRecord
#define INCLUDED_TestRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TestRecord)


class HXCPP_CLASS_ATTRIBUTES  TestRecord_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestRecord_obj OBJ_;
		TestRecord_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TestRecord_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestRecord_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TestRecord"); }

		static Void test( );
		static Dynamic test_dyn();

};


#endif /* INCLUDED_TestRecord */ 
