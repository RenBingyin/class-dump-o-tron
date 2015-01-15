//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TabDocument.h"

#import "ReaderControllerDelegate.h"
#import "WebUIBrowserLoadingControllerDelegate.h"

@class NSString, UIWebBrowserView;

@interface TabDocumentWK1 : TabDocument <ReaderControllerDelegate, WebUIBrowserLoadingControllerDelegate>
{
    UIWebBrowserView *_browserView;
    UIWebBrowserView *_readerView;
    long long _retainCount;
}

+ (id)_navigationOriginalURLFromActionInformation:(id)arg1;
+ (long long)_navigationTypeFromActionInformation:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)downloadDidBegin:(id)arg1;
- (_Bool)isImportantDocument;
- (void)_injectDoNotTrackDOMPropertyWithValue:(id)arg1 intoWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (_Bool)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(_Bool)arg5;
- (_Bool)webView:(id)arg1 shouldGoToHistoryItem:(id)arg2;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)_decidePolicyForAction:(id)arg1 request:(id)arg2 frame:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)_ignorePolicyListener:(id)arg1;
- (void)preparePrintInteractionController:(id)arg1 withPageRenderer:(id)arg2 frame:(id)arg3 printFooter:(_Bool)arg4;
- (_Bool)_shouldAskAboutInsecureFormSubmissionForAction:(id)arg1 andURL:(id)arg2;
- (_Bool)isProcessingUserGesture;
- (void)_loadStartedDuringSimulatedClickForURL:(id)arg1;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (_Bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 didLayout:(unsigned long long)arg2;
- (void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webThreadWebViewDidLayout:(id)arg1;
- (void)showStoreBannerIfNecessary;
- (void)_determineWebFeedURLForFrame:(id)arg1;
- (void)_progressDidStall;
- (void)_webThreadUpdateProgressCanStall;
- (void)_updateInitialZoomScaleForPPT;
- (id)_backForwardList;
- (void)_updateDisplayingStandaloneImage;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (id)_webClip;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1;
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1;
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)requestDesktopSite;
- (void)subscribeToWebFeed;
- (void)saveWebArchiveToPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)quickLookDocumentIsReady;
- (id)_quickLookDocumentForPreview;
- (id)standaloneImageData;
- (id)suggestedFilenameForDisplayedPDF;
- (id)dataForDisplayedPDF;
- (void)setCustomUserAgent:(id)arg1;
- (id)customUserAgent;
- (void)browserLoadingControllerDidUpdateSecurity:(id)arg1;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (struct __SecTrust *)_serverTrust;
- (id)_forwardListWithLimit:(unsigned long long)arg1;
- (id)_backListWithLimit:(unsigned long long)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
- (void)copyNavigationSnapshotsFromBackForwardList:(id)arg1;
- (_Bool)clearNavigationSnapshots;
- (_Bool)clearLowPriorityNavigationSnapshots;
- (_Bool)_clearNavigationSnapshotAtHistoryItem:(id)arg1;
- (void)clearBackForwardList;
- (void)clearBackForwardListKeepingCurrentItem;
- (void)clearBackForwardCache;
- (void)destroyAllPlugIns;
- (_Bool)pluginsAreRunning;
- (void)_forceStopLoading;
- (void)setLoading;
- (void)browserLoadingControllerWillStartUserDrivenLoad:(id)arg1;
- (void)didDrawTiles;
- (void)stopLoading;
- (void)loadUserTypedAddress:(id)arg1;
- (void)finishSimulatedClick;
- (void)beginSimulatedClickForURL:(id)arg1;
- (_Bool)isSimulatingClick;
- (_Bool)browserLoadingControllerShouldEvaluateUserEnteredJavaScript:(id)arg1;
- (void)browserLoadingController:(id)arg1 failedToStartLoadingRequest:(id)arg2 error:(id)arg3;
- (void)browserLoadingController:(id)arg1 willLoadRequest:(id)arg2 userDriven:(_Bool)arg3;
- (_Bool)browserLoadingControllerShouldShowProvisionalURLs:(id)arg1;
- (id)quickLookDocument;
- (_Bool)isPDFDocument;
- (void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
- (void)browserLoadingControllerDidStartLoading:(id)arg1;
- (void)browserLoadingControllerDidUpdateLoadingState:(id)arg1;
- (void)browserLoadingControllerDidUpdateURL:(id)arg1;
- (id)browserLoadingController:(id)arg1 userVisibleStringForURL:(id)arg2;
- (void)browserLoadingControllerDidUpdateURLString:(id)arg1;
- (void)loadWebClip:(id)arg1 userDriven:(_Bool)arg2;
- (void)setAllowsRemoteInspection:(_Bool)arg1;
- (_Bool)hasFailedURL;
- (id)expectedOrCurrentURL;
- (void)_progressChanged:(id)arg1;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
- (void)willClose;
- (id)pdfView;
- (id)URLString;
- (id)webView;
- (id)browserView;
- (id)browserViewMainDataSource;
- (_Bool)didContentSizePassThresholdForSnapshotDelay;
- (void)setRenderTreeSizeResetThresholdForPosition:(long long)arg1;
- (void)_setRenderTreeSizeThresholdForReset:(unsigned long long)arg1;
- (unsigned long long)_renderTreeSizeThresholdForReset;
- (unsigned long long)_renderTreeSize;
- (void)_updateTilingArea;
- (void)performAutoFillAction;
- (id)navigationSnapshotForPosition:(long long)arg1;
- (void)_resetSnapshotForHistoryItem:(id)arg1;
- (_Bool)mustShowBarsForBackForwardListItem:(id)arg1;
- (void)setNavigationSnapshot:(id)arg1 forPosition:(long long)arg2;
- (id)historyItemForNavigationSnapshotPosition:(long long)arg1;
- (void)_saveBackForwardListToDictionary;
- (void)restoreBackForwardListFromDictionary;
- (void)_restoreTransientReadingListDataToWebHistoryItem:(id)arg1;
- (void)goToBackForwardListItem:(id)arg1;
- (void)goToCurrentHistoryItem;
- (id)currentHistoryItemOriginalURLString;
- (id)backForwardListDictionary;
- (void)setBackForwardListDictionary:(id)arg1;
- (void)removeNonVisibleTiles;
- (void)setPagePaused:(_Bool)arg1 withEvents:(_Bool)arg2;
- (void)resume;
- (void)suspendForEventsOnly:(_Bool)arg1;
- (_Bool)isAlive;
- (void)unhibernate;
- (void)hibernate;
- (void)browserLoadingControllerDidUpdateTitle:(id)arg1;
- (void)dealloc;
- (void)_prepareWebViewRelease;
- (void)_createDocumentView;
- (id)_loadingController;
- (void)clearBrowserController;
- (void)updateInternalPreferences;
- (void)_updateTextSize;
- (void)_initLoadingController;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)_showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 forError:(id)arg3;
- (void)handlePolicyError:(id)arg1 forFrame:(id)arg2;
- (void)handleFrameLoadError:(id)arg1 forDataSource:(id)arg2;
- (_Bool)handleCertificateError:(id)arg1 forDataSource:(id)arg2;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
- (void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(_Bool)arg2;
- (void)_fraudulentWebsiteCheckCompletedForURL:(id)arg1 withAssessment:(int)arg2 fromProvider:(int)arg3;
- (void)checkForFraudulentWebsitesWithURL:(id)arg1;
- (void)_warnAboutUnsafeSiteWithSecurityInfo:(id)arg1;
- (void)setUpSecurityWarningPageController;
- (void)securityWarningPageClosePageButtonPressed;
- (void)securityWarningPageBackButtonPressed;
- (void)securityWarningPageIgnoreWarningButtonPressed;
- (void)securityWarningPageLoaded;
- (void)updateSecurityWarningPageWithSecurityInfo:(id)arg1;
- (void)hideSecurityWarningPage;
- (void)commitProvisionalSecurityInfo;
- (void)setUpSecurityWarningPage;
- (void)_continueLoadingSite;
- (_Bool)addReadingListBookmarkWithBlock:(CDUnknownBlockType)arg1;
- (void)collectReadingListItemInfo;
- (void)_detectReaderAvailabilityNow;
- (void)_detectReaderAvailabilityOnWebThread;
- (_Bool)readerShouldUseNarrowLayout;
- (void)didChangeNextPageLoadingState:(_Bool)arg1;
- (void)didInitReaderJSController:(struct ReaderJSController *)arg1;
- (void)didActivateReader;
- (void)willActivateReader;
- (_Bool)networkIsReachable;
- (int)readerOperationMode;
- (id)readerWebViewOrUIWebBrowserView;
- (id)readerWebView;
- (id)readerView;
- (void)detectReaderAvailabilityWithDelay:(double)arg1;
- (void)clearReaderContext;
- (void)clearReaderView;
- (id)readerContext;
- (void)createBrowserReaderViewIfNeeded;
- (id)tabDocumentReaderWebPreferences;
- (void)didDetermineReaderAvailability:(_Bool)arg1;
- (void)_cancelReaderAvailabilityDetectionTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

