//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "GKStateMachineDelegate.h"

@class GKPlaceholderContentStateMachine, GKPlaceholderView, NSArray, NSString, UIActivityIndicatorView;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <GKStateMachineDelegate>
{
    GKPlaceholderView *_placeholderView;
    NSString *_loadingState;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    id _noContentButtonTarget;
    SEL _noContentButtonAction;
    NSString *_errorTitle;
    NSString *_errorMessage;
    long long _alignment;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
    NSArray *_cachedConstraints;
}

@property(retain, nonatomic) NSArray *cachedConstraints; // @synthesize cachedConstraints=_cachedConstraints;
@property(retain, nonatomic) GKPlaceholderContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(nonatomic) SEL noContentButtonAction; // @synthesize noContentButtonAction=_noContentButtonAction;
@property(nonatomic) id noContentButtonTarget; // @synthesize noContentButtonTarget=_noContentButtonTarget;
@property(retain, nonatomic) NSString *noContentMessage; // @synthesize noContentMessage=_noContentMessage;
@property(retain, nonatomic) NSString *noContentTitle; // @synthesize noContentTitle=_noContentTitle;
@property(retain, nonatomic) NSString *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) GKPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void)didExitErrorState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (void)delayedShowLoadingIndicator;
- (void)updateConstraints;
- (void)buttonPressed;
@property(retain, nonatomic) NSString *noContentButtonTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

