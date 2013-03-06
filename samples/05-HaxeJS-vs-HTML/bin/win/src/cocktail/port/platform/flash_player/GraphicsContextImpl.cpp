#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_cocktail_core_config_Config
#include <cocktail/core/config/Config.h>
#endif
#ifndef INCLUDED_cocktail_core_css_ColorVO
#include <cocktail/core/css/ColorVO.h>
#endif
#ifndef INCLUDED_cocktail_core_geom_Matrix
#include <cocktail/core/geom/Matrix.h>
#endif
#ifndef INCLUDED_cocktail_core_geom_PointVO
#include <cocktail/core/geom/PointVO.h>
#endif
#ifndef INCLUDED_cocktail_core_geom_RectangleVO
#include <cocktail/core/geom/RectangleVO.h>
#endif
#ifndef INCLUDED_cocktail_core_graphics_AbstractGraphicsContextImpl
#include <cocktail/core/graphics/AbstractGraphicsContextImpl.h>
#endif
#ifndef INCLUDED_cocktail_core_graphics_GraphicsContext
#include <cocktail/core/graphics/GraphicsContext.h>
#endif
#ifndef INCLUDED_cocktail_core_utils_FastNode
#include <cocktail/core/utils/FastNode.h>
#endif
#ifndef INCLUDED_cocktail_core_utils_IPoolable
#include <cocktail/core/utils/IPoolable.h>
#endif
#ifndef INCLUDED_cocktail_port_platform_flash_player_GraphicsContextImpl
#include <cocktail/port/platform/flash_player/GraphicsContextImpl.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_BlendMode
#include <native/display/BlendMode.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_ColorTransform
#include <native/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace cocktail{
namespace port{
namespace platform{
namespace flash_player{

Void GraphicsContextImpl_obj::__construct()
{
HX_STACK_PUSH("GraphicsContextImpl::new","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",123);
{
	HX_STACK_LINE(124)
	super::__construct();
	HX_STACK_LINE(127)
	if (((::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle == null()))){
		HX_STACK_LINE(129)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle = ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(130)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint = ::native::geom::Point_obj::__new(null(),null());
		HX_STACK_LINE(131)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashAlphaPoint = ::native::geom::Point_obj::__new(null(),null());
		HX_STACK_LINE(132)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(133)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectRectangle = ::cocktail::core::geom::RectangleVO_obj::__new();
		HX_STACK_LINE(134)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectPoint = ::cocktail::core::geom::PointVO_obj::__new(0.0,0.0);
		HX_STACK_LINE(135)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashColorTransform = ::native::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(136)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle = ::cocktail::core::geom::RectangleVO_obj::__new();
	}
	HX_STACK_LINE(139)
	this->_nativeLayer = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(140)
	this->_nativeLayer->set_mouseEnabled(false);
	HX_STACK_LINE(142)
	this->_childrenNativeLayer = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(143)
	this->_childrenNativeLayer->set_mouseEnabled(false);
	HX_STACK_LINE(145)
	this->_bitmapContainer = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(146)
	this->_bitmapContainer->set_mouseEnabled(false);
	HX_STACK_LINE(148)
	this->_width = (int)0;
	HX_STACK_LINE(149)
	this->_height = (int)0;
	HX_STACK_LINE(152)
	this->_childrenNativeLayer->addChild(this->_bitmapContainer);
	HX_STACK_LINE(153)
	this->_childrenNativeLayer->addChild(this->_nativeLayer);
}
;
	return null();
}

GraphicsContextImpl_obj::~GraphicsContextImpl_obj() { }

Dynamic GraphicsContextImpl_obj::__CreateEmpty() { return  new GraphicsContextImpl_obj; }
hx::ObjectPtr< GraphicsContextImpl_obj > GraphicsContextImpl_obj::__new()
{  hx::ObjectPtr< GraphicsContextImpl_obj > result = new GraphicsContextImpl_obj();
	result->__construct();
	return result;}

Dynamic GraphicsContextImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsContextImpl_obj > result = new GraphicsContextImpl_obj();
	result->__construct();
	return result;}

::native::display::DisplayObjectContainer GraphicsContextImpl_obj::get_nativeLayer( ){
	HX_STACK_PUSH("GraphicsContextImpl::get_nativeLayer","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",459);
	HX_STACK_THIS(this);
	HX_STACK_LINE(459)
	return this->_nativeLayer;
}


::native::display::BitmapData GraphicsContextImpl_obj::get_nativeBitmapData( ){
	HX_STACK_PUSH("GraphicsContextImpl::get_nativeBitmapData","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_LINE(454)
	return this->_nativeBitmap->bitmapData;
}


Void GraphicsContextImpl_obj::copyRect( ::cocktail::core::geom::RectangleVO rect,Float x,Float y){
{
		HX_STACK_PUSH("GraphicsContextImpl::copyRect","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",407);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(408)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = rect->x;
		HX_STACK_LINE(409)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = rect->y;
		HX_STACK_LINE(410)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = rect->width;
		HX_STACK_LINE(411)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = rect->height;
		HX_STACK_LINE(413)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x = x;
		HX_STACK_LINE(414)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y = y;
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x);
			HX_STACK_LINE(416)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y);
			HX_STACK_LINE(416)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width);
			HX_STACK_LINE(416)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height);
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x);
			HX_STACK_LINE(417)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y);
		}
		HX_STACK_LINE(419)
		this->_nativeBitmap->bitmapData->copyPixels(this->_nativeBitmap->bitmapData,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint,null(),null(),false);
	}
