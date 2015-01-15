//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSMutableDictionary, NSString, PLPhotoLibrary, PSSpecifier;

@interface PictureFrameSettingsListController : PSListController
{
    NSString *_transition;
    NSString *_photoCategory;
    PSSpecifier *_photoCategoryChoicesGroup;
    NSMutableDictionary *_selectedUUIDs;
    PLPhotoLibrary *_library;
}

+ (void)initialize;
- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)reloadSpecifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateZoomInOnFacesSwitch;
- (void)updatePhotoCategoryChoicesGroupWithTableUpdates:(_Bool)arg1;
- (id)albumsForPictureFrameSettingsCategory:(id)arg1;
- (id)_library;

@end

