//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKGame, GKPlayer, GKRecentMatchInternal, NSDate;

@interface GKGameMatch : NSObject
{
    GKRecentMatchInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain) GKRecentMatchInternal *internal; // @synthesize internal=_internal;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;

@end