return null();
}


Void GraphicsContextImpl_obj::fillRect( ::cocktail::core::geom::RectangleVO rect,::cocktail::core::css::ColorVO color,::cocktail::core::geom::RectangleVO clipRect){
{
		HX_STACK_PUSH("GraphicsContextImpl::fillRect","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(color,"color");
		HX_STACK_ARG(clipRect,"clipRect");
		HX_STACK_LINE(357)
		int argbColor = color->color;		HX_STACK_VAR(argbColor,"argbColor");
		HX_STACK_LINE(358)
		int alpha = ::Math_obj::round(((int)255 * color->alpha));		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(359)
		hx::AddEq(argbColor,(int(alpha) << int((int)24)));
		HX_STACK_LINE(363)
		if (((bool((color->alpha != 1.0)) || bool((this->_useTransparency == true))))){
			HX_STACK_LINE(365)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectRectangle->width = rect->width;
			HX_STACK_LINE(366)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectRectangle->height = rect->height;
			HX_STACK_LINE(367)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectPoint->x = rect->x;
			HX_STACK_LINE(368)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectPoint->y = rect->y;
			HX_STACK_LINE(370)
			{
				HX_STACK_LINE(370)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x);
				HX_STACK_LINE(370)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y);
				HX_STACK_LINE(370)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width);
				HX_STACK_LINE(370)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height);
			}
			HX_STACK_LINE(372)
			::native::display::BitmapData fillRectBitmapData = ::native::display::BitmapData_obj::__new(::Math_obj::round(rect->width),::Math_obj::round(rect->height),true,argbColor,null());		HX_STACK_VAR(fillRectBitmapData,"fillRectBitmapData");
			HX_STACK_LINE(373)
			this->copyPixels(fillRectBitmapData,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectRectangle,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_fillRectPoint,clipRect);
			HX_STACK_LINE(374)
			fillRectBitmapData->dispose();
		}
		else{
			HX_STACK_LINE(379)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->x = rect->x;
			HX_STACK_LINE(380)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->y = rect->y;
			HX_STACK_LINE(381)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->width = rect->width;
			HX_STACK_LINE(382)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->height = rect->height;
			HX_STACK_LINE(384)
			if (((this->_useTransformations == true))){
				HX_STACK_LINE(386)
				hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->x,this->_matrix->e);
				HX_STACK_LINE(387)
				hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->y,this->_matrix->f);
			}
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				::cocktail::core::geom::RectangleVO bounds1 = ::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle;		HX_STACK_VAR(bounds1,"bounds1");
				::cocktail::core::geom::RectangleVO resultBounds = ::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle;		HX_STACK_VAR(resultBounds,"resultBounds");
				HX_STACK_LINE(390)
				if (((bool((bool((bool(((bounds1->x + bounds1->width) < clipRect->x)) || bool(((clipRect->x + clipRect->width) < bounds1->x)))) || bool(((bounds1->y + bounds1->height) < clipRect->y)))) || bool(((clipRect->y + clipRect->height) < bounds1->y))))){
					HX_STACK_LINE(390)
					resultBounds->x = (int)0;
					HX_STACK_LINE(390)
					resultBounds->y = (int)0;
					HX_STACK_LINE(390)
					resultBounds->height = (int)0;
					HX_STACK_LINE(390)
					resultBounds->width = (int)0;
				}
				else{
					HX_STACK_LINE(390)
					Float left = (int)0;		HX_STACK_VAR(left,"left");
					HX_STACK_LINE(390)
					Float right = (int)0;		HX_STACK_VAR(right,"right");
					HX_STACK_LINE(390)
					Float top = (int)0;		HX_STACK_VAR(top,"top");
					HX_STACK_LINE(390)
					Float bottom = (int)0;		HX_STACK_VAR(bottom,"bottom");
					HX_STACK_LINE(390)
					if (((bounds1->x < clipRect->x))){
						HX_STACK_LINE(390)
						left = clipRect->x;
					}
					else{
						HX_STACK_LINE(390)
						left = bounds1->x;
					}
					HX_STACK_LINE(390)
					if ((((bounds1->x + bounds1->width) < (clipRect->x + clipRect->width)))){
						HX_STACK_LINE(390)
						right = (bounds1->x + bounds1->width);
					}
					else{
						HX_STACK_LINE(390)
						right = (clipRect->x + clipRect->width);
					}
					HX_STACK_LINE(390)
					if (((bounds1->y < clipRect->y))){
						HX_STACK_LINE(390)
						top = clipRect->y;
					}
					else{
						HX_STACK_LINE(390)
						top = bounds1->y;
					}
					HX_STACK_LINE(390)
					if ((((bounds1->y + bounds1->height) < (clipRect->y + clipRect->height)))){
						HX_STACK_LINE(390)
						bottom = (bounds1->y + bounds1->height);
					}
					else{
						HX_STACK_LINE(390)
						bottom = (clipRect->y + clipRect->height);
					}
					HX_STACK_LINE(390)
					resultBounds->x = left;
					HX_STACK_LINE(390)
					resultBounds->y = top;
					HX_STACK_LINE(390)
					resultBounds->width = (right - left);
					HX_STACK_LINE(390)
					resultBounds->height = (bottom - top);
				}
			}
			HX_STACK_LINE(392)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->x;
			HX_STACK_LINE(393)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->y;
			HX_STACK_LINE(394)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = ::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->width;
			HX_STACK_LINE(395)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = ::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_clippedRectRectangle->height;
			HX_STACK_LINE(397)
			{
				HX_STACK_LINE(397)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x);
				HX_STACK_LINE(397)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y);
				HX_STACK_LINE(397)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width);
				HX_STACK_LINE(397)
				::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height);
			}
			HX_STACK_LINE(399)
			this->_nativeBitmap->bitmapData->fillRect(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle,argbColor);
		}
	}
