//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVRoute, NSArray, NSMutableArray, NSString;

@interface MPAVRoutingController : NSObject
{
    NSArray *_cachedRoutes;
    MPAVRoute *_cachedPickedRoute;
    NSMutableArray *_asyncFetchingCompletionHandlers;
    _Bool _asyncFetchingRoutes;
    long long _externalScreenType;
    _Bool _hasExternalScreenType;
    _Bool _scheduledSendDelegateRoutesChanged;
    _Bool _pickedRouteHasVolumeControl;
    _Bool _hasVolumeControlInfoForPickedRoute;
    int _deviceAvailabilityNotifyToken;
    _Bool _deviceAvailabilityOverrideState;
    id <MPAVRoutingControllerDelegate> _delegate;
    NSString *_name;
    long long _discoveryMode;
    NSString *_category;
}

@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <MPAVRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_updateCachedRoutes;
- (void)_setExternalScreenType:(long long)arg1;
- (id)_parseAVRouteDescriptions:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)logCurrentRoutes;
- (void)clearCachedRoutes;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (_Bool)routeOtherThanHandsetAndSpeakerAvailable;
- (_Bool)routeOtherThanHandsetAvailable;
- (_Bool)wirelessDisplayRoutesAvailable;
- (_Bool)airtunesRouteIsPicked;
- (_Bool)wirelessDisplayRouteIsPicked;
- (_Bool)receiverRouteIsPicked;
- (_Bool)handsetRouteIsPicked;
- (_Bool)speakerRouteIsPicked;
- (_Bool)pickSpeakerRoute;
- (_Bool)pickHandsetRoute;
- (_Bool)pickBestDeviceRoute;
- (_Bool)pickRoute:(id)arg1 withPassword:(id)arg2;
- (_Bool)pickRoute:(id)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool volumeControlIsAvailable;
@property(readonly, nonatomic) MPAVRoute *pickedRoute;
@property(readonly, nonatomic) long long externalScreenType;
@property(readonly, copy, nonatomic) NSArray *availableRoutes;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;

@end

