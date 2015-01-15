//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer
{
    AVQueuePlayerInternal *_queuePlayer;
}

+ (id)playerWithURL:(id)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)queuePlayerWithItems:(id)arg1;
+ (void)initialize;
- (void)commitModifications;
- (void)beginModifications;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)_enqueueModification:(CDUnknownBlockType)arg1;
- (_Bool)_shouldEnqueueModifications;
- (_Bool)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (void)advanceToNextItem;
- (id)items;
- (void)setActionAtItemEnd:(long long)arg1;
- (long long)_defaultActionAtItemEnd;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

