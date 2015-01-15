//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface TRBrowser : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_services;
    unsigned long long _browsingCount;
}

+ (id)sharedBrowser;
- (void).cxx_destruct;
- (void)TRXPCC_browserDidRemoveService:(id)arg1;
- (void)TRXPCC_browserDidFindService:(id)arg1;
- (void)_XPCClientConnectionDidInterruptNotification:(id)arg1;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)getServicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

