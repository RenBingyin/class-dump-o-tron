//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar
{
    CalDiagInboxCollectionSync *_inboxCollectionSyncDiagnostics;
}

@property(retain, nonatomic) CalDiagInboxCollectionSync *inboxCollectionSyncDiagnostics; // @synthesize inboxCollectionSyncDiagnostics=_inboxCollectionSyncDiagnostics;
- (void).cxx_destruct;
- (void)recordDiagnosticsForAccountSync:(id)arg1;
- (_Bool)deleteResourcesAtURLs:(id)arg1;
- (_Bool)_removeInvitationWithURL:(id)arg1;
- (_Bool)updateResourcesFromServer:(id)arg1;
- (id)etagsForItemURLs:(id)arg1;
- (void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3;
- (void *)_copyEventActionWithURL:(id)arg1;
- (id)allItemURLs;
- (_Bool)isScheduleInbox;
- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 principal:(id)arg3 title:(id)arg4;

@end

