//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RadioUI/RURadioAVItem.h>

@class NSString;

@interface RURadioTrackAVItem : RURadioAVItem
{
    NSString *_assetFlavor;
}

- (void).cxx_destruct;
- (id)_sinfsByRemovingEmptyPinfsFromSinfs:(id)arg1;
- (void)_sendLikeOrBanRequestWithStatus:(int)arg1;
- (void)_saveDownloadKeyCookie:(id)arg1 forURL:(id)arg2;
- (id)_bestRadioTrackAssetWithAvailableAssets:(id)arg1;
- (id)assetFlavor;
- (void)setIsLiked:(_Bool)arg1;
- (void)setIsBanned:(_Bool)arg1;
- (_Bool)supportsRadioTrackActions;
- (void)loadAssetAndPlayerItem;

@end

