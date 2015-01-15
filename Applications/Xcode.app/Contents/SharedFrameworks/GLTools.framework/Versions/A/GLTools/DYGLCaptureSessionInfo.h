//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYCaptureSessionInfo.h"

@class NSArray;

@interface DYGLCaptureSessionInfo : DYCaptureSessionInfo
{
    BOOL _wasCheckingGLErrors;
    NSArray *_contextsInfo;
    NSArray *_requiredExtensions;
}

+ (id)captureSessionInfoWithCaptureStore:(id)arg1;
@property(readonly, nonatomic) BOOL wasCheckingGLErrors; // @synthesize wasCheckingGLErrors=_wasCheckingGLErrors;
@property(readonly, retain, nonatomic) NSArray *requiredExtensions; // @synthesize requiredExtensions=_requiredExtensions;
@property(readonly, retain, nonatomic) NSArray *contextsInfo; // @synthesize contextsInfo=_contextsInfo;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2;
- (id)contextInfoForContext:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCaptureStore:(id)arg1;

@end

