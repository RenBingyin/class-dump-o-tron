//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTSourceControlWorkspaceBlueprint.h"

@interface DVTSourceControlWorkspaceBlueprint (IDEFoundationClassAdditions)
+ (void)blueprintWithWorkspace:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)sourceControlProject;
- (void)setState:(unsigned long long)arg1 forWorkingCopyConfigurationStateDictionary:(id)arg2;
- (unsigned long long)stateForWorkingCopyConfiguration:(id)arg1;
- (void)setState:(unsigned long long)arg1 forRemoteRepository:(id)arg2;
- (unsigned long long)stateForRemoteRepository:(id)arg1;
- (id)workingCopyConfigurationForRemoteRepository:(id)arg1 sourceControlManager:(id)arg2;
- (id)workingCopyConfigurationForWorkingCopy:(id)arg1 origin:(id)arg2 sourceControlManager:(id)arg3;
- (void)saveToWorkspace:(id)arg1 saveLegacy:(BOOL)arg2;
@end

