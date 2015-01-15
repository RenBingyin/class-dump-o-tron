//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol AXSettingsVoiceAssetManagerDelegate <NSObject>
- (void)assetManagerVoiceLanguageInProgressDownload:(NSString *)arg1 alternateVoiceId:(NSString *)arg2;
- (void)assetManagerVoiceLanguageDownloadProgress:(NSString *)arg1 alternateVoiceId:(NSString *)arg2 progress:(float)arg3 storageSize:(long long)arg4 requiredDiskSpace:(_Bool)arg5;
- (void)assetManagerVoiceLanguageIsDownloadingPaused:(NSString *)arg1 alternateVoiceId:(NSString *)arg2 paused:(_Bool)arg3;
- (void)assetManagerVoiceLanguageIsDownloading:(NSString *)arg1 alternateVoiceId:(NSString *)arg2 downloading:(_Bool)arg3;
- (void)assetManagerVoiceLanguageIsCompact:(NSString *)arg1 alternateVoiceId:(NSString *)arg2 compact:(_Bool)arg3 error:(NSError *)arg4;
@end

