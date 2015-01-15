//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDTokenRegistrationURLRequest : CKDURLRequest
{
    NSData *_token;
    NSString *_bundleID;
    NSString *_apsEnvironmentString;
}

@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (_Bool)requiresTokenRegistration;
- (id)flowControlKey;
- (id)initWithToken:(id)arg1 bundleID:(id)arg2;

@end

