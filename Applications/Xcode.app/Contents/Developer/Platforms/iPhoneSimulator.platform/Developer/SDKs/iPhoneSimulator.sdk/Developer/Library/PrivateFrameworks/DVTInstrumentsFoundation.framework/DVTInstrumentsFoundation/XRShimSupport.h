//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURL;

@interface XRShimSupport : NSObject
{
    NSURL *_exposedResources;
    NSOperationQueue *_backgroundQ;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)startTrampolinedDaemonWithDevicePath:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 kickstart:(_Bool)arg5;
- (void)kickstart:(id)arg1;
- (void)addSimShimToEnvironment:(id)arg1;
- (id)_exposedTrampolineURL;
- (id)_exposedLibSimShimURL;
- (id)_trampolineURL;
- (id)_libSimShimURL;
- (void)copyShimsAndTrampolinesTo:(id)arg1;
- (id)init;

@end

