//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSCalendar;

@interface ICSDocument : NSObject
{
    ICSCalendar *_calendar;
}

+ (void)suppressParserSyntaxErrorLogging;
+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1;
- (_Bool)validate:(id *)arg1;
- (id)ICSChecksumForVersion:(int)arg1;
- (id)ICSChecksumStringForVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (id)ICSDataWithOptions:(unsigned long long)arg1;
- (id)calendar;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

