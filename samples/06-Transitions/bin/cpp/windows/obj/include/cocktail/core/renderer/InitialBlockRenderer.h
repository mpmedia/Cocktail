#ifndef INCLUDED_cocktail_core_renderer_InitialBlockRenderer
#define INCLUDED_cocktail_core_renderer_InitialBlockRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cocktail/core/renderer/BlockBoxRenderer.h>
HX_DECLARE_CLASS3(cocktail,core,dom,Element)
HX_DECLARE_CLASS3(cocktail,core,dom,Node)
HX_DECLARE_CLASS3(cocktail,core,event,EventCallback)
HX_DECLARE_CLASS3(cocktail,core,event,EventTarget)
HX_DECLARE_CLASS3(cocktail,core,html,HTMLElement)
HX_DECLARE_CLASS3(cocktail,core,layout,ContainingBlockVO)
HX_DECLARE_CLASS3(cocktail,core,layout,LayoutStateValue)
HX_DECLARE_CLASS3(cocktail,core,renderer,BlockBoxRenderer)
HX_DECLARE_CLASS3(cocktail,core,renderer,BoxRenderer)
HX_DECLARE_CLASS3(cocktail,core,renderer,ElementRenderer)
HX_DECLARE_CLASS3(cocktail,core,renderer,FlowBoxRenderer)
HX_DECLARE_CLASS3(cocktail,core,renderer,InitialBlockRenderer)
HX_DECLARE_CLASS3(cocktail,core,renderer,InvalidatingElementRenderer)
HX_DECLARE_CLASS3(cocktail,core,utils,FastNode)
namespace cocktail{
namespace core{
namespace renderer{


class InitialBlockRenderer_obj : public ::cocktail::core::renderer::BlockBoxRenderer_obj{
	public:
		typedef ::cocktail::core::renderer::BlockBoxRenderer_obj super;
		typedef InitialBlockRenderer_obj OBJ_;
		InitialBlockRenderer_obj();
		Void __construct(::cocktail::core::html::HTMLElement node);

	public:
		static hx::ObjectPtr< InitialBlockRenderer_obj > __new(::cocktail::core::html::HTMLElement node);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InitialBlockRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InitialBlockRenderer"); }

		virtual ::cocktail::core::renderer::FlowBoxRenderer getContainingBlock( );

		virtual ::cocktail::core::layout::ContainingBlockVO getContainerBlockData( );

		virtual bool createOwnLayer( );

		virtual bool establishesNewBlockFormattingContext( );

		virtual bool isPositioned( );

		virtual Void applyShrinkToFitIfNeeded( ::cocktail::core::layout::LayoutStateValue layoutState);

		virtual Void layoutSelfIfNeeded( bool forceLayout);

		virtual Void invalidateContainingBlock( int styleIndex);

		virtual Void unregisterWithContainingBlock( );

		virtual Void registerWithContaininingBlock( );

		virtual Void detachLayer( );

		virtual Void attachLayer( );

};

} // end namespace cocktail
} // end namespace core
} // end namespace renderer

#endif /* INCLUDED_cocktail_core_renderer_InitialBlockRenderer */ 
