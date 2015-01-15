//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSUUID;

@interface RTRoute : NSObject <NSSecureCoding>
{
    NSArray *_waypoints;
    NSData *_zilchPoints;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
- (void).cxx_destruct;
- (void)updateWithNewZilchPoints:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithWaypoints:(id)arg1 andZilchPoints:(id)arg2;

@end

