#ifndef INCLUDED_cocktail_core_event_CustomEvent
#define INCLUDED_cocktail_core_event_CustomEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cocktail/core/event/Event.h>
HX_DECLARE_CLASS3(cocktail,core,event,CustomEvent)
HX_DECLARE_CLASS3(cocktail,core,event,Event)
namespace cocktail{
namespace core{
namespace event{


class CustomEvent_obj : public ::cocktail::core::event::Event_obj{
	public:
		typedef ::cocktail::core::event::Event_obj super;
		typedef CustomEvent_obj OBJ_;
		CustomEvent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CustomEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CustomEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CustomEvent"); }

		virtual Void initCustomEvent( ::String eventTypeArg,bool canBubbleArg,bool cancelableArg,Dynamic detailArg);
		Dynamic initCustomEvent_dyn();

		Dynamic detail; /* REM */ 
};

} // end namespace cocktail
} // end namespace core
} // end namespace event

#endif /* INCLUDED_cocktail_core_event_CustomEvent */ 