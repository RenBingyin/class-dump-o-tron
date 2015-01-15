//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSAppListController.h"

#import "UIAlertViewDelegate.h"

@class NSArray, NSString, PSSpecifier, UIAlertView;

@interface TIAddExtensionKeyboardController : PSAppListController <UIAlertViewDelegate>
{
    _Bool _hasShownWarning;
    _Bool _didRequestOpenAccess;
    _Bool _didGrantOpenAccess;
    _Bool _behavesAsModalForAddSheet;
    NSArray *_moduleSpecifiers;
    PSSpecifier *_networkAccessSpecifier;
    PSSpecifier *_specifierForWarning;
    UIAlertView *_networkAccessAlert;
}

+ (id)specifiersForExtensionInputMode:(id)arg1 parentSpecifier:(id)arg2;
@property(retain, nonatomic) UIAlertView *networkAccessAlert; // @synthesize networkAccessAlert=_networkAccessAlert;
@property(retain, nonatomic) PSSpecifier *specifierForWarning; // @synthesize specifierForWarning=_specifierForWarning;
@property(retain, nonatomic) PSSpecifier *networkAccessSpecifier; // @synthesize networkAccessSpecifier=_networkAccessSpecifier;
@property(retain, nonatomic) NSArray *moduleSpecifiers; // @synthesize moduleSpecifiers=_moduleSpecifiers;
@property(nonatomic) _Bool behavesAsModalForAddSheet; // @synthesize behavesAsModalForAddSheet=_behavesAsModalForAddSheet;
- (void)doneButtonTapped;
- (void)cancelButtonTapped;
- (void)updateDoneButton;
- (void)addCheckedInputModes;
- (id)selectedInputModes;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)fetchInputModeEnabled:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)toggleInputMode:(id)arg1 specifier:(id)arg2;
- (void)setNetworkPolicyValue:(id)arg1;
- (void)updateNetworkPolicyStateIfNecessaryForCell:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (void)trackExtensionsContainedInApp;
- (id)newSpecifiers;
- (id)specifiers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

