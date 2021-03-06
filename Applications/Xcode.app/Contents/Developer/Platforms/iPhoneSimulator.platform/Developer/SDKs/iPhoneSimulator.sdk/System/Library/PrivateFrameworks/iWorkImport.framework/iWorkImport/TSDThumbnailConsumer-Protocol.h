//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSUImage;

@protocol TSDThumbnailConsumer <NSObject>
- (void)updateThumbnail:(TSUImage *)arg1 identifier:(id <TSDThumbnailIdentifier>)arg2 continueThumbnailing:(_Bool)arg3;
- (id <TSDThumbnailIdentifier>)nextThumbnailIdentifier;

@optional
- (_Bool)shouldCallCommit;
- (void)commitThumbnail:(TSUImage *)arg1 identifier:(id <TSDThumbnailIdentifier>)arg2;
@end

