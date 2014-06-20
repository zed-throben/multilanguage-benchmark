#include <hxcpp.h>

#ifndef INCLUDED_Bench
#include <Bench.h>
#endif
#ifndef INCLUDED_BenchBinaryTree3
#include <BenchBinaryTree3.h>
#endif
#ifndef INCLUDED_IntIter
#include <IntIter.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Tree
#include <Tree.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void BenchBinaryTree3_obj::__construct()
{
HX_STACK_FRAME("BenchBinaryTree3","new",0x3b360996,"BenchBinaryTree3.new","BenchBinaryTree3.hx",19,0x8c51ba9a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BenchBinaryTree3_obj::~BenchBinaryTree3_obj() { }

Dynamic BenchBinaryTree3_obj::__CreateEmpty() { return  new BenchBinaryTree3_obj; }
hx::ObjectPtr< BenchBinaryTree3_obj > BenchBinaryTree3_obj::__new()
{  hx::ObjectPtr< BenchBinaryTree3_obj > result = new BenchBinaryTree3_obj();
	result->__construct();
	return result;}

Dynamic BenchBinaryTree3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BenchBinaryTree3_obj > result = new BenchBinaryTree3_obj();
	result->__construct();
	return result;}

int BenchBinaryTree3_obj::itemCheck( ::Tree node){
	HX_STACK_FRAME("BenchBinaryTree3","itemCheck",0xe2fc046b,"BenchBinaryTree3.itemCheck","BenchBinaryTree3.hx",25,0x8c51ba9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(25)
	switch( (int)(node->__Index())){
		case (int)1: {
			HX_STACK_LINE(25)
			::Tree left = (::Tree(node))->__Param(0);		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(25)
			switch( (int)((::Tree(node))->__Param(0)->__Index())){
				case (int)0: {
					HX_STACK_LINE(25)
					int item = (::Tree(node))->__Param(2);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(25)
					::Tree righht = (::Tree(node))->__Param(1);		HX_STACK_VAR(righht,"righht");
					HX_STACK_LINE(27)
					return item;
				}
				;break;
				default: {
					HX_STACK_LINE(25)
					int item = (::Tree(node))->__Param(2);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(25)
					::Tree right = (::Tree(node))->__Param(1);		HX_STACK_VAR(right,"right");
					HX_STACK_LINE(28)
					{
						HX_STACK_LINE(28)
						int _g = this->itemCheck(left);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(28)
						int _g1 = (item + _g);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(28)
						int _g2 = this->itemCheck(right);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(28)
						return (_g1 - _g2);
					}
				}
			}
		}
		;break;
		default: {
			HX_STACK_LINE(29)
			return (int)0;
		}
	}
	HX_STACK_LINE(25)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(BenchBinaryTree3_obj,itemCheck,return )

::Tree BenchBinaryTree3_obj::bottomUpTree( int item,int depth){
	HX_STACK_FRAME("BenchBinaryTree3","bottomUpTree",0x72b4c2ae,"BenchBinaryTree3.bottomUpTree","BenchBinaryTree3.hx",34,0x8c51ba9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_LINE(34)
	if (((depth > (int)0))){
		HX_STACK_LINE(36)
		::Tree _g = this->bottomUpTree((((int)2 * item) - (int)1),(depth - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		::Tree _g1 = this->bottomUpTree(((int)2 * item),(depth - (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		return ::Tree_obj::Node(_g,_g1,item);
	}
	else{
		HX_STACK_LINE(42)
		return ::Tree_obj::Node(::Tree_obj::None,::Tree_obj::None,item);
	}
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BenchBinaryTree3_obj,bottomUpTree,return )

Void BenchBinaryTree3_obj::run( int n){
{
		HX_STACK_FRAME("BenchBinaryTree3","run",0x3b392081,"BenchBinaryTree3.run","BenchBinaryTree3.hx",55,0x8c51ba9a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(56)
		int minDepth = (int)4;		HX_STACK_VAR(minDepth,"minDepth");
		HX_STACK_LINE(57)
		Float _g = ::Math_obj::max((minDepth + (int)2),n);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		int maxDepth = ::Std_obj::_int(_g);		HX_STACK_VAR(maxDepth,"maxDepth");
		HX_STACK_LINE(58)
		int stretchDepth = (maxDepth + (int)1);		HX_STACK_VAR(stretchDepth,"stretchDepth");
		HX_STACK_LINE(60)
		::Tree _g1 = this->bottomUpTree((int)0,stretchDepth);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		int check = this->itemCheck(_g1);		HX_STACK_VAR(check,"check");
		HX_STACK_LINE(61)
		::haxe::Log_obj::trace((((HX_CSTRING("stretch tree of depth ") + stretchDepth) + HX_CSTRING("\t check: ")) + check),hx::SourceInfo(HX_CSTRING("BenchBinaryTree3.hx"),61,HX_CSTRING("BenchBinaryTree3"),HX_CSTRING("run")));
		HX_STACK_LINE(63)
		::Tree longLivedTree = this->bottomUpTree((int)0,maxDepth);		HX_STACK_VAR(longLivedTree,"longLivedTree");
		HX_STACK_LINE(64)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(::IntIter_obj::__new(minDepth,(maxDepth + (int)1),(int)2));  __it->hasNext(); ){
			int depth = __it->next();
			{
				HX_STACK_LINE(65)
				int iterations = (int((int)1) << int(((maxDepth - depth) + minDepth)));		HX_STACK_VAR(iterations,"iterations");
				HX_STACK_LINE(67)
				check = (int)0;
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(68)
					int _g2 = (iterations + (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(68)
					while((true)){
						HX_STACK_LINE(68)
						if ((!(((_g11 < _g2))))){
							HX_STACK_LINE(68)
							break;
						}
						HX_STACK_LINE(68)
						int i = (_g11)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(69)
						::Tree _g21 = this->bottomUpTree(i,depth);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(69)
						int _g3 = this->itemCheck(_g21);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(69)
						hx::AddEq(check,_g3);
						HX_STACK_LINE(70)
						::Tree _g4 = this->bottomUpTree(-(i),depth);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(70)
						int _g5 = this->itemCheck(_g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(70)
						hx::AddEq(check,_g5);
					}
				}
				HX_STACK_LINE(72)
				::haxe::Log_obj::trace((((((iterations * (int)2) + HX_CSTRING("\t trees of depth ")) + depth) + HX_CSTRING("\t check: ")) + check),hx::SourceInfo(HX_CSTRING("BenchBinaryTree3.hx"),72,HX_CSTRING("BenchBinaryTree3"),HX_CSTRING("run")));
			}
;
		}
		HX_STACK_LINE(76)
		int _g6 = this->itemCheck(longLivedTree);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(75)
		::String _g7 = (((HX_CSTRING("long lived tree of depth ") + maxDepth) + HX_CSTRING("\t check: ")) + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(75)
		::haxe::Log_obj::trace(_g7,hx::SourceInfo(HX_CSTRING("BenchBinaryTree3.hx"),75,HX_CSTRING("BenchBinaryTree3"),HX_CSTRING("run")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BenchBinaryTree3_obj,run,(void))

Void BenchBinaryTree3_obj::test( ){
{
		HX_STACK_FRAME("BenchBinaryTree3","test",0x98099e5c,"BenchBinaryTree3.test","BenchBinaryTree3.hx",47,0x8c51ba9a)
		HX_STACK_LINE(48)
		Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new().Add(::BenchBinaryTree3_obj::__new());		HX_STACK_VAR(a,"a");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,a)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","BenchBinaryTree3.hx",50,0x8c51ba9a)
			{
				HX_STACK_LINE(50)
				a->__get((int)0).StaticCast< ::BenchBinaryTree3 >()->run((int)20);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(49)
		::Bench_obj::bench(HX_CSTRING("binary tree 3"),(int)1, Dynamic(new _Function_1_1(a)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BenchBinaryTree3_obj,test,(void))


BenchBinaryTree3_obj::BenchBinaryTree3_obj()
{
}

Dynamic BenchBinaryTree3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemCheck") ) { return itemCheck_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bottomUpTree") ) { return bottomUpTree_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BenchBinaryTree3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BenchBinaryTree3_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("itemCheck"),
	HX_CSTRING("bottomUpTree"),
	HX_CSTRING("run"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BenchBinaryTree3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BenchBinaryTree3_obj::__mClass,"__mClass");
};

#endif

Class BenchBinaryTree3_obj::__mClass;

void BenchBinaryTree3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BenchBinaryTree3"), hx::TCanCast< BenchBinaryTree3_obj> ,sStaticFields,sMemberFields,
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

void BenchBinaryTree3_obj::__boot()
{
}

