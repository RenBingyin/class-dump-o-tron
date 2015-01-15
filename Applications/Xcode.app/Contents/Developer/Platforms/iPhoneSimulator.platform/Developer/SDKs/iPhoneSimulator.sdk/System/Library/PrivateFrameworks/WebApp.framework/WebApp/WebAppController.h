//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebUIDelegate.h"

#import "UIApplicationDelegate.h"
#import "UIWebViewDelegate.h"
#import "UIWebViewPrivateDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, UIView, UIViewController, UIWebClip, UIWebView, UIWindow, WBUSheetController, WebUIAuthenticationManager, WebUIDownloadManager;

@interface WebAppController : WebUIDelegate <UIApplicationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate>
{
    UIWindow *_window;
    UIWebView *webView;
    UIView *_loadingView;
    long long _orientation;
    long long _pendingOrientation;
    _Bool _isRotating;
    _Bool _landscapeToLandscape;
    UIWebClip *webClip;
    NSTimer *snapshotHideTimer;
    _Bool webViewDidLayout;
    _Bool webViewHasFinishedLoading;
    _Bool snapshotHideTimeHasExpired;
    WBUSheetController *_sheetController;
    NSMutableArray *_alerts;
    struct CGRect _rotationRect;
    unsigned int _rotationEdgePin;
    float _startScale;
    float _endScale;
    WebUIAuthenticationManager *_authenticationManager;
    NSArray *_fallbackURLs;
    WebUIDownloadManager *_downloadManager;
    _Bool _isSuspended;
    struct CGRect _inputViewScreenBoundsAfterRotation;
    NSDictionary *_connectionProperties;
    UIViewController *_viewControllerToWorkaround14804109;
}

+ (id)contentBackgroundColor;
@property(readonly) UIWebView *webView; // @synthesize webView;
@property(retain) UIWebClip *webClip; // @synthesize webClip;
- (id)containerViewForAuthenticationPanel;
- (void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2;
- (void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3;
- (id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFail:(id)arg2;
- (void)downloadManager:(id)arg1 hasData:(id)arg2 forFinishedDownload:(id)arg3;
- (void)uiWebView:(id)arg1 printFrameView:(id)arg2;
- (void)uiWebView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)uiWebView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (_Bool)uiWebView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)dealloc;
- (void)swapWebViewForImageViewOnlyIfReady;
- (void)timeLimitForLoadCompletionExpired;
- (void)resume;
- (void)suspend;
- (void)updateStatusBarStyleFromWebClip;
- (id)initForWebClipURL:(id)arg1;
- (void)loadInputAddress:(id)arg1;
- (void)_setPersistentStoragePathDefaults;
- (void)_inputViewWillRotate:(id)arg1;
- (void)_handleStatusBarHeightChanged:(id)arg1;
- (void)tryMultipleURLs:(id)arg1;
- (void)_setFallbackURLs:(id)arg1;
- (id)_viewControllerForSupportedInterfaceOrientations;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (id)rotatingContentViewForWindow:(id)arg1;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (_Bool)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (float)_maxZoomScale;
- (float)_minZoomScale;
- (struct CGRect)browserFrameForOrientation:(long long)arg1;
- (void)layoutLandscapeSubviews;
- (void)layoutPortraitSubviews;
- (void)_setTopScrollIndicatorInset:(double)arg1;
- (void)_cancelSnapshotHideTimer;
- (id)titleForError:(id)arg1;
- (_Bool)handleCertificateError:(id)arg1 inWebView:(id)arg2;
- (void)showGenericDownloadAlert;
- (void)showProfileDownloadAlert;
- (void)showProfileInstallAlert;
- (void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2 context:(id)arg3;
- (void)addAlert:(id)arg1;
- (id)_sheetController;
- (void)continueAfterCertificateAlertWithContext:(id)arg1;
- (id)genericMessageForError:(id)arg1;
- (id)specializedMessageForError:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2;
- (id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2;
- (void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3;
- (void)_ignorePolicyListener:(id)arg1;
- (void)sheetControllerDidHideSheet:(id)arg1;
- (void)sheetControllerDidShowSheet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

