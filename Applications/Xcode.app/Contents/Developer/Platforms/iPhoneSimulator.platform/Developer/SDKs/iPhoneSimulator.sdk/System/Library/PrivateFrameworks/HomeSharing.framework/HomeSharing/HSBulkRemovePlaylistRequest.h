//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSBulkRemovePlaylistRequest : HSRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 containerID:(unsigned int)arg3;
- (id)_bodyDataForSessionID:(unsigned int)arg1 containerID:(unsigned int)arg2;
- (id)initWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 containerID:(unsigned int)arg3;

@end