return null();
}


Void GraphicsContextImpl_obj::copyPixels( ::native::display::BitmapData bitmapData,::cocktail::core::geom::RectangleVO sourceRect,::cocktail::core::geom::PointVO destPoint,::cocktail::core::geom::RectangleVO clipRect){
{
		HX_STACK_PUSH("GraphicsContextImpl::copyPixels","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",315);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmapData,"bitmapData");
		HX_STACK_ARG(sourceRect,"sourceRect");
		HX_STACK_ARG(destPoint,"destPoint");
		HX_STACK_ARG(clipRect,"clipRect");
		HX_STACK_LINE(316)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ((sourceRect->x + clipRect->x) - destPoint->x);
		HX_STACK_LINE(317)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ((sourceRect->y + clipRect->y) - destPoint->y);
		HX_STACK_LINE(318)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = clipRect->width;
		HX_STACK_LINE(319)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = clipRect->height;
		HX_STACK_LINE(322)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x = clipRect->x;
		HX_STACK_LINE(323)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y = clipRect->y;
		HX_STACK_LINE(325)
		if (((this->_useTransformations == true))){
			HX_STACK_LINE(327)
			hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x,this->_matrix->e);
			HX_STACK_LINE(328)
			hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y,this->_matrix->f);
			HX_STACK_LINE(329)
			hx::SubEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width,this->_matrix->e);
			HX_STACK_LINE(330)
			hx::SubEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height,this->_matrix->f);
		}
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x);
			HX_STACK_LINE(333)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y);
			HX_STACK_LINE(333)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width);
			HX_STACK_LINE(333)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height);
		}
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x);
			HX_STACK_LINE(334)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y);
		}
		HX_STACK_LINE(337)
		if (((this->_useTransparency == true))){
			HX_STACK_LINE(339)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->identity();
			HX_STACK_LINE(340)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->tx = ::Math_obj::floor(destPoint->x);
			HX_STACK_LINE(341)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->ty = ::Math_obj::floor(destPoint->y);
			HX_STACK_LINE(343)
			this->_nativeBitmap->bitmapData->draw(bitmapData,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashColorTransform,null(),null(),false);
		}
		else{
			HX_STACK_LINE(346)
			this->_nativeBitmap->bitmapData->copyPixels(bitmapData,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint,null(),null(),true);
		}
	}
