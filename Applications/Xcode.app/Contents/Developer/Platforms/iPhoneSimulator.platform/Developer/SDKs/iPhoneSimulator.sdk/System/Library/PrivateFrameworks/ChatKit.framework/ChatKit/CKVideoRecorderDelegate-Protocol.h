//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKVideoRecorder, NSData, NSError, NSURL;

@protocol CKVideoRecorderDelegate <NSObject>
- (void)ckVideoRecorder:(CKVideoRecorder *)arg1 imageDataCaptured:(NSData *)arg2 error:(NSError *)arg3;
- (void)ckVideoRecorder:(CKVideoRecorder *)arg1 videoCaptured:(NSURL *)arg2 error:(NSError *)arg3;
- (void)ckVideoRecorderRecordingCanceled:(CKVideoRecorder *)arg1;
@end

