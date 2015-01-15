//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNRouteManager;

__attribute__((visibility("hidden")))
@interface MNRouteLoader : NSObject
{
    MNRouteManager *_routeManager;
}

@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
- (void).cxx_destruct;
- (void)loadMaxRoutes:(unsigned int)arg1 timepoint:(CDStruct_191b847f *)arg2 errorHandler:(CDUnknownBlockType)arg3 recordTrace:(_Bool)arg4;
- (id)initWithDirectionsFrom:(id)arg1 to:(id)arg2 mapRegion:(id)arg3 type:(int)arg4 fromCurrentLocation:(_Bool)arg5 preloadRoutes:(_Bool)arg6 allowAlternateTypes:(_Bool)arg7 routeHandle:(id)arg8 tracePlayer:(id)arg9 withFeedback:(id)arg10;

@end

