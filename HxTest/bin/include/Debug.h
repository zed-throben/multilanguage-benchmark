#ifndef INCLUDED_Debug
#define INCLUDED_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Debug)


class HXCPP_CLASS_ATTRIBUTES  Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Debug_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Debug"); }

		static Void _assert( ::String msg,bool a);
		static Dynamic _assert_dyn();

};


#endif /* INCLUDED_Debug */ 
