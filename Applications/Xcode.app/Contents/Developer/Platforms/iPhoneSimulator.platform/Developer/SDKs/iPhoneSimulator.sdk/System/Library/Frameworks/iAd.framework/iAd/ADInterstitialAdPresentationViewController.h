//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ADCountdownButton, ADInterstitialAd;

@interface ADInterstitialAdPresentationViewController : UIViewController
{
    ADInterstitialAd *_interstitialAd;
    ADCountdownButton *_closeButton;
}

@property(retain, nonatomic) ADCountdownButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)wantsFullScreenLayout;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
@property(readonly, nonatomic) __weak ADInterstitialAd *interstitialAd;
- (id)initForInterstitialAd:(id)arg1;
- (void)dealloc;

@end

