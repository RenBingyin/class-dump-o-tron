//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "NSCoding.h"

@class NSString;

@interface IBEdgeInsetsWrapper : NSObject <NSCoding, IBBinaryArchiving>
{
    double _top;
    double _left;
    double _bottom;
    double _right;
}

+ (id)edgeInsetsWrapperWithIBEdgeInsets:(CDStruct_c519178c)arg1;
+ (id)zeroEdgeInsets;
@property(readonly, nonatomic) double right; // @synthesize right=_right;
@property(readonly, nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(readonly, nonatomic) double left; // @synthesize left=_left;
@property(readonly, nonatomic) double top; // @synthesize top=_top;
@property(readonly, copy) NSString *description;
- (CDStruct_c519178c)ibEdgeInsetsValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 bottom:(double)arg2 left:(double)arg3 right:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

