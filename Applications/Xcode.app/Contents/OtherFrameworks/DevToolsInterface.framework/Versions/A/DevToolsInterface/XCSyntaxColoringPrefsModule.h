//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSArrayController, NSButton, NSMutableArray, NSPanel, NSPopUpButton, NSTableView, NSTextField, XCColorTheme;

@interface XCSyntaxColoringPrefsModule : PBXPreferencesPaneModule
{
    NSButton *_coloringEnabledCheckbox;
    NSButton *_colorIndexSymbolsCheckbox;
    NSButton *_copySourceCodeAsRichTextCheckbox;
    NSButton *_showsColorsWhenPrintingCheckbox;
    NSButton *_deleteButton;
    NSPopUpButton *_colorThemePopup;
    NSTableView *_tableView;
    NSPanel *_newItemSheet;
    NSButton *_newItemSheetOK;
    NSTextField *_newItemSheetText;
    NSMutableArray *_syntaxPreferences;
    NSArrayController *_controller;
    XCColorTheme *_currentTheme;
    XCColorTheme *_temporaryTheme;
    NSMutableArray *_deletedColorThemePaths;
    BOOL _selectionChanging;
    BOOL _colorsChanged;
}

- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)showPanel:(id)arg1;
- (void)showFonts:(id)arg1;
- (void)showColors:(id)arg1;
- (BOOL)colorIndexedSymbols;
- (BOOL)syntaxColoring;
- (void)checkboxAction:(id)arg1;
- (void)newItemTextDidChange:(id)arg1;
- (void)newItemOK:(id)arg1;
- (void)newItemCancel:(id)arg1;
- (void)duplicateColorTheme:(id)arg1;
- (void)_newColorThemeDidEnd:(id)arg1 userAccept:(long long)arg2 colorThemeToCopy:(id)arg3;
- (id)_uniqueColorThemeNameWithString:(id)arg1;
- (void)_finishDelete:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)deleteColorTheme:(id)arg1;
- (void)chooseColorTheme:(id)arg1;
- (long long)_requestSaveIfNeeded;
- (BOOL)shouldEditColors;
- (id)syntaxPreferences;
- (id)currentTheme;
- (id)temporaryTheme;
- (void)cancelChanges;
- (void)saveChanges;
- (void)_saveCurrentTheme;
- (void)initializeFromDefaults;
- (void)_reloadPopUp;
- (void)addPopUpMenuItemForColorTheme:(id)arg1;
- (void)viewDidLoad;
- (struct CGSize)minModuleSize;
- (void)dealloc;
- (id)init;

@end

