//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface IDSIDQueryMessage : FTIDSMessage <NSCopying>
{
    NSArray *_uris;
    NSString *_subService;
    NSString *_service;
    NSString *_weight;
    NSArray *_responseIdentities;
    NSArray *_responseSessionTokens;
}

@property(copy) NSArray *responseSessionTokens; // @synthesize responseSessionTokens=_responseSessionTokens;
@property(copy) NSArray *responseIdentities; // @synthesize responseIdentities=_responseIdentities;
@property(copy) NSString *weight; // @synthesize weight=_weight;
@property(copy) NSString *service; // @synthesize service=_service;
@property(copy) NSString *subService; // @synthesize subService=_subService;
@property(copy, setter=setURIs:) NSArray *uris; // @synthesize uris=_uris;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (_Bool)hasRequiredKeys:(id *)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (id)dataUsageBundleIdentifier;
- (_Bool)wantsBodySignature;
- (_Bool)wantsHTTPGet;
- (_Bool)wantsManagedRetries;
- (id)additionalMessageHeaders;
- (id)additionalQueryStringParameters;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

