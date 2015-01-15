//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CHDrawing : NSObject <NSCopying>
{
    struct CJKChar _drawing;
}

@property(nonatomic) struct CJKChar drawing; // @synthesize drawing=_drawing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setLineHeight:(double)arg1;
- (vector_eb9481f9)strokeIndicesSortedByMinXCoordinate;
- (id)sortedDrawing;
- (Matrix_273a43f8)orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1 drawingAlgorithm:(int)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1;
- (id)xyRepresentation;
- (struct _NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1;
- (_Bool)isPrefixForDrawing:(id)arg1;
- (void)clear;
- (void)endStroke;
- (void)addPoint:(struct CGPoint)arg1;
- (struct CGRect)bounds;
- (unsigned long long)strokeCount;
- (struct CGPoint)pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1;
- (unsigned long long)pointCount;
- (id)initWithContentsOfFile:(id)arg1;

@end

