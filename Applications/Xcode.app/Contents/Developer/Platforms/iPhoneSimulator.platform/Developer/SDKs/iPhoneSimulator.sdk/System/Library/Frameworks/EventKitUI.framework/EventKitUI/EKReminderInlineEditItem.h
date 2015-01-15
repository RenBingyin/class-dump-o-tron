//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKReminderEditItem.h>

#import "EKExpandingTextViewDelegate.h"

@class EKReminderInlineEditItemCell, NSString;

@interface EKReminderInlineEditItem : EKReminderEditItem <EKExpandingTextViewDelegate>
{
    EKReminderInlineEditItemCell *_cell;
    _Bool _isListeningToHeightChanges;
}

- (void).cxx_destruct;
- (void)textViewDidChangeContentHeight:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)textFromReminder;
- (long long)cellStyle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)newCell;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_applyStylesFromStyleProviderToTextView:(id)arg1;
- (_Bool)shouldPinKeyboard;
- (_Bool)isInline;
- (void)dealloc;
- (id)init;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

