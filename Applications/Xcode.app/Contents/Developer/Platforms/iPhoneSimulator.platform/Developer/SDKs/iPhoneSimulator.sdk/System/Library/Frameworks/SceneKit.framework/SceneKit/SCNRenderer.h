//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNSceneRenderer.h"
#import "SCNTechniqueSupport.h"

@class EAGLContext, NSLock, NSObject<OS_dispatch_queue>, NSString, SCNNode, SCNScene, SCNTechnique, SKScene, UIColor, __SKSCNRenderer;

@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport>
{
    id _reserved;
    SCNScene *_scene;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *__renderingQueue;
    unsigned long long __antialiasingMode;
    struct {
        struct __C3DFramebuffer *frameBuffer;
        struct __C3DFramebuffer *multisamplingFrameBuffer;
        struct CGSize drawableSize;
    } _framebufferInfo;
    unsigned int _shouldDeleteFramebuffer:1;
    unsigned int _pointOfViewWasSet:1;
    unsigned int _isPrivateRenderer:1;
    unsigned int _isViewPrivateRenderer:1;
    double _currentSceneTime;
    double _currentSystemTime;
    double _deltaTime;
    double _forceSystemTime;
    double _lastSystemTime;
    double __nextFrameTime;
    _Bool _playing;
    _Bool _isAnimating;
    _Bool _loops;
    id _delegate;
    struct __C3DEngineAdaptor {
        struct __CFRuntimeBase _field1;
        void *_field2;
        struct __C3DEngineContext *_field3;
        void *_field4;
    } *_engine;
    EAGLContext *_glContext;
    unsigned int _jitteringEnabled:1;
    unsigned int _frozen:1;
    unsigned int _delegateSupportsWillRender:1;
    unsigned int _delegateSupportsDidRender:1;
    unsigned int _delegateSupportsDidApplyAnimations:1;
    unsigned int _delegateSupportsUpdate:1;
    unsigned int _delegateSupportsDidSimulatePhysics:1;
    UIColor *_backgroundColor;
    struct C3DColor4 _c3dBackgroundColor;
    SCNNode *_pointOfView;
    SCNRenderer *_preloadRenderer;
    id <SCNSceneRenderer> _privateRendererOwner;
    SCNTechnique *_technique;
    __SKSCNRenderer *_overlay;
    id _overlayScene;
    _Bool _disableOverlays;
    _Bool _showStatistics;
    double _statisticsTimeStamp;
    void *_offscreenReserved;
}

