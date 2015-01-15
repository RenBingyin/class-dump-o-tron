//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface TSUWidthLimitedQueue : NSObject
{
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    int mSpinLock;
}

- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)init;

@end

