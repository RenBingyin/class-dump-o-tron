//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GeoJSONCoverageRegion.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PolygonGeoRegion : NSObject <GeoJSONCoverageRegion>
{
    CDStruct_c3b9c2ee *_polygon;
    unsigned long long _vertexCount;
}

- (_Bool)_loadWithJSONObject:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (_Bool)coordinateLiesInRegion:(CDStruct_c3b9c2ee)arg1;
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

