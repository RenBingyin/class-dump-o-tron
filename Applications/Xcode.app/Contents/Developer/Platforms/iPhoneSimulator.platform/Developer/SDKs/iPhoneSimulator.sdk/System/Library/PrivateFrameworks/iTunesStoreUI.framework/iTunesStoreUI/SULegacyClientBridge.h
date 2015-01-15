//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "SUOverlayBackgroundDelegate.h"

@class NSString, SUClientInterface, SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate>
{
    SUClientInterface *_clientInterface;
    SUOverlayBackgroundViewController *_overlayBackgroundViewController;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    UITabBarController *_rootViewController;
}

@property(retain, nonatomic) UITabBarController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) SUOverlayBackgroundViewController *overlayBackgroundViewController; // @synthesize overlayBackgroundViewController=_overlayBackgroundViewController;
@property(readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (void)_showPreviewOverlayAnimated:(_Bool)arg1;
- (void)_removePreviewOverlayViewController;
- (id)_previewOverlayViewController;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)showPreviewOverlayAnimated:(_Bool)arg1;
@property(readonly, nonatomic) SUPreviewOverlayViewController *previewOverlayViewController;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (_Bool)performActionForDialog:(id)arg1 button:(id)arg2;
- (void)hidePreviewOverlayAnimated:(_Bool)arg1;
- (_Bool)enterAccountFlowWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissOverlayBackgroundViewController;
- (_Bool)composeReviewWithViewController:(id)arg1 animated:(_Bool)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

