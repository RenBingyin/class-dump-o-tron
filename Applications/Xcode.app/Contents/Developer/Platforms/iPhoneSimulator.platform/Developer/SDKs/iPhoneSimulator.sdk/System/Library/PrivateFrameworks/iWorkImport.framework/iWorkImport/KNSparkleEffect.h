//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNAnimationOpenGLEffect.h"

@class KNAnimationContext, KNBuildSparkleSystem, NSString, TSDGLDataBuffer, TSDGLShader, TSDGLTextureInfo, TSDTexturedRectangle;

__attribute__((visibility("hidden")))
@interface KNSparkleEffect : NSObject <KNAnimationOpenGLEffect>
{
    KNBuildSparkleSystem *mSparkleSystem;
    TSDGLShader *mSparkleShader;
    TSDGLTextureInfo *mSparkleTexture;
    TSDTexturedRectangle *mTexture;
    KNSparkleEffect *mEffect;
    KNAnimationContext *mAnimationContext;
    double mDuration;
    unsigned long long mDirection;
    int mBuildType;
    struct CGRect mDestinationRect;
    struct CATransform3D mTranslate;
    TSDGLShader *mObjectShader;
    TSDGLDataBuffer *mObjectDataBuffer;
}

- (void)teardown;
- (void)renderEffectAtPercent:(double)arg1;
- (id)initWithAnimationContext:(id)arg1 texture:(id)arg2 destinationRect:(struct CGRect)arg3 translate:(struct CATransform3D)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 buildType:(int)arg7;
- (id)p_sparkleSystemForTR:(id)arg1 slideRect:(struct CGRect)arg2 duration:(double)arg3 direction:(unsigned long long)arg4;
- (void)setupEffectIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

