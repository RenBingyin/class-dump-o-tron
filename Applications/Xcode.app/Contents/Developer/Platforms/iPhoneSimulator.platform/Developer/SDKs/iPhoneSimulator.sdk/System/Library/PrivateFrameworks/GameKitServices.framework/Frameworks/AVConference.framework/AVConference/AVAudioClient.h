//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioDeviceList;

@interface AVAudioClient : NSObject
{
    AVAudioDeviceList *deviceList;
}

+ (id)defaultInputDevice;
+ (_Bool)setInputDevice:(id)arg1;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (void)stopAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;
+ (void)startAudioSession;
+ (void)initializeAudioSessionQ;
@property(retain, nonatomic) AVAudioDeviceList *deviceList; // @synthesize deviceList;
- (id)outputDevices;
- (id)inputDevices;
- (id)devices;
@property(nonatomic) CDUnknownBlockType changeListener;
- (void)dealloc;
- (id)init;

@end

