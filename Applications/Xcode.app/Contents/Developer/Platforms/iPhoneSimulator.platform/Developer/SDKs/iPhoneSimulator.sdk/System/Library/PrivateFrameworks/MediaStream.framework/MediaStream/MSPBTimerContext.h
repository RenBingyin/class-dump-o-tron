//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface MSPBTimerContext : NSObject
{
    _Bool _isValid;
    NSDate *_date;
}

+ (id)contextWithDate:(id)arg1;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (id)init;

@end

