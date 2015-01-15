//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TPSlidingButtonDelegateProtocol.h"

@class NSArray, NSMutableArray, NSString, TPSlidingButton, UIButton;

@interface TPSuperBottomBar : UIView <TPSlidingButtonDelegateProtocol>
{
    _Bool _declineAndRemindIsAvailable;
    _Bool _declineAndMessageIsAvailable;
    _Bool _enabled;
    _Bool _blursBackground;
    _Bool _usesLowerButtons;
    int _currentState;
    id <TPSuperBottomBarDelegateProtocol> _delegate;
    long long _orientation;
    double _bottomMargin;
    double _yOffsetForLoweredButtons;
    UIView *_topLayoutGuide;
    NSArray *_buttonLayoutConstraints;
    NSArray *_horizontalConstraintsForSupplementalButtons;
    UIButton *_supplementalTopLeftButton;
    UIButton *_supplementalTopRightButton;
    UIButton *_mainLeftButton;
    UIButton *_mainRightButton;
    UIButton *_sideButtonLeft;
    UIButton *_sideButtonRight;
    UIButton *_supplementalBottomRightButton;
    UIButton *_supplementalBottomLeftButton;
    TPSlidingButton *_slidingButton;
    NSMutableArray *_hijackedGestureRecognizers;
    NSMutableArray *_stateStack;
}

+ (double)defaultYOffsetForBottomButtons;
+ (double)defaultBottomSupplementalButtonSpacing;
+ (double)defaultBottomMargin;
+ (double)defaultWidth;
+ (double)defaultInterButtonSpacing;
+ (double)defaultSideMarginForDoubleButton;
+ (double)defaultSideMarginForSingleButton;
@property(retain) NSMutableArray *stateStack; // @synthesize stateStack=_stateStack;
@property(retain, nonatomic) NSMutableArray *hijackedGestureRecognizers; // @synthesize hijackedGestureRecognizers=_hijackedGestureRecognizers;
@property(retain, nonatomic) TPSlidingButton *slidingButton; // @synthesize slidingButton=_slidingButton;
@property(retain, nonatomic) UIButton *supplementalBottomLeftButton; // @synthesize supplementalBottomLeftButton=_supplementalBottomLeftButton;
@property(retain, nonatomic) UIButton *supplementalBottomRightButton; // @synthesize supplementalBottomRightButton=_supplementalBottomRightButton;
@property(retain, nonatomic) UIButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;
@property(retain, nonatomic) UIButton *sideButtonLeft; // @synthesize sideButtonLeft=_sideButtonLeft;
@property(retain, nonatomic) UIButton *mainRightButton; // @synthesize mainRightButton=_mainRightButton;
@property(retain, nonatomic) UIButton *mainLeftButton; // @synthesize mainLeftButton=_mainLeftButton;
@property(retain, nonatomic) UIButton *supplementalTopRightButton; // @synthesize supplementalTopRightButton=_supplementalTopRightButton;
@property(retain, nonatomic) UIButton *supplementalTopLeftButton; // @synthesize supplementalTopLeftButton=_supplementalTopLeftButton;
@property(retain) NSArray *horizontalConstraintsForSupplementalButtons; // @synthesize horizontalConstraintsForSupplementalButtons=_horizontalConstraintsForSupplementalButtons;
@property(retain) NSArray *buttonLayoutConstraints; // @synthesize buttonLayoutConstraints=_buttonLayoutConstraints;
@property(retain, nonatomic) UIView *topLayoutGuide; // @synthesize topLayoutGuide=_topLayoutGuide;
@property(nonatomic) double yOffsetForLoweredButtons; // @synthesize yOffsetForLoweredButtons=_yOffsetForLoweredButtons;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool usesLowerButtons; // @synthesize usesLowerButtons=_usesLowerButtons;
@property(nonatomic) _Bool blursBackground; // @synthesize blursBackground=_blursBackground;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool declineAndMessageIsAvailable; // @synthesize declineAndMessageIsAvailable=_declineAndMessageIsAvailable;
@property(nonatomic) _Bool declineAndRemindIsAvailable; // @synthesize declineAndRemindIsAvailable=_declineAndRemindIsAvailable;
@property id <TPSuperBottomBarDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (id)nameForActionType:(int)arg1;
- (void)_startShopDemoMode;
- (void)animateFromIncomingCallStateToFaceTimeInCallState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateFromIncomingCallStateToInCallState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateFromOutgoingStateToCallbackAndMessageUIToState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateOutSupplementalBottomLeftButtonToState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateOutSupplementalBottomRightButtonToState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateInSupplementalBottomRightButton:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)animateFromOutgoingStateToInCallStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (_Bool)animateFromState:(int)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareButtonsForAnimationEnd;
- (void)prepareButtonsForAnimationBegin;
- (void)refreshCustomizedActionTypeTitleForButton:(id)arg1;
- (void)refreshCustomizedActionTypeTitles;
- (int)updatedActionTypeForActionType:(int)arg1;
- (id)updatedSelectedImageForActionType:(int)arg1 givenDefaultSelectedImage:(id)arg2;
- (id)updatedImageForActionType:(int)arg1 givenDefaultImage:(id)arg2;
- (id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2;
- (id)controlForActionType:(int)arg1;
- (struct CGRect)frameForControlWithActionType:(int)arg1;
- (id)viewLabels;
- (void)slidingButton:(id)arg1 didSlideToProportion:(double)arg2;
- (void)slidingButtonDidFinishSlide;
- (void)slidingButtonWillFinishSlide;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)shrinkButtonFontSizesIfNecessary;
- (void)removeAllButtons;
- (void)addSubview:(id)arg1;
- (id)makeSlidingButtonWithType:(int)arg1;
- (id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 font:(id)arg5 fontColor:(id)arg6;
- (_Bool)shouldShowActionTypeSendToVoicemail;
- (_Bool)shouldShowActionTypeAudioRoute;
- (_Bool)shouldShowActionTypeCameraFlip;
- (id)_horizontalConstraintsForSupplementalButtonsUsingLabels:(id)arg1;
- (void)_updateHorizontalConstraintsForSupplementalButtons;
- (id)constraintsForState:(int)arg1;
- (void)setCurrentState:(int)arg1 animated:(_Bool)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)setAction:(int)arg1 enabled:(_Bool)arg2;
- (void)setAction:(int)arg1 selected:(_Bool)arg2;
- (void)resetPoppedStates;
- (_Bool)popStateAnimated:(_Bool)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (void)pushState:(int)arg1 animated:(_Bool)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateTopLayoutGuide;
@property(readonly, nonatomic) struct CGSize effectiveSize;
- (struct CGSize)intrinsicContentSize;
- (void)_clearHijackedGestureRecognizers;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

