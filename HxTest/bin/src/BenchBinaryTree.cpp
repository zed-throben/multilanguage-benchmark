#include <hxcpp.h>

#ifndef INCLUDED_Bench
#include <Bench.h>
#endif
#ifndef INCLUDED_BenchBinaryTree
#include <BenchBinaryTree.h>
#endif
#ifndef INCLUDED_IntIter
#include <IntIter.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TreeNode
#include <TreeNode.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void BenchBinaryTree_obj::__construct()
{
HX_STACK_FRAME("BenchBinaryTree","new",0x89343721,"BenchBinaryTree.new","BenchBinaryTree.hx",38,0x7dbec76f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BenchBinaryTree_obj::~BenchBinaryTree_obj() { }

Dynamic BenchBinaryTree_obj::__CreateEmpty() { return  new BenchBinaryTree_obj; }
hx::ObjectPtr< BenchBinaryTree_obj > BenchBinaryTree_obj::__new()
{  hx::ObjectPtr< BenchBinaryTree_obj > result = new BenchBinaryTree_obj();
	result->__construct();
	return result;}

Dynamic BenchBinaryTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BenchBinaryTree_obj > result = new BenchBinaryTree_obj();
	result->__construct();
	return result;}

::TreeNode BenchBinaryTree_obj::bottomUpTree( int item,int depth){
	HX_STACK_FRAME("BenchBinaryTree","bottomUpTree",0xf4780bc3,"BenchBinaryTree.bottomUpTree","BenchBinaryTree.hx",44,0x7dbec76f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_LINE(44)
	if (((depth > (int)0))){
		HX_STACK_LINE(46)
		::TreeNode _g = this->bottomUpTree((((int)2 * item) - (int)1),(depth - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		::TreeNode _g1 = this->bottomUpTree(((int)2 * item),(depth - (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		return ::TreeNode_obj::__new(_g,_g1,item);
	}
	else{
		HX_STACK_LINE(52)
		return ::TreeNode_obj::__new(null(),null(),item);
	}
	HX_STACK_LINE(44)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BenchBinaryTree_obj,bottomUpTree,return )

Void BenchBinaryTree_obj::run( int n){
{
		HX_STACK_FRAME("BenchBinaryTree","run",0x89374e0c,"BenchBinaryTree.run","BenchBinaryTree.hx",65,0x7dbec76f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(66)
		int minDepth = (int)4;		HX_STACK_VAR(minDepth,"minDepth");
		HX_STACK_LINE(67)
		Float _g = ::Math_obj::max((minDepth + (int)2),n);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		int maxDepth = ::Std_obj::_int(_g);		HX_STACK_VAR(maxDepth,"maxDepth");
		HX_STACK_LINE(68)
		int stretchDepth = (maxDepth + (int)1);		HX_STACK_VAR(stretchDepth,"stretchDepth");
		HX_STACK_LINE(70)
		int check = this->bottomUpTree((int)0,stretchDepth)->itemCheck();		HX_STACK_VAR(check,"check");
		HX_STACK_LINE(71)
		::haxe::Log_obj::trace((((HX_CSTRING("stretch tree of depth ") + stretchDepth) + HX_CSTRING("\t check: ")) + check),hx::SourceInfo(HX_CSTRING("BenchBinaryTree.hx"),71,HX_CSTRING("BenchBinaryTree"),HX_CSTRING("run")));
		HX_STACK_LINE(73)
		::TreeNode longLivedTree = this->bottomUpTree((int)0,maxDepth);		HX_STACK_VAR(longLivedTree,"longLivedTree");
		HX_STACK_LINE(74)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::IntIter_obj::__new(minDepth,(maxDepth + (int)1),(int)2));  __it->hasNext(); ){
			int depth = __it->next();
			{
				HX_STACK_LINE(75)
				int iterations = (int((int)1) << int(((maxDepth - depth) + minDepth)));		HX_STACK_VAR(iterations,"iterations");
				HX_STACK_LINE(77)
				check = (int)0;
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(78)
					int _g2 = (iterations + (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(78)
					while((true)){
						HX_STACK_LINE(78)
						if ((!(((_g1 < _g2))))){
							HX_STACK_LINE(78)
							break;
						}
						HX_STACK_LINE(78)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(79)
						int _g11 = this->bottomUpTree(i,depth)->itemCheck();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(79)
						hx::AddEq(check,_g11);
						HX_STACK_LINE(80)
						int _g21 = this->bottomUpTree(-(i),depth)->itemCheck();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(80)
						hx::AddEq(check,_g21);
					}
				}
				HX_STACK_LINE(82)
				::haxe::Log_obj::trace((((((iterations * (int)2) + HX_CSTRING("\t trees of depth ")) + depth) + HX_CSTRING("\t check: ")) + check),hx::SourceInfo(HX_CSTRING("BenchBinaryTree.hx"),82,HX_CSTRING("BenchBinaryTree"),HX_CSTRING("run")));
			}
;
		}
		HX_STACK_LINE(86)
		int _g3 = longLivedTree->itemCheck();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(85)
		::String _g4 = (((HX_CSTRING("long lived tree of depth ") + maxDepth) + HX_CSTRING("\t check: ")) + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(85)
		::haxe::Log_obj::trace(_g4,hx::SourceInfo(HX_CSTRING("BenchBinaryTree.hx"),85,HX_CSTRING("BenchBinaryTree"),HX_CSTRING("run")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BenchBinaryTree_obj,run,(void))

Void BenchBinaryTree_obj::test( ){
{
		HX_STACK_FRAME("BenchBinaryTree","test",0x88734a71,"BenchBinaryTree.test","BenchBinaryTree.hx",57,0x7dbec76f)
		HX_STACK_LINE(58)
		Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new().Add(::BenchBinaryTree_obj::__new());		HX_STACK_VAR(a,"a");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,a)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","BenchBinaryTree.hx",60,0x7dbec76f)
			{
				HX_STACK_LINE(60)
				a->__get((int)0).StaticCast< ::BenchBinaryTree >()->run((int)20);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(59)
		::Bench_obj::bench(HX_CSTRING("binary tree"),(int)1, Dynamic(new _Function_1_1(a)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BenchBinaryTree_obj,test,(void))


BenchBinaryTree_obj::BenchBinaryTree_obj()
{
}

Dynamic BenchBinaryTree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bottomUpTree") ) { return bottomUpTree_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BenchBinaryTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BenchBinaryTree_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("test"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bottomUpTree"),
	HX_CSTRING("run"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BenchBinaryTree_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BenchBinaryTree_obj::__mClass,"__mClass");
};

#endif

Class BenchBinaryTree_obj::__mClass;

void BenchBinaryTree_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BenchBinaryTree"), hx::TCanCast< BenchBinaryTree_obj> ,sStaticFields,sMemberFields,
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

void BenchBinaryTree_obj::__boot()
{
}

