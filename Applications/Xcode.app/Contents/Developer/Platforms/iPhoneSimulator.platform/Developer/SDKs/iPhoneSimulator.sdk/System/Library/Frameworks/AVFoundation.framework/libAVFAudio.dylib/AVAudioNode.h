//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioMixing.h"

@class AVAudioEngine, AVAudioTime, NSString;

@interface AVAudioNode : NSObject <AVAudioMixing>
{
    void *_impl;
}

- (float)occlusion;
- (void)setOcclusion:(float)arg1;
- (float)obstruction;
- (void)setObstruction:(float)arg1;
- (struct AVAudio3DPoint)position;
- (void)setPosition:(struct AVAudio3DPoint)arg1;
- (float)reverbBlend;
- (void)setReverbBlend:(float)arg1;
- (float)rate;
- (void)setRate:(float)arg1;
- (long long)renderingAlgorithm;
- (void)setRenderingAlgorithm:(long long)arg1;
- (float)pan;
- (void)setPan:(float)arg1;
@property(nonatomic) float volume;
- (struct OpaqueAudioComponentInstance *)audioUnit;
- (struct AVAudioNodeImplBase *)impl;
- (void)removeTapOnBus:(unsigned long long)arg1;
- (void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setNumberOfInputs:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long numberOfOutputs;
@property(readonly, nonatomic) unsigned long long numberOfInputs;
@property(readonly, nonatomic) AVAudioEngine *engine;
@property(readonly, nonatomic) AVAudioTime *lastRenderTime;
- (id)clock;
- (void)reset;
- (id)nameForOutputBus:(unsigned long long)arg1;
- (id)nameForInputBus:(unsigned long long)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (void)didAttachToEngine:(id)arg1;
- (id)inputFormatForBus:(unsigned long long)arg1;
- (_Bool)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (id)outputFormatForBus:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithImpl:(struct AVAudioNodeImplBase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

