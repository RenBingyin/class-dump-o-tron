//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNFInternalSettingsUtilities : NSObject
{
}

+ (void)setIDSEnvironment:(id)arg1;
+ (id)IDSEnvironment;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (id)currentInternalSettingsBundle;
+ (void)signOutAllAccounts;
+ (void)nukeKeychain;
+ (void)killEverything;
+ (void)killMobileSMS;
+ (void)killMobilePhone;
+ (void)killFaceTime;
+ (void)killMediaServerd;
+ (void)syncImagentLogSettings;
+ (void)killImavagent;
+ (void)killImagent;
+ (void)setViceroyLoggingEnabled:(_Bool)arg1;
+ (_Bool)isViceroyLoggingEnabled;

@end

