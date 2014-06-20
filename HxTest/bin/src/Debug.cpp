#include <hxcpp.h>

#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Debug_obj::__construct()
{
HX_STACK_FRAME("Debug","new",0xb900f8a5,"Debug.new","Debug.hx",11,0x6a71a26b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

Void Debug_obj::_assert( ::String msg,bool a){
{
		HX_STACK_FRAME("Debug","assert",0x1b9ad7a1,"Debug.assert","Debug.hx",18,0x6a71a26b)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(18)
		if ((!(a))){
			HX_STACK_LINE(20)
			::haxe::Log_obj::trace((HX_CSTRING("assertion failed: ") + msg),hx::SourceInfo(HX_CSTRING("Debug.hx"),20,HX_CSTRING("Debug"),HX_CSTRING("assert")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,_assert,(void))


Debug_obj::Debug_obj()
{
}

Dynamic Debug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { return _assert_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("assert"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#endif

Class Debug_obj::__mClass;

void Debug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Debug"), hx::TCanCast< Debug_obj> ,sStaticFields,sMemberFields,
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

void Debug_obj::__boot()
{
}

