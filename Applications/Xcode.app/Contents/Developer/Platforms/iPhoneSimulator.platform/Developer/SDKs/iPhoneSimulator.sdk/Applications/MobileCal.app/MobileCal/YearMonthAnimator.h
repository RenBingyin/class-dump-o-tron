//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatorTransitioning.h"

@class CalendarModel, NSString, YearMonthTransitionView;

@interface YearMonthAnimator : NSObject <UIViewControllerAnimatorTransitioning>
{
    _Bool _reverse;
    CalendarModel *_model;
    YearMonthTransitionView *_transitionView;
}

@property(retain, nonatomic) YearMonthTransitionView *transitionView; // @synthesize transitionView=_transitionView;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithModel:(id)arg1 reverse:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

