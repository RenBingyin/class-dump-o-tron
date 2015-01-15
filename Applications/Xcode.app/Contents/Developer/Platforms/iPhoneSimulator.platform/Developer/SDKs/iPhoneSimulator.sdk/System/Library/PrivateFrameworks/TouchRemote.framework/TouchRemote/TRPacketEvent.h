//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary;

@interface TRPacketEvent : NSObject <NSSecureCoding>
{
    unsigned int _packetEventType;
    unsigned int _version;
    NSDictionary *_payloadDictionary;
}

+ (Class)_packetClassForPacketEventType:(unsigned int)arg1;
+ (unsigned int)_packetEventType;
+ (unsigned long long)payloadSizeWithNetworkRepresentationHeader:(id)arg1;
+ (unsigned long long)networkRepresentationHeaderLength;
+ (_Bool)supportsSecureCoding;
+ (id)packetWithNetworkRepresentation:(id)arg1;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSDictionary *payloadDictionary; // @synthesize payloadDictionary=_payloadDictionary;
@property(nonatomic) unsigned int packetEventType; // @synthesize packetEventType=_packetEventType;
- (void).cxx_destruct;
- (id)_networkRepresentationForEventType:(unsigned int)arg1 version:(unsigned int)arg2 payloadDictionary:(id)arg3;
@property(readonly, nonatomic) NSData *networkRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;

@end

