//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class FTRegConnectionHandler, IMServiceImpl;

@interface CNFInternalAccountListViewController : PSListController
{
    IMServiceImpl *_service;
    FTRegConnectionHandler *_connectionHandler;
}

@property(retain, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)accountNameForSpecifier:(id)arg1;
- (id)specifiers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

