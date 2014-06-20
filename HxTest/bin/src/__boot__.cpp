#include <hxcpp.h>

#include <sys/db/ResultSet.h>
#include <sys/db/RecordType.h>
#include <sys/db/Object.h>
#include <sys/db/Manager.h>
#include <sys/db/Connection.h>
#include <haxe/io/Bytes.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Serializer.h>
#include <haxe/Log.h>
#include <Type.h>
#include <ValueType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Reflect.h>
#include <IMap.h>
#include <Main.h>
#include <List.h>
#include <IntIter.h>
#include <Date.h>
#include <BenchBinaryTree.h>
#include <TreeNode.h>
#include <Bench.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::db::ResultSet_obj::__register();
::sys::db::RecordType_obj::__register();
::sys::db::Object_obj::__register();
::sys::db::Manager_obj::__register();
::sys::db::Connection_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Log_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::Main_obj::__register();
::List_obj::__register();
::IntIter_obj::__register();
::Date_obj::__register();
::BenchBinaryTree_obj::__register();
::TreeNode_obj::__register();
::Bench_obj::__register();
::haxe::Log_obj::__boot();
::Bench_obj::__boot();
::TreeNode_obj::__boot();
::BenchBinaryTree_obj::__boot();
::Date_obj::__boot();
::IntIter_obj::__boot();
::List_obj::__boot();
::Main_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::sys::db::Connection_obj::__boot();
::sys::db::Manager_obj::__boot();
::sys::db::Object_obj::__boot();
::sys::db::RecordType_obj::__boot();
::sys::db::ResultSet_obj::__boot();
}

