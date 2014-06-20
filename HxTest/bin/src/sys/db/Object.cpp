#include <hxcpp.h>

#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_Object
#include <sys/db/Object.h>
#endif
namespace sys{
namespace db{

Void Object_obj::__construct()
{
HX_STACK_FRAME("sys.db.Object","new",0x20b4b720,"sys.db.Object.new","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",35,0x1685df89)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Object_obj::~Object_obj() { }

Dynamic Object_obj::__CreateEmpty() { return  new Object_obj; }
hx::ObjectPtr< Object_obj > Object_obj::__new()
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct();
	return result;}

Dynamic Object_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Object_obj > result = new Object_obj();
	result->__construct();
	return result;}

Void Object_obj::insert( ){
{
		HX_STACK_FRAME("sys.db.Object","insert",0x7f791479,"sys.db.Object.insert","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",42,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->_manager->doInsert(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,insert,(void))

Void Object_obj::update( ){
{
		HX_STACK_FRAME("sys.db.Object","update",0x68a15749,"sys.db.Object.update","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",46,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->_manager->doUpdate(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,update,(void))

Void Object_obj::lock( ){
{
		HX_STACK_FRAME("sys.db.Object","lock",0x7c209d2b,"sys.db.Object.lock","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",50,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->_manager->doLock(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,lock,(void))

Void Object_obj::_delete( ){
{
		HX_STACK_FRAME("sys.db.Object","delete",0x4c74916b,"sys.db.Object.delete","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",54,0x1685df89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->_manager->doDelete(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,_delete,(void))

bool Object_obj::isLocked( ){
	HX_STACK_FRAME("sys.db.Object","isLocked",0x0f5341d4,"sys.db.Object.isLocked","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",58,0x1685df89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->_lock;
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,isLocked,return )

::String Object_obj::toString( ){
	HX_STACK_FRAME("sys.db.Object","toString",0x959171ec,"sys.db.Object.toString","C:\\HaxeToolkit\\haxe\\std/sys/db/Object.hx",62,0x1685df89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->_manager->objectToString(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,toString,return )


Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(_lock,"_lock");
	HX_MARK_MEMBER_NAME(_manager,"_manager");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lock,"_lock");
	HX_VISIT_MEMBER_NAME(_manager,"_manager");
}

Dynamic Object_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lock") ) { return _lock; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"delete") ) { return _delete_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_manager") ) { return _manager; }
		if (HX_FIELD_EQ(inName,"isLocked") ) { return isLocked_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Object_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_lock") ) { _lock=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_manager") ) { _manager=inValue.Cast< ::sys::db::Manager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lock"));
	outFields->push(HX_CSTRING("_manager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Object_obj,_lock),HX_CSTRING("_lock")},
	{hx::fsObject /*::sys::db::Manager*/ ,(int)offsetof(Object_obj,_manager),HX_CSTRING("_manager")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_lock"),
	HX_CSTRING("_manager"),
	HX_CSTRING("insert"),
	HX_CSTRING("update"),
	HX_CSTRING("lock"),
	HX_CSTRING("delete"),
	HX_CSTRING("isLocked"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#endif

Class Object_obj::__mClass;

void Object_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.Object"), hx::TCanCast< Object_obj> ,sStaticFields,sMemberFields,
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

void Object_obj::__boot()
{
}

} // end namespace sys
} // end namespace db
