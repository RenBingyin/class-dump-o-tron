//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUIObjectModelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class CNFRegController, CNFRegLoadingView, NSMutableArray, NSString, NSTimer, RUILoader, UIAlertView, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate, RUIObjectModelDelegate>
{
    CNFRegController *_regController;
    CNFRegLoadingView *_loadingView;
    UIAlertView *_alert;
    CDUnknownBlockType _alertHandler;
    NSTimer *_timeoutTimer;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    struct {
        unsigned int isLoading:1;
        unsigned int isLoaded:1;
        unsigned int wantsWifi:1;
        unsigned int modifiedWiFi:1;
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int checkedLogState:1;
        unsigned int shouldLog:1;
        unsigned int timedOut;
    } _webControllerFlags;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(copy, nonatomic) CDUnknownBlockType alertHandler; // @synthesize alertHandler=_alertHandler;
@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(readonly, nonatomic) _Bool timedOut; // @dynamic timedOut;
@property(readonly, nonatomic) _Bool isLoading; // @dynamic isLoading;
@property(readonly, nonatomic) _Bool isLoaded; // @dynamic isLoaded;
- (void)applicationWillSuspend;
- (void)_handleTimeout;
- (void)_timeoutFired:(id)arg1;
- (void)_stopTimeout;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)canSendURLRequest:(id)arg1;
- (_Bool)shouldSetHeadersForRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)cancelButtonPressed:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (void)_cleanupLoader;
- (void)loadURL:(id)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)setWantsWifi:(_Bool)arg1;
- (void)stopRequiringWifi;
- (void)startRequiringWifi;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_shouldLog;
- (id)logName;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)initWithRegController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

