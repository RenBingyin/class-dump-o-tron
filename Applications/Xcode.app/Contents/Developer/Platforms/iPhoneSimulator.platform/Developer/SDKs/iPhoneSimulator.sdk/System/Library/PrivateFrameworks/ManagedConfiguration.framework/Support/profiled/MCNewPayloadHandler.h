//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCPayload, MCProfileHandler, NSArray;

@interface MCNewPayloadHandler : NSObject
{
    MCPayload *_payload;
    MCProfileHandler *_profileHandler;
    NSArray *_userInputResponses;
}

+ (id)prioritizeUserInput:(id)arg1 key:(id)arg2 overField:(id)arg3;
+ (id)promptDictionaryForKey:(id)arg1 title:(id)arg2 description:(id)arg3 retypeDescription:(id)arg4 finePrint:(id)arg5 defaultValue:(id)arg6 placeholderValue:(id)arg7 minimumLength:(unsigned long long)arg8 fieldType:(int)arg9 flags:(int)arg10;
@property(retain, nonatomic) NSArray *userInputResponses; // @synthesize userInputResponses=_userInputResponses;
@property(readonly, nonatomic) __weak MCProfileHandler *profileHandler; // @synthesize profileHandler=_profileHandler;
@property(readonly, retain, nonatomic) MCPayload *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)_temporaryPersistentIDForIdentityUUID:(id)arg1 outError:(id *)arg2;
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;
- (void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2;
- (void)remove;
- (void)unsetAside;
- (void)setAsideWithInstaller:(id)arg1;
- (void)setAside;
- (_Bool)isInstalled;
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)unstageFromInstallationWithInstaller:(id)arg1;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (_Bool)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;
- (id)userInputFields;
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;

@end

