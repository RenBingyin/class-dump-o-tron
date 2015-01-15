//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode : SKNode
{
    PKPhysicsField *_field;
    SKRegion *_region;
    float _smoothness;
    float _animationSpeed;
    SKTexture *_texture;
    _Bool _exclusive;
}

+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)magneticField;
+ (id)electricField;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)velocityFieldWithTexture:(id)arg1;
+ (id)velocityFieldWithVector: /* Error: Ran out of types for this method. */;
+ (id)linearGravityFieldWithVector: /* Error: Ran out of types for this method. */;
+ (id)radialGravityField;
+ (id)vortexField;
+ (id)dragField;
@property(nonatomic, getter=isExclusive) _Bool exclusive; // @synthesize exclusive=_exclusive;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToNode:(id)arg1;
@property(retain, nonatomic) SKRegion *region;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) float falloff;
@property(nonatomic) float minimumRadius;
@property(nonatomic) float strength;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 field:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionClassName;
- (id)init;
@property(retain, nonatomic) SKTexture *texture;
@property(nonatomic) float animationSpeed;
@property(nonatomic) float smoothness;
// Error parsing type for property direction:
// Property attributes: T,N

@property(nonatomic) unsigned int categoryBitMask;
- (id)field;

@end

