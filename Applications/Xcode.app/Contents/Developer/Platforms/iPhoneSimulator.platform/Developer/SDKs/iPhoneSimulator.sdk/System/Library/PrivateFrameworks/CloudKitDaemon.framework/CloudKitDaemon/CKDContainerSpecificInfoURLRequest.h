//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDContainerInfo, NSString;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    _Bool _needUserID;
    NSString *_containerIdentifier;
    CKDContainerInfo *_containerInfo;
}

@property(copy, nonatomic) CKDContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) _Bool needUserID; // @synthesize needUserID=_needUserID;
- (void).cxx_destruct;
- (void)requestDidParseJSONObject:(id)arg1;
- (id)additionalHeaderValues;
- (_Bool)hasRequestBody;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (_Bool)allowsAuthedAccount;
- (_Bool)allowsAnonymousAccount;
- (_Bool)requiresSignature;
- (_Bool)requiresDeviceID;
- (_Bool)requiresConfiguration;
- (id)initWithContainerIdentifier:(id)arg1;

@end

