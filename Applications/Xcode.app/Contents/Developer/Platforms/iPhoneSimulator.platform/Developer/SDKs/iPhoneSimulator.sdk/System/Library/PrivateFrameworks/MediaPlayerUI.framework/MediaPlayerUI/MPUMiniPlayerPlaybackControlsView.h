//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPPlaybackControlsView.h"

#import "MPUMiniPlayerActionsViewControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MPUMiniPlayerActionsViewController, MPUMiniPlayerTransportControls, MPUNowPlayingTitlesView, MPUProspectivePlaybackInformation, MPUSkipLimitView, MPVolumeSlider, NSString, SKUICircleProgressIndicator, UIButton, UIPopoverController, UIView;

@interface MPUMiniPlayerPlaybackControlsView : MPPlaybackControlsView <MPUMiniPlayerActionsViewControllerDelegate, UIPopoverControllerDelegate>
{
    SKUICircleProgressIndicator *_createActivityIndicatorView;
    UIButton *_createButton;
    UIPopoverController *_createPopoverController;
    MPUMiniPlayerActionsViewController *_createViewController;
    UIView *_hairlineView;
    _Bool _isDetailScrubbing;
    MPUNowPlayingTitlesView *_titlesView;
    MPUMiniPlayerTransportControls *_transportControls;
    MPVolumeSlider *_volumeSlider;
    _Bool _showingCreateLoadingIndicator;
    MPUProspectivePlaybackInformation *_prospectivePlaybackInformation;
    MPUSkipLimitView *_skipLimitView;
}

+ (unsigned long long)defaultVisibleParts;
@property(readonly, nonatomic) MPUSkipLimitView *skipLimitView; // @synthesize skipLimitView=_skipLimitView;
@property(nonatomic, getter=isShowingCreateLoadingIndicator) _Bool showingCreateLoadingIndicator; // @synthesize showingCreateLoadingIndicator=_showingCreateLoadingIndicator;
@property(retain, nonatomic) MPUProspectivePlaybackInformation *prospectivePlaybackInformation; // @synthesize prospectivePlaybackInformation=_prospectivePlaybackInformation;
- (void).cxx_destruct;
- (void)_updateTitles;
- (void)_updatePlaybackControlsAnimated:(_Bool)arg1;
- (void)_updateMarqueeStatusAllowingCurrentMarqueeToFinish:(_Bool)arg1;
- (void)_updateForChangedShowingCreateLoadingIndicator;
- (void)_layoutSkipLimitView;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playerContentsChangedNotification:(id)arg1;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (void)_createButtonAction:(id)arg1;
- (_Bool)_wantsCreateButtonForItem:(id)arg1;
- (_Bool)_updateTitlesInView:(id)arg1 forItem:(id)arg2;
- (void)_updatePlaybackControls;
@property(readonly, nonatomic) MPUMiniPlayerTransportControls *_transportControls;
- (Class)_transportControlsClassForItem:(id)arg1;
@property(readonly, nonatomic) double _titleBaselineY;
- (id)_titleTextForItem:(id)arg1;
- (void)_setupVisibleAndDisabledPartsForItem:(id)arg1;
- (Class)_miniPlayerActionsViewControllerClass;
@property(readonly, nonatomic, getter=_isDetailScrubbing) _Bool _detailScrubbing;
@property(readonly, nonatomic) UIView *_createButton;
- (id)_artistTextForItem:(id)arg1;
- (_Bool)_allowsScrubbingForItem:(id)arg1;
- (id)_albumTextForItem:(id)arg1;
- (void)setProspectivePlaybackInformation:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double titleMaxX;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)transportControlsDidLayoutSubviews:(id)arg1;
- (void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(long long)arg2;
- (_Bool)shouldOverrideProgressTimeLabelStyle;
- (id)shuffleButtonImage;
- (void)setPlayer:(id)arg1;
- (void)setItem:(id)arg1;
@property(nonatomic) __weak id <MPPlaybackControlsDelegate><MPTransportControlsTarget><MPUMiniPlayerActionsViewControllerDelegate> delegate;
- (id)repeatButtonImage;
- (id)newProgressIndicator;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (_Bool)detailScrubbingHidesControls;
- (long long)buttonType;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

