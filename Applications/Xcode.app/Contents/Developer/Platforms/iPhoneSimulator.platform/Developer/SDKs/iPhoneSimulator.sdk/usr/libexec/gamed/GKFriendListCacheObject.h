//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKPlayerOwnedListCacheObject.h"

@interface GKFriendListCacheObject : GKPlayerOwnedListCacheObject
{
}

+ (id)cacheFriendList:(id)arg1 withTimeToLive:(double)arg2 forProfile:(id)arg3 managedObjectContext:(id)arg4 commonFriends:(_Bool)arg5;
+ (id)entityName;
+ (Class)entryClass;
- (id)internalRepresentation;
- (void)populateFriendNamesFromServerRepresentationDictionary:(id)arg1;
- (id)playerIDs;

// Remaining properties
@property(nonatomic) _Bool common; // @dynamic common;

@end

