//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink;

@interface DynamicBarAnimator : NSObject
{
    double _topBarHeightForState[2];
    double _bottomBarOffsetForState[2];
    _Bool _dragging;
    CADisplayLink *_displayLink;
    double _targetTopBarHeight;
    double _unroundedTopBarHeight;
    double _lastUnroundedTopBarHeight;
    _Bool _didHideBarsByMoving;
    _Bool _didHideOrShowBarsExplicitly;
    double _lastOffset;
    _Bool _inSteadyState;
    long long _state;
    double _topBarHeight;
    double _bottomBarOffset;
    id _target;
    SEL _action;
    double _minimumTopBarHeight;
    double _maximumBottomBarOffset;
    id <DynamicBarAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <DynamicBarAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maximumBottomBarOffset; // @synthesize maximumBottomBarOffset=_maximumBottomBarOffset;
@property(nonatomic) double minimumTopBarHeight; // @synthesize minimumTopBarHeight=_minimumTopBarHeight;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) double bottomBarOffset; // @synthesize bottomBarOffset=_bottomBarOffset;
@property(readonly, nonatomic) double topBarHeight; // @synthesize topBarHeight=_topBarHeight;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setBottomBarOffset:(double)arg1 forState:(long long)arg2;
- (void)setTopBarHeight:(double)arg1 forState:(long long)arg2;
- (void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (void)updateDraggingWithOffset:(double)arg1;
- (void)beginDraggingWithOffset:(double)arg1;
- (void)_updateDisplayLink;
- (void)_displayLinkFired:(id)arg1;
- (double)_constrainTopBarHeight:(double)arg1;
- (_Bool)canTransitionToState:(long long)arg1;
@property(readonly, nonatomic) long long targetState;
- (void)_setInSteadyState:(_Bool)arg1;
- (void)_updateOutputs;
- (double)_topBarHeightForBottomBarOffset:(double)arg1;
- (double)_bottomBarOffsetForTopBarHeight:(double)arg1;
- (void)_transitionToSteadyState;
- (void)attemptTransitionToState:(long long)arg1 animated:(_Bool)arg2;
- (void)_moveBarsWithDelta:(double)arg1;
- (void)dealloc;
- (id)init;

@end

