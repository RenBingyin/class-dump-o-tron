//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (IBStringAdditions)
+ (id)stringWithByte:(unsigned char)arg1 encoding:(unsigned long long)arg2;
+ (id)uniqueID;
+ (id)stringWithFormat:(id)arg1 andArrayOfArguments:(id)arg2;
+ (id)stringWithListComponentsJoinedByCommasAndAnd:(id)arg1;
+ (id)stringByJoiningComponents:(id)arg1 withSeparator:(id)arg2;
- (id)rangeOfNumericalSuffix;
- (id)positiveNumericalSuffix;
- (id)ibSmartConnectionComparisonString;
- (id)wordsFromString;
- (long long)numberOfOccurrencesOfString:(id)arg1;
- (id)stringOfUniqueCharactersFromSet:(id)arg1;
- (id)stringByTrimmingWhiteSpace;
- (id)stringByPrependingString:(id)arg1;
- (id)stringByAppendingPathComponents:(id)arg1;
- (long long)caseInsensitiveNumericCompare:(id)arg1;
- (BOOL)hasPathExtension:(id)arg1;
- (id)UTF8Representation;
@end

