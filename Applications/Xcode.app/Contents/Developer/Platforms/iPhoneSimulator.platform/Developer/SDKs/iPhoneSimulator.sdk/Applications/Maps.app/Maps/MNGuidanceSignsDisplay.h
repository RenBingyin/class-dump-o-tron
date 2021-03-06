//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNGuidanceDisplay.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MNGuidanceSignsDisplay : NSObject <MNGuidanceDisplay>
{
    _Bool _compact;
    _Bool _showsDimmedSigns;
    id <MNGuidanceSignsDisplayDelegate> _delegate;
    struct UIEdgeInsets _minimumEdgeInsets;
}

+ (long long)mainScreenSecondaryManeuverShieldSize;
+ (long long)mainScreenPrimaryManeuverShieldSize;
+ (void)getImage:(out id *)arg1 center:(out struct CGPoint *)arg2 ofSize:(long long)arg3 scale:(double)arg4 fromShieldType:(int)arg5 text:(id)arg6 idiom:(long long)arg7;
+ (id)signsDisplayWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3;
@property(readonly, nonatomic) struct UIEdgeInsets minimumEdgeInsets; // @synthesize minimumEdgeInsets=_minimumEdgeInsets;
@property(nonatomic) _Bool showsDimmedSigns; // @synthesize showsDimmedSigns=_showsDimmedSigns;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
@property(nonatomic) __weak id <MNGuidanceSignsDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideSecondaryManeuver;
- (void)showSecondaryManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2;
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)showNewManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
- (void)setTotalRemainingTime:(double)arg1 remainingDistance:(double)arg2 destinationTimezone:(id)arg3;
- (void)setDestinationDisplayName:(id)arg1;
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2;
- (void)showRecalculating;
- (void)showArrived;
- (void)showNoGuidance;
- (void)layoutForUnobscuredBoundsChange;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterface:(long long)arg1 duration:(double)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeFromContainingViewController;
- (void)setInitialSelection;
- (id)navigationItem;
- (void)hideAuxiliaryChromeWithAnimation:(id)arg1;
- (void)showAuxiliaryChromeWithAnimation:(id)arg1;
- (void)setMinimumEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setShowsDimmedSigns:(_Bool)arg1 animation:(id)arg2;
- (id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

