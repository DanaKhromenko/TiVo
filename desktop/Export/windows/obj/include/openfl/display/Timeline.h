// Generated by Haxe 4.3.2
#ifndef INCLUDED_openfl_display_Timeline
#define INCLUDED_openfl_display_Timeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,FrameLabel)
HX_DECLARE_CLASS2(openfl,display,FrameScript)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Scene)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Timeline)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Timeline_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Timeline_obj OBJ_;
		Timeline_obj();

	public:
		enum { _hx_ClassId = 0x38ecf92f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Timeline")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Timeline"); }
		static ::hx::ObjectPtr< Timeline_obj > __new();
		static ::hx::ObjectPtr< Timeline_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Timeline_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Timeline",a1,2a,ed,d6); }

		 ::Dynamic frameRate;
		::Array< ::Dynamic> scenes;
		::Array< ::Dynamic> scripts;
		int _hx___currentFrame;
		::String _hx___currentFrameLabel;
		::String _hx___currentLabel;
		::Array< ::Dynamic> _hx___currentLabels;
		 ::openfl::display::Scene _hx___currentScene;
		 ::haxe::ds::IntMap _hx___frameScripts;
		int _hx___framesLoaded;
		int _hx___frameTime;
		bool _hx___isPlaying;
		int _hx___lastFrameScriptEval;
		int _hx___lastFrameUpdate;
		 ::openfl::display::MovieClip _hx___scope;
		int _hx___timeElapsed;
		int _hx___totalFrames;
		void attachMovieClip( ::openfl::display::MovieClip movieClip);
		::Dynamic attachMovieClip_dyn();

		void enterFrame(int frame);
		::Dynamic enterFrame_dyn();

		void initializeSprite( ::openfl::display::Sprite sprite);
		::Dynamic initializeSprite_dyn();

		void _hx___addFrameScript(int index, ::Dynamic method);
		::Dynamic _hx___addFrameScript_dyn();

		void _hx___attachMovieClip( ::openfl::display::MovieClip movieClip);
		::Dynamic _hx___attachMovieClip_dyn();

		void _hx___enterFrame(int deltaTime);
		::Dynamic _hx___enterFrame_dyn();

		bool _hx___evaluateFrameScripts(int advanceToFrame);
		::Dynamic _hx___evaluateFrameScripts_dyn();

		int _hx___getNextFrame(int deltaTime);
		::Dynamic _hx___getNextFrame_dyn();

		void _hx___goto(int frame);
		::Dynamic _hx___goto_dyn();

		void _hx___gotoAndPlay( ::Dynamic frame,::String scene);
		::Dynamic _hx___gotoAndPlay_dyn();

		void _hx___gotoAndStop( ::Dynamic frame,::String scene);
		::Dynamic _hx___gotoAndStop_dyn();

		void _hx___nextFrame();
		::Dynamic _hx___nextFrame_dyn();

		void _hx___nextScene();
		::Dynamic _hx___nextScene_dyn();

		void _hx___play();
		::Dynamic _hx___play_dyn();

		void _hx___prevFrame();
		::Dynamic _hx___prevFrame_dyn();

		void _hx___prevScene();
		::Dynamic _hx___prevScene_dyn();

		void _hx___stop();
		::Dynamic _hx___stop_dyn();

		int _hx___resolveFrameReference( ::Dynamic frame);
		::Dynamic _hx___resolveFrameReference_dyn();

		void _hx___updateFrameLabel();
		::Dynamic _hx___updateFrameLabel_dyn();

		void _hx___updateSymbol(int targetFrame);
		::Dynamic _hx___updateSymbol_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Timeline */ 
