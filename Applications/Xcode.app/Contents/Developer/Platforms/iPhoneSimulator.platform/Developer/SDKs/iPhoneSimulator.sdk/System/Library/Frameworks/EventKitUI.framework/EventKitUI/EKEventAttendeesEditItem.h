//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@class EKParticipant, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditItem : EKEventEditItem
{
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    long long _numberOfConflicts;
}

- (void).cxx_destruct;
- (_Bool)editItemViewControllerCommit:(id)arg1;
- (_Bool)forceRefreshInviteesItemOnCommit;
- (_Bool)forceRefreshStartAndEndDatesOnCommit;
- (_Bool)forceTableReloadOnCommit;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)requiresReconfigurationOnCommit;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (id)init;

@end