return null();
}


Void GraphicsContextImpl_obj::drawImage( ::native::display::BitmapData bitmapData,::cocktail::core::geom::Matrix matrix,::cocktail::core::geom::RectangleVO sourceRect,::cocktail::core::geom::RectangleVO clipRect){
{
		HX_STACK_PUSH("GraphicsContextImpl::drawImage","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",275);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmapData,"bitmapData");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_ARG(sourceRect,"sourceRect");
		HX_STACK_ARG(clipRect,"clipRect");
		HX_STACK_LINE(277)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ((sourceRect->x + clipRect->x) - matrix->e);
		HX_STACK_LINE(278)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ((sourceRect->y + clipRect->y) - matrix->f);
		HX_STACK_LINE(279)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = clipRect->width;
		HX_STACK_LINE(280)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = clipRect->height;
		HX_STACK_LINE(282)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->a = matrix->a;
		HX_STACK_LINE(283)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->b = matrix->b;
		HX_STACK_LINE(284)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->c = matrix->c;
		HX_STACK_LINE(285)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->d = matrix->d;
		HX_STACK_LINE(286)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->tx = matrix->e;
		HX_STACK_LINE(287)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->ty = matrix->f;
		HX_STACK_LINE(289)
		if (((this->_useTransformations == true))){
			HX_STACK_LINE(291)
			hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->tx,this->_matrix->e);
			HX_STACK_LINE(292)
			hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix->ty,this->_matrix->f);
			HX_STACK_LINE(293)
			hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width,this->_matrix->e);
			HX_STACK_LINE(294)
			hx::AddEq(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height,this->_matrix->f);
		}
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x);
			HX_STACK_LINE(297)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y);
			HX_STACK_LINE(297)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width);
			HX_STACK_LINE(297)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height);
		}
		HX_STACK_LINE(300)
		if (((this->_useTransparency == true))){
			HX_STACK_LINE(301)
			this->_nativeBitmap->bitmapData->draw(bitmapData,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashColorTransform,null(),::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle,::cocktail::core::config::Config_obj::getInstance()->enableBitmapSmoothing);
		}
		else{
			HX_STACK_LINE(305)
			this->_nativeBitmap->bitmapData->draw(bitmapData,::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashMatrix,null(),null(),::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle,::cocktail::core::config::Config_obj::getInstance()->enableBitmapSmoothing);
		}
	}
return null();
}


Void GraphicsContextImpl_obj::detachFromRoot( ){
{
		HX_STACK_PUSH("GraphicsContextImpl::detachFromRoot","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",260);
		HX_STACK_THIS(this);
		HX_STACK_LINE(260)
		if (((this->_childrenNativeLayer->get_parent() != null()))){
			HX_STACK_LINE(262)
			this->_childrenNativeLayer->get_parent()->removeChild(this->_childrenNativeLayer);
		}
	}
return null();
}


