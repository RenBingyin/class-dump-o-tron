//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSXPCCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSNumber, NSString, NSURL, SSAccount;

@interface HSConnectionConfiguration : NSObject <HSXPCCoding, NSSecureCoding, NSCopying, NSMutableCopying>
{
    SSAccount *_account;
    NSDictionary *_urlBag;
    NSURL *_baseURL;
    NSString *_buildIdentifier;
    NSString *_purchaseClientIdentifier;
    NSDictionary *_cookieHeaders;
    NSString *_userAgent;
    long long _requestReason;
    NSNumber *_familyMemberStoreID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *familyMemberStoreID; // @synthesize familyMemberStoreID=_familyMemberStoreID;
@property(readonly, nonatomic) long long requestReason; // @synthesize requestReason=_requestReason;
@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSDictionary *cookieHeaders; // @synthesize cookieHeaders=_cookieHeaders;
@property(readonly, nonatomic) NSString *purchaseClientIdentifier; // @synthesize purchaseClientIdentifier=_purchaseClientIdentifier;
@property(readonly, nonatomic) NSString *buildIdentifier; // @synthesize buildIdentifier=_buildIdentifier;
@property(readonly, nonatomic) NSDictionary *urlBag; // @synthesize urlBag=_urlBag;
@property(readonly, nonatomic) SSAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *baseURL;
- (id)_dictonaryFromXPCDictonary:(id)arg1;
- (id)_copyXPCDictonaryFromDictonary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

