//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITunesActivity, ITunesPackage, MZWorkItem, NSArray, NSArrayController, NSBox, NSButton, NSProgressIndicator, NSSearchField, NSTableView, NSTextField, NSView, NSWindow;

@interface SoftwareApplicationLookupActivity : NSObject
{
    ITunesActivity *_activity;
    MZWorkItem *_lookupWorker;
    ITunesPackage *_package;
    NSView *_noAppsView;
    NSView *_appsView;
    NSWindow *window;
    NSBox *containerBox;
    NSWindow *noAppsWindow;
    NSArrayController *appsArrayController;
    NSTextField *numberOfApps;
    NSButton *usernameButton;
    NSButton *refreshButton;
    NSProgressIndicator *progressIndicator;
    NSSearchField *searchField;
    NSTextField *searchText;
    NSTableView *appsTableView;
    NSButton *manageButton;
    NSProgressIndicator *busy;
    NSArray *_topLevelObjects;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects=_topLevelObjects;
- (void)updateFilter:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)newFromFile:(id)arg1;
- (void)metadataLookupCompleted:(id)arg1;
- (void)processLookedUpMetadata:(id)arg1 forIdentifier:(id)arg2;
- (void)openIAPEditor:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)openIAPEditorForNewPackage:(BOOL)arg1;
- (id)buildAndTestPackage:(id)arg1 identifier:(id)arg2;
- (BOOL)packageExistsWithVendorId:(id)arg1;
- (void)manageApplication:(id)arg1;
- (void)refreshButtonClick:(id)arg1;
- (void)display;
- (void)loadInterface;
- (void)credentialsUpdated:(id)arg1;
- (void)updateUsernameButton;
- (void)usernameButtonClick:(id)arg1;
- (void)updateSoftwareApps;
- (void)updateSoftwareAppsInBackground;
- (void)updateCompleted:(id)arg1;
- (void)displayApplications:(id)arg1;
- (void)dealloc;
- (id)initWithActivity:(id)arg1;

@end

