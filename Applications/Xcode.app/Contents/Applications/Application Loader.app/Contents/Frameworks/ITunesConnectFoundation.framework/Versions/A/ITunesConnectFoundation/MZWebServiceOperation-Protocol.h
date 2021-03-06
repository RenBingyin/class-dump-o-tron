//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@protocol MZWebServiceOperation <NSObject>
+ (NSError *)errorFromString:(NSString *)arg1;
- (void)setDelegate:(id <MZWebServiceOperationDelegate>)arg1;
- (id <MZWebServiceOperationDelegate>)delegate;
- (NSArray *)warningMessages;
- (NSArray *)errorMessages;
- (void)operationDidFinish;
- (void)operationWillStart;
- (id)invokeSOAPCall;
- (void)cancel;
- (NSError *)processResult:(id)arg1 message:(id *)arg2;
- (NSString *)runningMessage;
- (NSString *)initialMessage;

@optional
- (unsigned long long)requestBytesWritten;
- (unsigned long long)requestLength;
- (unsigned long long)responseBytesRead;
- (long long)expectedResponseLength;
- (void)seriesCompleted;
@end

