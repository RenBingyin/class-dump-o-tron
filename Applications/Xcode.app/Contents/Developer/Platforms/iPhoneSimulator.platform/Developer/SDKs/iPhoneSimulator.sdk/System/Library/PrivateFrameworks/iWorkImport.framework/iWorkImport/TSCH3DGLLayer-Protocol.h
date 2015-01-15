//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class TSCH3DGLContext, TSCH3DGLFramebuffer, TSCH3DLayerCacheLogic, TSCH3DSession;

@protocol TSCH3DGLLayer
- (Class)layerDelegateClass;
- (void)setContentsScale:(double)arg1;
- (double)contentsScale;
- (TSCH3DLayerCacheLogic *)cacheLogic;
- (void)presentLayerWithPresenterInfo:(const struct PresenterInfo *)arg1;
- (void)willDestroyFramebuffer:(TSCH3DGLFramebuffer *)arg1 session:(TSCH3DSession *)arg2;
- (TSCH3DGLFramebuffer *)framebufferFromContext:(TSCH3DGLContext *)arg1 attributes:(const struct FramebufferAttributes *)arg2;
- (id)initWithLayerCacheLogicClass:(Class)arg1;

@optional
- (void)setCGColorSpace:(struct CGColorSpace *)arg1;
@end

