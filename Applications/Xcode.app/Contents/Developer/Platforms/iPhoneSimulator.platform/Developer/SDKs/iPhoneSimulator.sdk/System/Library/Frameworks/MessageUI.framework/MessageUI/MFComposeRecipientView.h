//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFComposeHeaderView.h>

#import "MFComposeRecipientAtomDelegate.h"
#import "MFCorecipientsIndicatorAtomDelegate.h"
#import "MFDragDestination.h"
#import "MFDragSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class MFComposeRecipient, MFCorecipientsIndicatorAtom, MFModernComposeRecipientAtom, NSArray, NSCountedSet, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIFont, UITapGestureRecognizer, UITextField, UIView, _MFMailRecipientTextField;

@interface MFComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, UIGestureRecognizerDelegate, MFComposeRecipientAtomDelegate, MFDragSource, MFDragDestination, MFCorecipientsIndicatorAtomDelegate>
{
    _MFMailRecipientTextField *_textField;
    NSArray *_textFieldConstraints;
    NSMutableArray *_recipients;
    NSMutableDictionary *_atoms;
    NSCountedSet *_uncommentedAddresses;
    struct __CFDictionary *_atomPresentationOptionsByRecipient;
    unsigned long long _defaultAtomPresentationOptions;
    MFModernComposeRecipientAtom *_selectedAtom;
    MFComposeRecipient *_placeholderRecipient;
    long long _dragSourceOriginalIndex;
    MFCorecipientsIndicatorAtom *_corecipientsIndicatorAtom;
    UIButton *_addButton;
    _Bool _editable;
    _Bool _picking;
    _Bool _focused;
    NSArray *_properties;
    long long _maxRecipients;
    _Bool _parentIsClosing;
    _Bool _deselectOnNextKeyboardInput;
    _Bool _clearSelectionUIAfterFirstResponder;
    NSTimer *_delayTimer;
    double _inputDelay;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _needsReflow;
    _Bool _needsLayoutConstraintUpdate;
    UIFont *_baseFont;
    id <MFComposeRecipientViewDelegate> _delegate;
    _Bool _didIgnoreFirstResponderResign;
    _Bool _allowsDragAndDrop;
    _Bool _separatorHidden;
    int _hideLastAtomComma;
}

@property(nonatomic) int hideLastAtomComma; // @synthesize hideLastAtomComma=_hideLastAtomComma;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) _Bool allowsDragAndDrop; // @synthesize allowsDragAndDrop=_allowsDragAndDrop;
@property(nonatomic) _Bool didIgnoreFirstResponderResign; // @synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign;
@property(readonly, nonatomic) MFCorecipientsIndicatorAtom *corecipientsIndicator; // @synthesize corecipientsIndicator=_corecipientsIndicatorAtom;
@property(nonatomic) unsigned long long defaultAtomPresentationOptions; // @synthesize defaultAtomPresentationOptions=_defaultAtomPresentationOptions;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(readonly, nonatomic) UIView *addButton; // @synthesize addButton=_addButton;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) double inputDelay; // @synthesize inputDelay=_inputDelay;
@property(nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)didMoveToSuperview;
- (void)_setNeedsLayoutConstraintUpdate;
- (void)_setNeedsReflow;
- (void)_updateLayoutConstraintsAndGetNumberOfRows:(out unsigned long long *)arg1 textFieldWillBeLastRow:(out _Bool *)arg2;
- (double)_topRowTextWidth;
- (_Bool)finishEnteringRecipient;
- (void)parentDidClose;
- (void)parentWillClose;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)_deleteSelectedAtom;
- (void)_deselectAtom;
- (void)textChanged:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)_delayTimerFired:(id)arg1;
- (void)_cancelDelayTimer;
- (_Bool)becomeFirstResponder;
- (void)didTapShowCorecipientsForIndicatorAtom:(id)arg1 recipients:(id)arg2;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)mf_recipientTextField:(id)arg1 didAddRecipientAddress:(id)arg2;
- (void)mf_dismissSearchResults:(id)arg1;
- (_Bool)mf_chooseSelectedSearchResultForTextField:(id)arg1;
- (_Bool)mf_presentSearchResultsForTextField:(id)arg1;
- (void)mf_selectPreviousSearchResultForTextField:(id)arg1;
- (void)mf_selectNextSearchResultForTextField:(id)arg1;
- (_Bool)mf_textFieldShowingSearchResults:(id)arg1;
@property(retain, nonatomic) UIFont *baseFont;
- (void)refreshPreferredContentSize;
- (void)addButtonClicked:(id)arg1;
- (void)showCorecipientIndicator:(_Bool)arg1 withCorecipients:(id)arg2 animated:(_Bool)arg3;
- (void)_reflowAnimated:(_Bool)arg1;
- (void)reflow;
- (_Bool)_shouldShowCorecipientsIndicatorAtom;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)_addable;
- (id)supportedDropTypes:(id)arg1;
- (id)viewForDrop;
- (void)dropItem:(id)arg1;
- (struct CGRect)dropRect;
- (void)dragExited:(id)arg1;
- (void)dragUpdated:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dragEntered:(id)arg1 atPoint:(struct CGPoint)arg2;
- (long long)_recipientIndexAtPoint:(struct CGPoint)arg1;
- (id)viewForDragSource;
- (void)dragCompletedForItem:(id)arg1 success:(_Bool)arg2;
- (void)animatePlaceholderForDragFailure:(id)arg1;
- (void)dragStartedWithItem:(id)arg1;
- (id)viewForDraggedItem:(id)arg1 atScale:(double)arg2;
- (struct CGRect)frameForDraggedItem:(id)arg1;
- (id)dragInitiatedAtPoint:(struct CGPoint)arg1;
- (_Bool)allowsDrag;
- (void)_removeAllRecipients;
- (void)_removeUncommentedAddress:(id)arg1;
- (void)_addUncommentedAddress:(id)arg1;
- (_Bool)containsAddress:(id)arg1;
- (void)clearAllAddressAtomPresentationOptions;
- (unsigned long long)_addressAtomPresentationOptionsForRecipient:(id)arg1;
- (void)_removeAddressAtomPresentationOptionsForRecipient:(id)arg1;
- (void)setAddressAtomPresentationOptions:(unsigned long long)arg1 forRecipient:(id)arg2;
@property(retain, nonatomic) MFComposeRecipient *placeholderRecipient;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)addAddress:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(_Bool)arg3;
- (void)addRecipient:(id)arg1;
- (void)removeRecipient:(id)arg1;
@property(copy, nonatomic) NSArray *addresses;
- (id)uncommentedAddresses;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (_Bool)hasContent;
- (void)clearText;
@property(readonly, nonatomic) long long numberOfRowsOfTextInField;
@property(readonly, nonatomic) double offsetForRowWithTextField;
@property(readonly, nonatomic) NSString *text;
- (void)willMoveToSuperview:(id)arg1;
- (void)setLabel:(id)arg1;
@property(nonatomic) id <MFComposeRecipientViewDelegate> delegate; // @dynamic delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

