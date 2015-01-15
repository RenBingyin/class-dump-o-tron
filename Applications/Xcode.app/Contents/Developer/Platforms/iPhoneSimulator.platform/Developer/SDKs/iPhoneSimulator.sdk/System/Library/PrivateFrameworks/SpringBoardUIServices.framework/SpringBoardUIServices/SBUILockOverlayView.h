//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardUIServices/SBInteractionPassThroughView.h>

@class SBLockOverlayStylePropertiesFactory, UIButton, UILabel, UIResizableView, _UILegibilitySettings;

@interface SBUILockOverlayView : SBInteractionPassThroughView
{
    id <SBUILockOverlayViewDelegate> _delegate;
    UIResizableView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    unsigned long long _style;
    _UILegibilitySettings *_legibilitySettings;
}

@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory; // @synthesize underlayPropertiesFactory=_underlayPropertiesFactory;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) id <SBUILockOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_maxLabelWidth;
- (void)_sizeView:(id)arg1 forFixedWith:(_Bool)arg2;
- (unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3;
- (void)_buttonPressed;
- (id)_actionFont;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)layoutSubviews;
- (id)_legibilitySettingsForStyle:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

