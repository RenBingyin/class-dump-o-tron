//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"
#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface SLFacebookRegistrationLegalFooterView : UIView <PSHeaderFooterView, UIWebViewDelegate>
{
    UIWebView *_webView;
}

- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)_completeText;
- (id)_linkStyle;
- (id)_bodyStyle;
- (id)_html;
- (id)_baseURLString;
- (struct CGRect)_webFrameForFooterWidth:(double)arg1;
- (void)_buildWebView;
- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

