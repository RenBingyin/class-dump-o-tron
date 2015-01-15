//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebView.h"

__attribute__((visibility("hidden")))
@interface GQUWebView : WebView
{
    _Bool mHasAttachments;
}

+ (void)disableFrameScrollingRecursively:(id)arg1;
+ (id)_createWebPreferencesForRendering;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)_urlToDownloadFromURL:(id)arg1;
- (_Bool)_validateURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)loadDataSynchronously:(id)arg1 textEncodingName:(id)arg2 resources:(id)arg3;
- (void)setHasAttachments:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

