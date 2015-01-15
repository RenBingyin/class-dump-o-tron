//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBUUID, NSMutableSet, NSObject<OS_dispatch_source>;

@interface _HDHealthServiceDiscoveryInfo : NSObject
{
    NSMutableSet *_peripheralsUUIDs;
    unsigned long long _discoveryIdentifier;
    CDUnknownBlockType _discoveryHandler;
    CBUUID *_serviceUUID;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, nonatomic) CBUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(readonly, nonatomic) CDUnknownBlockType discoveryHandler; // @synthesize discoveryHandler=_discoveryHandler;
@property(nonatomic) unsigned long long discoveryIdentifier; // @synthesize discoveryIdentifier=_discoveryIdentifier;
- (void).cxx_destruct;
- (_Bool)_addPeripheralUUID:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1 serviceUUID:(id)arg2;

@end

