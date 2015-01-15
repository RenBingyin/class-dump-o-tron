//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioChannelLayout, NSDictionary;

@interface AVAudioFormat : NSObject
{
    struct AudioStreamBasicDescription _asbd;
    AVAudioChannelLayout *_layout;
    unsigned long long _commonFormat;
    void *_reserved;
}

+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription *)arg1 channelLayout:(id)arg2;
- (id).cxx_construct;
- (id)description;
@property(readonly, nonatomic) NSDictionary *settings;
@property(readonly, nonatomic, getter=isInterleaved) _Bool interleaved;
@property(readonly, nonatomic) double sampleRate;
@property(readonly, nonatomic) unsigned int channelCount;
@property(readonly, nonatomic) unsigned long long commonFormat;
@property(readonly, nonatomic, getter=isStandard) _Bool standard;
@property(readonly, nonatomic) AVAudioChannelLayout *channelLayout;
@property(readonly, nonatomic) const struct AudioStreamBasicDescription *streamDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(_Bool)arg3 channelLayout:(id)arg4;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned int)arg3 interleaved:(_Bool)arg4;
- (id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2;
- (id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription *)arg1 channelLayout:(id)arg2;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription *)arg1;

@end

