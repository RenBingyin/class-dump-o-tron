//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCListener, SGDSuggestManager;

@interface SGDServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_coreSuggestionConnectionListener;
    NSMutableArray *_coreSuggestionClients;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    SGDSuggestManager *_suggestManager;
}

+ (id)sharedServer;
@property(retain, nonatomic) SGDSuggestManager *suggestManager; // @synthesize suggestManager=_suggestManager;
- (void).cxx_destruct;
- (id)_suggestionDaemonWithConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_localeChanged:(id)arg1;
- (void)shutdown;
- (void)setupWithConnectionListener:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

