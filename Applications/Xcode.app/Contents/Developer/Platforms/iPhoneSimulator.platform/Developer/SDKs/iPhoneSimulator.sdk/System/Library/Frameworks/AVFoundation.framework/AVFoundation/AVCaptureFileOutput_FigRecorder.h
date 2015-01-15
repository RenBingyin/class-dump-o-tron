//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput_FigRecorder.h>

@class AVCaptureFileOutputInternal_FigRecorder, NSURL;

@interface AVCaptureFileOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureFileOutputInternal_FigRecorder *_fileOutputInternal;
}

+ (void)initialize;
@property(nonatomic) long long minFreeDiskSpaceLimit;
@property(nonatomic) long long maxRecordedFileSize;
@property(nonatomic) CDStruct_1b6d18a9 maxRecordedDuration;
@property(readonly, nonatomic) long long recordedFileSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
- (void)setPausesRecordingOnInterruption:(_Bool)arg1;
- (_Bool)pausesRecordingOnInterruption;
- (void)resumeRecording;
- (void)pauseRecording;
- (_Bool)isRecordingPaused;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(readonly, nonatomic) NSURL *outputFileURL;
- (void)dealloc;
- (id)init;
- (_Bool)isKindOfClass:(Class)arg1;

@end

