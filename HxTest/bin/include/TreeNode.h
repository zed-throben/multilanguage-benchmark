#ifndef INCLUDED_TreeNode
#define INCLUDED_TreeNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TreeNode)


class HXCPP_CLASS_ATTRIBUTES  TreeNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TreeNode_obj OBJ_;
		TreeNode_obj();
		Void __construct(::TreeNode left,::TreeNode right,int item);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TreeNode_obj > __new(::TreeNode left,::TreeNode right,int item);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TreeNode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TreeNode"); }

		::TreeNode left;
		::TreeNode right;
		int item;
		virtual int itemCheck( );
		Dynamic itemCheck_dyn();

};


#endif /* INCLUDED_TreeNode */ 
