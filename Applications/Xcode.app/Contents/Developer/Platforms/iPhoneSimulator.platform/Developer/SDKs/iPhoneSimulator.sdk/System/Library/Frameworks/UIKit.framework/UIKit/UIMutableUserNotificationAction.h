//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIUserNotificationAction.h>

@class NSString;

@interface UIMutableUserNotificationAction : UIUserNotificationAction
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long activationMode;
@property(nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired;
@property(nonatomic, getter=isDestructive) _Bool destructive;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *title;

@end

