//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput
{
    AVCaptureDeviceInputInternal *_internal;
}

+ (id)deviceInputWithDevice:(id)arg1 error:(id *)arg2;
+ (id)alloc;
+ (void)initialize;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription *)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (int)_requestCameraRecordPermissionForDevice:(id)arg1;
- (_Bool)_authorizedToUseDevice:(id)arg1;
- (struct OpaqueCMClock *)clock;
- (id)ports;
- (id)notReadyError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
@property(readonly, nonatomic) AVCaptureDevice *device;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;

@end

