#ifndef INCLUDED_Tree
#define INCLUDED_Tree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Tree)


class Tree_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Tree_obj OBJ_;

	public:
		Tree_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("Tree"); }
		::String __ToString() const { return HX_CSTRING("Tree.") + tag; }

		static ::Tree Node(::Tree left,::Tree right,int item);
		static Dynamic Node_dyn();
		static ::Tree None;
		static inline ::Tree None_dyn() { return None; }
};


#endif /* INCLUDED_Tree */ 
