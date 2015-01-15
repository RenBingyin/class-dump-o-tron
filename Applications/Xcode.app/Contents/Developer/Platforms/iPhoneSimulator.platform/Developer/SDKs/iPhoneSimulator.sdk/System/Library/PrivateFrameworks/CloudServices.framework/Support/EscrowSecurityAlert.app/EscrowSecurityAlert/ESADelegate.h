//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EscrowSecurityAlertDelegateProtocol.h"

@class NSString;

@interface ESADelegate : NSObject <EscrowSecurityAlertDelegateProtocol>
{
}

- (int)alertType;
- (_Bool)isNotificationDisabled;
- (_Bool)isNotificationSnoozed;
- (void)cancelAlert;
- (void)prompt:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

