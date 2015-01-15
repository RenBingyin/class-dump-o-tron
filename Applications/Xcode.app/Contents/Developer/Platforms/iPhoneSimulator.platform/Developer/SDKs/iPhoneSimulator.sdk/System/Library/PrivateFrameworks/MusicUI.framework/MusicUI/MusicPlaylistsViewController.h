//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicTableViewController.h>

#import "MusicPickerOverlayDelegate.h"
#import "UITextFieldDelegate.h"

@class NSCache, NSString, UIAlertController, UIImage, UITextField;

@interface MusicPlaylistsViewController : MusicTableViewController <MusicPickerOverlayDelegate, UITextFieldDelegate>
{
    UIImage *_initialPlaceholderImage;
    UITextField *_newPlaylistAlertTextField;
    id _newPlaylistAlertTextFieldChangeObserver;
    UIAlertController *_newPlaylistAlertController;
    NSCache *_playlistMetadataCache;
}

@property(retain, nonatomic) NSCache *playlistMetadataCache; // @synthesize playlistMetadataCache=_playlistMetadataCache;
- (void).cxx_destruct;
- (id)_viewControllerForSelectedMediaEntity:(id)arg1 containerItemType:(long long)arg2;
- (void)_updateCloudPlaylist:(id)arg1;
- (id)_playlistTitle;
- (void)_cleanupNewPlaylistAlertController;
- (void)createGeniusPlaylistAction;
- (void)addPlaylistAction;
- (void)switchToShortcutIdentifier:(id)arg1;
- (void)_handlePlaylistSaveAction;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_updateSaveButtonEnabledState;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pickerOverlayDidFinish:(id)arg1;
- (void)pickerOverlayRequestsFinish:(id)arg1;
- (_Bool)MPH_supportsCoverFlow;
- (_Bool)music_hasContent;
- (void)reloadData;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (_Bool)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

