//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RCGLWaveformViewController;

@protocol RCGLWaveformViewDelegate <NSObject>
- (void)waveformViewController:(RCGLWaveformViewController *)arg1 didChangeToSelectedTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(RCGLWaveformViewController *)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(RCGLWaveformViewController *)arg1;
- (void)waveformViewController:(RCGLWaveformViewController *)arg1 didScrubToTime:(double)arg2 finished:(_Bool)arg3;
@end

