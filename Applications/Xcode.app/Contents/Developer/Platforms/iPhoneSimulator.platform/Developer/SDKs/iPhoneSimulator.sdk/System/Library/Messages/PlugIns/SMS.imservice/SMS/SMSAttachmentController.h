//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SMSAttachmentController : NSObject
{
    NSMutableDictionary *_connectionMap;
    NSMutableDictionary *_fileTransferMap;
    NSMutableDictionary *_contextMap;
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;
- (void)retrieveAttachmentsForMessage:(id)arg1 displayID:(id)arg2 token:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)processAttachmentsForPeerRelayForMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 uploadFailureBlock:(CDUnknownBlockType)arg3;
- (void)processAttachmentsForMessage:(id)arg1 generateTextParts:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sizeLimitsForTransfer:(id)arg1 bigSize:(unsigned long long *)arg2 smallSize:(unsigned long long *)arg3;
- (unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long *)arg1 cell:(unsigned long long *)arg2;
- (unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long *)arg1 cell:(unsigned long long *)arg2;
- (void)maxTransferFileSizeForWifi:(unsigned long long *)arg1 cell:(unsigned long long *)arg2;
- (_Bool)shouldSendLowResolutionOnly;
- (void)dealloc;

@end

