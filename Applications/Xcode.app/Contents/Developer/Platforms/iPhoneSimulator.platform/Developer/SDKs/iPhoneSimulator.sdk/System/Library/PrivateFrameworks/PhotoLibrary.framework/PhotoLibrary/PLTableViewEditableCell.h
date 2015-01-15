//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, PLTextView, UILabel, UITextField;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate>
{
    PLTextView *_textView;
    UITextField *_textField;
    UILabel *_sizeTextLabel;
    id _delegate;
    _Bool _forceFirstResponder;
    int _cellStyle;
}

+ (id)posterCellIdentifier;
@property(nonatomic) int style; // @synthesize style=_cellStyle;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (struct CGSize)contentSize;
- (void)_textFieldChanged;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (_Bool)isEditing;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (id)sizeTextLabel;
- (void)forceFirstResponder:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 cellStyle:(int)arg2;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect)arg1 multiLine:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

