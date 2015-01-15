//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSSTheme, TSUCustomCallBackDictionary;

__attribute__((visibility("hidden")))
@interface TSSThemeAssetMapper : NSObject
{
    TSSTheme *mFromTheme;
    TSSTheme *mToTheme;
    TSUCustomCallBackDictionary *mAssetMap;
}

@property(readonly, nonatomic) TSSTheme *toTheme; // @synthesize toTheme=mToTheme;
@property(readonly, nonatomic) TSSTheme *fromTheme; // @synthesize fromTheme=mFromTheme;
- (void)clearMappingCache;
- (void)cacheAssetMappings:(id)arg1;
- (void)cacheMappingFromAsset:(id)arg1 toAsset:(id)arg2;
- (id)mapStyle:(id)arg1;
- (id)mapPresetsWithKindFromPreset:(id)arg1;
- (id)mappedAssetForAsset:(id)arg1;
- (id)init;
- (id)initWithFromTheme:(id)arg1 toTheme:(id)arg2;
- (void)dealloc;
- (id)mapChartPreset:(id)arg1;
- (_Bool)p_hasCachedMappingsForPresetsOfKind:(id)arg1;
- (id)mapMaster:(id)arg1;

@end

