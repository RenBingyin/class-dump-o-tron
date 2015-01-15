//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MKUserTrackingButtonTarget.h"

@class MKMapView, NSMutableDictionary, NSString, _MKUserTrackingButtonController;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget>
{
    _MKUserTrackingButtonController *_controller;
    _Bool _inMiniBar;
    NSMutableDictionary *_customImages;
    NSMutableDictionary *_customLandscapeImagePhones;
    _Bool _selectsWhenTracking;
}

+ (Class)_activityIndicatorClass;
+ (id)buttonWithMapView:(id)arg1;
+ (id)buttonWithUserTrackingView:(id)arg1;
@property(nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) _Bool selectsWhenTracking; // @synthesize selectsWhenTracking=_selectsWhenTracking;
@property(readonly, nonatomic) _MKUserTrackingButtonController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (struct CGRect)_selectedIndicatorBounds;
- (void)updateForMiniBarState:(_Bool)arg1;
- (void)sizeToFit;
- (void)_repositionViews;
- (void)_setState:(long long)arg1;
- (long long)_state;
- (void)_updateForState:(long long)arg1;
- (_Bool)_isHighlightedForState:(long long)arg1;
- (long long)_activityIndicatorStyle;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
@property(retain, nonatomic) id <MKUserTrackingView> userTrackingView;
@property(retain, nonatomic) MKMapView *mapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

