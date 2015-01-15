//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding.h"

@class NSString, SSAuthenticationContext, SSLookupProperties;

@interface SSLookupRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
    long long _personalizationStyle;
    SSLookupProperties *_properties;
    long long _resultFilters;
}

@property(nonatomic) long long resultFilters; // @synthesize resultFilters=_resultFilters;
@property(nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_setTimeoutInterval:(id)arg1;
@property(readonly, copy, nonatomic) SSLookupProperties *_lookupProperties;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)start;
- (id)valueForRequestParameter:(id)arg1;
- (void)startWithLookupBlock:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
@property(nonatomic) long long localizationStyle;
@property(copy, nonatomic) NSString *keyProfile;
@property(nonatomic) _Bool authenticatesIfNeeded;
- (void)dealloc;
- (id)initWithLocation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

