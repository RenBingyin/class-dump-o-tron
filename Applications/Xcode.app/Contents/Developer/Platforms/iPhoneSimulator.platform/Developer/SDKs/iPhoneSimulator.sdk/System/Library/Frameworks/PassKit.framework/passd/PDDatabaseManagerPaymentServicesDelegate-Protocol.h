//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKPaymentPass;

@protocol PDDatabaseManagerPaymentServicesDelegate <NSObject>
- (void)handleDeletionForPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (void)handleInsertionForPaymentPass:(PKPaymentPass *)arg1;
@end

