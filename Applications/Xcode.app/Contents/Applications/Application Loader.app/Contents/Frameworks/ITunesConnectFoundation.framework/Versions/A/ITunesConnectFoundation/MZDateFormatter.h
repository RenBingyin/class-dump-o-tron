//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDateFormatter.h"

@interface MZDateFormatter : NSDateFormatter
{
}

+ (id)parseAndFormatDate:(id)arg1 error:(id *)arg2;
+ (id)parseAndFormatDate:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)editingStringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(id *)arg4;
- (BOOL)isDateStringValidWithSeparators:(id)arg1;
- (BOOL)isDateStringAllDecimalsAndLessThanEightInLength:(id)arg1;

@end

