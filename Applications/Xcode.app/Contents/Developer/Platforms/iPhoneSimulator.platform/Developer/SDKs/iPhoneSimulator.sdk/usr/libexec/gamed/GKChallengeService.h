//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKService.h"

#import "GKChallengeService.h"

@class NSString;

@interface GKChallengeService : GKService <GKChallengeService>
{
}

+ (unsigned long long)requiredEntitlements;
+ (Class)interfaceClass;
- (oneway void)abortChallenges:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)issueChallenge:(id)arg1 toPlayers:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;
- (void)_determineCompatibleGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;
- (id)_filterChallenges:(id)arg1 compatibleWithBundleID:(id)arg2;
- (void)_updatePlayersForChallenges:(id)arg1 dispatchGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

