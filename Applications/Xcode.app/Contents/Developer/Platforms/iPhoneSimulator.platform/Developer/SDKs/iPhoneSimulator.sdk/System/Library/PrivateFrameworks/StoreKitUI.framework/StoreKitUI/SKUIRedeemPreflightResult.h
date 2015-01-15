//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SKUIClientContext, SKUIRedeemConfiguration, SSAccount, SSVRedeemCodeMetadata;

@interface SKUIRedeemPreflightResult : NSObject
{
    SSAccount *_account;
    SKUIClientContext *_clientContext;
    SSVRedeemCodeMetadata *_codeMetadata;
    NSError *_error;
    SKUIRedeemConfiguration *_redeemConfiguration;
    long long _resultType;
}

@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration; // @synthesize redeemConfiguration=_redeemConfiguration;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SSVRedeemCodeMetadata *codeMetadata; // @synthesize codeMetadata=_codeMetadata;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SSAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;

@end

