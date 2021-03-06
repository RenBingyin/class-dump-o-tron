//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSArray, NSNumber, NSString;

@protocol ADStoreJSO_Bindings <JSExport>
- (void)presentStorePage:(JSValue *)arg1;
- (void)loadStorePageForAdamID:(NSNumber *)arg1 completionHandler:(JSValue *)arg2;
- (void)redeemiTunesGiftCode:(NSString *)arg1 listener:(JSValue *)arg2;
- (void)purchaseItemWithID:(NSNumber *)arg1 offerIdentifier:(NSString *)arg2 listener:(JSValue *)arg3;
- (void)lookupItemWithID:(NSNumber *)arg1 listener:(JSValue *)arg2;
- (void)registerItemsForPurchase:(NSArray *)arg1;

@optional
- (void)loadStorePageForAdamID:(NSNumber *)arg1 completionHandler:(JSValue *)arg2 __JS_EXPORT_AS__loadStorePageForAdamID:(id)arg3;
- (void)redeemiTunesGiftCode:(NSString *)arg1 listener:(JSValue *)arg2 __JS_EXPORT_AS__redeemiTunesGiftCode:(id)arg3;
- (void)purchaseItemWithID:(NSNumber *)arg1 offerIdentifier:(NSString *)arg2 listener:(JSValue *)arg3 __JS_EXPORT_AS__purchaseItemWithID:(id)arg4;
- (void)lookupItemWithID:(NSNumber *)arg1 listener:(JSValue *)arg2 __JS_EXPORT_AS__lookupItemWithID:(id)arg3;
@end

