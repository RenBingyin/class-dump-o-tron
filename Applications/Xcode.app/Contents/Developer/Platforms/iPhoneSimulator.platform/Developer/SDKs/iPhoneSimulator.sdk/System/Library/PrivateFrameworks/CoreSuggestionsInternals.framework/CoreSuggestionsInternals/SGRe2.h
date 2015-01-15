//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SGRe2 : NSObject
{
    char *_patternString;
    struct RE2 *_pattern;
    NSArray *_subregexps;
    _Bool _isTrivial;
    long long _isTrivialOnceToken;
}

+ (id)convertPerlStyleLiteralToRegexpString:(id)arg1;
- (void).cxx_destruct;
- (id)traceMatchesInString:(id)arg1;
- (id)description;
- (_Bool)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)matchesUtf8:(const char *)arg1;
- (_Bool)matchesString:(id)arg1;
- (_Bool)existsInUtf8:(const char *)arg1;
- (_Bool)existsInString:(id)arg1;
- (_Bool)isTrivial;
- (void)dealloc;
- (id)initWithSubregexps:(id)arg1;
- (id)initWithRegexp:(id)arg1;

@end

