//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

#import "ServiceAlertProxyDelegate.h"

@class NSString, ServiceAlertProxy, ServiceTouchIDAlertHeaderView, UIAlertController;

@interface ServiceTouchIDAlertViewController : SBUIRemoteAlertServiceViewController <ServiceAlertProxyDelegate>
{
    UIAlertController *_alertController;
    ServiceTouchIDAlertHeaderView *_headerView;
    ServiceAlertProxy *_remoteAlertProxy;
}

+ (_Bool)_isSecureForRemoteViewService;
- (void).cxx_destruct;
- (void)_showAlertForAlertProxy:(id)arg1;
- (id)_remoteViewControllerProxy;
- (void)_finishWithButtonIndex:(long long)arg1;
- (void)_dismissAlertController;
- (void)alertProxyDidCancel:(id)arg1;
- (void)alertProxy:(id)arg1 didReceiveMessage:(id)arg2;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

