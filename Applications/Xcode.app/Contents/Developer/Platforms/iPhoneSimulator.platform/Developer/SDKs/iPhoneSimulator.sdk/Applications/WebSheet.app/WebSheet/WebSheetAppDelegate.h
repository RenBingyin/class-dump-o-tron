//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "UIApplicationDelegate.h"

@class NSString, UIWindow, WebSheetViewController;

@interface WebSheetAppDelegate : UIApplication <UIApplicationDelegate>
{
    struct _ShowWebSheetContext _showWebSheetContext;
    UIWindow *_mainWindow;
    _Bool _openWiFiPreferencesOnExit;
    WebSheetViewController *_webSheetCont;
}

@property(nonatomic) _Bool openWiFiPreferencesOnExit; // @synthesize openWiFiPreferencesOnExit=_openWiFiPreferencesOnExit;
@property(retain, nonatomic) WebSheetViewController *webSheetCont; // @synthesize webSheetCont=_webSheetCont;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (_Bool)canShowAlerts;
- (void)applicationDidFinishLaunching:(id)arg1;
- (_Bool)shouldIsolateCookies;
- (void)remoteSheetDidEnd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

