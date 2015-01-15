//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "TSCH3DGLLayer.h"

@class TSCH3DLayerCacheLogic;

__attribute__((visibility("hidden")))
@interface TSCH3DCALayer : CALayer <TSCH3DGLLayer>
{
    TSCH3DLayerCacheLogic *mCacheLogic;
}

- (id)layerFBOResource;
- (Class)layerDelegateClass;
- (void)presentLayerWithPresenterInfo:(const struct PresenterInfo *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentsScale:(double)arg1;
- (double)contentsScale;
- (void)willDestroyFramebuffer:(id)arg1 session:(id)arg2;
- (id)framebufferFromContext:(id)arg1 attributes:(const struct FramebufferAttributes *)arg2;
- (id)cacheLogic;
- (void)dealloc;
- (id)initWithLayerCacheLogicClass:(Class)arg1;
- (id)sharedFBOResource;

@end

