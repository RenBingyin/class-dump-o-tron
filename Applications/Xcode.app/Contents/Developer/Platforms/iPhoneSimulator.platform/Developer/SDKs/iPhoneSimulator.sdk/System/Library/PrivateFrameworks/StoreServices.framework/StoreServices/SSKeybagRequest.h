//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding.h"

@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest <SSXPCCoding>
{
    NSNumber *_accountID;
    id _contentIdentifier;
    long long _options;
}

@property(readonly) NSNumber *accountID; // @synthesize accountID=_accountID;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
@property long long keybagOptions; // @synthesize keybagOptions=_options;
@property(copy) id contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (id)accountIdentifier;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