Void GraphicsContextImpl_obj::attachToRoot( ::native::display::DisplayObjectContainer rootLayer){
{
		HX_STACK_PUSH("GraphicsContextImpl::attachToRoot","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",255);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rootLayer,"rootLayer");
		HX_STACK_LINE(255)
		rootLayer->addChild(this->_childrenNativeLayer);
	}
return null();
}


Void GraphicsContextImpl_obj::detach( ::cocktail::core::graphics::GraphicsContext graphicsContext){
{
		HX_STACK_PUSH("GraphicsContextImpl::detach","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphicsContext,"graphicsContext");
		HX_STACK_LINE(247)
		if (((this->_childrenNativeLayer->get_parent() != null()))){
			HX_STACK_LINE(249)
			graphicsContext->parentNode->__Field(HX_CSTRING("get_nativeLayer"),true)()->__Field(HX_CSTRING("removeChild"),true)(this->_childrenNativeLayer);
		}
	}
return null();
}


Void GraphicsContextImpl_obj::attach( ::cocktail::core::graphics::GraphicsContext graphicsContext,int index){
{
		HX_STACK_PUSH("GraphicsContextImpl::attach","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphicsContext,"graphicsContext");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(242)
		graphicsContext->parentNode->__Field(HX_CSTRING("get_nativeLayer"),true)()->__Field(HX_CSTRING("addChildAt"),true)(this->_childrenNativeLayer,index);
	}
return null();
}


Void GraphicsContextImpl_obj::transform( ::cocktail::core::geom::Matrix matrix){
{
		HX_STACK_PUSH("GraphicsContextImpl::transform","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(matrix,"matrix");
	}
return null();
}


Void GraphicsContextImpl_obj::dispose( ){
{
		HX_STACK_PUSH("GraphicsContextImpl::dispose","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",217);
		HX_STACK_THIS(this);
		HX_STACK_LINE(218)
		if (((this->_nativeBitmap != null()))){
			HX_STACK_LINE(220)
			this->_nativeBitmap->bitmapData->dispose();
			HX_STACK_LINE(221)
			this->_bitmapContainer->removeChild(this->_nativeBitmap);
			HX_STACK_LINE(222)
			this->_nativeBitmap = null();
		}
		HX_STACK_LINE(225)
		this->_childrenNativeLayer->removeChild(this->_bitmapContainer);
		HX_STACK_LINE(226)
		this->_childrenNativeLayer->removeChild(this->_nativeLayer);
		HX_STACK_LINE(227)
		this->_nativeLayer = null();
		HX_STACK_LINE(228)
		this->_childrenNativeLayer = null();
		HX_STACK_LINE(229)
		this->_bitmapContainer = null();
	}
return null();
}


Void GraphicsContextImpl_obj::beginTransparency( Float alpha){
{
		HX_STACK_PUSH("GraphicsContextImpl::beginTransparency","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(209)
		this->super::beginTransparency(alpha);
		HX_STACK_LINE(210)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashColorTransform->alphaMultiplier = alpha;
	}
return null();
}


Void GraphicsContextImpl_obj::clear( Float x,Float y,Float width,Float height){
{
		HX_STACK_PUSH("GraphicsContextImpl::clear","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(189)
		if (((this->_nativeBitmap != null()))){
			HX_STACK_LINE(192)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = x;
			HX_STACK_LINE(193)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = y;
			HX_STACK_LINE(194)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = width;
			HX_STACK_LINE(195)
			::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = height;
			HX_STACK_LINE(196)
			this->_nativeBitmap->bitmapData->fillRect(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle,(int)0);
		}
	}
return null();
}


Void GraphicsContextImpl_obj::initBitmapData( int width,int height){
{
		HX_STACK_PUSH("GraphicsContextImpl::initBitmapData","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(163)
		if (((this->_nativeBitmap == null()))){
			HX_STACK_LINE(165)
			this->_nativeBitmap = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new(width,height,true,(int)0,null()),::native::display::PixelSnapping_obj::AUTO_dyn(),false);
			HX_STACK_LINE(166)
			this->_bitmapContainer->addChild(this->_nativeBitmap);
		}
		else{
			HX_STACK_LINE(171)
			if (((bool((this->_width == width)) && bool((this->_height == height))))){
				HX_STACK_LINE(172)
				return null();
			}
			HX_STACK_LINE(176)
			this->_nativeBitmap->bitmapData->dispose();
			HX_STACK_LINE(177)
			this->_nativeBitmap->set_bitmapData(::native::display::BitmapData_obj::__new(width,height,true,(int)0,null()));
		}
		HX_STACK_LINE(180)
		this->_width = width;
		HX_STACK_LINE(181)
		this->_height = height;
	}
return null();
}


::native::geom::Rectangle GraphicsContextImpl_obj::_flashRectangle;

::native::geom::Point GraphicsContextImpl_obj::_flashPoint;

::native::geom::Point GraphicsContextImpl_obj::_flashAlphaPoint;

::native::geom::Matrix GraphicsContextImpl_obj::_flashMatrix;

::native::geom::ColorTransform GraphicsContextImpl_obj::_flashColorTransform;

::cocktail::core::geom::RectangleVO GraphicsContextImpl_obj::_fillRectRectangle;

::cocktail::core::geom::RectangleVO GraphicsContextImpl_obj::_clippedRectRectangle;

::cocktail::core::geom::PointVO GraphicsContextImpl_obj::_fillRectPoint;

Void GraphicsContextImpl_obj::roundFlashRect( ){
{
		HX_STACK_PUSH("GraphicsContextImpl::roundFlashRect","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",433);
		HX_STACK_LINE(434)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->x);
		HX_STACK_LINE(435)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->y);
		HX_STACK_LINE(436)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->width);
		HX_STACK_LINE(437)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashRectangle->height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GraphicsContextImpl_obj,roundFlashRect,(void))

Void GraphicsContextImpl_obj::roundFlashPoint( ){
{
		HX_STACK_PUSH("GraphicsContextImpl::roundFlashPoint","cocktail/port/platform/flash_player/GraphicsContextImpl.hx",444);
		HX_STACK_LINE(445)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->x);
		HX_STACK_LINE(446)
		::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y = ::Math_obj::round(::cocktail::port::platform::flash_player::GraphicsContextImpl_obj::_flashPoint->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GraphicsContextImpl_obj,roundFlashPoint,(void))


GraphicsContextImpl_obj::GraphicsContextImpl_obj()
{
}

void GraphicsContextImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsContextImpl);
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_childrenNativeLayer,"_childrenNativeLayer");
	HX_MARK_MEMBER_NAME(_bitmapContainer,"_bitmapContainer");
	HX_MARK_MEMBER_NAME(_nativeLayer,"_nativeLayer");
	HX_MARK_MEMBER_NAME(_nativeBitmap,"_nativeBitmap");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GraphicsContextImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_childrenNativeLayer,"_childrenNativeLayer");
	HX_VISIT_MEMBER_NAME(_bitmapContainer,"_bitmapContainer");
	HX_VISIT_MEMBER_NAME(_nativeLayer,"_nativeLayer");
	HX_VISIT_MEMBER_NAME(_nativeBitmap,"_nativeBitmap");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GraphicsContextImpl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"detach") ) { return detach_dyn(); }
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyRect") ) { return copyRect_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_flashMatrix") ) { return _flashMatrix; }
		if (HX_FIELD_EQ(inName,"attachToRoot") ) { return attachToRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"_nativeLayer") ) { return _nativeLayer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_nativeBitmap") ) { return _nativeBitmap; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fillRectPoint") ) { return _fillRectPoint; }
		if (HX_FIELD_EQ(inName,"roundFlashRect") ) { return roundFlashRect_dyn(); }
		if (HX_FIELD_EQ(inName,"detachFromRoot") ) { return detachFromRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"initBitmapData") ) { return initBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashRectangle") ) { return _flashRectangle; }
		if (HX_FIELD_EQ(inName,"roundFlashPoint") ) { return roundFlashPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_nativeLayer") ) { return get_nativeLayer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_flashAlphaPoint") ) { return _flashAlphaPoint; }
		if (HX_FIELD_EQ(inName,"_bitmapContainer") ) { return _bitmapContainer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginTransparency") ) { return beginTransparency_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fillRectRectangle") ) { return _fillRectRectangle; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_flashColorTransform") ) { return _flashColorTransform; }
		if (HX_FIELD_EQ(inName,"get_nativeBitmapData") ) { return get_nativeBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"_childrenNativeLayer") ) { return _childrenNativeLayer; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_clippedRectRectangle") ) { return _clippedRectRectangle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsContextImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_flashMatrix") ) { _flashMatrix=inValue.Cast< ::native::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nativeLayer") ) { _nativeLayer=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_nativeBitmap") ) { _nativeBitmap=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fillRectPoint") ) { _fillRectPoint=inValue.Cast< ::cocktail::core::geom::PointVO >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashRectangle") ) { _flashRectangle=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_flashAlphaPoint") ) { _flashAlphaPoint=inValue.Cast< ::native::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmapContainer") ) { _bitmapContainer=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_fillRectRectangle") ) { _fillRectRectangle=inValue.Cast< ::cocktail::core::geom::RectangleVO >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_flashColorTransform") ) { _flashColorTransform=inValue.Cast< ::native::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_childrenNativeLayer") ) { _childrenNativeLayer=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_clippedRectRectangle") ) { _clippedRectRectangle=inValue.Cast< ::cocktail::core::geom::RectangleVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsContextImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_childrenNativeLayer"));
	outFields->push(HX_CSTRING("_bitmapContainer"));
	outFields->push(HX_CSTRING("_nativeLayer"));
	outFields->push(HX_CSTRING("_nativeBitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_flashRectangle"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashAlphaPoint"),
	HX_CSTRING("_flashMatrix"),
	HX_CSTRING("_flashColorTransform"),
	HX_CSTRING("_fillRectRectangle"),
	HX_CSTRING("_clippedRectRectangle"),
	HX_CSTRING("_fillRectPoint"),
	HX_CSTRING("roundFlashRect"),
	HX_CSTRING("roundFlashPoint"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_nativeLayer"),
	HX_CSTRING("get_nativeBitmapData"),
	HX_CSTRING("copyRect"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("drawImage"),
	HX_CSTRING("detachFromRoot"),
	HX_CSTRING("attachToRoot"),
	HX_CSTRING("detach"),
	HX_CSTRING("attach"),
	HX_CSTRING("transform"),
	HX_CSTRING("dispose"),
	HX_CSTRING("beginTransparency"),
	HX_CSTRING("clear"),
	HX_CSTRING("initBitmapData"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_childrenNativeLayer"),
	HX_CSTRING("_bitmapContainer"),
	HX_CSTRING("_nativeLayer"),
	HX_CSTRING("_nativeBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_flashRectangle,"_flashRectangle");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_flashAlphaPoint,"_flashAlphaPoint");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_flashMatrix,"_flashMatrix");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_flashColorTransform,"_flashColorTransform");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_fillRectRectangle,"_fillRectRectangle");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_clippedRectRectangle,"_clippedRectRectangle");
	HX_MARK_MEMBER_NAME(GraphicsContextImpl_obj::_fillRectPoint,"_fillRectPoint");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_flashRectangle,"_flashRectangle");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_flashAlphaPoint,"_flashAlphaPoint");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_flashMatrix,"_flashMatrix");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_flashColorTransform,"_flashColorTransform");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_fillRectRectangle,"_fillRectRectangle");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_clippedRectRectangle,"_clippedRectRectangle");
	HX_VISIT_MEMBER_NAME(GraphicsContextImpl_obj::_fillRectPoint,"_fillRectPoint");
};

Class GraphicsContextImpl_obj::__mClass;

void GraphicsContextImpl_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("cocktail.port.platform.flash_player.GraphicsContextImpl"), hx::TCanCast< GraphicsContextImpl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GraphicsContextImpl_obj::__boot()
{
}

} // end namespace cocktail
} // end namespace port
} // end namespace platform
} // end namespace flash_player
