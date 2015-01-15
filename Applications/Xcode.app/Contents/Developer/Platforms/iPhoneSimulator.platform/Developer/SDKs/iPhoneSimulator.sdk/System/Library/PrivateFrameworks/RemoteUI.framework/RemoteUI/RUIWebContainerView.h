//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface RUIWebContainerView : UIView <UIWebViewDelegate>
{
    _Bool _highlighted;
    _Bool _reallyHighlighted;
    UIWebView *_webView;
    id <RUIWebContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <RUIWebContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (double)heightForWidth:(double)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_setHighlightedNow;
- (void)layoutSubviews;
- (void)setUserStyleSheet:(id)arg1;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

