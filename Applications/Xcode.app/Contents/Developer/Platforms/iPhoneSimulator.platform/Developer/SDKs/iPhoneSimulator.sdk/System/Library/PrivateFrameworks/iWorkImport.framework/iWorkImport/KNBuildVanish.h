//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNFrameBuildAnimator.h"

@class KNAnimParameterGroup, KNBuildVanishParticleSystem, NSMapTable, NSString, TSDGLShader, TSDGLTextureInfo;

__attribute__((visibility("hidden")))
@interface KNBuildVanish : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    KNAnimParameterGroup *_parameterGroup;
    TSDGLShader *_shader;
    NSMapTable *_blurTextures;
    NSMapTable *_dataBuffers;
    KNBuildVanishParticleSystem *_vanishParticleSystem;
    TSDGLShader *_vanishParticleShader;
    TSDGLTextureInfo *_particleTextureInfo;
    struct CATransform3D _projectionMatrix;
    struct CATransform3D _baseMatrix;
    struct CGRect _drawableFrame;
    struct CGRect _animationRect;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (_Bool)requiresSingleTexturePerStage;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_drawParticleSystemsWithPercent:(double)arg1 sparkles:(_Bool)arg2 particleSystemOpacity:(double)arg3;
- (void)p_setupParticleSystemWithImage:(id)arg1 build:(id)arg2;
- (void)p_setupParticleTexture;
- (void)p_setupShadersWithContext:(id)arg1;
- (void)p_setupMVPMatricesWithContext:(id)arg1;
- (void)p_setupBlurTexturesWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;
- (void)teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

