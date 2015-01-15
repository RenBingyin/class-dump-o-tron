//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRulerView.h"

@class NSTableHeaderCell;

@interface PFTTrackRulerView : NSRulerView
{
    NSTableHeaderCell *_drawCell;
}

+ (id)_labelCell;
+ (id)separatorColor;
+ (id)backgroundColor;
+ (id)labelColor;
+ (void)initialize;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawMarkersInRect:(struct CGRect)arg1;
- (struct CGRect)_markerAreaRect;
- (void)mouseDown:(id)arg1;
- (id)_markerHitTest:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)_hashMarkDictionaryForDocView:(id)arg1 measurementUnitToBoundsConversionFactor:(double)arg2 stepUpCycle:(id)arg3 stepDownCycle:(id)arg4 minimumHashSpacing:(double)arg5 minimumLabelSpacing:(double)arg6;
- (void)drawHashMarksAndLabelsInRect2:(struct CGRect)arg1;
- (void)drawHashMarksAndLabelsInRect851:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 orientation:(unsigned long long)arg2;

@end

