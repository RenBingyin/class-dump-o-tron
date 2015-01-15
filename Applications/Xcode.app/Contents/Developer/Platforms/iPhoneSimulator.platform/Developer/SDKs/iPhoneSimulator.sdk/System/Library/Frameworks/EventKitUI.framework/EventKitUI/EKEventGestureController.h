//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class EKCalendarDate, EKDayOccurrenceView, EKEvent, NSString, NSTimer, UILongPressGestureRecognizer;

@interface EKEventGestureController : NSObject <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    UILongPressGestureRecognizer *_recognizer;
    EKDayOccurrenceView *_draggingView;
    EKEvent *_event;
    int _currentDragType;
    struct CGPoint _firstTouchPoint;
    double _firstTouchTime;
    struct CGPoint _latestTouchPoint;
    struct CGPoint _previousTouchPoint;
    double _previousTouchTime;
    double _previousTouchVelocity;
    struct CGPoint _touchOffset;
    long long _touchOffsetDays;
    double _dateAtFirstTouchPoint;
    _Bool _isNewEvent;
    _Bool _isInCancelRegion;
    _Bool _isMultiDayTimedEvent;
    EKCalendarDate *_currentDay;
    _Bool _horizontalDragLocked;
    _Bool _dragLockDisabled;
    NSTimer *_scrollTimer;
    double _timeSinceEnteredPageMargin;
    double _firstContactOfDraggingViewTop;
    _Bool _hasStartedScrolling;
    long long _consecutivePageTurnCount;
    _Bool _forcedStart;
    _Bool _needsCommit;
    CDUnknownBlockType _recurrenceSheetCompletionHandler;
    _Bool _usesXDragOffsetInCancelRegion;
    _Bool _usesHorizontalDragLocking;
    _Bool _commitBlocked;
    id <EKEventGestureControllerUntimedDelegate> _untimedDelegate;
    id <EKEventGestureControllerDelegate> _delegate;
    NSString *_sessionIdentifierForDebug;
    EKDayOccurrenceView *_draggingViewSource;
}

@property(retain, nonatomic) EKDayOccurrenceView *draggingViewSource; // @synthesize draggingViewSource=_draggingViewSource;
@property(retain, nonatomic) NSString *sessionIdentifierForDebug; // @synthesize sessionIdentifierForDebug=_sessionIdentifierForDebug;
@property(readonly, nonatomic) EKDayOccurrenceView *draggingView; // @synthesize draggingView=_draggingView;
@property(readonly, nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property(readonly, nonatomic) struct CGPoint latestTouchPoint; // @synthesize latestTouchPoint=_latestTouchPoint;
@property(readonly, nonatomic) struct CGPoint firstTouchPoint; // @synthesize firstTouchPoint=_firstTouchPoint;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool commitBlocked; // @synthesize commitBlocked=_commitBlocked;
@property(nonatomic) _Bool usesHorizontalDragLocking; // @synthesize usesHorizontalDragLocking=_usesHorizontalDragLocking;
@property(nonatomic) _Bool usesXDragOffsetInCancelRegion; // @synthesize usesXDragOffsetInCancelRegion=_usesXDragOffsetInCancelRegion;
@property(nonatomic) __weak id <EKEventGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <EKEventGestureControllerUntimedDelegate> untimedDelegate; // @synthesize untimedDelegate=_untimedDelegate;
- (void).cxx_destruct;
- (double)_Debug_HoursSinceStartOfDay:(double)arg1;
- (_Bool)_isPointInCancelRegion:(struct CGPoint)arg1;
- (struct CGPoint)_computeOriginAtTouchPoint:(struct CGPoint)arg1 forDate:(double)arg2 isAllDay:(_Bool)arg3 allowXOffset:(_Bool)arg4 allowFloorAtRegionBottom:(_Bool)arg5;
- (double)_computeHeightForOccurrenceViewOfDuration:(double)arg1 allDay:(_Bool)arg2;
- (double)_computeWidthForOccurrenceView;
- (void)_updateHorizontalDragLockForPoint:(struct CGPoint)arg1;
- (double)_capOccurrenceViewYOrigin:(double)arg1;
- (double)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2 floorAtAllDayRegionBottom:(_Bool)arg3;
- (_Bool)_flingOrCancelDraggingViewIfNeeded;
- (void)_cancel;
- (void)_commit;
- (void)_update;
- (double)_minimumDuration;
- (void)_setUpAfterForcedStartFromPoint:(struct CGPoint)arg1;
- (void)_setTouchOffsetsFromPoint:(struct CGPoint)arg1;
- (void)_setUpAtPoint:(struct CGPoint)arg1;
- (void)_createTemporaryView:(id)arg1;
- (void)_scrollTimerFired:(id)arg1;
- (void)_removeScrollTimer;
- (void)_installScrollTimer;
- (void)_commitUntimed;
- (void)_longPress:(id)arg1;
- (void)endForcedStart;
- (void)forceStartWithOccurrence:(id)arg1 shouldUpdateViewSource:(_Bool)arg2 shouldUpdateOrigin:(_Bool)arg3;
- (void)updateDraggingOccurrenceFrameFromSource;
- (void)updateDraggingOccurrenceOrigin;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isDraggingOccurrence;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(CDUnknownBlockType)arg2;
- (void)removeDraggedOccurrence;
- (void)updateDraggingOccurrenceFrame;
- (struct CGRect)_calculateFrameForDraggingViewIncludingTravelTime:(_Bool)arg1;
- (void)updateDraggingOccurrenceForced:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateDraggingOccurrence;
- (void)invalidate;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

