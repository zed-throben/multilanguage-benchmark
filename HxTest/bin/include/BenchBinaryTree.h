#ifndef INCLUDED_BenchBinaryTree
#define INCLUDED_BenchBinaryTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BenchBinaryTree)
HX_DECLARE_CLASS0(TreeNode)


class HXCPP_CLASS_ATTRIBUTES  BenchBinaryTree_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BenchBinaryTree_obj OBJ_;
		BenchBinaryTree_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BenchBinaryTree_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BenchBinaryTree_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BenchBinaryTree"); }

		virtual ::TreeNode bottomUpTree( int item,int depth);
		Dynamic bottomUpTree_dyn();

		virtual Void run( int n);
		Dynamic run_dyn();

		static Void test( );
		static Dynamic test_dyn();

};


#endif /* INCLUDED_BenchBinaryTree */ 
