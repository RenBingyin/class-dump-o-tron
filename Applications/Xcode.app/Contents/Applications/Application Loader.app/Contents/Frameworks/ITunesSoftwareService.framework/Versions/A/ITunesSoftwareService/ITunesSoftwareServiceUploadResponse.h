//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesSoftwareService/ITunesSoftwareServiceConnectedValidationResponse.h>

#import "ITunesSoftwareServiceUploadResponse.h"

@class NSString;

@interface ITunesSoftwareServiceUploadResponse : ITunesSoftwareServiceConnectedValidationResponse <ITunesSoftwareServiceUploadResponse>
{
    BOOL _uploadFailure;
    NSString *_username;
    NSString *_password;
    NSString *_failureLog;
}

- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)sendUploadFailureToApple;
- (void)setFailureLog:(id)arg1;
- (id)failureLog;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)setUploadFailure:(BOOL)arg1;
- (BOOL)isUploadFailure;
- (void)dealloc;

@end

