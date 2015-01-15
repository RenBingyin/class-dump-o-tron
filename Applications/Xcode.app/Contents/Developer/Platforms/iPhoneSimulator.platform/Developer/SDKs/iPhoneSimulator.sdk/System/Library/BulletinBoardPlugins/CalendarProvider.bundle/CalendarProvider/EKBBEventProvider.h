//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarProvider/EKBBDataProvider.h>

@class NSDateFormatter, NSMutableDictionary, NSObject<OS_dispatch_queue>, _EKNotificationMonitor;

@interface EKBBEventProvider : EKBBDataProvider
{
    _EKNotificationMonitor *_notificationMonitor;
    NSMutableDictionary *_notifications;
    NSObject<OS_dispatch_queue> *_invitesQueue;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    _Bool _needsLoad;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)entityScheme;
- (id)modalMessageForAlertInfo:(id)arg1;
- (id)viewButtonTitleForAlertInfo:(id)arg1;
- (id)actionButtonTitleForAlertInfo:(id)arg1;
- (id)emptyModalTitle;
- (void)_setPropertiesOnBulletinRequest:(id)arg1 fromResourceChange:(id)arg2;
- (id)_resourceChangeURIFromBulletin:(id)arg1;
- (id)_expirationDateForResourceChange:(id)arg1;
- (void)_notificationsChanged:(id)arg1;
- (void)_notificationCountChanged:(id)arg1;
- (void)_unalertedNotificationsReceived:(id)arg1;
- (id)_bulletinRequestWithCalendarNotification:(id)arg1;
- (id)_expirationDateForEventInvitation:(id)arg1;
- (void)_addNotification:(id)arg1 replace:(_Bool)arg2;
- (id)_notifications;
- (id)_dateFormatter;
- (void)_reloadIfNeeded;
- (void)_reload;
- (_Bool)_loadNotifications;
- (void)_calendarNotificationSettingChanged;
- (void)_timeZoneChanged:(id)arg1;
- (void)databaseChanged:(id)arg1;
- (id)defaultURLForAlertInfo:(id)arg1;
- (_Bool)allowsLocationAlerts;
- (id)universalSectionIdentifier;
- (unsigned long long)allowedEntityTypes;
- (void)deviceUnlocked;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)defaultSubsectionInfos;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)init;

@end

