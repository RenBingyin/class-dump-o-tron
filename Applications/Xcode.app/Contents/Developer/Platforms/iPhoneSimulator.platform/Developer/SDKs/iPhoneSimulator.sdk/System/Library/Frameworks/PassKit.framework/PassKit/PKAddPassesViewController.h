//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSDate, NSURL, PKRemoteAddPassesViewController, _UIAsyncInvocation;

@interface PKAddPassesViewController : UIViewController
{
    _Bool _viewHasAppeared;
    NSDate *_perfTestingForIngestion;
    _Bool _allowsPassIngestion;
    _Bool _succeeded;
    NSArray *_passes;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    long long _previousStatusBarStyle;
    id <PKAddPassesViewControllerDelegate> _delegate;
    NSURL *_URL;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)canAddPasses;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) id <PKAddPassesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long previousStatusBarStyle; // @synthesize previousStatusBarStyle=_previousStatusBarStyle;
@property(retain, nonatomic) NSArray *passes; // @synthesize passes=_passes;
@property(retain, nonatomic) _UIAsyncInvocation *cancelViewServiceRequest; // @synthesize cancelViewServiceRequest=_cancelViewServiceRequest;
@property(retain, nonatomic) PKRemoteAddPassesViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)ingestionDidFinishWithResult:(int)arg1;
- (_Bool)succeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)setAllowsPassIngestion:(_Bool)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

