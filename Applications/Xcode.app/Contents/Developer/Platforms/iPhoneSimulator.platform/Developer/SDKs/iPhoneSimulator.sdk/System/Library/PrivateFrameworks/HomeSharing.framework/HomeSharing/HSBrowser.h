//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface HSBrowser : NSObject <NSNetServiceDelegate>
{
    CDUnknownBlockType _addLibraryHandler;
    NSArray *_availableLibraries;
    struct _DNSServiceRef_t *_dnsService;
    NSObject<OS_dispatch_queue> *_dnsServiceQueue;
    _Bool _isBrowsing;
    CDUnknownBlockType _removeLibraryHandler;
    long long _browserType;
    NSString *_homeSharingGroupID;
}

@property(copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property(nonatomic) long long browserType; // @synthesize browserType=_browserType;
- (void).cxx_destruct;
- (void)_startWithCurrentRetryCount:(unsigned long long)arg1 maximumRetryCount:(unsigned long long)arg2 addLibraryHandler:(CDUnknownBlockType)arg3 removeLibraryHandler:(CDUnknownBlockType)arg4;
- (void)_didRemoveService:(id)arg1 moreComing:(_Bool)arg2;
- (void)_didFindService:(id)arg1 moreComing:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *availableLibraries;
- (void)stop;
- (void)startWithAddLibraryHandler:(CDUnknownBlockType)arg1 removeLibraryHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

