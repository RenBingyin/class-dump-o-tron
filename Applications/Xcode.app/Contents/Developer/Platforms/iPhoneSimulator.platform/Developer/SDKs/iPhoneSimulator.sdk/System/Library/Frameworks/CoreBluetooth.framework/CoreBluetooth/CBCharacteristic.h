//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreBluetooth/CBAttribute.h>

@class CBPeripheral, CBService, NSArray, NSData, NSNumber;

@interface CBCharacteristic : CBAttribute
{
    CBService *_service;
    unsigned long long _properties;
    NSData *_value;
    NSArray *_descriptors;
    _Bool _isBroadcasted;
    _Bool _isNotifying;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
    NSNumber *_valueHandle;
}

@property(readonly, nonatomic) NSNumber *valueHandle; // @synthesize valueHandle=_valueHandle;
@property(readonly, nonatomic) NSNumber *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property _Bool isNotifying; // @synthesize isNotifying=_isNotifying;
@property(readonly) _Bool isBroadcasted; // @synthesize isBroadcasted=_isBroadcasted;
@property(retain) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(retain) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(nonatomic) __weak CBService *service; // @synthesize service=_service;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;

@end

