//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableSet, NSSet, NSString, SGDuplicateKey, SGRecordId, SGSimpleTimeRange;

@interface SGEntity : NSObject
{
    NSMutableSet *_participants;
    NSMutableSet *_tags;
    unsigned int _state;
    SGRecordId *_recordId;
    SGDuplicateKey *_duplicateKey;
    NSString *_sourceKey;
    NSString *_content;
    NSString *_title;
    double _creationTimestamp;
    double _lastModifiedTimestamp;
    SGSimpleTimeRange *_timeRange;
    NSData *_structuredData;
    double _quality;
    NSMutableSet *_locations;
    long long _masterEntityId;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) long long masterEntityId; // @synthesize masterEntityId=_masterEntityId;
@property(retain, nonatomic) NSMutableSet *locations; // @synthesize locations=_locations;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(retain, nonatomic) NSData *structuredData; // @synthesize structuredData=_structuredData;
@property(readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) SGSimpleTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) double lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(retain, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property(retain, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (id)fieldsToSaveOnConfirmation;
- (id)extraKeyTag;
- (void)addTag:(id)arg1;
- (void)addParticipant:(id)arg1 type:(unsigned int)arg2;
- (id)participantsWithRoleType:(unsigned int)arg1;
@property(readonly, nonatomic) NSSet *participants;
- (_Bool)isFromForwardedMessage;
- (_Bool)isCancelled;
- (id)loadOrigin:(id)arg1;
- (void)validate;
- (unsigned long long)hash;
- (_Bool)isEqualToEntity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

