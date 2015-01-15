//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKInviteInternal, GKPlayer, NSData, NSString;

@interface GKInvite : NSObject
{
    _Bool _cancelled;
    GKInviteInternal *_internal;
    GKPlayer *_sender;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, retain, nonatomic) GKPlayer *sender; // @synthesize sender=_sender;
@property(retain) GKInviteInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isHosted) _Bool hosted; // @dynamic hosted;
@property(readonly, retain, nonatomic) NSString *inviter; // @dynamic inviter;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *inviteID; // @dynamic inviteID;
@property(readonly, nonatomic) _Bool isNearby; // @dynamic isNearby;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) unsigned int playerAttributes; // @dynamic playerAttributes;
@property(readonly, nonatomic) unsigned long long playerGroup; // @dynamic playerGroup;
@property(readonly, nonatomic) NSData *sessionToken; // @dynamic sessionToken;

@end

