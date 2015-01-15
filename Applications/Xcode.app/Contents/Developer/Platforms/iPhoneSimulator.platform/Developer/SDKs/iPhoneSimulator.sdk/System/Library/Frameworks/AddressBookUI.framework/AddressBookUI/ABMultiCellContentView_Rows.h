//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABMultiCellContentView.h>

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString;

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate>
{
    NSMutableArray *_entryFields;
    NSMutableArray *_horizontalDividers;
    _Bool _isAttemptingFirstResponder;
}

+ (unsigned long long)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
+ (struct CGRect)zerothHorizontalDividerFrameForValueViewRect:(struct CGRect)arg1;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6 includeRows:(_Bool)arg7;
- (void)setAbCellStyle:(int)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (id)viewForFirstResponder;
- (struct CGRect)backgroundRectForView:(id)arg1;
- (struct CGRect)rectForView:(id)arg1;
- (_Bool)tabToNextResponder:(_Bool)arg1 fromView:(id)arg2;
- (void)entryField:(id)arg1 didEndEditingForKey:(id)arg2;
- (void)updateSubviewsForNewStateAnimated:(_Bool)arg1;
- (void)reloadFromModel;
- (void)reloadFromModelIncludingRows:(_Bool)arg1;
- (void)reload;
- (void)reloadIncludingRows:(_Bool)arg1;
- (id)keyboardSettingsForKey:(id)arg1;
- (id)entryFieldForRow:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

