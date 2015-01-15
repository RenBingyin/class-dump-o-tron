//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSArray, NSString;

@protocol ADPurchaseConfigurationJSO_Bindings <JSExport>
@property(nonatomic) NSArray *shippingMethods;
@property(nonatomic) NSArray *lineItems;
@property(copy, nonatomic) NSString *purchaseData;
@property(nonatomic) long long requiredBillingAddressFields;
@property(nonatomic) long long requiredShippingAddressFields;
@property(copy, nonatomic) NSString *currencyCode;
@property(retain, nonatomic) JSValue *merchantResponseHandler;
@property(retain, nonatomic) JSValue *shippingDelegate;
- (void)requestShippingDetails:(JSValue *)arg1 completionHandler:(JSValue *)arg2;
- (void)cancelPurchaseRequest;

@optional
- (void)requestShippingDetails:(JSValue *)arg1 completionHandler:(JSValue *)arg2 __JS_EXPORT_AS__requestShippingDetails:(id)arg3;
@end

