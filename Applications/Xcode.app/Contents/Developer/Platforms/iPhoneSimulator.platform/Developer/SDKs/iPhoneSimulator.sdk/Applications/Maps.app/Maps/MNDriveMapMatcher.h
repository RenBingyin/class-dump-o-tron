//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNMapMatcher.h"

@class GEOLocationShifter, NSDate;

__attribute__((visibility("hidden")))
@interface MNDriveMapMatcher : MNMapMatcher
{
    GEOLocationShifter *_locationShifter;
    double _lastKnownSpeed;
    NSDate *_lastVehicleSpeedUpdateTime;
    double _distanceToProject;
}

- (void).cxx_destruct;
- (void)updateLastKnownSpeed:(double)arg1 timestamp:(id)arg2;
- (id)_projectInTunnelFromLocation:(id)arg1 distance:(double)arg2 speed:(double)arg3 timeInterval:(double)arg4;
- (id)projectInTunnelFromLocation:(id)arg1 timeInterval:(double)arg2;
- (id)matchLocation:(id)arg1 alongRoute:(id)arg2 onDate:(id)arg3 activeTransportType:(int)arg4;
- (int)transportType;
- (void)reset;
- (id)initWithRoutePreloadSession:(id)arg1;

@end

