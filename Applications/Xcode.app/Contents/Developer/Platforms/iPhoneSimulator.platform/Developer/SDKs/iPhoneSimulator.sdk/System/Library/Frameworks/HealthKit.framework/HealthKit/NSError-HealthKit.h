//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (HealthKit)
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2;
- (_Bool)hk_isInternalFailureError;
- (_Bool)hk_isInvalidArgumentError;
- (_Bool)hk_isAuthorizationNotDeterminedError;
- (_Bool)hk_isAuthorizationDeniedError;
- (_Bool)hk_isDatabaseAccessibilityError;
@end

