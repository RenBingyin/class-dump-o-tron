//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DDURLifier : NSObject
{
}

+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner *)arg2 phoneNumberTypes:(unsigned long long)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5;
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner *)arg2 phoneNumberTypes:(unsigned long long)arg3;
+ (_Bool)urlIfyNode:(id)arg1;
+ (_Bool)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (_Bool)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3;
+ (id)urlMatchesForString:(id)arg1 usingScanner:(struct __DDScanner *)arg2 withPhoneNumberTypes:(unsigned long long)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6;
+ (id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (id)urlMatchesForString:(id)arg1 includingTel:(_Bool)arg2;
+ (id)urlMatchesForString:(id)arg1;
+ (void)initialize;

@end

