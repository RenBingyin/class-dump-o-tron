//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject
{
    struct _MRContentItem *_mrContentItem;
    MPMediaItemArtwork *_artwork;
}

- (void).cxx_destruct;
- (void)_postItemChangedNotification;
- (struct _MRContentItem *)_mediaRemoteContentItem;
@property(nonatomic) float playbackProgress;
@property(nonatomic, getter=isPlayable) _Bool playable;
@property(nonatomic, getter=isContainer) _Bool container;
@property(retain, nonatomic) MPMediaItemArtwork *artwork;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;
- (void)dealloc;
- (id)_initWithMediaRemoteContentItem:(struct _MRContentItem *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

