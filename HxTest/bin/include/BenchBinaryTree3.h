#ifndef INCLUDED_BenchBinaryTree3
#define INCLUDED_BenchBinaryTree3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BenchBinaryTree3)
HX_DECLARE_CLASS0(Tree)


class HXCPP_CLASS_ATTRIBUTES  BenchBinaryTree3_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BenchBinaryTree3_obj OBJ_;
		BenchBinaryTree3_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BenchBinaryTree3_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BenchBinaryTree3_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BenchBinaryTree3"); }

		virtual int itemCheck( ::Tree node);
		Dynamic itemCheck_dyn();

		virtual ::Tree bottomUpTree( int item,int depth);
		Dynamic bottomUpTree_dyn();

		virtual Void run( int n);
		Dynamic run_dyn();

		static Void test( );
		static Dynamic test_dyn();

};


#endif /* INCLUDED_BenchBinaryTree3 */ 
