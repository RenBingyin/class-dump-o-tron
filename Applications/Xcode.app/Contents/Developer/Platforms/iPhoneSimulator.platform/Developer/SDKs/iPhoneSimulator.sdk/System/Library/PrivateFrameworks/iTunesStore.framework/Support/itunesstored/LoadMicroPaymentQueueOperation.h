//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class MicroPaymentQueueRequest, MicroPaymentQueueResponse, NSDate, NSString;

@interface LoadMicroPaymentQueueOperation : ISOperation
{
    long long _expectedCount;
    NSDate *_lastQueueCheckDate;
    NSString *_queueCountURLBagKey;
    NSString *_queuePaymentsURLBagKey;
    MicroPaymentQueueRequest *_request;
    MicroPaymentQueueResponse *_response;
}

@property(retain) MicroPaymentQueueResponse *response; // @synthesize response=_response;
@property(copy) MicroPaymentQueueRequest *request; // @synthesize request=_request;
@property(retain) NSString *queuePaymentsURLBagKey; // @synthesize queuePaymentsURLBagKey=_queuePaymentsURLBagKey;
@property(retain) NSString *queueCountURLBagKey; // @synthesize queueCountURLBagKey=_queueCountURLBagKey;
@property(retain) NSDate *lastQueueCheckDate; // @synthesize lastQueueCheckDate=_lastQueueCheckDate;
@property long long expectedCount; // @synthesize expectedCount=_expectedCount;
- (_Bool)_loadPaymentsWithExpectedCount:(long long)arg1 error:(id *)arg2;
- (_Bool)_getQueueCount:(long long *)arg1 error:(id *)arg2;
- (void)run;
- (void)dealloc;

@end

