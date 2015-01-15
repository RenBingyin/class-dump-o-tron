//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDAccountAuthenticationPlugin.h"

@class NSString;

@interface MessageAccountAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>
{
}

- (_Bool)_clientIsEntitled:(id)arg1;
- (void)_logWithAccount:(id)arg1 level:(int)arg2 reason:(id)arg3 message:(id)arg4;
- (id)_promptBundleIdentifierWhitelistWithAccount:(id)arg1;
- (id)_passwordPromptMessageWithAccount:(id)arg1;
- (id)_passwordPromptTitleWithCredential:(id)arg1;
- (void)_showPasswordPromptWithAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_verifyAccount:(id)arg1 error:(id *)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (_Bool)isPushSupportedForAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

