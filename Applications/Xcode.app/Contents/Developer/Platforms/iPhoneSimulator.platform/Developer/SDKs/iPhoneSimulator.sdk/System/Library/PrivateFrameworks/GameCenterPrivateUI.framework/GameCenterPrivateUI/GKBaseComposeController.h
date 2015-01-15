//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKLoadableContentViewController.h>

#import "UITextViewDelegate.h"

@class GKContiguousContainerView, GKTextView, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate>
{
    UIScrollView *_backgroundView;
    NSArray *_composeHeaderFields;
    GKTextView *_messageField;
    UIView *_intendedFirstResponder;
    GKContiguousContainerView *_headerFieldContainer;
    UIView *_touchForwardView;
    double _scrollContentInsetAdjustY;
    NSLayoutConstraint *_headerFieldContainerLeadingConstraint;
    NSLayoutConstraint *_headerFieldContainerTrailingConstraint;
    NSLayoutConstraint *_messageFieldLeadingConstraint;
    NSLayoutConstraint *_messageFieldTrailingConstraint;
    struct CGRect _lastKnownKeyboardFrame;
}

@property(retain, nonatomic) NSLayoutConstraint *messageFieldTrailingConstraint; // @synthesize messageFieldTrailingConstraint=_messageFieldTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageFieldLeadingConstraint; // @synthesize messageFieldLeadingConstraint=_messageFieldLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerFieldContainerTrailingConstraint; // @synthesize headerFieldContainerTrailingConstraint=_headerFieldContainerTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerFieldContainerLeadingConstraint; // @synthesize headerFieldContainerLeadingConstraint=_headerFieldContainerLeadingConstraint;
@property(nonatomic) double scrollContentInsetAdjustY; // @synthesize scrollContentInsetAdjustY=_scrollContentInsetAdjustY;
@property(retain, nonatomic) UIView *touchForwardView; // @synthesize touchForwardView=_touchForwardView;
@property(retain, nonatomic) GKContiguousContainerView *headerFieldContainer; // @synthesize headerFieldContainer=_headerFieldContainer;
@property(nonatomic) struct CGRect lastKnownKeyboardFrame; // @synthesize lastKnownKeyboardFrame=_lastKnownKeyboardFrame;
@property(nonatomic) UIView *intendedFirstResponder; // @synthesize intendedFirstResponder=_intendedFirstResponder;
@property(retain, nonatomic) GKTextView *messageField; // @synthesize messageField=_messageField;
@property(retain, nonatomic) NSArray *composeHeaderFields; // @synthesize composeHeaderFields=_composeHeaderFields;
@property(retain, nonatomic) UIScrollView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_scrollSelectedTextToVisible;
- (void)messageFieldTextDidChange;
- (void)setMessageFieldText:(id)arg1;
- (void)didTouchBackground;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct UIEdgeInsets)margins;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)viewMetricsForContainerView:(id)arg1;
- (void)keyboardWillHideShow:(id)arg1;
- (void)_adjustContentInsetForShowingKeyboard:(_Bool)arg1;
- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

