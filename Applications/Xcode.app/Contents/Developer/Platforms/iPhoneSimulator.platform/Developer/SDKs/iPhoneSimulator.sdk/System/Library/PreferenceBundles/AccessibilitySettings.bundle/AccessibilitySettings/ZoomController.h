//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccessibilityBaseListController.h"

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface ZoomController : AccessibilityBaseListController
{
    PSSpecifier *_zoomOnSpecifier;
    PSSpecifier *_leaveKeyboardUnzoomedSpecifier;
    PSSpecifier *_idleSlugOpacitySpecifier;
}

+ (void)setZoomEnabled:(_Bool)arg1;
@property(retain, nonatomic) PSSpecifier *idleSlugOpacitySpecifier; // @synthesize idleSlugOpacitySpecifier=_idleSlugOpacitySpecifier;
@property(retain, nonatomic) PSSpecifier *leaveKeyboardUnzoomedSpecifier; // @synthesize leaveKeyboardUnzoomedSpecifier=_leaveKeyboardUnzoomedSpecifier;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)zoomIdleSlugOpacitySummary:(id)arg1;
- (id)zoomLensModeSummary:(id)arg1;
- (void)setZoomAlwaysUseWindowZoomForTyping:(id)arg1 specifier:(id)arg2;
- (id)zoomAlwaysUseWindowZoomForTyping:(id)arg1;
- (void)setZoomShouldShowSlug:(id)arg1 specifier:(id)arg2;
- (id)zoomShouldShowSlug:(id)arg1;
- (void)setZoomShouldFollowFocus:(id)arg1 specifier:(id)arg2;
- (id)zoomShouldFollowFocus:(id)arg1;
- (void)setZoomTouchEnabled:(id)arg1 specifier:(id)arg2;
- (id)zoomTouchEnabled:(id)arg1;
- (id)_zoomTouchEnabledSpecifier;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_zoomTouchEnabledChange;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end

