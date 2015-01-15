//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate;

@interface HKWorkoutEvent : NSObject <NSSecureCoding>
{
    long long _type;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_validType:(long long)arg1;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_assertPropertiesValid;
@property(readonly, copy) NSDate *date;
@property(readonly) long long type;
- (id)init;
- (id)_init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

