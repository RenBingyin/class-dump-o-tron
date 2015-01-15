//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutFrameDecider.h>

@class NSView;

@interface IBAutolayoutViewLiveResizingFrameDecider : IBAutolayoutFrameDecider
{
    NSView *_sizingView;
}

+ (id)frameDeciderForLiveResizingView:(id)arg1 layoutInfo:(id)arg2 delegate:(id)arg3 options:(id)arg4;
+ (void)setAbsoluteConstraintBreakageStrategyMask:(unsigned long long)arg1;
+ (unsigned long long)absoluteConstraintBreakageStrategyMask;
+ (void)initialize;
- (void).cxx_destruct;
- (void)decideAndSetFramesOfEntireViewHierarchyForLiveResizingViewToLayoutSize:(struct CGSize)arg1;
- (BOOL)shouldPropagateFrameForFixedFrameItem:(id)arg1;
- (id)initWithArbitrationUnit:(id)arg1 driverOptions:(id)arg2 delegate:(id)arg3 sizingView:(id)arg4 statusInitializationBlock:(id)arg5;

@end

