//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface IBOffsetWrapper : NSObject <NSCopying, NSCoding>
{
    double horizontal;
    double vertical;
}

+ (id)offsetWrapperWithUIOffset:(struct UIOffset)arg1;
+ (id)offsetWrapperWithIBOffset:(CDStruct_c3b9c2ee)arg1;
+ (id)zeroOffset;
- (id)description;
- (struct UIOffset)uiOffsetValue;
- (CDStruct_c3b9c2ee)ibOffsetValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHorizontal:(double)arg1 vertical:(double)arg2;

@end

