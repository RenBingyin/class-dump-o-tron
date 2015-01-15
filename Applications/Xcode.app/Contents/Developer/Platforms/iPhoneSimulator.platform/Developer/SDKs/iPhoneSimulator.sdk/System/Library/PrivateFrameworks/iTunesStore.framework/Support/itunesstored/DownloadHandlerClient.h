//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XPCClient.h"

@class NSMutableSet, NSSet;

@interface DownloadHandlerClient : XPCClient
{
    NSMutableSet *_disavowedSessionProperties;
    NSSet *_downloadPhasesToIgnore;
    long long _handlerIdentifier;
    _Bool _sessionsNeedPowerAssertion;
    _Bool _sessionsShouldBlockOtherDownloads;
}

- (id)description;
@property _Bool sessionsShouldBlockOtherDownloads;
@property _Bool sessionsNeedPowerAssertion;
@property long long handlerIdentifier;
@property(copy) NSSet *downloadPhasesToIgnore;
- (id)resetDisavowedSessionProperties;
@property(readonly) NSSet *disavowedSessionProperties;
- (void)addDisavowedSessionProperties:(id)arg1;
- (void)dealloc;
- (id)initWithInputConnection:(id)arg1;

@end

