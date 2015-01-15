//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIDocumentViewController.h"
#import "SKUILayoutCacheDelegate.h"

@class NSString, SKUIContentUnavailableTemplateElement, SKUIContentUnavailableView, SKUILayoutCache, SKUIViewElementLayoutContext;

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController>
{
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

- (void).cxx_destruct;
- (void)_reloadContentUnavailableView:(id)arg1 width:(double)arg2;
- (id)_layoutContext;
- (struct UIEdgeInsets)_contentInsets;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)documentDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

