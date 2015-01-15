//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, _ADLocationPermissionRequest;

@interface ADLocationPermissionManager : NSObject
{
    _ADLocationPermissionRequest *_currentRequest;
    NSMutableArray *_pendingRequests;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_cache;
    NSFileManager *_fileManager;
}

+ (void)clearPermissionCache;
+ (void)cancelOutstandingRequests;
+ (id)sharedManager;
+ (void)allowLocationAccessForAdWithIdentifier:(id)arg1 title:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) _ADLocationPermissionRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void)_recordPermissionForAdWithIdentifier:(id)arg1;
- (_Bool)_hasPermissionForAdWithIdentifier:(id)arg1;
- (void)_enqueueRequestForAdWithIdentifier:(id)arg1 title:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_checkPendingRequests;
- (void)_clearPermissionCache;
- (void)_cancelOutstandingRequests;
- (id)init;

@end

