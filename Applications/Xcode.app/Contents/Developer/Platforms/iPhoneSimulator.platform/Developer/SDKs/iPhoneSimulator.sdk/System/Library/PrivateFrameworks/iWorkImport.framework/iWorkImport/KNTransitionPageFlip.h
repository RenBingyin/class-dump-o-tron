//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNFrameAnimator.h"

@class NSArray, NSString, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

__attribute__((visibility("hidden")))
@interface KNTransitionPageFlip : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving>
{
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDGLShader *_shader;
    TSDGLDataBuffer *_dataBuffer;
    NSArray *_dataBufferAttributes;
    unsigned long long _positionAttributeIndex;
    unsigned long long _texCoordAttributeIndex;
    unsigned long long _normalAttributeIndex;
    unsigned long long _prevPositionAttributeIndex;
    TSDGLShader *_quadShader;
    TSDGLDataBuffer *_quadDataBuffer;
    long long _numPoints;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)renderFrameWithContext:(id)arg1;
- (void)p_drawFlipWithPercent:(double)arg1 texture:(id)arg2;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)update:(id)arg1 withContext:(id)arg2;
- (void)createArrays:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)p_teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

