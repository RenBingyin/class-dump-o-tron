//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MZRegularExpression : NSObject
{
    NSString *_expression;
    void *_opaque1;
    unsigned int _options;
}

+ (id)regexWithExpression:(id)arg1 error:(id *)arg2;
+ (id)compileExpression:(id)arg1 toPcre:(struct real_pcre **)arg2;
+ (void)initialize;
- (id)description;
- (BOOL)error:(id *)arg1 reason:(id)arg2 description:(id)arg3 code:(int)arg4;
- (BOOL)matchInString:(id)arg1 startIndex:(int)arg2 namedMatches:(id *)arg3 error:(id *)arg4;
- (BOOL)matchInString:(id)arg1 startIndex:(int)arg2 namedMatches:(id *)arg3 range:(struct _NSRange *)arg4 error:(id *)arg5;
- (BOOL)matchInString:(id)arg1 startIndex:(int)arg2 offsets:(int *)arg3 offsetCount:(int)arg4 error:(id *)arg5;
- (id)preprocessInputString:(id)arg1 delta:(unsigned long long *)arg2;
- (BOOL)matchInString:(id)arg1 startIndex:(int)arg2 range:(struct _NSRange *)arg3 error:(id *)arg4;
- (unsigned int)options;
- (void)setOptions:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithExpression:(id)arg1 error:(id *)arg2;

@end

