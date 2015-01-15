//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUDataSource.h"

#import "RadioPushNotificationControllerDelegate.h"

@class NSArray, NSString, RURadioPlaybackCoordinator, RadioPushNotificationController;

@interface RURadioDataSource : MPUDataSource <RadioPushNotificationControllerDelegate>
{
    id <RURadioDataSourceDelegate> _delegate;
    NSArray *_featuredStations;
    BOOL _optedInToRadio;
    RadioPushNotificationController *_pushNotificationController;
    NSArray *_stations;
    NSArray *_userStations;
    RURadioPlaybackCoordinator *_playbackCoordinator;
}

+ (void)_updateRadioAvailabilityWithStoreBag:(id)arg1 error:(id)arg2;
+ (void)_reloadRadioAvailability;
+ (void)_storeBagDidLoadNotification:(id)arg1;
+ (void)_networkReachabilityDidChangeNotification:(id)arg1;
+ (void)_accountStoreDidChangeNotification:(id)arg1;
+ (_Bool)isRadioAvailable;
+ (_Bool)isOptedInToRadio;
+ (void)initialize;
@property(retain, nonatomic) RURadioPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(nonatomic) __weak id <RURadioDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadOptedInToRadio;
- (void)_notifyAssistantOfStationChanges;
- (void)_deauthenticate;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *userStations;
- (void)synchronizeStationsAsAutomaticUpdate:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *stations;
- (void)refreshFeaturedStations;
@property(readonly, nonatomic, getter=isOptedInToRadio) _Bool optedInToRadio;
@property(readonly, nonatomic) NSArray *featuredStations;
- (void)deauthenticateIfNecessary;
- (void)checkAcceptedTermsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (void)_invalidateCalculatedEntities;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (id)entities;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithEntityType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

