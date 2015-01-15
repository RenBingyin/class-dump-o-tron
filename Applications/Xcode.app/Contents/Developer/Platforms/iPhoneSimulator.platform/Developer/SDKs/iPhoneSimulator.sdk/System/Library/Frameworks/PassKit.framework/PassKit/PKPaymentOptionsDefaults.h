//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSString;

@interface PKPaymentOptionsDefaults : NSObject
{
}

+ (id)defaults;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property(retain, nonatomic) CNContact *defaultContactPhone;
@property(retain, nonatomic) CNContact *defaultContactEmail;
@property(retain, nonatomic) CNContact *defaultBillingAddress;
@property(retain, nonatomic) CNContact *defaultShippingAddress;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_setContact:(id)arg1 propertyID:(int)arg2 forKeychainKey:(id)arg3;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (void)_keychainData:(id *)arg1 forKey:(id)arg2;

@end

