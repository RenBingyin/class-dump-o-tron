//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderEffect.h>

@class TSCH3DShaderVariable;

__attribute__((visibility("hidden")))
@interface TSCH3DGaussianBlurShaderEffect : TSCH3DShaderEffect
{
    TSCH3DShaderVariable *mSamplingTexcoords;
}

+ (void)setTapUnit:(tvec2_84d5962d)arg1 effectsStates:(id)arg2;
+ (id)variableTapUnit;
+ (id)variableAccum;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)addVariables:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)variableTapUnit;
- (id)variableAccum;

@end

