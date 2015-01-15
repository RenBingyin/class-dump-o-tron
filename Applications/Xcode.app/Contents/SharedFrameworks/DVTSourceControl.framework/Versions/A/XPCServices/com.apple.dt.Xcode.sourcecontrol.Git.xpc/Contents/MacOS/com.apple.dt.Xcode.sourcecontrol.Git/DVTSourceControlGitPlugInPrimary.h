//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTSourceControlXPCPrimary.h"

#import "NSXPCListenerDelegate.h"

@class NSString;

@interface DVTSourceControlGitPlugInPrimary : DVTSourceControlXPCPrimary <NSXPCListenerDelegate>
{
}

- (void)createWorkingCopyFromRepository:(id)arg1 location:(id)arg2 branchAndTagLocations:(id)arg3 localAddress:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)validateAuthenticationOfRemoteRepository:(id)arg1 location:(id)arg2 branchAndTagLocations:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)forceUpdateWorkingCopy:(id)arg1 fromRepository:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_forceUpdateWorkingCopy:(id)arg1 fromRepository:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)filesAndStatusOfWorkingCopy:(id)arg1 withRemoteStatus:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)remoteBranchFromRepository:(id)arg1 forBranch:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_upstreamBranchFromRepository:(id)arg1 forBranch:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)listRemoteRepositoriesForRepository:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)listBranchesOfRepository:(id)arg1 branchAndTagLocations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)headRevisionOfRepository:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)revisionOfLocation:(id)arg1 inRepository:(id)arg2 branchAndTagLocations:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_headRevisionOfRemoteRepository:(id)arg1 andBranches:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)identifierOfRepositoryForWorkingCopy:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)upgradeWorkingCopy:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)baseRevisionOfWorkingCopy:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)currentLocationOfWorkingCopy:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)historyOfWorkingCopy:(id)arg1 fromRevision:(id)arg2 toRevision:(id)arg3 maximumLogItems:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_currentLocationOfRepository:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scanForWorkingCopiesInPotentialWorkingCopies:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scanForWorkingCopiesInFolderPaths:(id)arg1 traversingUp:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sourceControlSystemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_gitSourceControlSystem;
- (id)lastErrorWithCode:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

