//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, NSDictionary;

@interface AARegisterDeviceRequest : AARequest
{
    ACAccount *_account;
    NSDictionary *_deviceProperties;
}

- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 deviceProperties:(id)arg2;

@end

