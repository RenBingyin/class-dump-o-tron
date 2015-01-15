//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLThumbPersistenceManager.h"

@class NSString;

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager>
{
    int _format;
    struct CGSize _thumbnailSize;
    NSString *_path;
    NSString *_filename;
    _Bool _readOnly;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
}

+ (void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2;
@property(readonly, nonatomic) int imageLength; // @synthesize imageLength=_imageLength;
@property(readonly, nonatomic) int imageRowBytes; // @synthesize imageRowBytes=_imageRowBytes;
@property(readonly, nonatomic) int imageFormat; // @synthesize imageFormat=_format;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_debugDescription;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4;
- (id)imageWithIdentifier:(id)arg1;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (void)setImageDataForEntry:(const void *)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
- (id)thumbnailForImage:(id)arg1 videoDuration:(id)arg2;
@property(readonly, nonatomic) struct CGSize imageSize;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (_Bool)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (void)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (void)_writeData:(id)arg1 forThumbIdentifier:(id)arg2;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (_Bool)usesThumbIdentifiers;
@property(readonly, nonatomic) _Bool isReadOnly;
- (void)dealloc;
@property(readonly, nonatomic) int imageHeight;
@property(readonly, nonatomic) int imageWidth;
@property(readonly, copy) NSString *description;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

