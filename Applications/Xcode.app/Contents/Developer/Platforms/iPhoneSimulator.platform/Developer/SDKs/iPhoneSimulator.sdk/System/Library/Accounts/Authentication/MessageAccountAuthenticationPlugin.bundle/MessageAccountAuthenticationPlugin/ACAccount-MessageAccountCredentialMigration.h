//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccount.h"

@interface ACAccount (MessageAccountCredentialMigration)
- (_Bool)mf_usesSSL;
- (void *)mf_legacyKeychainProtocol;
- (id)mf_hostname;
- (unsigned int)mf_legacyPortNumberForKeychain;
- (Class)mf_accountClass;
- (void)mf_removeLegacyPasswordInKeychain;
- (id)mf_legacyPasswordFromKeychain;
- (_Bool)mf_migrateCredentialsIfNecessaryWithAccountCredential:(id)arg1;
@end

