//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCH3DCamera;

__attribute__((visibility("hidden")))
@interface TSCH3DGetBoundsProjector : NSObject
{
    tmat4x4_3074befe mModelView;
    tmat4x4_3074befe mConstantDepthModelView;
    tmat4x4_3074befe mProjection;
    tmat4x4_3074befe mMVP;
    TSCH3DCamera *mCamera;
    struct ChartScenePropertyAccessor *mAccessor;
    _Bool mUseAggressiveBackProjection;
}

- (id).cxx_construct;
- (box_a3bd9649)projectBounds:(const box_a3bd9649 *)arg1 type:(int)arg2;
- (tvec3_17f03ce0)backProjectModelViewPoint:(const tvec3_17f03ce0 *)arg1;
- (void)resetTransformsForRenderBounds;
- (void)resetTransformsForLayoutBounds;
- (void)setCamera:(id)arg1 accessor:(struct ChartScenePropertyAccessor *)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

