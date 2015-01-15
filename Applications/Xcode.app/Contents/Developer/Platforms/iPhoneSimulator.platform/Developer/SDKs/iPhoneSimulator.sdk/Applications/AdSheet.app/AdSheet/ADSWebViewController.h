//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "_UIWebViewControllerDelegate.h"

@class NSArray, NSString, NSURL, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UINavigationController, UIToolbar, UIView, _UIWebViewController;

@interface ADSWebViewController : UIViewController <_UIWebViewControllerDelegate>
{
    NSURL *_initialURL;
    NSArray *_domainWhitelist;
    UIToolbar *_bottomBar;
    _Bool _serviceIsPresentingAViewController;
    id <ADSWebViewControllerDelegate> _delegate;
    UINavigationController *_navigationController;
    _UIWebViewController *_webViewController;
    UIView *_titleGroup;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_loadingIndicator;
    UIImage *_lockImage;
    UIImageView *_lockView;
    NSArray *_horizontalTitleConstraints;
}

@property(retain, nonatomic) NSArray *horizontalTitleConstraints; // @synthesize horizontalTitleConstraints=_horizontalTitleConstraints;
@property(retain, nonatomic) UIImageView *lockView; // @synthesize lockView=_lockView;
@property(retain, nonatomic) UIImage *lockImage; // @synthesize lockImage=_lockImage;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleGroup; // @synthesize titleGroup=_titleGroup;
@property(retain, nonatomic) _UIWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool serviceIsPresentingAViewController; // @synthesize serviceIsPresentingAViewController=_serviceIsPresentingAViewController;
@property(nonatomic) id <ADSWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_webViewController:(id)arg1 serviceDidTerminateWithError:(id)arg2;
- (void)_webViewControllerDidDismissViewController:(id)arg1;
- (void)_webViewControllerWillPresentViewController:(id)arg1;
- (_Bool)_webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 inMainFrame:(_Bool)arg3 navigationType:(int)arg4;
- (void)webViewControllerDidChangeBackForward:(id)arg1;
- (void)webViewControllerDidChangeURLString:(id)arg1;
- (void)webViewControllerDidChangePageTitle:(id)arg1;
- (void)webViewControllerDidChangeProgressEstimate:(id)arg1;
- (void)webViewController:(id)arg1 didStopLoadingWithError:(id)arg2;
- (void)_updateIndicators;
- (void)webViewControllerDidStartLoading:(id)arg1;
- (void)done:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (struct CGRect)_contentArea;
- (struct CGPoint)_locationOfBarButtonItem:(id)arg1;
- (id)_setupTitleView;
- (void)loadView;
- (id)_fixedSpaceOfWidth:(double)arg1;
- (id)_flexibleSpace;
- (id)_webViewUserAgent;
- (id)initWithInitialURL:(id)arg1 whitelistedDomains:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

