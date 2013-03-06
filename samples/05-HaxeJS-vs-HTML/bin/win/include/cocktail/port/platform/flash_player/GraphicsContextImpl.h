#ifndef INCLUDED_cocktail_port_platform_flash_player_GraphicsContextImpl
#define INCLUDED_cocktail_port_platform_flash_player_GraphicsContextImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cocktail/core/graphics/AbstractGraphicsContextImpl.h>
HX_DECLARE_CLASS3(cocktail,core,css,ColorVO)
HX_DECLARE_CLASS3(cocktail,core,geom,Matrix)
HX_DECLARE_CLASS3(cocktail,core,geom,PointVO)
HX_DECLARE_CLASS3(cocktail,core,geom,RectangleVO)
HX_DECLARE_CLASS3(cocktail,core,graphics,AbstractGraphicsContextImpl)
HX_DECLARE_CLASS3(cocktail,core,graphics,GraphicsContext)
HX_DECLARE_CLASS3(cocktail,core,utils,FastNode)
HX_DECLARE_CLASS3(cocktail,core,utils,IPoolable)
HX_DECLARE_CLASS4(cocktail,port,platform,flash_player,GraphicsContextImpl)
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,ColorTransform)
HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace cocktail{
namespace port{
namespace platform{
namespace flash_player{


class GraphicsContextImpl_obj : public ::cocktail::core::graphics::AbstractGraphicsContextImpl_obj{
	public:
		typedef ::cocktail::core::graphics::AbstractGraphicsContextImpl_obj super;
		typedef GraphicsContextImpl_obj OBJ_;
		GraphicsContextImpl_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GraphicsContextImpl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GraphicsContextImpl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GraphicsContextImpl"); }

		virtual ::native::display::DisplayObjectContainer get_nativeLayer( );

		virtual ::native::display::BitmapData get_nativeBitmapData( );

		virtual Void copyRect( ::cocktail::core::geom::RectangleVO rect,Float x,Float y);

		virtual Void fillRect( ::cocktail::core::geom::RectangleVO rect,::cocktail::core::css::ColorVO color,::cocktail::core::geom::RectangleVO clipRect);

		virtual Void copyPixels( ::native::display::BitmapData bitmapData,::cocktail::core::geom::RectangleVO sourceRect,::cocktail::core::geom::PointVO destPoint,::cocktail::core::geom::RectangleVO clipRect);

		virtual Void drawImage( ::native::display::BitmapData bitmapData,::cocktail::core::geom::Matrix matrix,::cocktail::core::geom::RectangleVO sourceRect,::cocktail::core::geom::RectangleVO clipRect);

		virtual Void detachFromRoot( );

		virtual Void attachToRoot( ::native::display::DisplayObjectContainer rootLayer);

		virtual Void detach( ::cocktail::core::graphics::GraphicsContext graphicsContext);

		virtual Void attach( ::cocktail::core::graphics::GraphicsContext graphicsContext,int index);

		virtual Void transform( ::cocktail::core::geom::Matrix matrix);

		virtual Void dispose( );

		virtual Void beginTransparency( Float alpha);

		virtual Void clear( Float x,Float y,Float width,Float height);

		virtual Void initBitmapData( int width,int height);

		int _height; /* REM */ 
		int _width; /* REM */ 
		::native::display::Sprite _childrenNativeLayer; /* REM */ 
		::native::display::Sprite _bitmapContainer; /* REM */ 
		::native::display::Sprite _nativeLayer; /* REM */ 
		::native::display::Bitmap _nativeBitmap; /* REM */ 
		static ::native::geom::Rectangle _flashRectangle; /* REM */ 
		static ::native::geom::Point _flashPoint; /* REM */ 
		static ::native::geom::Point _flashAlphaPoint; /* REM */ 
		static ::native::geom::Matrix _flashMatrix; /* REM */ 
		static ::native::geom::ColorTransform _flashColorTransform; /* REM */ 
		static ::cocktail::core::geom::RectangleVO _fillRectRectangle; /* REM */ 
		static ::cocktail::core::geom::RectangleVO _clippedRectRectangle; /* REM */ 
		static ::cocktail::core::geom::PointVO _fillRectPoint; /* REM */ 
		static Void roundFlashRect( );
		static Dynamic roundFlashRect_dyn();

		static Void roundFlashPoint( );
		static Dynamic roundFlashPoint_dyn();

};

} // end namespace cocktail
} // end namespace port
} // end namespace platform
} // end namespace flash_player

#endif /* INCLUDED_cocktail_port_platform_flash_player_GraphicsContextImpl */ 
