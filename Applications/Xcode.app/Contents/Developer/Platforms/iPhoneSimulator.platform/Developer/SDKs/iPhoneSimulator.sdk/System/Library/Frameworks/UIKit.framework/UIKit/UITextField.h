//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"
#import "UIKeyboardInput.h"
#import "UIPopoverControllerDelegate.h"
#import "UITextInput.h"
#import "UITextInputTraits_Private.h"
#import "_UILayoutBaselineUpdating.h"

@class NSAttributedString, NSDictionary, NSLayoutConstraint, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UIBaselineLayoutStrut, _UICascadingTextStorage;

@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding>
{
    _UICascadingTextStorage *_textStorage;
    long long _borderStyle;
    double _minimumFontSize;
    id _delegate;
    UIImage *_background;
    UIImage *_disabledBackground;
    long long _clearButtonMode;
    UIView *_leftView;
    long long _leftViewMode;
    UIView *_rightView;
    long long _rightViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    double _fullFontSize;
    struct UIEdgeInsets _padding;
    struct _NSRange _selectionRangeWhenNotEditing;
    int _scrollXOffset;
    int _scrollYOffset;
    float _progress;
    UIButton *_clearButton;
    struct CGSize _clearButtonOffset;
    struct CGSize _leftViewOffset;
    struct CGSize _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    UITextFieldLabel *_displayLabel;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    double _labelOffset;
    UITextInteractionAssistant *_interactionAssistant;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    struct {
        unsigned int verticallyCenterText:1;
        unsigned int isAnimating:4;
        unsigned int inactiveHasDimAppearance:1;
        unsigned int becomesFirstResponderOnClearButtonTap:1;
        unsigned int clearsPlaceholderOnBeginEditing:1;
        unsigned int adjustsFontSizeToFitWidth:1;
        unsigned int fieldEditorAttached:1;
        unsigned int canBecomeFirstResponder:1;
        unsigned int shouldSuppressShouldBeginEditing:1;
        unsigned int inResignFirstResponder:1;
        unsigned int undoDisabled:1;
        unsigned int explicitAlignment:1;
        unsigned int implementsCustomDrawing:1;
        unsigned int needsClearing:1;
        unsigned int suppressContentChangedNotification:1;
        unsigned int allowsEditingTextAttributes:1;
        unsigned int usesAttributedText:1;
        unsigned int backgroundViewState:2;
        unsigned int clearingBehavior:2;
    } _textFieldFlags;
    _Bool _deferringBecomeFirstResponder;
    _Bool _avoidBecomeFirstResponder;
    _Bool _setSelectionRangeAfterFieldEditorIsAttached;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
}

