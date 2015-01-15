//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CertUITrustManager : NSObject
{
    NSString *_access;
}

+ (id)defaultTrustManager;
+ (void)migrateFromVersionOne;
+ (void)migrateFromVersionZero;
+ (void)_migrateVersionZeroFromAccessGroup:(id)arg1 toGroup:(id)arg2;
- (void).cxx_destruct;
- (void)removeAllTrusts;
- (void)removeSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;
- (void)removeSSLTrust:(struct __SecTrust *)arg1 hostname:(id)arg2 service:(id)arg3;
- (void)addSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;
- (void)addSSLTrust:(struct __SecTrust *)arg1 hostname:(id)arg2 service:(id)arg3;
- (int)actionForSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;
- (int)actionForSSLTrust:(struct __SecTrust *)arg1 hostname:(id)arg2 service:(id)arg3;
- (int)_actionForTrust:(struct __SecTrust *)arg1 exceptions:(id)arg2;
- (id)init;
- (id)initWithAccessGroup:(id)arg1;
- (void)clearSavedTrustSettingsForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
- (void)allowTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 service:(id)arg3;
- (int)actionForTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 andService:(id)arg3;
- (_Bool)_hasExceptionsForSMIMETrust:(struct __SecTrust *)arg1 sender:(id)arg2;

@end

