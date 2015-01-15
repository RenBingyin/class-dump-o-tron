//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class CKDClientContext, CKDOperation, NSDate, NSObject<OS_dispatch_group>, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface CKDPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    _Bool _isFinished;
    _Bool _isExecuting;
    NSDate *_startDate;
    CKDOperation *_realOperation;
    NSOperationQueue *_targetOperationQueue;
}

@property(readonly, nonatomic) NSOperationQueue *targetOperationQueue; // @synthesize targetOperationQueue=_targetOperationQueue;
@property(readonly, nonatomic) CKDOperation *realOperation; // @synthesize realOperation=_realOperation;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (void)cancel;
- (_Bool)isConcurrent;
- (void)main;
- (void)start;
@property(readonly, nonatomic) NSString *operationID;
@property(readonly, nonatomic) NSString *sectionID;
@property(readonly, nonatomic) CKDClientContext *context;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;

@end

