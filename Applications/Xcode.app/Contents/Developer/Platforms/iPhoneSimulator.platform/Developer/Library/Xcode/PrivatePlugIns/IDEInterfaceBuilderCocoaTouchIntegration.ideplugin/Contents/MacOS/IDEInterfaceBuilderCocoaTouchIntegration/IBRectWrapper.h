//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface IBRectWrapper : NSObject <NSCoding>
{
    double x;
    double y;
    double width;
    double height;
}

+ (id)rectWrapperWithCGRect:(struct CGRect)arg1;
+ (id)rectWrapperWithNSRect:(struct CGRect)arg1;
- (id)description;
- (struct CGRect)rectValue;
- (struct CGRect)cgRectValue;
- (struct CGRect)nsRectValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;

@end

