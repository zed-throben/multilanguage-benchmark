#include <hxcpp.h>

#ifndef INCLUDED_TreeNode
#include <TreeNode.h>
#endif

Void TreeNode_obj::__construct(::TreeNode left,::TreeNode right,int item)
{
HX_STACK_FRAME("TreeNode","new",0xc38d0392,"TreeNode.new","BenchBinaryTree.hx",22,0x7dbec76f)
HX_STACK_THIS(this)
HX_STACK_ARG(left,"left")
HX_STACK_ARG(right,"right")
HX_STACK_ARG(item,"item")
{
	HX_STACK_LINE(23)
	this->left = left;
	HX_STACK_LINE(24)
	this->right = right;
	HX_STACK_LINE(25)
	this->item = item;
}
;
	return null();
}

//TreeNode_obj::~TreeNode_obj() { }

Dynamic TreeNode_obj::__CreateEmpty() { return  new TreeNode_obj; }
hx::ObjectPtr< TreeNode_obj > TreeNode_obj::__new(::TreeNode left,::TreeNode right,int item)
{  hx::ObjectPtr< TreeNode_obj > result = new TreeNode_obj();
	result->__construct(left,right,item);
	return result;}

Dynamic TreeNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TreeNode_obj > result = new TreeNode_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int TreeNode_obj::itemCheck( ){
	HX_STACK_FRAME("TreeNode","itemCheck",0x9f74a367,"TreeNode.itemCheck","BenchBinaryTree.hx",29,0x7dbec76f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	if (((this->left == null()))){
		HX_STACK_LINE(29)
		return this->item;
	}
	else{
		HX_STACK_LINE(30)
		int _g = this->left->itemCheck();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		int _g1 = (this->item + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		int _g2 = this->right->itemCheck();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(30)
		return (_g1 - _g2);
	}
	HX_STACK_LINE(29)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TreeNode_obj,itemCheck,return )


TreeNode_obj::TreeNode_obj()
{
}

void TreeNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeNode);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(item,"item");
	HX_MARK_END_CLASS();
}

void TreeNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(item,"item");
}

Dynamic TreeNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"item") ) { return item; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemCheck") ) { return itemCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TreeNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::TreeNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"item") ) { item=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::TreeNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("item"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::TreeNode*/ ,(int)offsetof(TreeNode_obj,left),HX_CSTRING("left")},
	{hx::fsObject /*::TreeNode*/ ,(int)offsetof(TreeNode_obj,right),HX_CSTRING("right")},
	{hx::fsInt,(int)offsetof(TreeNode_obj,item),HX_CSTRING("item")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("item"),
	HX_CSTRING("itemCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

#endif

Class TreeNode_obj::__mClass;

void TreeNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TreeNode"), hx::TCanCast< TreeNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TreeNode_obj::__boot()
{
}

