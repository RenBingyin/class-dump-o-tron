//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VSRemoteKeepAlive.h"

@class NSString, VSServerKeepAliveManager;

@interface VSKeepAliveClient : NSObject <VSRemoteKeepAlive>
{
    VSServerKeepAliveManager *_manager;
    _Bool _isActive;
    long long _activity;
    _Bool _keepSessionActive;
    struct __CFRunLoopSource *_registryRunLoopSource;
}

- (void).cxx_destruct;
- (oneway void)cancel;
- (oneway void)maintainWithAudioType:(long long)arg1 keepAudioSessionActive:(_Bool)arg2;
- (_Bool)_shouldChangeAudioSession;
- (void)setManager:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

