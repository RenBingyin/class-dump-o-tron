//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapServiceTicket.h"

@class GEOBatchRevGeocodeRequest, GEOMapRegion, GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOBatchReverseGeocodeTicket : NSObject <GEOMapServiceTicket>
{
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
    _Bool _shiftLocationsIfNeeded;
}

@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion; // @synthesize resultBoundingRegion=_resultBoundingRegion;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (_Bool)isEqualForHistoryToTicket:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(_Bool)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

