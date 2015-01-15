//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GroupAnimation, MainChromeDetailsBarContent, NSError, RoutePickingModeController, UIButton;

@protocol RoutePickingSessionBasics <NSObject>
@property(nonatomic) RoutePickingModeController *routePickingMode;
- (void)didFinishLoading;
- (void)willStartLoadingExpectingNewSession:(_Bool)arg1;
- (long long)selectedVariant;
- (void)layout;
- (void)resignCurrentWithAnimation:(GroupAnimation *)arg1;
- (void)becomeCurrentWithAnimation:(GroupAnimation *)arg1;

@optional
- (UIButton *)sessionActionButton;
- (MainChromeDetailsBarContent *)detailsBarContent;
- (_Bool)canHandleError:(NSError *)arg1;
- (void)didReceiveError:(NSError *)arg1;
- (void)didFinishLoadingNewDisplayableRoutes:(id <RoutePickingDisplayableRoutes>)arg1;
- (id)initWithDisplayableRoutes:(id <RoutePickingDisplayableRoutes>)arg1;
@end

