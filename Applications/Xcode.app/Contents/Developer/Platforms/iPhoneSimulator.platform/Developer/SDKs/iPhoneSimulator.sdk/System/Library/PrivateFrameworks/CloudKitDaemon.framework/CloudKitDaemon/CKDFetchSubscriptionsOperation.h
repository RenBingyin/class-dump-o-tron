//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation
{
    _Bool _isFetchAllSubscriptionsOperation;
    NSArray *_subscriptions;
    CDUnknownBlockType _subscriptionFetchedProgressBlock;
    NSArray *_subscriptionIDs;
}

@property(nonatomic) _Bool isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property(retain, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property(copy, nonatomic) CDUnknownBlockType subscriptionFetchedProgressBlock; // @synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock;
@property(retain, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

