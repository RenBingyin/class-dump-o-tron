//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_source>, NSString;

@interface SpringBoardPendingAlert : NSObject
{
    CDUnknownBlockType _completionBlock;
    NSDictionary *_options;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSString *_viewControllerName;
}

@property(copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)cancelTimeoutTimer;
- (void)dealloc;

@end

