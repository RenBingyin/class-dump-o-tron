//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXHALiveListenController : NSObject
{
    _Bool _isListening;
    _Bool _didInitializeAudioUnit;
    struct OpaqueAudioComponentInstance *_rioUnit;
    struct OpaqueAudioComponentInstance *_mixerUnit;
}

@property(nonatomic) _Bool didInitializeAudioUnit; // @synthesize didInitializeAudioUnit=_didInitializeAudioUnit;
@property(nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
@property(readonly, nonatomic) struct OpaqueAudioComponentInstance *mixerUnit; // @synthesize mixerUnit=_mixerUnit;
@property(readonly, nonatomic) struct OpaqueAudioComponentInstance *rioUnit; // @synthesize rioUnit=_rioUnit;
- (_Bool)stopListeningWithError:(id *)arg1;
- (_Bool)startListeningWithError:(id *)arg1;
- (float)audioLevel;

@end

