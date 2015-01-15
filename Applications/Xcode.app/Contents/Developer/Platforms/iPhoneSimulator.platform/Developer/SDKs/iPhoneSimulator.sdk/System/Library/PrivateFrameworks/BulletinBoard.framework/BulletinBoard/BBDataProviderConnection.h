//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class BBDataProviderConnectionResolver, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate>
{
    NSString *_serviceName;
    NSString *_bundleID;
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id <BBDataProviderConnectionServerProxy> _serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    _Bool _connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

+ (void)initialize;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_invalidate;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (id)addDataProvider:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (id)bundleID;
- (id)serviceName;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

