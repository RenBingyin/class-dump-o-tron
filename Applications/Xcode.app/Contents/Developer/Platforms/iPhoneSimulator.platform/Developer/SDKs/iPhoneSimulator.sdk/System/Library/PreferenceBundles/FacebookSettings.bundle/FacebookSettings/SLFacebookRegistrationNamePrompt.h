//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SLFacebookRegistrationInfoPrompt.h"

@class NSString;

@interface SLFacebookRegistrationNamePrompt : SLFacebookRegistrationInfoPrompt
{
    NSString *_firstName;
    NSString *_lastName;
    _Bool _lastNameOnTop;
}

- (void).cxx_destruct;
- (_Bool)validate;
- (_Bool)isReadyToValidate;
- (void)updateRegistrationInfo;
- (id)lastNameWithSpecifier:(id)arg1;
- (void)setLastName:(id)arg1 withSpecifier:(id)arg2;
- (id)firstNameWithSpecifier:(id)arg1;
- (void)setFirstName:(id)arg1 withSpecifier:(id)arg2;
- (id)specifiers;
- (id)initWithRegistrationInfo:(id)arg1;

@end
