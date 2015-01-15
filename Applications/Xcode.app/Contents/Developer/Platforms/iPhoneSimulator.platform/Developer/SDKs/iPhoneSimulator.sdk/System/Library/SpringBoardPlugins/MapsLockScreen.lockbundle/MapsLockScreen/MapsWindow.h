//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "TraitsChangeObserving.h"

@class NSMapTable, NSString, UITraitCollection;

@interface MapsWindow : UIWindow <TraitsChangeObserving>
{
    NSMapTable *_traitsObservers;
    _Bool _transitioning;
    UITraitCollection *_transitionTraits;
}

- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) CDStruct_912cb5d2 mapsSizeClassPair;
- (void)_invokeTraitsChangeObserversForKey:(id)arg1;
- (void)_maps_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)_maps_effectiveTraitCollection;
- (void)removeTraitsChangeObserver:(id)arg1;
- (void)addTraitsChangeObserver:(id)arg1 willChangeHandler:(CDUnknownBlockType)arg2 changeHandler:(CDUnknownBlockType)arg3 didChangeHandler:(CDUnknownBlockType)arg4;
- (void)setHidden:(_Bool)arg1;
- (void)setRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

