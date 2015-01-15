//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADWebViewDelegate.h"

@class ADSAdImpression, ADSAdImpressionController, ADSBannerJSO, ADSCreativeView, NSString;

@interface ADSCreativeController : NSObject <ADWebViewDelegate>
{
    ADSAdImpressionController *_adImpressionController;
    _Bool _contentVisible;
    ADSCreativeView *_creativeView;
    ADSBannerJSO *_bannerScriptObject;
    double _lastVisible;
    ADSAdImpression *_adImpression;
    CDUnknownBlockType _loadCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
@property(retain, nonatomic) ADSAdImpression *adImpression; // @synthesize adImpression=_adImpression;
@property(nonatomic) double lastVisible; // @synthesize lastVisible=_lastVisible;
@property(nonatomic) _Bool contentVisible; // @synthesize contentVisible=_contentVisible;
@property(retain, nonatomic) ADSBannerJSO *bannerScriptObject; // @synthesize bannerScriptObject=_bannerScriptObject;
- (void)adWebView:(id)arg1 failedToLoadAssetAtURL:(id)arg2 details:(id)arg3;
- (void)adWebView:(id)arg1 hadScriptErrorWithInfo:(id)arg2;
- (void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_callLoadCompletionWithError:(id)arg1;
@property(nonatomic) __weak ADSAdImpressionController *adImpressionController;
- (void)loadAdImpression:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) ADSCreativeView *creativeView; // @synthesize creativeView=_creativeView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

