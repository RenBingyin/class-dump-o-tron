//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBulletin.h"

@class NSString;

@interface GKBulletinMatchmaker : GKBulletin
{
    NSString *_matchID;
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
- (void)executeBulletinWithBulletinController:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

