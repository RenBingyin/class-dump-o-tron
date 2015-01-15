//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSEditingPane.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface LegalMessagePane : PSEditingPane <UIWebViewDelegate>
{
    UIWebView *_webView;
}

- (void)layoutInsetContent:(struct CGRect)arg1;
- (id)scrollViewToBeInsetted;
- (void)dealloc;
- (void)viewDidBecomeVisible;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)htmlFileLocation;
- (id)markupString;
- (_Bool)handlesDoneButton;
- (_Bool)shouldInsetContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

