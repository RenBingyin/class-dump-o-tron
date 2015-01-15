//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HAPCharacteristic, HMDAccessory, HMDCharacteristicMetadata, HMDService, NSData, NSNumber, NSString;

@interface HMDCharacteristic : NSObject <NSSecureCoding>
{
    _Bool _notificationEnabled;
    HMDAccessory *_accessory;
    HMDService *_service;
    NSData *_authorizationData;
    HAPCharacteristic *_hapCharacteristic;
    NSString *_characteristicType;
    NSNumber *_characteristicInstanceID;
    long long _characteristicProperties;
    HMDCharacteristicMetadata *_characteristicMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
@property(nonatomic) long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) HAPCharacteristic *hapCharacteristic; // @synthesize hapCharacteristic=_hapCharacteristic;
@property(copy, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(nonatomic) _Bool notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)validateValue:(id)arg1 outValue:(id *)arg2;
@property(readonly, nonatomic) HMDCharacteristicMetadata *metadata;
@property(readonly, copy, nonatomic) id value;
@property(readonly, nonatomic) long long properties;
@property(readonly, nonatomic) __weak HAPCharacteristic *characteristic;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(readonly, copy, nonatomic) NSString *type;
- (void)unconfigure;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (void)configureWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;

@end