+ (id)SCNJSExportProtocol;
+ (id)rendererWithContext:(void *)arg1 options:(id)arg2;
- (id)_authoringEnvironment;
- (void)set_showsAuthoringEnvironment:(_Bool)arg1;
- (_Bool)_showsAuthoringEnvironment;
- (void)_jitterAtStep:(unsigned long long)arg1 updateMainFramebuffer:(_Bool)arg2 redisplay:(_Bool)arg3 jitterer:(id)arg4;
- (void)_presentFramebuffer;
@property(nonatomic) _Bool showsStatistics;
- (void)_displayLinkStatsTack;
- (void)_displayLinkStatsTick;
- (void)setFrozen:(_Bool)arg1;
- (_Bool)frozen;
- (_Bool)jitteringEnabled;
@property(nonatomic, getter=isJitteringEnabled) _Bool jitteringEnabled;
- (void)_detachTexture:(id)arg1;
- (void)_attachTexture:(id)arg1;
@property(nonatomic) _Bool loops;
@property(getter=isPlaying) _Bool playing;
- (void)_stop;
- (void)_pause;
- (void)_play;
- (_Bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (_Bool)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(struct CGSize)arg3;
- (id)_hitTest:(struct CGPoint)arg1 viewport:(struct CGSize)arg2 options:(id)arg3;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (struct UIImage *)_snapshotWithImageSize:(struct CGSize)arg1 backingSize:(struct CGSize)arg2;
- (void)render;
- (void)_renderAtTime:(double)arg1;
- (void)_draw;
- (void)_drawWithJitteringPresentationMode;
- (void)_updateWithSystemTime:(double)arg1;
-     // Error parsing type: v32@0:8^{__C3DScene=}16^{__C3DRendererContext={__CFRuntimeBase=Q[4C]I}iI(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})IIIfI[3(C3DMatrix4x4=[16f][4])]^{__C3DTexture}^{__C3DStack}^vBBBBBI^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DRendererContextStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[8I]Ii^{__C3DBlendStates}^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^vii}{?=[2I][5i][7{?=iII}][7I]^?^?^?^?^?^?^?^?^?}^{__C3DArray}II^{__CFArray}^{__C3DArray}I}24, name: _update:rendererContext:
@property(readonly, nonatomic) void *context;
- (void)setContext:(id)arg1;
- (void)set_deltaTime:(double)arg1;
- (void)set_systemTime:(double)arg1;
- (double)_systemTime;
@property(nonatomic) double sceneTime;
- (void)_setSceneTime:(double)arg1;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (_Bool)_needsRepetitiveRedraw;
- (void)renderAtTime:(double)arg1;
@property(readonly, nonatomic) double nextFrameTime;
- (double)_nextFrameTime;
- (void)set_nextFrameTime:(double)arg1;
- (void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
- (void)_updateEngineCallbacks;
- (id)programWithNode:(id)arg1 withMaterial:(id)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (_Bool)_preloadResource:(id)arg1 abortHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SKScene *overlaySKScene;
- (void)setDisableOverlays:(_Bool)arg1;
- (_Bool)disableOverlays;
- (struct C3DColor4 *)_backgroundColorComponents;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(retain, nonatomic) SCNScene *scene;
- (void)setScene:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updatePointOfView;
- (id)_defaultPOVForScene:(id)arg1;
- (_Bool)autoAdjustCamera;
- (void)setAutoAdjustCamera:(_Bool)arg1;
- (void)_willRenderScene:(id)arg1;
- (void)_didRenderScene:(id)arg1;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)_unprojectPoint:(struct SCNVector3)arg1 viewport:(struct CGSize)arg2;
- (struct SCNVector3)_projectPoint:(struct SCNVector3)arg1 viewport:(struct CGSize)arg2;
- (void)_projectPoints:(struct SCNVector3 *)arg1 count:(unsigned long long)arg2 viewport:(struct CGSize)arg3;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) _Bool autoenablesDefaultLighting;
- (void *)__CFObject;
-     // Error parsing type: ^{__C3DRendererContext={__CFRuntimeBase=Q[4C]I}iI(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})IIIfI[3(C3DMatrix4x4=[16f][4])]^{__C3DTexture}^{__C3DStack}^vBBBBBI^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DRendererContextStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[8I]Ii^{__C3DBlendStates}^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^vii}{?=[2I][5i][7{?=iII}][7I]^?^?^?^?^?^?^?^?^?}^{__C3DArray}II^{__CFArray}^{__C3DArray}I}16@0:8, name: _rendererContext
- (struct __C3DEngineContext *)_engineContext;
- (void)set_antialiasingMode:(unsigned long long)arg1;
- (unsigned long long)_antialiasingMode;
- (unsigned long long)_sampleCount;
- (void)_createFramebufferIfNeeded;
- (void)_resolveAndDiscard;
- (void)_unbindFramebuffer;
- (void)_bindFramebuffer;
- (void)_deleteFramebuffer;
- (void)_invalidateFramebuffer;
- (void)_setBackingSize:(struct CGSize)arg1;
- (double)_contentsScaleFactor;
- (void)_clearBuffers;
- (void)_installViewport;
- (_Bool)_installContext;
- (id)_renderingQueue;
- (void)unlock;
- (void)lock;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)_initWithOptions:(id)arg1 isPrivateRenderer:(_Bool)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(_Bool)arg4;
- (void)setupForDeprecatedOffscreenRenderer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

