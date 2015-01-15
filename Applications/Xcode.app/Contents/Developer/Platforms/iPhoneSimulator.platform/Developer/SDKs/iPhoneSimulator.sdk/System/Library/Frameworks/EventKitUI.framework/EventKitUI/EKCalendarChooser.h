//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class EKCalendar, EKEventStore, EKSource, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, UIRefreshControl, UITableView, _UIAccessDeniedView;

@interface EKCalendarChooser : UIViewController
{
    _Bool _disableCalendarEditing;
    _Bool _showsDeclinedEventsSetting;
    _Bool _showDetailAccessories;
    int _style;
    int _chooserMode;
    CDStruct_a7a51b3b _flags;
    NSMutableSet *_selectedCalendars;
    id <EKCalendarChooserDelegate> _delegate;
    unsigned long long _entityType;
    long long _lastAuthorizationStatus;
    EKEventStore *_eventStore;
    UITableView *_tableView;
    NSMutableArray *_groups;
    NSMutableDictionary *_storeGroupMap;
    NSMutableDictionary *_customGroupMap;
    NSIndexPath *_checkedRow;
    id <EKStyleProvider> _styleProvider;
    EKSource *_limitedToSource;
    _UIAccessDeniedView *_accessDeniedView;
    long long _refreshCounter;
    UIRefreshControl *_refreshControl;
}

@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) long long refreshCounter; // @synthesize refreshCounter=_refreshCounter;
@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) EKSource *limitedToSource; // @synthesize limitedToSource=_limitedToSource;
@property(nonatomic) CDStruct_a7a51b3b flags; // @synthesize flags=_flags;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) NSIndexPath *checkedRow; // @synthesize checkedRow=_checkedRow;
@property(retain, nonatomic) NSMutableDictionary *customGroupMap; // @synthesize customGroupMap=_customGroupMap;
@property(retain, nonatomic) NSMutableDictionary *storeGroupMap; // @synthesize storeGroupMap=_storeGroupMap;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(nonatomic) long long lastAuthorizationStatus; // @synthesize lastAuthorizationStatus=_lastAuthorizationStatus;
@property(nonatomic) unsigned long long entityType; // @synthesize entityType=_entityType;
@property(nonatomic) _Bool showDetailAccessories; // @synthesize showDetailAccessories=_showDetailAccessories;
@property(nonatomic) _Bool showsDeclinedEventsSetting; // @synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting;
@property(nonatomic) _Bool disableCalendarEditing; // @synthesize disableCalendarEditing=_disableCalendarEditing;
@property(nonatomic) int chooserMode; // @synthesize chooserMode=_chooserMode;
@property(nonatomic) __weak id <EKCalendarChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *selectedCalendarSet; // @synthesize selectedCalendarSet=_selectedCalendars;
@property(nonatomic) int selectionStyle; // @synthesize selectionStyle=_style;
- (void).cxx_destruct;
- (void)_insertStoreIntoByGroupArray:(id)arg1;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (double)marginForTableView:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)_selectAllCalendarsAndStores:(_Bool)arg1;
- (void)_selectCalendar:(id)arg1 selected:(_Bool)arg2;
- (void)_selectGroup:(id)arg1 selected:(_Bool)arg2;
- (int)_numSelectedGroups;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_cellIdentifierWithSubtitle:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)declinedEventsSwitchChanged:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)_declinedEventsSwitchSection;
- (_Bool)_shouldShowGroupNameInSection:(long long)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (_Bool)_isEllipsisCellForGroup:(id)arg1 rowIndex:(long long)arg2;
- (_Bool)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1;
- (_Bool)_tableShouldDisplayAllCellForGroup:(id)arg1;
- (_Bool)_tableShouldDisplayAllCalendarsSection;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
@property(copy, nonatomic) NSSet *selectedCalendars;
@property(retain, nonatomic) EKCalendar *selectedCalendar;
- (void)_setCalendars:(id)arg1;
- (void)_populateGroupsForCalendars:(id)arg1;
- (void)_applySelection;
- (id)_loadCalendars;
- (id)_filterCalendars:(id)arg1;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_eventStoreChanged:(id)arg1;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (id)_groupForCustomGroupType:(int)arg1;
- (id)_groupForSource:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_calendarAvailableForEditing:(id)arg1;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_cancelSyncCompletedTimeout;
- (void)_beginSyncCompletedTimeout;
- (void)_syncCompletedGracePeriodExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_pulledToRefresh:(id)arg1;
- (void)refresh:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (_Bool)showsWritableCalendarsOnly;
- (void)setShowsWritableCalendarsOnly:(_Bool)arg1;
@property(nonatomic) _Bool allowsPullToRefresh;
@property(nonatomic) _Bool showsRefreshButton;
- (_Bool)_canEnableRefresh;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool showsDoneButton;
- (unsigned long long)supportedInterfaceOrientations;
@property(nonatomic) _Bool allowsEdit;
@property(nonatomic) _Bool allowsRotation;
- (void)setShowAll:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (id)_viewModeTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 eventStore:(id)arg3;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5;

@end

