//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/CPGraphicObject.h>

#import "CPDisposable.h"

@interface CPShape : CPGraphicObject <CPDisposable>
{
    unsigned int pdfObjectID;
    struct CGPath *path;
    _Bool isUprightRectangle;
    int windingRule;
    double lineWidth;
    double miterLimit;
    int lineCap;
    int lineJoin;
    struct CGColor *fillColor;
    struct CGColor *strokeColor;
    union CGPDFObject *fillObject;
    union CGPDFObject *strokeObject;
    struct CGAffineTransform paintTransform;
    _Bool boundsComputed;
    _Bool renderedBoundsComputed;
}

- (unsigned int)pathElementCount;
- (void)makeLineFromVertex:(struct CGPoint)arg1 toVertex:(struct CGPoint)arg2;
- (id)string;
- (void)addShape:(id)arg1;
- (_Bool)canCombineWith:(id)arg1;
- (_Bool)isVisible;
- (_Bool)isStrokeFor:(id)arg1;
- (_Bool)hasSamePathAs:(id)arg1;
- (void)setPaintTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)paintTransform;
- (void)setLineJoin:(int)arg1;
- (int)lineJoin;
- (void)setLineCap:(int)arg1;
- (int)lineCap;
- (void)setMiterLimit:(double)arg1;
- (double)miterLimit;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (_Bool)hasStroke;
- (void)setStrokeObject:(union CGPDFObject *)arg1;
- (union CGPDFObject *)strokeObject;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (struct CGColor *)strokeColor;
- (_Bool)hasFill;
- (void)setFillObject:(union CGPDFObject *)arg1;
- (union CGPDFObject *)fillObject;
- (void)setFillColor:(struct CGColor *)arg1;
- (struct CGColor *)fillColor;
- (void)setWindingRule:(int)arg1;
- (int)windingRule;
- (long long)zOrder;
- (void)accept:(id)arg1;
- (id)attributes;
- (_Bool)isUprightRectangle;
- (struct CGRect)innerBounds;
- (void)recomputeRenderedBounds;
- (struct CGRect)renderedBounds;
- (void)setPath:(struct CGPath *)arg1;
- (struct CGPath *)path;
- (void)setPdfObjectID:(unsigned int)arg1;
- (unsigned int)pdfObjectID;
- (void)recomputeBounds;
- (struct CGRect)bounds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;
- (id)initWithPDFShape:(struct CPPDFShape *)arg1;

@end

