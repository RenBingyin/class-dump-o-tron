//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSNumber;

@interface DaemonBiometricRegisterAccountOperation : ISOperation
{
    NSNumber *_accountID;
}

- (_Bool)_shouldPromptForPinCode;
- (id)_newSourceByStartingTimeoutTimer;
- (void)run;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;

@end

