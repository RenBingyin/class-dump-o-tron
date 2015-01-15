//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSString, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface ReportAProblemTextField : UITextField
{
    id <RAPTextFieldInputAccessoryViewDelegate> _inputAccessoryViewDelegate;
    long long _disabledDirection;
    UIBarButtonItem *_previousFieldBarItem;
    UIBarButtonItem *_nextFieldBarItem;
    UIBarButtonItem *_markAsIncorrectBarItem;
    _Bool _halfWidth;
    _Bool _markedWrongButtonEnabled;
    long long _correctableItemKind;
    NSString *_originalText;
}

@property(nonatomic) _Bool markedWrongButtonEnabled; // @synthesize markedWrongButtonEnabled=_markedWrongButtonEnabled;
@property(nonatomic) __weak id <RAPTextFieldInputAccessoryViewDelegate> inputAccessoryViewDelegate; // @synthesize inputAccessoryViewDelegate=_inputAccessoryViewDelegate;
@property(nonatomic) _Bool halfWidth; // @synthesize halfWidth=_halfWidth;
@property(retain, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) long long correctableItemKind; // @synthesize correctableItemKind=_correctableItemKind;
- (void).cxx_destruct;
- (void)markAsWrongPressed:(id)arg1;
- (void)_previousFieldBarItemTapped;
- (void)_nextFieldBarItemTapped;
- (void)doneButtonPressed:(id)arg1;
- (void)_updateMarkAsWrongButton;
- (void)_updateNextPreviousButton;
- (void)updateInputAccessoryView;
- (void)disableDirectionButtonWithDirection:(long long)arg1;
- (id)description;
- (void)editingEnded:(id)arg1;
- (void)editingBegan:(id)arg1;
- (void)fieldChanged:(id)arg1;
- (id)_newSmallSpace;
- (void)setText:(id)arg1;
- (void)_updateRAPTextColor;
@property(nonatomic) int addressType;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

