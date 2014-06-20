#include <hxcpp.h>

#ifndef INCLUDED_IntIter
#include <IntIter.h>
#endif

Void IntIter_obj::__construct(int min,int max,Dynamic step)
{
HX_STACK_FRAME("IntIter","new",0x406139f9,"IntIter.new","IntIter.hx",12,0x13cde797)
HX_STACK_THIS(this)
HX_STACK_ARG(min,"min")
HX_STACK_ARG(max,"max")
HX_STACK_ARG(step,"step")
{
	HX_STACK_LINE(13)
	this->min = min;
	HX_STACK_LINE(14)
	this->max = max;
	HX_STACK_LINE(15)
	this->step = step;
}
;
	return null();
}

//IntIter_obj::~IntIter_obj() { }

Dynamic IntIter_obj::__CreateEmpty() { return  new IntIter_obj; }
hx::ObjectPtr< IntIter_obj > IntIter_obj::__new(int min,int max,Dynamic step)
{  hx::ObjectPtr< IntIter_obj > result = new IntIter_obj();
	result->__construct(min,max,step);
	return result;}

Dynamic IntIter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntIter_obj > result = new IntIter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool IntIter_obj::hasNext( ){
	HX_STACK_FRAME("IntIter","hasNext",0x0e0b4f86,"IntIter.hasNext","IntIter.hx",19,0x13cde797)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return (this->min < this->max);
}


HX_DEFINE_DYNAMIC_FUNC0(IntIter_obj,hasNext,return )

int IntIter_obj::next( ){
	HX_STACK_FRAME("IntIter","next",0x14b1813a,"IntIter.next","IntIter.hx",22,0x13cde797)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	int r = this->min;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(24)
	hx::AddEq(this->min,this->step);
	HX_STACK_LINE(25)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIter_obj,next,return )


IntIter_obj::IntIter_obj()
{
}

Dynamic IntIter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntIter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { step=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("step"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntIter_obj,min),HX_CSTRING("min")},
	{hx::fsInt,(int)offsetof(IntIter_obj,max),HX_CSTRING("max")},
	{hx::fsInt,(int)offsetof(IntIter_obj,step),HX_CSTRING("step")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("step"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntIter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntIter_obj::__mClass,"__mClass");
};

#endif

Class IntIter_obj::__mClass;

void IntIter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("IntIter"), hx::TCanCast< IntIter_obj> ,sStaticFields,sMemberFields,
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

void IntIter_obj::__boot()
{
}

