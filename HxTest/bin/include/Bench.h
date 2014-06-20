#ifndef INCLUDED_Bench
#define INCLUDED_Bench

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Bench)


class HXCPP_CLASS_ATTRIBUTES  Bench_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bench_obj OBJ_;
		Bench_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Bench_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bench_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Bench"); }

		static Float seconds( Dynamic f);
		static Dynamic seconds_dyn();

		static Void bench( ::String msg,int times,Dynamic f);
		static Dynamic bench_dyn();

};


#endif /* INCLUDED_Bench */ 
