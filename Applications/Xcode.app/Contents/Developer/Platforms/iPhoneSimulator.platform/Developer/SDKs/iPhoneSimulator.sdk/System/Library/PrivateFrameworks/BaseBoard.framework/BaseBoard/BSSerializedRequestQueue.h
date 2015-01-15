//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface BSSerializedRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _conditionBlock;
}

@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)_enqueueSerialConditionalRequest:(CDUnknownBlockType)arg1;
- (void)enqueueAsyncRequest:(CDUnknownBlockType)arg1;
- (void)enqueueRequest:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(CDUnknownBlockType)arg3;

@end

