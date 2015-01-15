//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccessoryBrowser, HMDAccessoryManager, HMDCloudDataSyncManager, HMDHomeManager, HMDIDSMessageDispatcher, HMDIDSMessageTransport, HMDIdentityRegistry, HMDMessageFilterChain, HMDXpcServer, HMMessageDispatcher, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface HMDMainDriver : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    HMDAccessoryBrowser *_accessoryBrowser;
    HMDXpcServer *_xpcServer;
    HMDIDSMessageDispatcher *_messageDispatcher;
    HMMessageDispatcher *_notificationRelayDispatcher;
    HMDCloudDataSyncManager *_cloudDataSyncManager;
    HMDIDSMessageTransport *_idsTransport;
    HMDAccessoryManager *_accessoryManager;
    NSMutableArray *_unpairedAccessories;
    HMDMessageFilterChain *_msgFilterChain;
    HMDIdentityRegistry *_identityRegistry;
}

+ (id)driver;
@property(retain, nonatomic) HMDIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property(retain, nonatomic) HMDMessageFilterChain *msgFilterChain; // @synthesize msgFilterChain=_msgFilterChain;
@property(retain, nonatomic) NSMutableArray *unpairedAccessories; // @synthesize unpairedAccessories=_unpairedAccessories;
@property(retain, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) HMDIDSMessageTransport *idsTransport; // @synthesize idsTransport=_idsTransport;
@property(retain, nonatomic) HMDCloudDataSyncManager *cloudDataSyncManager; // @synthesize cloudDataSyncManager=_cloudDataSyncManager;
@property(retain, nonatomic) HMMessageDispatcher *notificationRelayDispatcher; // @synthesize notificationRelayDispatcher=_notificationRelayDispatcher;
@property(retain, nonatomic) HMDIDSMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) HMDXpcServer *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property(retain, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)start;
- (void)initBackgroundTaskAgentForTimerTriggers;
- (void)executeBTAJob:(const char *)arg1 withXPCDict:(id)arg2;
- (id)init;

@end

