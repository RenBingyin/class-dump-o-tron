//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXCaptionStyleChooserController.h"

__attribute__((visibility("hidden")))
@interface AXCaptionTextFontController : AXCaptionStyleChooserController
{
    struct CGFont *selectedFont;
}

@property(retain, nonatomic) struct CGFont *selectedFont; // @synthesize selectedFont;
- (id)_videoOverrideText;
- (void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2;
- (id)_videoOverridesStyle:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_manageEditButton;
- (void)_donePressed;
- (void)_editPressed:(id)arg1;
- (long long)textCategory;

@end

