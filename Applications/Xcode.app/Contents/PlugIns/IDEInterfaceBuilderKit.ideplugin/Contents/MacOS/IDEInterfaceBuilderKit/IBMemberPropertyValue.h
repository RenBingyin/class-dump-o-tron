//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface IBMemberPropertyValue : NSObject <NSCoding>
{
    id _value;
}

+ (id)memberPropertyValueWithValue:(id)arg1;
+ (id)nilValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPropertyValue:(id)arg1;
- (unsigned long long)hash;
- (id)evaluate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

