//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderEffect.h>

@class TSCH3DTexturePool, TSCH3DTexturesMaterial;

__attribute__((visibility("hidden")))
@interface TSCH3DMaterialShaderEffect : TSCH3DShaderEffect
{
    TSCH3DTexturePool *mPool;
    TSCH3DTexturesMaterial *mMaterial;
    struct MaterialShaderVariables mVariables;
}

+ (id)effectWithPool:(id)arg1 material:(id)arg2 variables:(const struct MaterialShaderVariables *)arg3;
+ (id)stateSharingID;
- (id).cxx_construct;
- (void)affectStates:(id)arg1;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (id)stateSharingID;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPool:(id)arg1 material:(id)arg2 variables:(const struct MaterialShaderVariables *)arg3;

@end

