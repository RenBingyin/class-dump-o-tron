//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, PKPaymentMessage, PKPaymentTransaction;

@protocol PKPaymentServiceExportedInterface
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)paymentPassWithUniqueIdentifierDidFailTransaction:(NSString *)arg1;
- (void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(NSString *)arg1;
- (void)paymentPassWithUniqueIdentifierDidBeginTransaction:(NSString *)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(NSString *)arg1;
- (void)paymentPassWithUniqueIdentifierDidAuthorize:(NSString *)arg1;
- (void)paymentPassWithUniqueIdentifierDidActivate:(NSString *)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidLeaveField;
- (void)paymentDeviceDidEnterField;
@end

