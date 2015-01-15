//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVCaptureDeviceControlRequest : NSObject
{
    CDUnknownBlockType _completionBlock;
    int _requestID;
    int _errorCode;
}

+ (id)deviceControlRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (id)_initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

