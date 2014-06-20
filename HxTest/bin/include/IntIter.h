#ifndef INCLUDED_IntIter
#define INCLUDED_IntIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IntIter)


class HXCPP_CLASS_ATTRIBUTES  IntIter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntIter_obj OBJ_;
		IntIter_obj();
		Void __construct(int min,int max,Dynamic step);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IntIter_obj > __new(int min,int max,Dynamic step);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntIter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("IntIter"); }

		int min;
		int max;
		int step;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual int next( );
		Dynamic next_dyn();

};


#endif /* INCLUDED_IntIter */ 
