//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKListEntryCacheObject.h"

#import "GKCacheObjectImageProtocol.h"

@class NSDate, NSNumber, NSSet, NSString;

@interface GKLeaderboardCacheObject : GKListEntryCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;
- (id)internalRepresentation;
- (void)updateWithServerRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *friendRank; // @dynamic friendRank;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSDate *lastSubmittedDate; // @dynamic lastSubmittedDate;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(retain, nonatomic) NSNumber *maxFriendRank; // @dynamic maxFriendRank;
@property(retain, nonatomic) NSNumber *maxRank; // @dynamic maxRank;
@property(retain, nonatomic) NSSet *ranges; // @dynamic ranges;
@property(retain, nonatomic) NSNumber *rank; // @dynamic rank;
@property(retain, nonatomic) NSString *scoreType; // @dynamic scoreType;
@property(retain, nonatomic) NSSet *scores; // @dynamic scores;
@property(readonly) Class superclass;

@end

