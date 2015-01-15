//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroupDelegate.h"

@class CoreDAVRecursiveContainerSyncTaskGroup, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@protocol CoreDAVLocalDBTreeInfoProvider <CoreDAVTaskGroupDelegate>
- (void)notePutToURL:(NSURL *)arg1 withDataPayload:(NSData *)arg2 finishedWithIgnoredError:(NSError *)arg3;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 completedFullSyncWithNewCTag:(NSString *)arg2 newPTag:(NSString *)arg3 newSyncToken:(NSString *)arg4 error:(NSError *)arg5;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 completedSyncOfFolderWithURL:(NSURL *)arg2 newCTag:(NSString *)arg3 newPTag:(NSString *)arg4 addedOrModified:(NSSet *)arg5 removed:(NSSet *)arg6 error:(NSError *)arg7;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 retrievedAddedOrModifiedActions:(NSSet *)arg2 removed:(NSSet *)arg3;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg1 receivedAddedOrModifiedFolder:(id)arg2;
- (_Bool)setLocalETag:(NSString *)arg1 forItemWithURL:(NSURL *)arg2;
- (NSSet *)copyAllLocalURLsInFolderWithURL:(NSURL *)arg1;
- (NSDictionary *)copyLocalETagsForURLs:(NSArray *)arg1;
- (_Bool)getCTag:(id *)arg1 pTag:(id *)arg2 forFolderWithURL:(NSURL *)arg3;
@end

