//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPMediaPlaylist.h"

@class MPMediaItem;

@interface MPMediaPlaylist (MusicAdditions)
+ (id)activeGeniusPlaylist;
- (void)generateGeniusArtworkWithImageSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2 queue:(id)arg3;
@property(readonly, nonatomic, getter=music_seedItem) MPMediaItem *music_seedItem;
@end

