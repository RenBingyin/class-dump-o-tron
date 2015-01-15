//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSNumber, NSString;

@interface DTSplitView : NSView
{
    NSString *autosaveName;
    long long resizingMode;
    double dividerThickness;
    NSNumber *minViewSizeComponent;
    BOOL vertical;
    BOOL layingOut;
    id delegate;
}

- (void)resetCursorRects;
- (id)dividerCursor;
- (id)autosaveName;
- (void)setAutosaveName:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)dimpleRect;
- (id)dimpleImage;
- (void)mouseDown:(id)arg1;
- (void)splitterPositionMoved;
- (double)minSizeForView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isFlipped;
- (struct CGRect)dividerRect;
- (void)setResizingMode:(long long)arg1;
- (long long)resizingMode;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setVertical:(BOOL)arg1;
- (BOOL)isVertical;
- (void)setSplitterPosition:(double)arg1;
- (double)splitterPosition;
- (void)layoutFromDefaults;
- (void)trackSplitterWithMouseDown:(id)arg1;
- (void)layoutWithOldSize:(struct CGSize)arg1 andNewSize:(struct CGSize)arg2;
- (void)subviewDidResize:(id)arg1;
- (void)setMinViewSize:(struct CGSize)arg1 andMaxViewSize:(struct CGSize)arg2;
- (void)setMinViewFrame:(struct CGRect)arg1 andMaxViewFrame:(struct CGRect)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (id)maxView;
- (id)minView;
- (void)setDividerThickness:(double)arg1;
- (double)dividerThickness;
- (void)setDefaultsBackedMinViewSizeComponent:(double)arg1;
- (double)defaultsBackedMinViewSizeComponent;
- (id)defaultsMinComponentKey;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

