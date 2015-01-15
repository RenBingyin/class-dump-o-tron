//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCompanionXPCManagerObserver.h"

@class NSString;

@interface SFUnlockManager : NSObject <SFCompanionXPCManagerObserver>
{
}

+ (id)sharedUnlockManager;
- (void)xpcManagerConnectionInterrupted;
- (void)establishStashBagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unlockEnabledWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableUnlockWithDevice:(id)arg1;
- (void)enableUnlockWithDevice:(id)arg1 fromKey:(_Bool)arg2 withPasscode:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
