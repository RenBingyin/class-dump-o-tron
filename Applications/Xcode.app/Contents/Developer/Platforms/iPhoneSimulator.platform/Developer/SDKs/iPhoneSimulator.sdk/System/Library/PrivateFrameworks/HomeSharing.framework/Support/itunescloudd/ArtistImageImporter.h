//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface ArtistImageImporter : NSObject
{
    NSOperationQueue *_operationQueue;
}

+ (id)allArtistImagesMapCacheFilePathURL;
- (void).cxx_destruct;
- (id)_fetchAndCacheLatestAllArtistImagesMap;
- (id)_latestAllArtistImagesMap;
- (id)_libraryMatchURL;
- (void)_updateArtistHeroImagesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_addOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)updateArtistImagesIgnoringLastImportDate:(_Bool)arg1 WithCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

