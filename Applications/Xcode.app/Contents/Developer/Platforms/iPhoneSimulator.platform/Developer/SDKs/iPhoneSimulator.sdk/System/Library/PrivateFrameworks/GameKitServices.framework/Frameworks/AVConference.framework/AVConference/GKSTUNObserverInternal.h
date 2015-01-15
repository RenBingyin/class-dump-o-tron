//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/GKSTUNObserver.h>

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface GKSTUNObserverInternal : GKSTUNObserver
{
    struct __SCDynamicStore *_dynamicStore;
    NSObject<OS_dispatch_queue> *_stunDiscoveryQueue;
    _Bool _fStunDiscoveryQueued;
}

- (void)deregisterForNetworkChanges;
- (void)registerForNetworkChanges;
- (void)trySTUNDiscovery;
- (void)cleanUp;
- (void)dealloc;
- (_Bool)initialize;
- (id)init;

@end

