//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_source>, NSString, _HDAuthorizationRequestSession;

@interface _HDAuthorizationRequestGroup : NSObject
{
    _Bool _inTransaction;
    NSString *_bundleIdentifier;
    NSMutableArray *_pendingRequestSessions;
    _HDAuthorizationRequestSession *_activeRequestSession;
    NSObject<OS_dispatch_source> *_sessionTimeoutSource;
}

@property(nonatomic, getter=isInTransaction) _Bool inTransaction; // @synthesize inTransaction=_inTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sessionTimeoutSource; // @synthesize sessionTimeoutSource=_sessionTimeoutSource;
@property(readonly, nonatomic) _HDAuthorizationRequestSession *activeRequestSession; // @synthesize activeRequestSession=_activeRequestSession;
@property(readonly, nonatomic) NSMutableArray *pendingRequestSessions; // @synthesize pendingRequestSessions=_pendingRequestSessions;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)_cancelTimeoutSource;
- (void)beginTransaction;
- (void)finishActiveRequestSessionWithError:(id)arg1;
- (void)promptForActiveRequestSessionWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activateNextRequestSession;
- (void)cancelPendingRequestSessionsWithIdentifiers:(id)arg1 error:(id)arg2;
- (void)enqueueRequestSession:(id)arg1;
- (unsigned long long)pendingRequestSessionsCount;
- (id)activeRequestSessionIdentifier;
- (_Bool)hasActiveRequestSession;
- (_Bool)isEmpty;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

@end

