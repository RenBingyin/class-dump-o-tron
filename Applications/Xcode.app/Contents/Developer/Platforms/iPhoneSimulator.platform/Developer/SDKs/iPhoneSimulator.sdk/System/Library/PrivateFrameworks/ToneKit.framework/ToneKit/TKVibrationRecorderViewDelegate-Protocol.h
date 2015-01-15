//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TKVibrationRecorderView;

@protocol TKVibrationRecorderViewDelegate <NSObject>
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (_Bool)vibrationRecorderViewDidEnterRecordingMode:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
@end

