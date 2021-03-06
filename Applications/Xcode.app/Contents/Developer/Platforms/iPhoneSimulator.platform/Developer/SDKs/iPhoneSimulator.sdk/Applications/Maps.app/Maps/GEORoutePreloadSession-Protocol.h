//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEORouteMatch, NSString;

@protocol GEORoutePreloadSession <NSObject>
@property(nonatomic) unsigned long long networkQuality;
@property __weak id <GEORoutePreloadSessionDelegate> delegate;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)preloaderLog:(NSString *)arg1;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)stopLoading;
- (void)beginLoading;
- (_Bool)loggingEnabled;
- (_Bool)fullDebuggingEnabled;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)isSufficientlyLoaded;
@end

