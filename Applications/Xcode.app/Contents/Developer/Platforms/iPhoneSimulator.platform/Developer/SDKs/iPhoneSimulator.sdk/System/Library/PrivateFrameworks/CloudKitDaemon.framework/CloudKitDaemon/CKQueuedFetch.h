//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDClientContext, CKDFetchRecordsOperation, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface CKQueuedFetch : NSObject
{
    _Bool _allowsCellularAccess;
    _Bool _isFinished;
    NSDate *_startDate;
    NSDate *_lastRequestDate;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    long long _scope;
    long long _usesBackgroundSession;
    long long _qos;
    NSMutableDictionary *_completionHandlersByRecordID;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_deviceIdentifier;
    CKDFetchRecordsOperation *_fetchOp;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) CKDFetchRecordsOperation *fetchOp; // @synthesize fetchOp=_fetchOp;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSMutableDictionary *completionHandlersByRecordID; // @synthesize completionHandlersByRecordID=_completionHandlersByRecordID;
@property(nonatomic) long long qos; // @synthesize qos=_qos;
@property(nonatomic) long long usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)start;
- (void)addRequestForRecordID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canBeUsedForOperation:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (int)numberOfCallbacks;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;

@end

