//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkBannerItem.h"

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem
{
    BBBulletin *_bulletin;
    SBUISound *_sound;
    unsigned long long _feed;
}

- (id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2;
- (_Bool)_supportsSubActions;
- (id)subActions;
- (id)subActionLabels;
- (id)bbActions;
- (id)_bbDismissAppearance;
- (id)_bbDismissAction;
- (id)sound;
- (id)sourceDate;
- (CDUnknownBlockType)action;
- (_Bool)matchesContext:(id)arg1;
- (long long)defaultActionType;
- (id)categoryImage;
- (id)message;
- (id)subTitle;
- (id)title;
- (void)updateBulletinToInstance:(id)arg1;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2;

@end

