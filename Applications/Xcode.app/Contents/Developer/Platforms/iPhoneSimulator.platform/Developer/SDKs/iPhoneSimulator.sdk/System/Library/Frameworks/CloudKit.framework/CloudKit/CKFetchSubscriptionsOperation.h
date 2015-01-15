//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation
{
    _Bool _isFetchAllSubscriptionsOperation;
    NSArray *_subscriptionIDs;
    CDUnknownBlockType _fetchSubscriptionCompletionBlock;
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

+ (id)fetchAllSubscriptionsOperation;
@property(nonatomic) _Bool isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property(retain, nonatomic) NSMutableDictionary *subscriptionErrors; // @synthesize subscriptionErrors=_subscriptionErrors;
@property(retain, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionID; // @synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID;
@property(retain, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(copy, nonatomic) CDUnknownBlockType fetchSubscriptionCompletionBlock; // @synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock;
@property(copy, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithSubscriptionIDs:(id)arg1;
- (id)init;

@end

