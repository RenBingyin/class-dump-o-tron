//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString, NSURLAuthenticationChallenge;

@interface DownloadSessionProperties : NSObject <NSCopying>
{
    long long _assetID;
    NSURLAuthenticationChallenge *_authenticationChallenge;
    NSString *_clientIdentifier;
    long long _downloadID;
    NSString *_downloadPhase;
    NSNumber *_duetBudget;
    long long _handlerIdentifier;
}

@property(readonly, nonatomic) long long handlerIdentifier; // @synthesize handlerIdentifier=_handlerIdentifier;
@property(copy, nonatomic) NSNumber *duetBudget; // @synthesize duetBudget=_duetBudget;
@property(copy, nonatomic) NSString *downloadPhase; // @synthesize downloadPhase=_downloadPhase;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadID;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSURLAuthenticationChallenge *authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(nonatomic) long long assetIdentifier; // @synthesize assetIdentifier=_assetID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1 handlerIdentifier:(long long)arg2;

@end

