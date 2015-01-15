//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPMediaPickerControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPMediaItemCollection, MPMediaPickerController, NSArray, NSString, PLSlideshowAirPlayRoutesViewController, PLSlideshowTransitionsViewController, UITableView, UITableViewCell;

@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate>
{
    NSArray *_airplayRoutes;
    unsigned long long _selectedAirplayRouteIndex;
    NSArray *_transitionKeys;
    NSArray *_alternateTransitionLocalizations;
    MPMediaPickerController *_mediaPicker;
    PLSlideshowTransitionsViewController *_transitionsController;
    PLSlideshowAirPlayRoutesViewController *_airPlayRoutesController;
    UITableView *_table;
    UITableViewCell *_transitionCell;
    UITableViewCell *_selectedMusicCell;
    UITableViewCell *_playMusicSwitchCell;
    _Bool _slideshowShouldPlayMusic;
    id <PLSlideshowSettingsViewControllerDelegate> _delegate;
    NSString *_selectedTransition;
    MPMediaItemCollection *_slideshowMusicCollection;
}

+ (int)_uiTransitionForTransitionKey:(id)arg1;
+ (id)iPadTransitions;
+ (id)iPhoneTransitions;
+ (id)TVOutTransitions;
+ (id)AppleTVPushTransitions;
@property(retain, nonatomic) MPMediaItemCollection *slideshowMusicCollection; // @synthesize slideshowMusicCollection=_slideshowMusicCollection;
@property(nonatomic) _Bool slideshowShouldPlayMusic; // @synthesize slideshowShouldPlayMusic=_slideshowShouldPlayMusic;
@property(copy, nonatomic) NSString *selectedTransition; // @synthesize selectedTransition=_selectedTransition;
@property(nonatomic) id <PLSlideshowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)_buttonSection;
- (long long)_mainSection;
- (long long)_airPlaySection;
- (_Bool)_includeAirPlaySection;
- (void)_preheatMediaPicker;
- (void)_playButtonWasPressed:(id)arg1;
- (id)_selectedMusic;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)loadView;
- (void)updateTransitionKeys:(id)arg1;
- (void)_updateSettingsInfo;
- (id)_selectedAirplayRoute;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_playMusicSwitchValueDidChange:(id)arg1;
- (id)slideshowSettings;
- (void)applySlideshowSettings:(id)arg1;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

