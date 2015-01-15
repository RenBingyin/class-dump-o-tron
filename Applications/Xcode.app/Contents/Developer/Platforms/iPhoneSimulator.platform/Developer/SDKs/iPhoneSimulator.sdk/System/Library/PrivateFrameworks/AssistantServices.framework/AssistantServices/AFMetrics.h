//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface AFMetrics : NSObject <NSSecureCoding>
{
    NSString *_originalCommandId;
    long long _category;
    NSNumber *_duration;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *originalCommandId; // @synthesize originalCommandId=_originalCommandId;
- (void).cxx_destruct;
- (id)description;
- (id)categoryString;
- (double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2;
- (id)aceMetrics;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

