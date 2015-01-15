//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLPreheatItem : NSObject
{
    int _format;
    long long _imageType;
    struct CGSize _optimalSourcePixelSize;
    int _prefetchCount;
    _Bool _heated;
    int _bestFormat;
}

@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property _Bool heated; // @synthesize heated=_heated;
@property(nonatomic) int bestFormat; // @synthesize bestFormat=_bestFormat;
@property(readonly, nonatomic) struct CGSize optimalSourcePixelSize; // @synthesize optimalSourcePixelSize=_optimalSourcePixelSize;
@property(readonly, nonatomic) int format; // @synthesize format=_format;
- (_Bool)hasPrefetchCount;
- (void)resetPrefetchCount;
- (long long)decrementPrefetchCount;
- (long long)incrementPrefetchCount;
- (_Bool)isCancelled;
- (void)cancelPreheatRequest;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)addImageHandler:(CDUnknownBlockType)arg1;
- (id)cachedImageIfAvailable:(_Bool *)arg1;
- (id)cachedImage:(_Bool *)arg1;

@end

