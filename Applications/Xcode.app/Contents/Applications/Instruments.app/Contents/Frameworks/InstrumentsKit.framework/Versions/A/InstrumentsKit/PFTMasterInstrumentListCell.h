//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/PFTInstrumentListCell.h>

@interface PFTMasterInstrumentListCell : PFTInstrumentListCell
{
    BOOL _isTrackingMasterSwitch;
    struct CGRect _switchRect;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (BOOL)wantsExpansionBox;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)_handleMasterSwitchActionAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (long long)_setSwitchBoxTrackingTagForView:(id)arg1 inCellFrame:(struct CGRect)arg2 withIndex:(long long)arg3;
- (void)applyTooltipsWithCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

