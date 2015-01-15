//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@interface NSFileManager (PhotoLibraryAdditions)
- (_Bool)ensureDirectoryExistsAtPath:(id)arg1;
- (_Bool)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (_Bool)removeItemsAtPaths:(id)arg1;
- (id)pathsAtDirectory:(id)arg1 withNameFamily:(id)arg2;
- (_Bool)directoryExistsAtPath:(id)arg1;
- (id)tmpFileForVideoTranscodeWithExtension:(id)arg1;
@end

