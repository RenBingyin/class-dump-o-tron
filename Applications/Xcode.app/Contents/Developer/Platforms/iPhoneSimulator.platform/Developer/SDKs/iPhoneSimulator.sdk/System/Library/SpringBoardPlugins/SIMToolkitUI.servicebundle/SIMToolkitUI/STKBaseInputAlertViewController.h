//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SIMToolkitUI/STKBaseAlertViewController.h>

#import "UITextFieldDelegate.h"

@class NSString, STKManualKeyboardTextField, UIButton, UITextField, UITextView, UIView;

@interface STKBaseInputAlertViewController : STKBaseAlertViewController <UITextFieldDelegate>
{
    STKManualKeyboardTextField *_inputTextField;
    UITextView *_textView;
    UIView *_sendingFieldView;
    UIButton *_button;
    UIView *_buttonBorderView;
    UIView *_textBorderView;
    _Bool _animateKeyboardOnStartAndExit;
    _Bool _isRotating;
    _Bool _digitsOnly;
    int _minLength;
    int _maxLength;
}

@property(retain) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain) UIView *textBorderView; // @synthesize textBorderView=_textBorderView;
@property(retain) UIView *buttonBorderView; // @synthesize buttonBorderView=_buttonBorderView;
@property(retain) UIButton *button; // @synthesize button=_button;
@property(retain) UIView *sendingFieldView; // @synthesize sendingFieldView=_sendingFieldView;
- (void)_sendClicked;
- (void)sendButtonPressed;
- (void)setDigitsOnly:(_Bool)arg1;
- (_Bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)newBottomBar;
- (struct CGRect)_calcInputTextFieldFrame;
- (struct CGRect)_calcTextBorderViewFrame;
- (struct CGRect)_calcButtonFrame;
- (struct CGRect)_calcBottomBarFrameWithKeyboard;
- (struct CGRect)_calcBottomBarFrame;
- (struct CGRect)_calcSendingFieldFrame;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)newTopBar;
- (void)setMaxLength:(int)arg1;
- (void)setMinLength:(int)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setText:(id)arg1;
- (void)animateInputAccessoryView:(id)arg1;
- (void)viewDidLoad;
- (void)_adjustTextFrame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

