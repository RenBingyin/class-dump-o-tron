//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFAudio/AVAudioNode.h>

@class NSString;

@interface AVAudioUnit : AVAudioNode
{
}

- (float)valueForParam:(unsigned int)arg1;
- (_Bool)setValue:(float)arg1 forParam:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, nonatomic) NSString *manufacturerName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct AudioComponentDescription audioComponentDescription;
@property(readonly, nonatomic) struct OpaqueAudioComponentInstance *audioUnit;
- (_Bool)loadAudioUnitPresetAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;

@end

