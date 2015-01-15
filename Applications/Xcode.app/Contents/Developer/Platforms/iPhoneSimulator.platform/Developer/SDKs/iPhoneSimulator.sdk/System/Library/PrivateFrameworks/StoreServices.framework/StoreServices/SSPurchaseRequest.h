//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import "SSPurchaseManagerDelegate.h"
#import "SSXPCCoding.h"

@class NSArray, NSMutableSet, NSString, SSPurchaseManager;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding>
{
    _Bool _isBackgroundRequest;
    NSArray *_purchases;
    _Bool _shouldValidatePurchases;
    CDUnknownBlockType _completionBlock;
    _Bool _createsDownloads;
    NSMutableSet *_openPurchaseIdentifiers;
    CDUnknownBlockType _purchaseBlock;
    CDUnknownBlockType _purchaseResponseBlock;
    SSPurchaseManager *_purchaseManager;
    _Bool _needsAuthentication;
}

@property(nonatomic) _Bool shouldValidatePurchases; // @synthesize shouldValidatePurchases=_shouldValidatePurchases;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) _Bool createsDownloads; // @synthesize createsDownloads=_createsDownloads;
@property(nonatomic, getter=isBackgroundRequest) _Bool backgroundRequest; // @synthesize backgroundRequest=_isBackgroundRequest;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;
- (void)_finishPurchasesWithResponses:(id)arg1;
- (void)_addPurchasesToManager;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)start;
- (void)cancel;
- (void)startWithPurchaseResponseBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startWithPurchaseBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSArray *purchases;
- (void)dealloc;
- (id)initWithPurchases:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSPurchaseRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

