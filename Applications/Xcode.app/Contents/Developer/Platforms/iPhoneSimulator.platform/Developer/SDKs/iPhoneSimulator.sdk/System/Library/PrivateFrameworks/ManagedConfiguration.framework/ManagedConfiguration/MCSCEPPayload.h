//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface MCSCEPPayload : MCCertificatePayload
{
    NSString *_URLString;
    NSString *_CAInstanceName;
    NSString *_challenge;
    NSArray *_subject;
    unsigned long long _keySize;
    int _usageFlags;
    NSData *_CAFingerprint;
    NSArray *_CACaps;
    NSDictionary *_subjectAltName;
    unsigned long long _retries;
    unsigned long long _retryDelay;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) unsigned long long retryDelay; // @synthesize retryDelay=_retryDelay;
@property(readonly, nonatomic) unsigned long long retries; // @synthesize retries=_retries;
@property(readonly, retain, nonatomic) NSDictionary *subjectAltName; // @synthesize subjectAltName=_subjectAltName;
@property(readonly, retain, nonatomic) NSArray *CACaps; // @synthesize CACaps=_CACaps;
@property(readonly, retain, nonatomic) NSData *CAFingerprint; // @synthesize CAFingerprint=_CAFingerprint;
@property(readonly, nonatomic) int usageFlags; // @synthesize usageFlags=_usageFlags;
@property(readonly, nonatomic) unsigned long long keySize; // @synthesize keySize=_keySize;
@property(readonly, retain, nonatomic) NSArray *subject; // @synthesize subject=_subject;
@property(readonly, retain, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(readonly, retain, nonatomic) NSString *CAInstanceName; // @synthesize CAInstanceName=_CAInstanceName;
@property(readonly, retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)stubDictionary;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (struct __SecCertificate *)copyCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (_Bool)isIdentity;
- (_Bool)isRoot;

@end

