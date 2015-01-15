//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "CKSMSComposeRemoteViewControllerDelegate.h"

@class NSString;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate>
{
    id <CKSMSComposeRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) id <CKSMSComposeRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerDataInserted;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

