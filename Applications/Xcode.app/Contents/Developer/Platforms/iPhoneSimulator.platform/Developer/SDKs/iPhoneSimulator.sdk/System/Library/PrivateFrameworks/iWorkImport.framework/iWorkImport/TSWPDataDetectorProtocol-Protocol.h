//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol TSWPDataDetectorProtocol <NSObject>
+ (NSArray *)scanString:(NSString *)arg1 scanRange:(struct _NSRange)arg2;
+ (struct _NSRange)calculateScanRangeForString:(NSString *)arg1 changedRange:(struct _NSRange)arg2;
+ (NSString *)detectorIdentifier;
@end

