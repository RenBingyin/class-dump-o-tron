//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IKAppContextDelegate.h"
#import "IKApplication.h"
#import "SKUIModalDocumentDelegate.h"
#import "SKUIModalSourceViewProvider.h"
#import "SKUINavigationDocumentDelegate.h"
#import "SKUIURLResolverDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class IKAppContext, IKAppDataStorage, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString, NSURL, SKUIAppDeviceConfig, SKUIClientContext, SKUIMetricsController, SKUIModalDocumentController, SKUINavigationDocumentController, SKUIPreviewDocumentController, SKUIPreviewOverlayViewController, SKUISimpleContainerViewController, SKUITabBarController, SKUIURL, SKUIURLResolver, UITabBarController, UIViewController, _SKUIApplicationShutdownHelper;

@interface SKUIApplicationController : NSObject <IKAppContextDelegate, IKApplication, SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationDocumentDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate>
{
    NSURL *_applicationScriptURL;
    Class _clientContextClass;
    SKUIClientContext *_clientContext;
    id <SKUIApplicationDelegate> _delegate;
    SKUIAppDeviceConfig *_deviceConfig;
    _Bool _didDisplayFirstPage;
    _Bool _hidesTabBar;
    long long _lastNavigationControllerOperation;
    UIViewController *_lastPoppedViewController;
    NSDictionary *_launchOptions;
    SKUIURL *_legacyLaunchURL;
    IKAppDataStorage *_localStorage;
    SKUIModalDocumentController *_modalDocumentController;
    SKUIMetricsController *_metricsController;
    SKUISimpleContainerViewController *_navigationContainerViewController;
    NSMutableArray *_navigationDocumentControllers;
    NSOperationQueue *_operationQueue;
    SKUIPreviewDocumentController *_previewDocumentController;
    SKUIPreviewOverlayViewController *_previewOverlayViewController;
    UIViewController *_rootViewController;
    IKAppContext *_scriptContext;
    long long _scriptLoadState;
    _SKUIApplicationShutdownHelper *_shutdownHelper;
    SKUITabBarController *_tabBarController;
    NSArray *_tabBarItems;
    SKUINavigationDocumentController *_transientNavigationDocument;
    SKUIURLResolver *_urlResolver;
    IKAppDataStorage *_vendorStorage;
    NSMutableArray *_whenLoadedBlocks;
}

+ (id)applicationOptionsWithLaunchOptions:(id)arg1;
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(readonly, nonatomic) UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(readonly, nonatomic) SKUIPreviewDocumentController *_previewOverlayDocumentController; // @synthesize _previewOverlayDocumentController=_previewDocumentController;
@property(nonatomic, setter=_setHidesTabBar:) _Bool _hidesTabBar; // @synthesize _hidesTabBar;
@property(nonatomic) __weak id <SKUIApplicationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_usesFloatingPreviewOverlayForWidth:(double)arg1;
- (id)_transientNavigationDocument;
- (void)_tintTabBarWithViewController:(id)arg1;
- (id)_tabBarController;
- (void)_stopScriptContextForReload;
- (void)_startScriptContextWithURL:(id)arg1;
- (void)_showPreviewOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(_Bool)arg3;
- (void)_showFloatingPreviewOverlayAnimated:(_Bool)arg1;
- (_Bool)_shouldUseLegacyURLHandlingForExternalURL:(id)arg1;
- (void)_setClientContextWithDictionary:(id)arg1;
- (void)_sendDidDisplayFirstPageIfNecessary;
- (void)_sendClientContextDidChange;
- (void)_retryAfterFailure;
- (void)_resetUserInterfaceAfterStoreFrontChange;
- (void)_removeObserversForReloadNotifications;
- (void)_reloadRootViewControllers;
- (void)_reloadApplication;
- (void)_recordTabBarMetricsEventToSelectViewController:(id)arg1;
- (_Bool)_playPreviewForPreviewTemplate:(id)arg1;
- (id)_operationQueue;
- (id)_newNavigationControllerWithTabBarItem:(id)arg1;
- (id)_navigationContainerViewController;
- (void)_loadApplicationScript;
- (void)_legacyResolveExternalURL:(id)arg1;
- (id)_launchOptionsWithURL:(id)arg1;
- (_Bool)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2;
- (_Bool)_isDisplayingAccountViewController;
- (void)_invalidateApplication;
- (void)_handleScriptUnavailable;
- (void)_fireBlocksAfterLoad;
- (void)_failWithError:(id)arg1;
- (id)_documentControllerForNavigationController:(id)arg1;
- (void)_dispatchTabBarOnSelect;
- (id)_activeNavigationController;
@property(readonly, nonatomic) SKUINavigationDocumentController *_transientNavigationController;
- (void)_stopApplication;
@property(nonatomic, setter=_setSelectedTabBarIndex:) long long _selectedTabBarIndex;
- (void)_resetDocumentControllers;
@property(readonly, nonatomic) NSArray *_navigationControllers;
@property(readonly, nonatomic) long long _applicationMode;
- (void)_storeFrontChangeNotification:(id)arg1;
- (void)_stopApplicationOnBackgroundNotification:(id)arg1;
- (void)_resetUserInteraceForAccountViewDisappear:(id)arg1;
- (void)_reloadAfterNetworkChange:(id)arg1;
- (void)_reloadApplicationOnForegroundNotification:(id)arg1;
- (void)_previewDocumentIsActiveChangeNotification:(id)arg1;
- (void)_pageDidDisplayNotification:(id)arg1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)tabBarController:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id)arg3;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(_Bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
- (void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;
- (_Bool)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
- (void)URLResolver:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (id)presentationViewControllerForURLResolver:(id)arg1;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)modalDocumentControllerDidFinish:(id)arg1;
- (long long)modalDocumentController:(id)arg1 barStyleForStackItem:(id)arg2;
- (id)vendorStorage;
- (id)vendorIdentifier;
- (_Bool)shouldIgnoreJSValidation;
- (id)localStorage;
- (id)appLaunchParams;
- (_Bool)appJSURLTrusted;
- (id)appJSURL;
- (_Bool)appIsTrusted;
- (id)appIdentifier;
- (id)activeDocument;
- (id)presentationViewControllerForAppContext:(id)arg1;
- (id)navigationControllerForContext:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didExitWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didCompletePurchase:(id)arg2;
- (void)updateTabBarWithItems:(id)arg1 animated:(_Bool)arg2;
- (void)showTransientViewController:(id)arg1;
- (void)showExternalURL:(id)arg1;
- (void)showErrorViewWithTitle:(id)arg1 message:(id)arg2;
- (id)selectTabWithIdentifier:(id)arg1;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)suspendApplicationWithOptions:(id)arg1;
- (void)resumeApplicationWithOptions:(id)arg1;
- (void)recordMetricsEvent:(id)arg1 flushImmediately:(_Bool)arg2;
- (void)loadApplicationWithOptions:(id)arg1;
- (void)loadApplication;
- (void)evaluateBlockWhenLoaded:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)dealloc;
- (id)initWithClientContextClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

