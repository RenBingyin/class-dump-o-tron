//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BBBulletin.h"

@interface BBBulletin (SBUIUtilities)
+ (void)killSounds;
- (id)_defaultActionWithFilter:(CDUnknownBlockType)arg1;
- (id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (_Bool)sb_supportsRaiseAction;
- (id)sb_minimalSupplementaryActions;
- (_Bool)sb_shouldSuppressMessageForPrivacy;
- (_Bool)bulletinAlertShouldOverrideQuietMode;
- (CDUnknownBlockType)actionBlockForButton:(id)arg1;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1 withOrigin:(int)arg2;
- (_Bool)_isPushOrLocalNotification;
- (id)_launchURLForAction:(id)arg1 context:(id)arg2;
- (CDUnknownBlockType)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)sb_nonPluginDefaultAction;
- (void)killSound;
- (_Bool)playSound;
@end

