//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEvent.h"

@interface NSEvent (IBEventAdditions)
+ (double)doubleClickTimeInterval;
- (BOOL)isIntentionalRightDragWithRespectTo:(id)arg1;
- (BOOL)isIntentionalLeftDragWithRespectTo:(id)arg1;
- (BOOL)isDeleteOrDeleteFunctionKeyDown;
- (BOOL)isLinearMaxArrowKeyDownInDirection:(long long)arg1;
- (BOOL)isLeftArrowKeyUp;
- (BOOL)isRightArrowKeyUp;
- (BOOL)isDownArrowKeyUp;
- (BOOL)isUpArrowKeyUp;
- (BOOL)isLeftArrowKeyDown;
- (BOOL)isRightArrowKeyDown;
- (BOOL)isDownArrowKeyDown;
- (BOOL)isUpArrowKeyDown;
- (BOOL)isArrowKeyDown;
- (BOOL)isBackTabKeyDown;
- (BOOL)isTabKeyDown;
- (BOOL)isSpaceKeyUp;
- (BOOL)isSpaceKeyDown;
- (BOOL)isNewlineTypeKeyDown;
- (BOOL)isEscapeKeyDown;
- (BOOL)isPeriodicEvent;
- (BOOL)isRightMouseDragged;
- (BOOL)isLeftMouseDragged;
- (BOOL)isSingleRightClick;
- (BOOL)isSingleLeftClick;
- (BOOL)isSingleRightDown;
- (BOOL)isSingleLeftDown;
- (BOOL)isSingleLeftUp;
- (BOOL)isDoubleLeftClick;
- (BOOL)isDoubleLeftDown;
- (BOOL)isApplicationActivateEvent;
- (BOOL)isApplicationDeactivateEvent;
- (BOOL)isMouseEvent;
- (BOOL)isKeyEvent;
- (BOOL)isKeyDown;
- (BOOL)isKeyUp;
- (struct CGPoint)locationOnScreen;
- (struct CGPoint)locationInWindow:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (id)screen;
@end

