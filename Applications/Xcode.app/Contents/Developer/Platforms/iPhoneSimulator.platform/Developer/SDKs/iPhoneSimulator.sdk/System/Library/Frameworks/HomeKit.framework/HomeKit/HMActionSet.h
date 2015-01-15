//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMMessageReceiver.h"
#import "NSSecureCoding.h"

@class HMHome, HMMessageDispatcher, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMActionSet : NSObject <HMMessageReceiver, NSSecureCoding>
{
    _Bool _executing;
    NSString *_name;
    HMHome *_home;
    NSUUID *_uuid;
    HMMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_currentActions;
    NSMutableDictionary *_pendingRequests;
    NSMutableArray *_pendingActionTransactions;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *pendingActionTransactions; // @synthesize pendingActionTransactions=_pendingActionTransactions;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) NSMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerNotificationHandlers;
- (void)handleActionSetRenamedNotification:(id)arg1;
- (void)handleActionUpdatedNotification:(id)arg1;
- (void)handleActionRemovedNotification:(id)arg1;
- (void)handleActionAddedNotification:(id)arg1;
- (void)updateAction:(id)arg1 changes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (void)removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupActionWithInfo:(id)arg1;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSSet *actions;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

