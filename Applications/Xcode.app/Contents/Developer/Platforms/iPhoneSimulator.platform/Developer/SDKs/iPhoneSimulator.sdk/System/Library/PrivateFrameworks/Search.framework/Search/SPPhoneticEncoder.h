//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSNumber, NSString;

@interface SPPhoneticEncoder : NSObject
{
    NSString *_source;
    NSMutableString *_primary;
    NSMutableString *_alternate;
    int _idx;
    NSNumber *_slavoGermanic;
}

- (id)codesForString:(id)arg1;
- (_Bool)isAnyString:(id)arg1 atIndex:(int)arg2;
- (_Bool)isVowelAtIndex:(int)arg1;
- (void)addPrimary:(id)arg1 alternate:(id)arg2;
- (void)add:(id)arg1;
- (_Bool)isSlavoGermanic;

@end

