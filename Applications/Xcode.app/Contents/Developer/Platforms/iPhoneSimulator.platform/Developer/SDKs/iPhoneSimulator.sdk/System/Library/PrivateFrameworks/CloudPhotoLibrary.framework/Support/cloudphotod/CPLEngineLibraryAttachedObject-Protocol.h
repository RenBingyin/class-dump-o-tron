//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLEngineLibrary, CPLResource, CPLResourceTransferTask, NSError, NSString;

@protocol CPLEngineLibraryAttachedObject <NSObject>
- (NSString *)displayableName;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didCloseWithError:(NSError *)arg2;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 sizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 uploadTask:(CPLResourceTransferTask *)arg2 didFinishWithError:(NSError *)arg3;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 uploadTask:(CPLResourceTransferTask *)arg2 didProgress:(float)arg3;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didStartUploadTask:(CPLResourceTransferTask *)arg2;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didFailBackgroundDownloadOfResource:(CPLResource *)arg2;
- (void)engineLibrary:(CPLEngineLibrary *)arg1 didDownloadResourceInBackground:(CPLResource *)arg2;
- (void)engineLibraryHasChangesInPullQueue:(CPLEngineLibrary *)arg1;
- (_Bool)isLibraryManager;
@end

