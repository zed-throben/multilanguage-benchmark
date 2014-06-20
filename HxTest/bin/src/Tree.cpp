#include <hxcpp.h>

#ifndef INCLUDED_Tree
#include <Tree.h>
#endif

::Tree  Tree_obj::Node(::Tree left,::Tree right,int item)
	{ return hx::CreateEnum< Tree_obj >(HX_CSTRING("Node"),1,hx::DynamicArray(0,3).Add(left).Add(right).Add(item)); }

::Tree Tree_obj::None;

HX_DEFINE_CREATE_ENUM(Tree_obj)

int Tree_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Node")) return 1;
	if (inName==HX_CSTRING("None")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tree_obj,Node,return)

int Tree_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Node")) return 3;
	if (inName==HX_CSTRING("None")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Tree_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Node")) return Node_dyn();
	if (inName==HX_CSTRING("None")) return None;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("None"),
	HX_CSTRING("Node"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tree_obj::None,"None");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tree_obj::None,"None");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Tree_obj::__mClass;

Dynamic __Create_Tree_obj() { return new Tree_obj; }

void Tree_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Tree"), hx::TCanCast< Tree_obj >,sStaticFields,sMemberFields,
	&__Create_Tree_obj, &__Create,
	&super::__SGetClass(), &CreateTree_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Tree_obj::__boot()
{
hx::Static(None) = hx::CreateEnum< Tree_obj >(HX_CSTRING("None"),0);
}


