//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCCSettingModule.h"

@interface SBCCWiFiSetting : SBCCSettingModule
{
}

+ (id)displayName;
+ (id)identifier;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_updateWifiNotification:(id)arg1;
- (void)_tearDown;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

