//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSIDQueryControllerDelegate.h"

@class NSString;

@interface IMPreferredServiceManager : NSObject <IDSIDQueryControllerDelegate>
{
}

+ (_Bool)isiMessageAvailable;
+ (_Bool)hasActiveiMessageAccount;
+ (_Bool)mmsEnabled;
+ (_Bool)smsEnabled;
+ (id)sharedPreferredServiceManager;
- (void)_handleOperationalAccountsChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_handleConnectionChanged:(id)arg1;
- (void)notifyOfServiceAvailabilityChange;
- (id)preferredServiceForHandles:(id)arg1 newComposition:(_Bool)arg2 error:(char *)arg3 serverCheckCompletionBlock:(CDUnknownBlockType)arg4;
- (id)preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(_Bool)arg3 error:(char *)arg4 serverCheckCompletionBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)__preferrediMessageFallbackServiceForRecipientCount:(long long)arg1 iMessageAvailable:(_Bool)arg2 options:(unsigned long long)arg3 error:(char *)arg4;
- (unsigned long long)__preferredServiceTypeForRecipientCount:(long long)arg1 options:(unsigned long long)arg2 error:(char *)arg3;
- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned long long)arg2 error:(char *)arg3 serverCheckCompletionBlock:(CDUnknownBlockType)arg4;
- (id)_preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(_Bool)arg3 error:(char *)arg4 serverCheckCompletionBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)_optionsForRecipients:(id)arg1 inChat:(id)arg2;
- (unsigned long long)__optionsForChat:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

