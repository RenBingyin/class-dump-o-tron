//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDateFormatter.h"

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter
{
    NSString *_template;
}

@property(copy, nonatomic) NSString *template; // @synthesize template=_template;
- (void)updateDateFormat;
- (id)notificationCenter;
- (id)initWithTemplate:(id)arg1;
- (void)dealloc;

@end

