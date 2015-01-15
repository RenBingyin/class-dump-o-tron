//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXAccessQueue, NSString, VOTOutputAction;

@interface VOTSound : NSObject
{
    VOTOutputAction *_action;
    struct OpaqueAudioFileID *_audioFileID;
    struct OpaqueAudioComponentInstance *_audioUnit;
    unsigned int _soundID;
    id _delegate;
    id _owner;
    CDUnknownBlockType _completionBlock;
    _Bool _soundCompletionInstalled;
    NSString *_soundPath;
    _Bool _isPlaying;
    AXAccessQueue *_soundAccessQueue;
}

@property(nonatomic) AXAccessQueue *soundAccessQueue; // @synthesize soundAccessQueue=_soundAccessQueue;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)play;
- (void)stop;
- (void)_finishedPlaying;
- (id)action;
- (void)setAction:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setVolume:(float)arg1;
- (id)soundPath;
- (id)initWithSoundPath:(id)arg1;

@end

