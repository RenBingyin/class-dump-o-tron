//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent
{
    CUIPSDGradient *_gradient;
}

@property(retain) CUIPSDGradient *gradient; // @synthesize gradient=_gradient;
- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

