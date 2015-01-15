//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _SBFAnimationAttributesFactory : SBFAnimationFactory
{
    _UIViewAnimationAttributes *_attributes;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)factoryWithTimingFunction:(id)arg1;
- (double)delay;
- (double)duration;
- (void)dealloc;
- (id)_initWithSettings:(id)arg1;
- (id)_initWithAttributes:(id)arg1;

@end

