//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKSampleType, NSArray, NSNumber;

@protocol HDDataObserver <NSObject>
- (void)samplesAdded:(NSArray *)arg1 anchor:(NSNumber *)arg2;

@optional
- (void)samplesOfTypeWereRemoved:(HKSampleType *)arg1;
@end

