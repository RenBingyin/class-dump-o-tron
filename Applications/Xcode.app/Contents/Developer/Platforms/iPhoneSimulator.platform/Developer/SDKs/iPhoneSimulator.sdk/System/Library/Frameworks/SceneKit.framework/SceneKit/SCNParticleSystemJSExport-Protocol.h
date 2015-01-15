//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class CAAnimation, NSArray, NSDictionary, NSString, SCNGeometry, SCNParticleSystem;

@protocol SCNParticleSystemJSExport <JSExport>
+ (id)particleSystemNamed:(NSString *)arg1 inDirectory:(NSString *)arg2;
+ (id)particleSystem;
@property(copy, nonatomic) NSDictionary *propertyControllers;
@property(nonatomic) double fresnelExponent;
@property(nonatomic) double stretchFactor;
@property(nonatomic) double speedFactor;
@property(nonatomic) double dampingFactor;
@property(nonatomic) double particleChargeVariation;
@property(nonatomic) double particleCharge;
@property(nonatomic) double particleFrictionVariation;
@property(nonatomic) double particleFriction;
@property(nonatomic) double particleBounceVariation;
@property(nonatomic) double particleBounce;
@property(nonatomic) double particleMassVariation;
@property(nonatomic) double particleMass;
@property(copy, nonatomic) NSArray *colliderNodes;
@property(nonatomic) _Bool particleDiesOnCollision;
@property(nonatomic) _Bool affectedByPhysicsFields;
@property(nonatomic) _Bool affectedByGravity;
@property(nonatomic, getter=isLightingEnabled) _Bool lightingEnabled;
@property(nonatomic) long long sortingMode;
@property(nonatomic) long long orientationMode;
@property(nonatomic, getter=isBlackPassEnabled) _Bool blackPassEnabled;
@property(nonatomic) long long blendMode;
@property(nonatomic) double particleSizeVariation;
@property(nonatomic) double particleSize;
@property(nonatomic) struct SCNVector4 particleColorVariation;
@property(retain, nonatomic) id particleColor;
@property(nonatomic) long long imageSequenceAnimationMode;
@property(nonatomic) double imageSequenceFrameRateVariation;
@property(nonatomic) double imageSequenceFrameRate;
@property(nonatomic) double imageSequenceInitialFrameVariation;
@property(nonatomic) double imageSequenceInitialFrame;
@property(nonatomic) unsigned long long imageSequenceRowCount;
@property(nonatomic) unsigned long long imageSequenceColumnCount;
@property(retain, nonatomic) id particleImage;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnLiving;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnCollision;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnDying;
@property(nonatomic) double particleLifeSpanVariation;
@property(nonatomic) double particleLifeSpan;
@property(nonatomic) double particleAngularVelocityVariation;
@property(nonatomic) double particleAngularVelocity;
@property(nonatomic) double particleVelocityVariation;
@property(nonatomic) double particleVelocity;
@property(nonatomic) double particleAngleVariation;
@property(nonatomic) double particleAngle;
@property(nonatomic, getter=isLocal) _Bool local;
@property(nonatomic) struct SCNVector3 acceleration;
@property(nonatomic) struct SCNVector3 emittingDirection;
@property(nonatomic) double spreadingAngle;
@property(nonatomic) long long birthDirection;
@property(nonatomic) long long birthLocation;
@property(retain, nonatomic) SCNGeometry *emitterShape;
@property(nonatomic) double warmupDuration;
@property(nonatomic) double birthRateVariation;
@property(nonatomic) double birthRate;
@property(nonatomic) _Bool loops;
@property(nonatomic) double idleDurationVariation;
@property(nonatomic) double idleDuration;
@property(nonatomic) double emissionDurationVariation;
@property(nonatomic) double emissionDuration;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (id)copy;
- (void)removeAllModifiers;
- (void)removeModifiersOfStage:(long long)arg1;
- (void)addModifierForProperties:(NSArray *)arg1 atStage:(long long)arg2 withBlock:(void (^)(void **, unsigned long long *, long long, long long, float))arg3;
- (void)handleEvent:(long long)arg1 forProperties:(NSArray *)arg2 withBlock:(void (^)(void **, unsigned long long *, unsigned int *, long long))arg3;
- (void)reset;
@end

