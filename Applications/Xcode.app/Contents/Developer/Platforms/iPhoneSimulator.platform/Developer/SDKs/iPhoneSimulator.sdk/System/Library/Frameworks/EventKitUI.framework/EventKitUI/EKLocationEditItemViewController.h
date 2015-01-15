//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import "EKUILocationSearchModelDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EKCalendarItem, EKStructuredLocation, EKUIConferenceRoom, EKUILocationSearchModel, NSString, UISearchBar, UITableView, _UINavigationControllerPalette;

@interface EKLocationEditItemViewController : EKEditItemViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKUILocationSearchModelDelegate>
{
    UISearchBar *_searchBar;
    UITableView *_tableView;
    _UINavigationControllerPalette *_palette;
    EKUILocationSearchModel *_searchModel;
    EKCalendarItem *_calendarItem;
    struct CGSize _preferredContentSize;
    _Bool _supportsStructuredLocations;
    _Bool _needsSave;
    _Bool _onlyDisplayMapLocations;
    EKStructuredLocation *_structuredLocation;
    EKStructuredLocation *_selectedLocation;
    EKUIConferenceRoom *_selectedConferenceRoom;
}

+ (id)_sectionNameForSection:(unsigned long long)arg1;
@property(retain, nonatomic) EKUIConferenceRoom *selectedConferenceRoom; // @synthesize selectedConferenceRoom=_selectedConferenceRoom;
@property(retain, nonatomic) EKStructuredLocation *selectedLocation; // @synthesize selectedLocation=_selectedLocation;
@property(retain, nonatomic) EKStructuredLocation *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
@property(nonatomic) _Bool onlyDisplayMapLocations; // @synthesize onlyDisplayMapLocations=_onlyDisplayMapLocations;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
- (void).cxx_destruct;
- (id)_cellForConferenceRoomRowInTableView:(id)arg1 indexPath:(id)arg2;
- (void)eventsSearchUpdated:(id)arg1;
- (void)frequentsSearchUpdated:(id)arg1;
- (void)mapSearchUpdated:(id)arg1;
- (void)recentsSearchUpdated:(id)arg1;
- (void)contactsSearchUpdated:(id)arg1;
- (void)conferenceRoomSearchUpdated:(id)arg1;
- (void)currentLocationUpdated:(id)arg1;
- (void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;
- (id)calendarItemForSearchModel:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)greyPinImage;
- (id)redPinImage;
- (id)contactsImage;
- (id)locationArrowImage;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)useAsString:(id)arg1;
- (_Bool)showingCurrentLocationRow;
- (_Bool)showingTextRow;
- (_Bool)presentModally;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)loadView;
- (id)title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

