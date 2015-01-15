//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIDocumentViewController.h"
#import "SKUIIndexBarControlControllerDataSource.h"
#import "SKUIIndexBarControlControllerDelegate.h"
#import "SKUIIndexBarEntryListControllerDelegate.h"
#import "SKUIModalSourceViewProvider.h"
#import "SKUIViewControllerTesting.h"

@class NSArray, NSMapTable, NSString, SKUIIndexBarControlController, SKUIResourceLoader, SKUIStackTemplateElement, SKUIStorePageSectionsViewController;

@interface SKUIStackDocumentViewController : SKUIViewController <SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIViewControllerTesting, SKUIDocumentViewController>
{
    NSArray *_entryListControllers;
    SKUIIndexBarControlController *_indexBarControlController;
    long long _layoutStyle;
    SKUIResourceLoader *_resourceLoader;
    SKUIStorePageSectionsViewController *_sectionsViewController;
    SKUIStackTemplateElement *_templateElement;
    NSMapTable *_viewElementToEntryListController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (void)_updateIndexBarVisibility;
- (void)_updateEntryListControllersWithReload:(_Bool)arg1;
- (_Bool)_tryToScrollToSectionAtIndexPath:(id)arg1;
- (_Bool)_shouldShowIndexBar;
- (id)_resourceLoader;
- (long long)_pinningTransitionStyle;
- (id)_pageSplitsDescription;
- (id)_pageComponentsWithViewElements:(id)arg1;
- (long long)_maxGlobalIndex;
- (id)_indexPathFromGlobalIndex:(long long)arg1;
- (id)_indexBarViewElement;
- (id)_indexBarControlController;
- (long long)_globalIndexFromIndexPath:(id)arg1;
- (void)_configureIndexBarControl:(id)arg1;
- (id)_colorScheme;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)indexBarEntryListControllerDidInvalidate:(id)arg1;
- (void)indexBarControlControllerDidSelectBeyondTop:(id)arg1;
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInIndexBarControlController:(id)arg1;
- (long long)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;
- (id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2;
- (id)impressionableViewElements;
- (void)documentDidUpdate:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)loadView;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1 layoutStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

