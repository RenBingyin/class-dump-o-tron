//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "ISURLOperationDelegate.h"

@class NSString, SSAuthenticationContext, SSURLConnectionResponse, SSURLRequestProperties;

@interface URLConnectionRequestOperation : ISOperation <ISURLOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    long long _mdRetryCount;
    NSString *_mdSyncState;
    SSURLRequestProperties *_properties;
    SSURLConnectionResponse *_response;
    _Bool _sendsResponseForHTTPFailures;
    _Bool _shouldMescalSign;
}

- (_Bool)_shouldSendMachineDataHeadersForProperties:(id)arg1;
- (id)_newStoreURLOperationWithProperties:(id)arg1;
- (id)_newMachineDataOperationWithResponse:(id)arg1;
- (id)_metricsPageEventWithResponse:(id)arg1 performance:(id)arg2;
- (void)_importKeybagFromDictionary:(id)arg1;
- (void)_addKBSyncDataToRequestProperties:(id)arg1 forAccountID:(id)arg2;
- (id)_accountIdentifier;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (_Bool)operation:(id)arg1 processData:(id)arg2 error:(id *)arg3;
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;
- (void)run;
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool shouldMescalSign;
@property _Bool sendsResponseForHTTPFailures;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSURLRequestProperties *requestProperties;
- (void)dealloc;
- (id)initWithRequestProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