+ (_Bool)_isDisplayingShortcutViewController;
+ (_Bool)_isCompatibilityTextField;
@property(retain) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) long long rightViewMode; // @synthesize rightViewMode=_rightViewMode;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) long long leftViewMode; // @synthesize leftViewMode=_leftViewMode;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(retain, nonatomic) UIImage *disabledBackground; // @synthesize disabledBackground=_disabledBackground;
@property(retain, nonatomic) UIImage *background; // @synthesize background=_background;
@property(nonatomic) id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) long long borderStyle; // @synthesize borderStyle=_borderStyle;
@property(retain, nonatomic, setter=_setBaselineLayoutLabel:) _UIBaselineLayoutStrut *_baselineLayoutLabel; // @synthesize _baselineLayoutLabel;
@property(retain, nonatomic, setter=_setBaselineLayoutConstraint:) NSLayoutConstraint *_baselineLayoutConstraint; // @synthesize _baselineLayoutConstraint;
- (void)willMoveToWindow:(id)arg1;
- (void)_createInteractionAssistant;
- (id)_backgroundView;
- (id)_systemBackgroundView;
- (void)setContinuousSpellCheckingEnabled:(_Bool)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)hasText;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)metadataDictionariesForDictationResults;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)_textInputViewForAddingGestureRecognizers;
@property(readonly, nonatomic) UIView *textInputView;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (id)_inputController;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)_inPopover;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)_setBackgroundStrokeWidth:(double)arg1;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (void)_selectionMayChange:(id)arg1;
- (_Bool)_isDisplayingReferenceLibraryViewController;
- (void)_define:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)_proxyTextInput;
- (void)layoutTilesNow;
- (id)webView;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (struct CGRect)_selectionClipRect;
- (id)interactionAssistant;
- (id)selectionView;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (_Bool)hasSelection;
- (id)_fieldEditor;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (_Bool)_useGesturesForEditableContent;
- (_Bool)isEditable;
- (struct CGPoint)_originForTextFieldLabel:(id)arg1;
- (id)undoManager;
- (int)atomStyle;
- (void)setAtomStyle:(int)arg1;
- (_Bool)drawsAsAtom;
- (void)setDrawsAsAtom:(_Bool)arg1;
- (void)setClearButtonOffset:(struct CGSize)arg1;
- (void)_clearButtonClicked:(id)arg1;
- (_Bool)isUndoEnabled;
- (void)setUndoEnabled:(_Bool)arg1;
- (void)setTextCentersVertically:(_Bool)arg1;
- (void)setTextCentersHorizontally:(_Bool)arg1;
- (void)setLabel:(id)arg1;
- (id)textLabel;
- (void)setLabelOffset:(float)arg1;
- (_Bool)hasMarkedText;
- (void)setProgress:(float)arg1;
- (struct CGRect)iconRect;
- (void)setBecomesFirstResponderOnClearButtonTap:(_Bool)arg1;
- (struct CGSize)clearButtonOffset;
- (void)setIcon:(id)arg1;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint)arg1;
- (void)setSelectionRange:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
- (void)clearText;
- (void)_resetSelectionUI;
- (void)_clearSelectionUI;
- (void)selectAll;
- (void)setEnabled:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setInactiveHasDimAppearance:(_Bool)arg1;
- (float)paddingRight;
- (void)setPaddingRight:(float)arg1;
- (float)paddingBottom;
- (void)setPaddingBottom:(float)arg1;
- (float)paddingTop;
- (void)setPaddingTop:(float)arg1;
- (float)paddingLeft;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;
- (_Bool)_implementsCustomDrawing;
- (struct CGRect)editRect;
- (struct CGRect)textRect;
- (struct CGRect)clearButtonRect;
- (void)setClearButtonStyle:(int)arg1;
- (void)setTextAutorresizesToFit:(_Bool)arg1;
- (void)setAutoresizesTextToFit:(_Bool)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)_dictationInterpretations;
- (id)supportedPasteboardTypesForCurrentSelection;
- (_Bool)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (struct _NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)selectAllFromFieldEditor:(id)arg1;
- (void)fieldEditorDidChange:(id)arg1;
- (id)customOverlayContainer;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)_applicationResuming:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (void)attachFieldEditor:(id)arg1;
- (void)willAttachFieldEditor:(id)arg1;
- (void)_drawTextInRect:(struct CGRect)arg1 forLabel:(id)arg2;
- (void)drawPrefixInRect:(struct CGRect)arg1;
- (void)drawSuffixInRect:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)_frameForLabel:(id)arg1 inTextRect:(struct CGRect)arg2;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (_Bool)_hasSuffixField;
@property(retain) UIView *inputAccessoryView;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSDictionary *typingAttributes;
@property(nonatomic) _Bool allowsEditingTextAttributes;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)setClearsPlaceholderOnBeginEditing:(_Bool)arg1;
- (_Bool)clearsPlaceholderOnBeginEditing;
@property(nonatomic) _Bool clearsOnBeginEditing;
- (void)_setPrefix:(id)arg1;
- (void)_updateSuffix:(id)arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (long long)_suffixLabelTextAlignment;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property(copy, nonatomic) NSString *placeholder;
- (void)createPlaceholderIfNecessary;
- (void)finishedSettingPlaceholder;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_createBaselineLayoutLabelIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(long long)arg2;
- (Class)_placeholderLabelClass;
- (void)setContentVerticalAlignment:(long long)arg1;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIFont *font;
- (void)disableClearsOnInsertion;
- (int)clearingBehavior;
- (void)setClearingBehavior:(int)arg1;
@property(nonatomic) _Bool clearsOnInsertion;
- (double)shadowBlur;
- (void)setShadowBlur:(double)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
@property(retain, nonatomic) UIColor *textColor;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (void)_updateAtomTextColor;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2;
- (void)_sanitizeText:(id)arg1;
- (_Bool)_textNeedsSanitizing:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(_Bool)arg2;
@property(copy, nonatomic) NSString *text;
- (void)finishedSettingTextOrAttributedText;
- (id)searchText;
- (_Bool)_hasContent;
- (id)_attributedText;
- (id)_text;
- (_Bool)_shouldObscureInput;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
- (void)_updateTextLabel;
- (void)tintColorDidChange;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInputTraits;
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (id)_textLabelView;
- (id)_placeholderLabel;
- (id)_placeholderView;
- (id)_placeholderColor;
- (void)_setSystemBackgroundViewActive:(_Bool)arg1;
- (_Bool)_fieldEditorAttached;
- (Class)_systemBackgroundViewClass;
- (void)_setRightViewOffset:(struct CGSize)arg1;
- (struct CGSize)_rightViewOffset;
- (void)_setLeftViewOffset:(struct CGSize)arg1;
- (struct CGSize)_leftViewOffset;
- (struct CGPoint)_scrollOffset;
- (id)actualFont;
- (double)actualMinimumFontSize;
- (struct CGRect)adjustedCaretRectForCaretRect:(struct CGRect)arg1;
- (void)_clearBackgroundViews;
- (void)_updateBackgroundViewsAnimated:(_Bool)arg1;
- (_Bool)_shouldEndEditing;
- (void)layoutSubviews;
- (struct CGRect)_prefixFrame;
- (struct CGRect)_suffixFrame;
- (void)_updateBaselineInformationDependentOnBounds;
- (_Bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect)arg1;
- (double)_baselineLayoutConstraintConstantForBounds:(struct CGRect)arg1;
- (void)_updateLabel;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(struct CGRect)arg1;
- (_Bool)_isShowingPrefix;
- (_Bool)_isShowingPlaceholder;
- (_Bool)_showsRightView;
- (_Bool)_showsLeftView;
- (_Bool)_showsClearButtonWhenEmpty;
- (_Bool)_showsClearButton:(_Bool)arg1;
- (_Bool)_showsClearButtonWhenNonEmpty:(_Bool)arg1;
- (void)_updateAtomBackground;
- (_Bool)_showsAtomBackground;
- (_Bool)_partsShouldBeMini;
- (_Bool)_heightShouldBeMini;
- (struct CGRect)_atomBackgroundViewFrame;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateButtons;
- (id)_clearButton;
- (id)clearButton;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (void)_endedEditing;
- (float)_marginTopForBounds:(struct CGRect)arg1;
- (float)_marginTop;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (id)automaticallySelectedOverlay;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resignFirstResponder;
- (void)_windowBecameKey;
- (_Bool)resignFirstResponder;
- (void)_becomeFirstResponder;
- (void)_updatePlaceholderPosition;
- (long long)_currentTextAlignment;
- (void)__resumeBecomeFirstResponder;
- (void)_initialScrollDidFinish:(id)arg1;
- (void)_activateSelectionView;
- (void)_stopObservingFieldEditorScroll;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)becomeFirstResponder;
- (void)scrollTextFieldToVisible;
- (_Bool)_requiresKeyboardResetOnReload;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (struct CGSize)_textSize;
- (struct CGSize)_textSizeUsingFullFontSize:(_Bool)arg1;
- (void)setAnimating:(_Bool)arg1;
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_sizeChanged:(_Bool)arg1;
- (void)_setNeedsStyleRecalc;
- (void)dealloc;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (_Bool)isAccessibilityElementByDefault;
- (void)_setPasscodeStyleAlpha:(double)arg1;
- (double)_passcodeStyleAlpha;
- (void)_updateForPasscodeAppearance;
- (_Bool)_isPasscodeStyle;
- (id)_scriptingInfo;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder; // @dynamic deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool forceEnableDictation;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic) long long selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;

@end

