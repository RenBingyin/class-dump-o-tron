//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSString;

@interface MZWebServiceAuthenticatePurpleProvider : MZITunesProducerServiceClient
{
    NSString *_provider;
}

- (id)provider;
- (id)processUncancelledSuccessfulResult:(id)arg1;
- (void)operationWillStart;
- (id)completedMessage;
- (id)runningMessage;
- (id)initialMessage;
- (id)operationMethod;
- (id)generateArguments;
- (void)dealloc;

@end

