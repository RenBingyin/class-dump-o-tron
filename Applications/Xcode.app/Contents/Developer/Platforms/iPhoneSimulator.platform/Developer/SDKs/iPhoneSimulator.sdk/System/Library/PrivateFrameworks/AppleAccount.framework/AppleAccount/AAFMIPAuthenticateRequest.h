//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAFMIPAuthenticateRequest : AARequest
{
    ACAccount *_account;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAccount:(id)arg1;
- (id)urlString;

@end

