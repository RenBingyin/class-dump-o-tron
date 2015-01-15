//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZJSONServiceClient.h>

#import "MZWebServiceOperation.h"

@class NSData, NSMutableArray, NSString;

@interface MZLabelServiceClient : MZJSONServiceClient <MZWebServiceOperation>
{
    NSString *_username;
    NSString *_password;
    id <MZWebServiceOperationDelegate> _nonretainedDelegate;
    BOOL _delegateRespondsToStatusUpdate;
    NSMutableArray *_warnings;
    NSData *_token;
}

+ (id)workItem;
+ (id)worker;
+ (BOOL)isErrorResponse:(id)arg1;
+ (id)errorCodeFromResponse:(id)arg1;
+ (id)warningMessagesFromResponse:(id)arg1;
+ (id)errorMessagesFromResponse:(id)arg1;
+ (id)errorMessageFromResponse:(id)arg1;
+ (id)errorFromString:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void)didReceiveResponse;
- (void)willReceiveResponse;
- (void)didSendRequest;
- (void)willSendRequest;
- (id)workItem;
- (id)worker;
- (void)operationDidFinish;
- (void)operationWillStart;
- (id)operationMethod;
- (id)invokeSOAPCall;
- (id)processResult:(id)arg1 message:(id *)arg2;
- (id)processUncancelledSuccessfulResult:(id)arg1;
- (id)completedMessage;
- (id)cancelledMessage;
- (id)runningMessage;
- (id)initialMessage;
- (void)addWarning:(id)arg1;
- (id)warningMessages;
- (id)errorMessages;
- (id)errorMessage;
- (id)generateArguments;
- (id)frameworkVersions;
- (id)application;
- (id)version;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)dealloc;
- (id)init;

@end

