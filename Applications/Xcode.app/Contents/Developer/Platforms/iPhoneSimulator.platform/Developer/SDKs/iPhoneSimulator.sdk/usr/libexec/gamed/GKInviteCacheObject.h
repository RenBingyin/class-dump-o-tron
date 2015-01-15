//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCacheObject.h"

@class GKGameCacheObject, NSData, NSDate, NSString;

@interface GKInviteCacheObject : GKCacheObject
{
}

+ (id)fetchSortDescriptors;
+ (id)entityName;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) NSString *inviteID; // @dynamic inviteID;
@property(retain, nonatomic) NSData *pendingInviteArchive; // @dynamic pendingInviteArchive;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;
@property(nonatomic) int type; // @dynamic type;

@end

