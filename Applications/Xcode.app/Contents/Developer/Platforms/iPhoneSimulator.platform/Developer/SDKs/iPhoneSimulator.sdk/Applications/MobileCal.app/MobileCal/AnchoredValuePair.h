//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AnchoredValuePair : NSObject
{
    _Bool _layoutShift;
    double _value;
    double _size;
}

+ (id)pairWithValue:(double)arg1 size:(double)arg2 layoutShift:(_Bool)arg3;
@property(nonatomic) _Bool layoutShift; // @synthesize layoutShift=_layoutShift;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double value; // @synthesize value=_value;
- (id)description;
- (id)initWithValue:(double)arg1 size:(double)arg2 layoutShift:(_Bool)arg3;

@end

