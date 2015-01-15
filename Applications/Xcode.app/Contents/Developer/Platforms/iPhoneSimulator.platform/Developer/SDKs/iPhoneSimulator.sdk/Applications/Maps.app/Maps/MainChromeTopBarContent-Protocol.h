//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MainChromeViewControllerBackdropLightness.h"
#import "NSObject.h"

@class GroupAnimation, MainChromeViewController, NSArray, UINavigationItem, UIToolbar, UIView;

@protocol MainChromeTopBarContent <NSObject, MainChromeViewControllerBackdropLightness>

@optional
@property(nonatomic) MainChromeViewController *chromeViewController;
- (void)willUpdateWithAnimation:(GroupAnimation *)arg1;
- (void)setLeftMargin:(double)arg1 rightMargin:(double)arg2;
- (void)setVariant:(long long)arg1;
- (_Bool)needsUpdateWhenBoundsSizeChanges;
- (_Bool)requiresSuppressingRepositioningAnimations;
- (void)topBarSizeDidChange:(struct CGSize)arg1;
- (void)topBarSizeWillChange:(struct CGSize)arg1;
- (_Bool)paletteViewFrameIsInsetByMargin;
- (_Bool)paletteViewDrawsOwnBackdrop;
- (double)paletteViewHeight;
- (UIView *)paletteView;
- (UINavigationItem *)navigationItem;
- (double)toolbarContentHeight;
- (NSArray *)toolbarItemsForToolbar:(UIToolbar *)arg1;
- (NSArray *)toolbarItems;
- (_Bool)customTopBarViewIsInsetByMargin;
- (double)customTopBarViewHeight;
- (UIView *)customTopBarView;
@end

