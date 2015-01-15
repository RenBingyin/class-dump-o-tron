//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "TLServiceAgentInterface.h"

@class NSString;

@interface TLServiceAgent : NSObject <TLServiceAgentInterface, NSXPCListenerDelegate>
{
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_performBlockAffectingUserGeneratedVibrationPatterns:(CDUnknownBlockType)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_postUserGeneratedVibrationPatternsDidChangeNotification;
- (_Bool)_ensureDirectoryContainingUserGeneratedVibrationStoreFileExistsWithError:(id *)arg1;
- (void)removeAllUserGeneratedVibrationPatternsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setUserGeneratedVibrationPatterns:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)retrieveUserGeneratedVibrationPatternsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forPreferenceKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retrieveCurrentTonePreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_connectionHasUserGeneratedVibrationPatternsWriteAccessEntitlement:(id)arg1;
- (_Bool)_connectionHasUserGeneratedVibrationPatternsReadAccessEntitlement:(id)arg1;
- (_Bool)_connectionHasTonePreferencesWriteAccessEntitlement:(id)arg1;
- (_Bool)_connectionHasTonePreferencesReadAccessEntitlement:(id)arg1;
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

