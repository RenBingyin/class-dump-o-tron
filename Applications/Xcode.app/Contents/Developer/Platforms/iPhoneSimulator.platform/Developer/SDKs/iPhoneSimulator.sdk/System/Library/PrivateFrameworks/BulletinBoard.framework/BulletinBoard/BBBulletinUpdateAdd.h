//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinUpdateAdd : BBBulletinUpdate
{
    _Bool _shouldPlayLightsAndSirens;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool shouldPlayLightsAndSirens; // @synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3 shouldPlayLightsAndSirens:(_Bool)arg4;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3;

@end

