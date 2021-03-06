#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif

Void Type_obj::__construct()
{
	return null();
}

//Type_obj::~Type_obj() { }

Dynamic Type_obj::__CreateEmpty() { return  new Type_obj; }
hx::ObjectPtr< Type_obj > Type_obj::__new()
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

::String Type_obj::getClassName( ::Class c){
	HX_STACK_FRAME("Type","getClassName",0x8e66dd41,"Type.getClassName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",56,0x00143afe)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(57)
	if (((c == null()))){
		HX_STACK_LINE(58)
		return null();
	}
	HX_STACK_LINE(59)
	return c->mName;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

::String Type_obj::getEnumName( ::Enum e){
	HX_STACK_FRAME("Type","getEnumName",0x9b42910e,"Type.getEnumName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",63,0x00143afe)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(63)
	return e->__ToString();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumName,return )

::Class Type_obj::resolveClass( ::String name){
	HX_STACK_FRAME("Type","resolveClass",0x23b06bc0,"Type.resolveClass","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",66,0x00143afe)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(67)
	::Class result = ::Class_obj::Resolve(name);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(68)
	if (((  (((result != null()))) ? bool(result->__IsEnum()) : bool(false) ))){
		HX_STACK_LINE(69)
		return null();
	}
	HX_STACK_LINE(70)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

::Enum Type_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("Type","resolveEnum",0x26394079,"Type.resolveEnum","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",73,0x00143afe)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(74)
	::Class result = ::Class_obj::Resolve(name);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(75)
	if (((  (((result != null()))) ? bool(!(result->__IsEnum())) : bool(false) ))){
		HX_STACK_LINE(76)
		return null();
	}
	HX_STACK_LINE(77)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

Dynamic Type_obj::createEmptyInstance( ::Class cl){
	HX_STACK_FRAME("Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",87,0x00143afe)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_LINE(87)
	return cl->ConstructEmpty();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

::ValueType Type_obj::_typeof( Dynamic v){
	HX_STACK_FRAME("Type","typeof",0xd6c51d65,"Type.typeof","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Type.hx",112,0x00143afe)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(113)
	if (((v == null()))){
		HX_STACK_LINE(113)
		return ::ValueType_obj::TNull;
	}
	HX_STACK_LINE(114)
	int t = v->__GetType();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(115)
	switch( (int)(t)){
		case (int)2: {
			HX_STACK_LINE(117)
			return ::ValueType_obj::TBool;
		}
		;break;
		case (int)255: {
			HX_STACK_LINE(118)
			return ::ValueType_obj::TInt;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(119)
			return ::ValueType_obj::TFloat;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(120)
			return ::ValueType_obj::TFunction;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(121)
			return ::ValueType_obj::TObject;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(122)
			Dynamic _g = v->__GetClass();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			return ::ValueType_obj::TEnum(_g);
		}
		;break;
		default: {
			HX_STACK_LINE(124)
			Dynamic _g1 = v->__GetClass();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			return ::ValueType_obj::TClass(_g1);
		}
	}
	HX_STACK_LINE(115)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,_typeof,return )


Type_obj::Type_obj()
{
}

Dynamic Type_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"typeof") ) { return _typeof_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getEnumName") ) { return getEnumName_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { return resolveEnum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { return getClassName_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { return createEmptyInstance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Type_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Type_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getClassName"),
	HX_CSTRING("getEnumName"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("resolveEnum"),
	HX_CSTRING("createEmptyInstance"),
	HX_CSTRING("typeof"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

Class Type_obj::__mClass;

void Type_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Type"), hx::TCanCast< Type_obj> ,sStaticFields,sMemberFields,
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

void Type_obj::__boot()
{
}

