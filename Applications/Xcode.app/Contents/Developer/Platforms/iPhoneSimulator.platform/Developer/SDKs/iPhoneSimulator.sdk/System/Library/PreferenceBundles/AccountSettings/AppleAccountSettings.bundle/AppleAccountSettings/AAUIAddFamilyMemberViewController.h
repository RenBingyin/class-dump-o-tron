//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "AAUIPickInviteeDelegate.h"
#import "RemoteUIControllerDelegate.h"

@class AAGrandSlamSigner, ACAccount, ACAccountStore, NSData, NSMutableURLRequest, NSOperationQueue, NSString, RemoteUIController, SSAccount, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem;

@interface AAUIAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, AAUIPickInviteeDelegate>
{
    ACAccount *_appleAccount;
    ACAccountStore *_accountStore;
    SSAccount *_iTunesAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    NSOperationQueue *_networkingQueue;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    _Bool _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    NSData *_pushToken;
}

- (void).cxx_destruct;
- (void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)hideActivitySpinnerInNavigationBar;
- (void)showActivitySpinnerInNavigationBar;
- (id)_itunesAccount;
- (id)_pushToken;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithGrandSlamSigner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

