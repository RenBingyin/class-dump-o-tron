//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView
{
    long long _backgroundStyle;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    UIButton *_playbackButton;
}

@property(readonly, nonatomic) UIButton *playbackButton; // @synthesize playbackButton=_playbackButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void)_updateBackgroundStyle;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;

@end

