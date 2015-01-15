//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSURL, NSURLAuthenticationChallenge, StoreBanner, TabDocument;

@protocol TabDocumentDelegate
- (void)tabDocumentDidEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(id <BackForwardListItem>)arg2;
- (void)tabDocumentWillEndNavigationGesture:(TabDocument *)arg1 withNavigationToBackForwardListItem:(id <BackForwardListItem>)arg2;
- (void)tabDocumentDidBeginNavigationGesture:(TabDocument *)arg1;
- (_Bool)tabDocumentShouldBlockPopUp:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didCreateNewTabDocument:(TabDocument *)arg2;
- (long long)interfaceOrientationForTabDocument:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateShowingContinuous:(TabDocument *)arg1;
- (NSString *)blankTabTitleForTabDocument:(TabDocument *)arg1;
- (void)setStoreBannerPinnedToTop:(_Bool)arg1 forTabDocument:(TabDocument *)arg2;
- (void)removeStoreBannerFromTabDocument:(TabDocument *)arg1 animated:(_Bool)arg2;
- (void)setShowingStoreBanner:(StoreBanner *)arg1 isShowing:(_Bool)arg2;
- (void)tabDocumentDidCompleteCheckForStoreBanner:(TabDocument *)arg1;
- (void)composeEmailWithMailToURL:(NSURL *)arg1 forTabDocument:(TabDocument *)arg2;
- (void)hideAlertForTabDocument:(TabDocument *)arg1;
- (void)showAlertForTabDocument:(TabDocument *)arg1;
- (void)tabDocumentDidCancelRedirectToExternalApplication:(TabDocument *)arg1;
- (_Bool)tabDocumentCanShowJavaScriptAlertConfirmOrTextInput:(TabDocument *)arg1;
- (_Bool)tabDocumentCanRedirectToExternalApplication:(TabDocument *)arg1;
- (_Bool)tabDocumentCanDownloadFile:(TabDocument *)arg1;
- (_Bool)tabDocumentCanClearRenderTreeSizeThresholdForReset:(TabDocument *)arg1;
- (void)tabDocumentWillStartLoadFromUserClick:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didDetectReaderAvailability:(_Bool)arg2;
- (_Bool)tabDocumentShouldHandleCertificateError:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)tabDocument:(TabDocument *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)tabDocumentFluidProgressRocketAnimationDidComplete:(TabDocument *)arg1;
- (void)tabDocumentStoppedLoadingResource:(TabDocument *)arg1;
- (void)tabDocumentStartedLoadingResource:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 progressChanged:(float)arg2;
- (void)tabDocumentDidChangeLocationWithinPageForMainFrame:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateBackForward:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateURL:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateTitle:(TabDocument *)arg1;
- (void)tabDocumentProgressDidStall:(TabDocument *)arg1;
- (void)tabDocumentDidUpdatePersistentState:(TabDocument *)arg1;
- (void)tabDocument:(TabDocument *)arg1 didFinishLoadingWithError:(_Bool)arg2;
- (void)tabDocumentDidStartLoading:(TabDocument *)arg1;
@end

