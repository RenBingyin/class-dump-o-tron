//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

@class CALayer, GestureRecognizingBarButtonItem, NSArray, NSMutableDictionary, SelectableBarButtonItem, UIBarButtonItem, UIView, _UIBackdropView;

@interface BrowserToolbar : UIToolbar
{
    CALayer *_linkImageContainerLayer;
    long long _placement;
    GestureRecognizingBarButtonItem *_backItem;
    GestureRecognizingBarButtonItem *_forwardItem;
    UIBarButtonItem *_actionItem;
    SelectableBarButtonItem *_bookmarksItem;
    UIBarButtonItem *_tabExposeItem;
    GestureRecognizingBarButtonItem *_addTabItem;
    _UIBackdropView *_backgroundView;
    UIView *_separator;
    NSMutableDictionary *_defaultItemsForToolbarSize;
    NSArray *_currentItems;
    _Bool _hasLightButtonTint;
    _Bool _hasDarkBackground;
    id <BrowserToolbarDelegate> _browserDelegate;
    UIToolbar *_replacementToolbar;
}

@property(retain, nonatomic) UIToolbar *replacementToolbar; // @synthesize replacementToolbar=_replacementToolbar;
@property(nonatomic) _Bool hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
@property(nonatomic) id <BrowserToolbarDelegate> browserDelegate; // @synthesize browserDelegate=_browserDelegate;
- (void).cxx_destruct;
- (void)setSidebarSelected:(_Bool)arg1;
- (void)setAddTabEnabled:(_Bool)arg1;
- (void)setBookmarksLongPressEnabled:(_Bool)arg1;
- (void)setActionEnabled:(_Bool)arg1;
- (void)setForwardEnabled:(_Bool)arg1;
- (void)setBackEnabled:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_bookmarksLongPressRecognized:(id)arg1;
- (void)_addTabLongPressRecognized:(id)arg1;
- (void)_backLongPressRecognized:(id)arg1;
- (void)_forwardLongPressRecognized:(id)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)_bookmarksItemLayer;
- (id)_tabExposeItemLayer;
@property(nonatomic) _Bool backdropComputesColorSettings;
- (_Bool)isMinibar;
- (void)updateTintColor;
- (void)setReplacementToolbar:(id)arg1 withAnimationDelay:(double)arg2;
- (void)_updateItemsForReplacementToolbar;
- (void)layoutSubviews;
- (double)URLFieldHorizontalMargin;
- (long long)toolbarSize;
@property(readonly, nonatomic) NSArray *defaultItems;
- (id)initWithPlacement:(long long)arg1;
- (void)_setButtonItemsTarget:(id)arg1;
- (void)_tabExposeButtonPressed;
- (struct CGRect)popoverPresentationRectForButtonIdentifier:(long long)arg1;
- (void)cancelLinkAnimations;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateLinkImage:(struct CGImage *)arg1 flipped:(_Bool)arg2 fromRect:(struct CGRect)arg3 toLayer:(id)arg4 orButton:(int)arg5 inView:(id)arg6 afterLinkImageDisappears:(CDUnknownBlockType)arg7 afterButtonBounces:(CDUnknownBlockType)arg8;
- (id)_pulseAnimationWithInitalTransform:(struct CATransform3D)arg1;
- (id)_bounceAnimationWithInitalTransform:(struct CATransform3D)arg1;
- (id)_toolbarItemAnimationTemplate;
- (id)_layerForButton:(int)arg1;
- (id)_fadeOutAnimation;
- (id)_scalingAnimationToFitLayerWithSize:(struct CGSize)arg1 intoItemWithSize:(struct CGSize)arg2 startingFromTransform:(struct CATransform3D)arg3;
- (id)_slightRotationAnimationStartingFromTransform:(struct CATransform3D)arg1 withRelativeAngle:(double)arg2;
- (id)_ballisticMovementAnimationFromPoint:(struct CGPoint)arg1 throughPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;

@end

