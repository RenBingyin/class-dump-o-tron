//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGObject.h"

@class NSString;

@interface SGLocation : NSObject <SGObject>
{
    unsigned long long _locationType;
    NSString *_label;
    NSString *_address;
    double _latitude;
    double _longitude;
    double _accuracy;
    double _quality;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isGeocoded) _Bool geocoded;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToLocation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7;
- (id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 quality:(double)arg6;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 accuracy:(double)arg4 quality:(double)arg5;

@end

