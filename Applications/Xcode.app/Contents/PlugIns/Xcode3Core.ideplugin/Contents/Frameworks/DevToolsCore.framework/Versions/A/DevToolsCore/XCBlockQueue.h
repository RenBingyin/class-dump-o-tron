//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface XCBlockQueue : NSObject
{
    NSString *_identifier;
    NSMutableArray *_blocks;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _condition;
    unsigned long long _maxNumThreads;
    unsigned long long _numBeingProcessed;
}

+ (id)defaultQueue;
- (void).cxx_destruct;
- (void)removeAllBlocks;
- (void)removeBlock:(CDUnknownBlockType)arg1;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (void)_processBlocksInThreadSlotNumber:(id)arg1;
- (void)_processNextBlockInThreadSlotNumber:(unsigned long long)arg1;
- (void)setMaximumNumberOfConcurrentBlocks:(unsigned long long)arg1;
- (unsigned long long)maximumNumberOfConcurrentBlocks;
- (unsigned long long)count;
- (id)identifier;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

