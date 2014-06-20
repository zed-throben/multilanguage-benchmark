#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Manager
#include <sys/db/Manager.h>
#endif
#ifndef INCLUDED_sys_db_Object
#include <sys/db/Object.h>
#endif
#ifndef INCLUDED_sys_db_RecordType
#include <sys/db/RecordType.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
namespace sys{
namespace db{

Void Manager_obj::__construct()
{
	return null();
}

//Manager_obj::~Manager_obj() { }

Dynamic Manager_obj::__CreateEmpty() { return  new Manager_obj; }
hx::ObjectPtr< Manager_obj > Manager_obj::__new()
{  hx::ObjectPtr< Manager_obj > result = new Manager_obj();
	result->__construct();
	return result;}

Dynamic Manager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Manager_obj > result = new Manager_obj();
	result->__construct();
	return result;}

::haxe::io::Bytes Manager_obj::doUpdateCache( Dynamic x,::String name,Dynamic v){
	HX_STACK_FRAME("sys.db.Manager","doUpdateCache",0x02a1a85e,"sys.db.Manager.doUpdateCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",115,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(116)
	Dynamic cache = ::Reflect_obj::field(x,(HX_CSTRING("cache_") + name));		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(119)
	if (((cache == null()))){
		HX_STACK_LINE(120)
		return v;
	}
	HX_STACK_LINE(121)
	::haxe::io::Bytes v1 = this->doSerialize(name,cache->__Field(HX_CSTRING("v"),true));		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(124)
	return v1;
}


HX_DEFINE_DYNAMIC_FUNC3(Manager_obj,doUpdateCache,return )

Void Manager_obj::doInsert( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","doInsert",0x9894c874,"sys.db.Manager.doInsert","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",127,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(128)
		this->unmake(x);
		HX_STACK_LINE(129)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(130)
		::List fields = ::List_obj::__new();		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(131)
		::List values = ::List_obj::__new();		HX_STACK_VAR(values,"values");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			Dynamic _g1 = this->table_infos->__Field(HX_CSTRING("fields"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(132)
				++(_g);
				HX_STACK_LINE(133)
				::String name = f->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(134)
				::haxe::io::Bytes v = ::Reflect_obj::field(x,name);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(135)
				if (((v != null()))){
					HX_STACK_LINE(136)
					::String _g2 = this->quoteField(name);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(136)
					fields->add(_g2);
					HX_STACK_LINE(137)
					{
						HX_STACK_LINE(137)
						::sys::db::RecordType _g21 = f->__Field(HX_CSTRING("t"),true);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(137)
						switch( (int)(_g21->__Index())){
							case (int)30: {
								HX_STACK_LINE(138)
								::haxe::io::Bytes _g11 = this->doUpdateCache(x,name,v);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(138)
								v = _g11;
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(141)
					values->add(v);
				}
				else{
					HX_STACK_LINE(142)
					if ((!(f->__Field(HX_CSTRING("isNull"),true)))){
						HX_STACK_LINE(144)
						{
							HX_STACK_LINE(144)
							::sys::db::RecordType _g2 = f->__Field(HX_CSTRING("t"),true);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(144)
							switch( (int)(_g2->__Index())){
								case (int)3: case (int)24: case (int)1: case (int)6: case (int)7: case (int)23: case (int)5: case (int)25: case (int)26: case (int)27: case (int)28: case (int)29: case (int)31: {
									HX_STACK_LINE(146)
									if (((x != null()))){
										HX_STACK_LINE(146)
										x->__SetField(name,(int)0,false);
									}
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(148)
									if (((x != null()))){
										HX_STACK_LINE(148)
										x->__SetField(name,false,false);
									}
								}
								;break;
								case (int)13: case (int)15: case (int)9: case (int)14: case (int)21: {
									HX_STACK_LINE(150)
									if (((x != null()))){
										HX_STACK_LINE(150)
										x->__SetField(name,HX_CSTRING(""),false);
									}
								}
								;break;
								case (int)16: case (int)22: case (int)17: case (int)19: case (int)18: {
									HX_STACK_LINE(152)
									Dynamic value = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(152)
									if (((x != null()))){
										HX_STACK_LINE(152)
										x->__SetField(name,value,false);
									}
								}
								;break;
								case (int)10: case (int)11: case (int)12: {
								}
								;break;
								case (int)0: case (int)2: case (int)4: case (int)33: case (int)32: case (int)20: case (int)30: {
								}
								;break;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(160)
		s->add(HX_CSTRING("INSERT INTO "));
		HX_STACK_LINE(161)
		s->add(this->table_name);
		HX_STACK_LINE(162)
		s->add(HX_CSTRING(" ("));
		HX_STACK_LINE(163)
		::String _g2 = fields->join(HX_CSTRING(","));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(163)
		s->add(_g2);
		HX_STACK_LINE(164)
		s->add(HX_CSTRING(") VALUES ("));
		HX_STACK_LINE(165)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(166)
		for(::cpp::FastIterator_obj< ::haxe::io::Bytes > *__it = ::cpp::CreateFastIterator< ::haxe::io::Bytes >(values->iterator());  __it->hasNext(); ){
			::haxe::io::Bytes v = __it->next();
			{
				HX_STACK_LINE(167)
				if ((first)){
					HX_STACK_LINE(168)
					first = false;
				}
				else{
					HX_STACK_LINE(170)
					s->add(HX_CSTRING(", "));
				}
				HX_STACK_LINE(171)
				this->getCnx()->addValue(s,v);
			}
;
		}
		HX_STACK_LINE(173)
		s->add(HX_CSTRING(")"));
		HX_STACK_LINE(174)
		::String _g3 = s->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(174)
		this->unsafeExecute(_g3);
		HX_STACK_LINE(175)
		x->__FieldRef(HX_CSTRING("_lock")) = true;
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::sys::db::Manager_obj > __this,Dynamic &x){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",177,0xacbc7d07)
				{
					HX_STACK_LINE(177)
					Dynamic _g4 = ::Reflect_obj::field(x,__this->table_keys->__get((int)0));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(177)
					return (_g4 == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(177)
		if (((  (((this->table_keys->length == (int)1))) ? bool(_Function_1_1::Block(this,x)) : bool(false) ))){
			HX_STACK_LINE(178)
			Dynamic value = this->getCnx()->lastInsertId();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(178)
			if (((x != null()))){
				HX_STACK_LINE(178)
				x->__SetField(this->table_keys->__get((int)0),value,false);
			}
		}
		HX_STACK_LINE(179)
		this->addToCache(x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doInsert,(void))

Void Manager_obj::doUpdate( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","doUpdate",0x81bd0b44,"sys.db.Manager.doUpdate","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",194,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(195)
		if ((!(x->__Field(HX_CSTRING("_lock"),true)))){
			HX_STACK_LINE(196)
			HX_STACK_DO_THROW(HX_CSTRING("Cannot update a not locked object"));
		}
		HX_STACK_LINE(197)
		this->unmake(x);
		HX_STACK_LINE(198)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(199)
		s->add(HX_CSTRING("UPDATE "));
		HX_STACK_LINE(200)
		s->add(this->table_name);
		HX_STACK_LINE(201)
		s->add(HX_CSTRING(" SET "));
		HX_STACK_LINE(202)
		Dynamic cache = ::Reflect_obj::field(x,HX_CSTRING("__cache__"));		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(203)
		bool mod = false;		HX_STACK_VAR(mod,"mod");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(204)
			Dynamic _g1 = this->table_infos->__Field(HX_CSTRING("fields"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			while((true)){
				HX_STACK_LINE(204)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(204)
					break;
				}
				HX_STACK_LINE(204)
				Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(204)
				++(_g);
				HX_STACK_LINE(205)
				::String name = f->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(206)
				Dynamic v = ::Reflect_obj::field(x,name);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(207)
				Dynamic vc = ::Reflect_obj::field(cache,name);		HX_STACK_VAR(vc,"vc");
				struct _Function_3_1{
					inline static bool Block( Dynamic &v,Dynamic &f,Dynamic &vc){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",208,0xacbc7d07)
						{
							struct _Function_4_1{
								inline static bool Block( Dynamic &f){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",208,0xacbc7d07)
									{
										HX_STACK_LINE(208)
										switch( (int)(f->__Field(HX_CSTRING("t"),true)->__Index())){
											case (int)16: case (int)22: case (int)17: case (int)19: case (int)18: {
												HX_STACK_LINE(208)
												return true;
											}
											;break;
											default: {
												HX_STACK_LINE(208)
												return false;
											}
										}
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static bool Block( Dynamic &v,Dynamic &vc){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",208,0xacbc7d07)
									{
										HX_STACK_LINE(208)
										::haxe::io::Bytes a = v;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(208)
										::haxe::io::Bytes b = vc;		HX_STACK_VAR(b,"b");
										struct _Function_5_1{
											inline static bool Block( ::haxe::io::Bytes &b,::haxe::io::Bytes &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",208,0xacbc7d07)
												{
													struct _Function_6_1{
														inline static bool Block( ::haxe::io::Bytes &b,::haxe::io::Bytes &a){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",208,0xacbc7d07)
															{
																HX_STACK_LINE(208)
																int _g2 = a->compare(b);		HX_STACK_VAR(_g2,"_g2");
																HX_STACK_LINE(208)
																return (_g2 != (int)0);
															}
															return null();
														}
													};
													HX_STACK_LINE(208)
													return (  ((!(((bool((a == null())) || bool((b == null()))))))) ? bool(_Function_6_1::Block(b,a)) : bool(true) );
												}
												return null();
											}
										};
										HX_STACK_LINE(208)
										return (  (((a != b))) ? bool(_Function_5_1::Block(b,a)) : bool(false) );
									}
									return null();
								}
							};
							HX_STACK_LINE(208)
							return (  ((!((!(_Function_4_1::Block(f)))))) ? bool(_Function_4_2::Block(v,vc)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(208)
				if (((  (((v != vc))) ? bool(_Function_3_1::Block(v,f,vc)) : bool(false) ))){
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						::sys::db::RecordType _g2 = f->__Field(HX_CSTRING("t"),true);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(209)
						switch( (int)(_g2->__Index())){
							case (int)30: {
								HX_STACK_LINE(211)
								::haxe::io::Bytes _g11 = this->doUpdateCache(x,name,v);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(211)
								v = _g11;
								struct _Function_6_1{
									inline static bool Block( Dynamic &v,Dynamic &vc){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",212,0xacbc7d07)
										{
											HX_STACK_LINE(212)
											::haxe::io::Bytes a = v;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(212)
											::haxe::io::Bytes b = vc;		HX_STACK_VAR(b,"b");
											struct _Function_7_1{
												inline static bool Block( ::haxe::io::Bytes &b,::haxe::io::Bytes &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",212,0xacbc7d07)
													{
														struct _Function_8_1{
															inline static bool Block( ::haxe::io::Bytes &b,::haxe::io::Bytes &a){
																HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",212,0xacbc7d07)
																{
																	HX_STACK_LINE(212)
																	int _g21 = a->compare(b);		HX_STACK_VAR(_g21,"_g21");
																	HX_STACK_LINE(212)
																	return (_g21 != (int)0);
																}
																return null();
															}
														};
														HX_STACK_LINE(212)
														return (  ((!(((bool((a == null())) || bool((b == null()))))))) ? bool(_Function_8_1::Block(b,a)) : bool(true) );
													}
													return null();
												}
											};
											HX_STACK_LINE(212)
											return (  (((a != b))) ? bool(_Function_7_1::Block(b,a)) : bool(false) );
										}
										return null();
									}
								};
								HX_STACK_LINE(212)
								if ((!(_Function_6_1::Block(v,vc)))){
									HX_STACK_LINE(213)
									continue;
								}
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(216)
					if ((mod)){
						HX_STACK_LINE(217)
						s->add(HX_CSTRING(", "));
					}
					else{
						HX_STACK_LINE(219)
						mod = true;
					}
					HX_STACK_LINE(220)
					::String _g3 = this->quoteField(name);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(220)
					s->add(_g3);
					HX_STACK_LINE(221)
					s->add(HX_CSTRING(" = "));
					HX_STACK_LINE(222)
					this->getCnx()->addValue(s,v);
					HX_STACK_LINE(223)
					if (((cache != null()))){
						HX_STACK_LINE(223)
						cache->__SetField(name,v,false);
					}
				}
			}
		}
		HX_STACK_LINE(226)
		if ((!(mod))){
			HX_STACK_LINE(227)
			return null();
		}
		HX_STACK_LINE(228)
		s->add(HX_CSTRING(" WHERE "));
		HX_STACK_LINE(229)
		this->addKeys(s,x);
		HX_STACK_LINE(230)
		::String _g4 = s->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(230)
		this->unsafeExecute(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doUpdate,(void))

Void Manager_obj::doDelete( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","doDelete",0x65904566,"sys.db.Manager.doDelete","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",233,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(234)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(235)
		s->add(HX_CSTRING("DELETE FROM "));
		HX_STACK_LINE(236)
		s->add(this->table_name);
		HX_STACK_LINE(237)
		s->add(HX_CSTRING(" WHERE "));
		HX_STACK_LINE(238)
		this->addKeys(s,x);
		HX_STACK_LINE(239)
		::String _g = s->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		this->unsafeExecute(_g);
		HX_STACK_LINE(240)
		this->removeFromCache(x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doDelete,(void))

Void Manager_obj::doLock( Dynamic i){
{
		HX_STACK_FRAME("sys.db.Manager","doLock",0x2625cc66,"sys.db.Manager.doLock","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",243,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(244)
		if ((i->__Field(HX_CSTRING("_lock"),true))){
			HX_STACK_LINE(245)
			return null();
		}
		HX_STACK_LINE(246)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(247)
		s->add(HX_CSTRING("SELECT * FROM "));
		HX_STACK_LINE(248)
		s->add(this->table_name);
		HX_STACK_LINE(249)
		s->add(HX_CSTRING(" WHERE "));
		HX_STACK_LINE(250)
		this->addKeys(s,i);
		HX_STACK_LINE(252)
		::String _g = s->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		Dynamic _g1 = this->unsafeObject(_g,true);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(252)
		if (((_g1 != i))){
			HX_STACK_LINE(253)
			HX_STACK_DO_THROW(HX_CSTRING("Could not lock object (was deleted ?); try restarting transaction"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,doLock,(void))

::String Manager_obj::objectToString( Dynamic it){
	HX_STACK_FRAME("sys.db.Manager","objectToString",0xba09bddb,"sys.db.Manager.objectToString","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",256,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(257)
	::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(258)
	s->add(this->table_name);
	HX_STACK_LINE(259)
	if (((this->table_keys->length == (int)1))){
		HX_STACK_LINE(260)
		s->add(HX_CSTRING("#"));
		HX_STACK_LINE(261)
		Dynamic _g = ::Reflect_obj::field(it,this->table_keys->__get((int)0));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		s->add(_g);
	}
	else{
		HX_STACK_LINE(263)
		s->add(HX_CSTRING("("));
		HX_STACK_LINE(264)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(265)
			while((true)){
				HX_STACK_LINE(265)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(265)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(265)
				++(_g);
				HX_STACK_LINE(266)
				if ((first)){
					HX_STACK_LINE(267)
					first = false;
				}
				else{
					HX_STACK_LINE(269)
					s->add(HX_CSTRING(","));
				}
				HX_STACK_LINE(270)
				::String _g11 = this->quoteField(f);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(270)
				s->add(_g11);
				HX_STACK_LINE(271)
				s->add(HX_CSTRING(":"));
				HX_STACK_LINE(272)
				Dynamic _g2 = ::Reflect_obj::field(it,f);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(272)
				s->add(_g2);
			}
		}
		HX_STACK_LINE(274)
		s->add(HX_CSTRING(")"));
	}
	HX_STACK_LINE(276)
	return s->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,objectToString,return )

::haxe::io::Bytes Manager_obj::doSerialize( ::String field,Dynamic v){
	HX_STACK_FRAME("sys.db.Manager","doSerialize",0x56fb8f85,"sys.db.Manager.doSerialize","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",279,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(280)
	::haxe::Serializer s = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(281)
	s->useEnumIndex = true;
	HX_STACK_LINE(282)
	s->serialize(v);
	HX_STACK_LINE(283)
	::String str = s->toString();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(287)
	return ::haxe::io::Bytes_obj::ofString(str);
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,doSerialize,return )

Dynamic Manager_obj::cacheObject( Dynamic x,bool lock){
	HX_STACK_FRAME("sys.db.Manager","cacheObject",0x3ceb1d51,"sys.db.Manager.cacheObject","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",307,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(312)
	Dynamic o = ::Type_obj::createEmptyInstance(this->class_proto);		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(313)
		Array< ::String > _g1 = ::Reflect_obj::fields(x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(313)
		while((true)){
			HX_STACK_LINE(313)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(313)
				break;
			}
			HX_STACK_LINE(313)
			::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(313)
			++(_g);
			HX_STACK_LINE(314)
			Dynamic value = ::Reflect_obj::field(x,f);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(314)
			if (((o != null()))){
				HX_STACK_LINE(314)
				o->__SetField(f,value,false);
			}
		}
	}
	HX_STACK_LINE(315)
	o->__FieldRef(HX_CSTRING("_manager")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(317)
	if (((o != null()))){
		HX_STACK_LINE(317)
		o->__SetField(HX_CSTRING("__cache__"),x,false);
	}
	HX_STACK_LINE(318)
	this->addToCache(o);
	HX_STACK_LINE(319)
	o->__FieldRef(HX_CSTRING("_lock")) = lock;
	HX_STACK_LINE(320)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,cacheObject,return )

Void Manager_obj::make( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","make",0xc290513e,"sys.db.Manager.make","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",323,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,make,(void))

Void Manager_obj::unmake( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","unmake",0x7495cc17,"sys.db.Manager.unmake","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",326,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unmake,(void))

::String Manager_obj::quoteField( ::String f){
	HX_STACK_FRAME("sys.db.Manager","quoteField",0x31b41b2e,"sys.db.Manager.quoteField","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",329,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(330)
	::String _g = f.toLowerCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(330)
	if ((::sys::db::Manager_obj::KEYWORDS->exists(_g))){
		HX_STACK_LINE(330)
		return ((HX_CSTRING("`") + f) + HX_CSTRING("`"));
	}
	else{
		HX_STACK_LINE(330)
		return f;
	}
	HX_STACK_LINE(330)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,quoteField,return )

Void Manager_obj::addKeys( ::StringBuf s,Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","addKeys",0x12137f65,"sys.db.Manager.addKeys","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",333,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(334)
		bool first = true;		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(335)
			Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(335)
			while((true)){
				HX_STACK_LINE(335)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(335)
					break;
				}
				HX_STACK_LINE(335)
				::String k = _g1->__get(_g);		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(335)
				++(_g);
				HX_STACK_LINE(336)
				if ((first)){
					HX_STACK_LINE(337)
					first = false;
				}
				else{
					HX_STACK_LINE(339)
					s->add(HX_CSTRING(" AND "));
				}
				HX_STACK_LINE(340)
				::String _g2 = this->quoteField(k);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(340)
				s->add(_g2);
				HX_STACK_LINE(341)
				s->add(HX_CSTRING(" = "));
				HX_STACK_LINE(342)
				Dynamic f = ::Reflect_obj::field(x,k);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(343)
				if (((f == null()))){
					HX_STACK_LINE(344)
					HX_STACK_DO_THROW((HX_CSTRING("Missing key ") + k));
				}
				HX_STACK_LINE(345)
				this->getCnx()->addValue(s,f);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,addKeys,(void))

::sys::db::ResultSet Manager_obj::unsafeExecute( ::String sql){
	HX_STACK_FRAME("sys.db.Manager","unsafeExecute",0x4e619d5f,"sys.db.Manager.unsafeExecute","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",350,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_LINE(350)
	return this->getCnx()->request(sql);
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,unsafeExecute,return )

Dynamic Manager_obj::unsafeObject( ::String sql,bool lock){
	HX_STACK_FRAME("sys.db.Manager","unsafeObject",0x16fafed5,"sys.db.Manager.unsafeObject","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",353,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sql,"sql")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(354)
	if (((lock != false))){
		HX_STACK_LINE(355)
		lock = true;
		HX_STACK_LINE(356)
		::String _g = this->getLockMode();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(356)
		hx::AddEq(sql,_g);
	}
	HX_STACK_LINE(358)
	Dynamic r = this->unsafeExecute(sql)->next();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(359)
	if (((r == null()))){
		HX_STACK_LINE(360)
		return null();
	}
	HX_STACK_LINE(361)
	Dynamic c = this->getFromCache(r,lock);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(362)
	if (((c != null()))){
		HX_STACK_LINE(363)
		return c;
	}
	HX_STACK_LINE(364)
	Dynamic _g1 = this->cacheObject(r,lock);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(364)
	r = _g1;
	HX_STACK_LINE(365)
	this->make(r);
	HX_STACK_LINE(366)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,unsafeObject,return )

::sys::db::Connection Manager_obj::getCnx( ){
	HX_STACK_FRAME("sys.db.Manager","getCnx",0xb18543c7,"sys.db.Manager.getCnx","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",474,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(474)
	return ::sys::db::Manager_obj::cnx;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getCnx,return )

::String Manager_obj::getLockMode( ){
	HX_STACK_FRAME("sys.db.Manager","getLockMode",0xbc83a254,"sys.db.Manager.getLockMode","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",478,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(478)
	return ::sys::db::Manager_obj::lockMode;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getLockMode,return )

::String Manager_obj::makeCacheKey( Dynamic x){
	HX_STACK_FRAME("sys.db.Manager","makeCacheKey",0xbf1377db,"sys.db.Manager.makeCacheKey","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",564,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(565)
	if (((this->table_keys->length == (int)1))){
		HX_STACK_LINE(566)
		Dynamic k = ::Reflect_obj::field(x,this->table_keys->__get((int)0));		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(567)
		if (((k == null()))){
			HX_STACK_LINE(568)
			HX_STACK_DO_THROW((HX_CSTRING("Missing key ") + this->table_keys->__get((int)0)));
		}
		HX_STACK_LINE(569)
		::String _g = ::Std_obj::string(k);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(569)
		return (_g + this->table_name);
	}
	HX_STACK_LINE(571)
	::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(572)
	{
		HX_STACK_LINE(572)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(572)
		Array< ::String > _g1 = this->table_keys;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(572)
		while((true)){
			HX_STACK_LINE(572)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(572)
				break;
			}
			HX_STACK_LINE(572)
			::String k = _g1->__get(_g);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(572)
			++(_g);
			HX_STACK_LINE(573)
			Dynamic v = ::Reflect_obj::field(x,k);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(574)
			if (((k == null()))){
				HX_STACK_LINE(575)
				HX_STACK_DO_THROW((HX_CSTRING("Missing key ") + k));
			}
			HX_STACK_LINE(576)
			s->add(v);
			HX_STACK_LINE(577)
			s->add(HX_CSTRING("#"));
		}
	}
	HX_STACK_LINE(579)
	s->add(this->table_name);
	HX_STACK_LINE(580)
	return s->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,makeCacheKey,return )

Void Manager_obj::addToCache( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","addToCache",0xc33d85f6,"sys.db.Manager.addToCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",583,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(584)
		::String _g = this->makeCacheKey(x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(584)
		::sys::db::Manager_obj::object_cache->set(_g,x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,addToCache,(void))

Void Manager_obj::removeFromCache( Dynamic x){
{
		HX_STACK_FRAME("sys.db.Manager","removeFromCache",0x916daa44,"sys.db.Manager.removeFromCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",587,0xacbc7d07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(588)
		::String _g = this->makeCacheKey(x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(588)
		::sys::db::Manager_obj::object_cache->remove(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,removeFromCache,(void))

Dynamic Manager_obj::getFromCache( Dynamic x,bool lock){
	HX_STACK_FRAME("sys.db.Manager","getFromCache",0xe50e0852,"sys.db.Manager.getFromCache","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",595,0xacbc7d07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(lock,"lock")
	HX_STACK_LINE(596)
	::String _g = this->makeCacheKey(x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(596)
	Dynamic c = ::sys::db::Manager_obj::object_cache->get(_g);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(597)
	if (((bool((bool((c != null())) && bool(lock))) && bool(!(c->__Field(HX_CSTRING("_lock"),true)))))){
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(599)
			Array< ::String > _g11 = ::Reflect_obj::fields(c);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(599)
			while((true)){
				HX_STACK_LINE(599)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(599)
					break;
				}
				HX_STACK_LINE(599)
				::String f = _g11->__get(_g1);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(599)
				++(_g1);
				HX_STACK_LINE(600)
				::Reflect_obj::deleteField(c,f);
			}
		}
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(601)
			Array< ::String > _g11 = ::Reflect_obj::fields(x);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(601)
			while((true)){
				HX_STACK_LINE(601)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(601)
					break;
				}
				HX_STACK_LINE(601)
				::String f = _g11->__get(_g1);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(601)
				++(_g1);
				HX_STACK_LINE(602)
				Dynamic value = ::Reflect_obj::field(x,f);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(602)
				if (((c != null()))){
					HX_STACK_LINE(602)
					c->__SetField(f,value,false);
				}
			}
		}
		HX_STACK_LINE(604)
		c->__FieldRef(HX_CSTRING("_lock")) = true;
		HX_STACK_LINE(607)
		c->__FieldRef(HX_CSTRING("_manager")) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(610)
		if (((c != null()))){
			HX_STACK_LINE(610)
			c->__SetField(HX_CSTRING("__cache__"),x,false);
		}
		HX_STACK_LINE(612)
		this->make(c);
	}
	HX_STACK_LINE(614)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,getFromCache,return )

::sys::db::Connection Manager_obj::cnx;

::String Manager_obj::lockMode;

::haxe::ds::StringMap Manager_obj::object_cache;

::haxe::ds::StringMap Manager_obj::KEYWORDS;


Manager_obj::Manager_obj()
{
}

void Manager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manager);
	HX_MARK_MEMBER_NAME(table_infos,"table_infos");
	HX_MARK_MEMBER_NAME(table_name,"table_name");
	HX_MARK_MEMBER_NAME(table_keys,"table_keys");
	HX_MARK_MEMBER_NAME(class_proto,"class_proto");
	HX_MARK_END_CLASS();
}

void Manager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(table_infos,"table_infos");
	HX_VISIT_MEMBER_NAME(table_name,"table_name");
	HX_VISIT_MEMBER_NAME(table_keys,"table_keys");
	HX_VISIT_MEMBER_NAME(class_proto,"class_proto");
}

Dynamic Manager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnx") ) { return cnx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doLock") ) { return doLock_dyn(); }
		if (HX_FIELD_EQ(inName,"unmake") ) { return unmake_dyn(); }
		if (HX_FIELD_EQ(inName,"getCnx") ) { return getCnx_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { return addKeys_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lockMode") ) { return lockMode; }
		if (HX_FIELD_EQ(inName,"KEYWORDS") ) { return KEYWORDS; }
		if (HX_FIELD_EQ(inName,"doInsert") ) { return doInsert_dyn(); }
		if (HX_FIELD_EQ(inName,"doUpdate") ) { return doUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"doDelete") ) { return doDelete_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"table_name") ) { return table_name; }
		if (HX_FIELD_EQ(inName,"table_keys") ) { return table_keys; }
		if (HX_FIELD_EQ(inName,"quoteField") ) { return quoteField_dyn(); }
		if (HX_FIELD_EQ(inName,"addToCache") ) { return addToCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"table_infos") ) { return table_infos; }
		if (HX_FIELD_EQ(inName,"class_proto") ) { return class_proto; }
		if (HX_FIELD_EQ(inName,"doSerialize") ) { return doSerialize_dyn(); }
		if (HX_FIELD_EQ(inName,"cacheObject") ) { return cacheObject_dyn(); }
		if (HX_FIELD_EQ(inName,"getLockMode") ) { return getLockMode_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_cache") ) { return object_cache; }
		if (HX_FIELD_EQ(inName,"unsafeObject") ) { return unsafeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"makeCacheKey") ) { return makeCacheKey_dyn(); }
		if (HX_FIELD_EQ(inName,"getFromCache") ) { return getFromCache_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doUpdateCache") ) { return doUpdateCache_dyn(); }
		if (HX_FIELD_EQ(inName,"unsafeExecute") ) { return unsafeExecute_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectToString") ) { return objectToString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeFromCache") ) { return removeFromCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Manager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnx") ) { cnx=inValue.Cast< ::sys::db::Connection >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lockMode") ) { lockMode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYWORDS") ) { KEYWORDS=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"table_name") ) { table_name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"table_keys") ) { table_keys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"table_infos") ) { table_infos=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"class_proto") ) { class_proto=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_cache") ) { object_cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Manager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("table_infos"));
	outFields->push(HX_CSTRING("table_name"));
	outFields->push(HX_CSTRING("table_keys"));
	outFields->push(HX_CSTRING("class_proto"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cnx"),
	HX_CSTRING("lockMode"),
	HX_CSTRING("object_cache"),
	HX_CSTRING("KEYWORDS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,table_infos),HX_CSTRING("table_infos")},
	{hx::fsString,(int)offsetof(Manager_obj,table_name),HX_CSTRING("table_name")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Manager_obj,table_keys),HX_CSTRING("table_keys")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Manager_obj,class_proto),HX_CSTRING("class_proto")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("table_infos"),
	HX_CSTRING("table_name"),
	HX_CSTRING("table_keys"),
	HX_CSTRING("class_proto"),
	HX_CSTRING("doUpdateCache"),
	HX_CSTRING("doInsert"),
	HX_CSTRING("doUpdate"),
	HX_CSTRING("doDelete"),
	HX_CSTRING("doLock"),
	HX_CSTRING("objectToString"),
	HX_CSTRING("doSerialize"),
	HX_CSTRING("cacheObject"),
	HX_CSTRING("make"),
	HX_CSTRING("unmake"),
	HX_CSTRING("quoteField"),
	HX_CSTRING("addKeys"),
	HX_CSTRING("unsafeExecute"),
	HX_CSTRING("unsafeObject"),
	HX_CSTRING("getCnx"),
	HX_CSTRING("getLockMode"),
	HX_CSTRING("makeCacheKey"),
	HX_CSTRING("addToCache"),
	HX_CSTRING("removeFromCache"),
	HX_CSTRING("getFromCache"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Manager_obj::cnx,"cnx");
	HX_MARK_MEMBER_NAME(Manager_obj::lockMode,"lockMode");
	HX_MARK_MEMBER_NAME(Manager_obj::object_cache,"object_cache");
	HX_MARK_MEMBER_NAME(Manager_obj::KEYWORDS,"KEYWORDS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Manager_obj::cnx,"cnx");
	HX_VISIT_MEMBER_NAME(Manager_obj::lockMode,"lockMode");
	HX_VISIT_MEMBER_NAME(Manager_obj::object_cache,"object_cache");
	HX_VISIT_MEMBER_NAME(Manager_obj::KEYWORDS,"KEYWORDS");
};

#endif

Class Manager_obj::__mClass;

void Manager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.Manager"), hx::TCanCast< Manager_obj> ,sStaticFields,sMemberFields,
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

void Manager_obj::__boot()
{
	object_cache= ::haxe::ds::StringMap_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/sys/db/Manager.hx",42,0xacbc7d07)
		{
			HX_STACK_LINE(43)
			::haxe::ds::StringMap h = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(44)
				Array< ::String > _g1 = HX_CSTRING("ADD|ALL|ALTER|ANALYZE|AND|AS|ASC|ASENSITIVE|BEFORE|BETWEEN|BIGINT|BINARY|BLOB|BOTH|BY|CALL|CASCADE|CASE|CHANGE|CHAR|CHARACTER|CHECK|COLLATE|COLUMN|CONDITION|CONSTRAINT|CONTINUE|CONVERT|CREATE|CROSS|CURRENT_DATE|CURRENT_TIME|CURRENT_TIMESTAMP|CURRENT_USER|CURSOR|DATABASE|DATABASES|DAY_HOUR|DAY_MICROSECOND|DAY_MINUTE|DAY_SECOND|DEC|DECIMAL|DECLARE|DEFAULT|DELAYED|DELETE|DESC|DESCRIBE|DETERMINISTIC|DISTINCT|DISTINCTROW|DIV|DOUBLE|DROP|DUAL|EACH|ELSE|ELSEIF|ENCLOSED|ESCAPED|EXISTS|EXIT|EXPLAIN|FALSE|FETCH|FLOAT|FLOAT4|FLOAT8|FOR|FORCE|FOREIGN|FROM|FULLTEXT|GRANT|GROUP|HAVING|HIGH_PRIORITY|HOUR_MICROSECOND|HOUR_MINUTE|HOUR_SECOND|IF|IGNORE|IN|INDEX|INFILE|INNER|INOUT|INSENSITIVE|INSERT|INT|INT1|INT2|INT3|INT4|INT8|INTEGER|INTERVAL|INTO|IS|ITERATE|JOIN|KEY|KEYS|KILL|LEADING|LEAVE|LEFT|LIKE|LIMIT|LINES|LOAD|LOCALTIME|LOCALTIMESTAMP|LOCK|LONG|LONGBLOB|LONGTEXT|LOOP|LOW_PRIORITY|MATCH|MEDIUMBLOB|MEDIUMINT|MEDIUMTEXT|MIDDLEINT|MINUTE_MICROSECOND|MINUTE_SECOND|MOD|MODIFIES|NATURAL|NOT|NO_WRITE_TO_BINLOG|NULL|NUMERIC|ON|OPTIMIZE|OPTION|OPTIONALLY|OR|ORDER|OUT|OUTER|OUTFILE|PRECISION|PRIMARY|PROCEDURE|PURGE|READ|READS|REAL|REFERENCES|REGEXP|RELEASE|RENAME|REPEAT|REPLACE|REQUIRE|RESTRICT|RETURN|REVOKE|RIGHT|RLIKE|SCHEMA|SCHEMAS|SECOND_MICROSECOND|SELECT|SENSITIVE|SEPARATOR|SET|SHOW|SMALLINT|SONAME|SPATIAL|SPECIFIC|SQL|SQLEXCEPTION|SQLSTATE|SQLWARNING|SQL_BIG_RESULT|SQL_CALC_FOUND_ROWS|SQL_SMALL_RESULT|SSL|STARTING|STRAIGHT_JOIN|TABLE|TERMINATED|THEN|TINYBLOB|TINYINT|TINYTEXT|TO|TRAILING|TRIGGER|TRUE|UNDO|UNION|UNIQUE|UNLOCK|UNSIGNED|UPDATE|USAGE|USE|USING|UTC_DATE|UTC_TIME|UTC_TIMESTAMP|VALUES|VARBINARY|VARCHAR|VARCHARACTER|VARYING|WHEN|WHERE|WHILE|WITH|WRITE|XOR|YEAR_MONTH|ZEROFILL|ASENSITIVE|CALL|CONDITION|CONNECTION|CONTINUE|CURSOR|DECLARE|DETERMINISTIC|EACH|ELSEIF|EXIT|FETCH|GOTO|INOUT|INSENSITIVE|ITERATE|LABEL|LEAVE|LOOP|MODIFIES|OUT|READS|RELEASE|REPEAT|RETURN|SCHEMA|SCHEMAS|SENSITIVE|SPECIFIC|SQL|SQLEXCEPTION|SQLSTATE|SQLWARNING|TRIGGER|UNDO|UPGRADE|WHILE").split(HX_CSTRING("|"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(44)
				while((true)){
					HX_STACK_LINE(44)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(44)
						break;
					}
					HX_STACK_LINE(44)
					::String k = _g1->__get(_g);		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(44)
					++(_g);
					HX_STACK_LINE(45)
					::String _g2 = k.toLowerCase();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(45)
					h->set(_g2,true);
				}
			}
			HX_STACK_LINE(46)
			return h;
		}
		return null();
	}
};
	KEYWORDS= _Function_0_1::Block();
}

} // end namespace sys
} // end namespace db
