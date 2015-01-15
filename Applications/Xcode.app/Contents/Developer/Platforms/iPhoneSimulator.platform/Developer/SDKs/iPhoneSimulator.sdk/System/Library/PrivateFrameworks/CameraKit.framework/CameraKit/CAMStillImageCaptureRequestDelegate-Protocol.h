//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMCaptureController, CAMStillImageCaptureRequest, CAMStillImageCaptureResponse, NSError;

@protocol CAMStillImageCaptureRequestDelegate <NSObject>

@optional
- (void)captureController:(CAMCaptureController *)arg1 didFinishWriteForResponse:(CAMStillImageCaptureResponse *)arg2 forStillImageRequest:(CAMStillImageCaptureRequest *)arg3 error:(NSError *)arg4;
- (void)captureController:(CAMCaptureController *)arg1 didCompleteResponse:(CAMStillImageCaptureResponse *)arg2 forStillImageRequest:(CAMStillImageCaptureRequest *)arg3 error:(NSError *)arg4;
- (void)captureController:(CAMCaptureController *)arg1 didGenerateResponse:(CAMStillImageCaptureResponse *)arg2 forStillImageRequest:(CAMStillImageCaptureRequest *)arg3 error:(NSError *)arg4;
- (void)captureController:(CAMCaptureController *)arg1 didCaptureStillImageForRequest:(CAMStillImageCaptureRequest *)arg2;
- (void)captureController:(CAMCaptureController *)arg1 willCaptureStillImageForRequest:(CAMStillImageCaptureRequest *)arg2;
@end

