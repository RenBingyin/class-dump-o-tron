//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSData, NSString;

@interface GEORPDirectionsEvent : PBCodable <NSCopying>
{
    long long _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    unsigned int _occurrenceResponseIndex;
    NSData *_occurrenceRouteId;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    int _synthesizedStepManeuverType;
    int _type;
    struct {
        unsigned int errorCode:1;
        unsigned int occurrenceResponseIndex:1;
        unsigned int occurrenceStepIndex:1;
        unsigned int switchedToResponseIndex:1;
        unsigned int synthesizedStepManeuverType:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain, nonatomic) NSString *synthesizedStepInstructions; // @synthesize synthesizedStepInstructions=_synthesizedStepInstructions;
@property(nonatomic) int synthesizedStepManeuverType; // @synthesize synthesizedStepManeuverType=_synthesizedStepManeuverType;
@property(retain, nonatomic) NSData *switchedToRouteId; // @synthesize switchedToRouteId=_switchedToRouteId;
@property(nonatomic) unsigned int switchedToResponseIndex; // @synthesize switchedToResponseIndex=_switchedToResponseIndex;
@property(retain, nonatomic) GEOLatLng *occurrenceLatLng; // @synthesize occurrenceLatLng=_occurrenceLatLng;
@property(nonatomic) unsigned int occurrenceStepIndex; // @synthesize occurrenceStepIndex=_occurrenceStepIndex;
@property(retain, nonatomic) NSData *occurrenceRouteId; // @synthesize occurrenceRouteId=_occurrenceRouteId;
@property(nonatomic) unsigned int occurrenceResponseIndex; // @synthesize occurrenceResponseIndex=_occurrenceResponseIndex;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(readonly, nonatomic) _Bool hasSynthesizedStepInstructions;
@property(nonatomic) _Bool hasSynthesizedStepManeuverType;
@property(readonly, nonatomic) _Bool hasSwitchedToRouteId;
@property(nonatomic) _Bool hasSwitchedToResponseIndex;
@property(readonly, nonatomic) _Bool hasOccurrenceLatLng;
@property(nonatomic) _Bool hasOccurrenceStepIndex;
@property(readonly, nonatomic) _Bool hasOccurrenceRouteId;
@property(nonatomic) _Bool hasOccurrenceResponseIndex;
@property(nonatomic) _Bool hasType;
- (void)dealloc;

@end

