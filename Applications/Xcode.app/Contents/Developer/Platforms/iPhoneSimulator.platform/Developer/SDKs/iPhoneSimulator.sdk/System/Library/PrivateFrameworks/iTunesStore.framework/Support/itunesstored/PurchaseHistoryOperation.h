//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSArray, SSAuthenticationContext;

@interface PurchaseHistoryOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;
    NSArray *_inputItems;
    NSArray *_outputItems;
}

- (void)_setOutputItemsWithMapping:(id)arg1;
- (id)_newURLOperation;
- (void)run;
@property(readonly) NSArray *purchaseHistoryItems;
@property(readonly) NSArray *purchasedItems;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (void)dealloc;
- (id)initWithPurchaseHistoryItems:(id)arg1 authenticationContext:(id)arg2;
- (id)init;

@end

