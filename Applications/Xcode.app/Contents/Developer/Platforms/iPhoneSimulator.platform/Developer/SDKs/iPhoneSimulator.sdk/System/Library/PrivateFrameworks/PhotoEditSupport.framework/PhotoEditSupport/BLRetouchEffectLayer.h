//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoEditSupport/BLRetouchLayer.h>

@class NSMutableArray;

@interface BLRetouchEffectLayer : BLRetouchLayer
{
    struct CGRect _area;
    _Bool _startFilled;
    NSMutableArray *_brushStrokes;
    _Bool _strokeInProgress;
    CDStruct_76a42933 _samplePixel;
    float _edgeDetectSize;
    struct CGContext *_edgeDetectContextRef;
    float _amount;
    struct CGContext *_layerMask;
}

@property(readonly, nonatomic) _Bool strokeInProgress; // @synthesize strokeInProgress=_strokeInProgress;
@property(nonatomic) float amount; // @synthesize amount=_amount;
@property(nonatomic) struct CGRect area; // @synthesize area=_area;
@property(nonatomic) struct CGContext *layerMask; // @synthesize layerMask=_layerMask;
- (struct CGContext *)edgeDetectContextRefForSize:(float)arg1;
- (void)strokeDidFinish;
@property(copy, nonatomic) NSMutableArray *brushStrokes;
- (struct CGRect)drawBrushAtLocation:(struct CGPoint)arg1 opacity:(float)arg2 erase:(_Bool)arg3 magicEdges:(_Bool)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6;
- (struct CGRect)doDrawBrushAtLocation:(struct CGPoint)arg1 opacity:(float)arg2 erase:(_Bool)arg3 magicEdges:(_Bool)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6 firstPoint:(_Bool)arg7;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGImage *)newImageFromContextWithEffect:(struct CGContext *)arg1;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg1;
- (void)fillMask;
- (void)performFill;
- (void)clearMask;
- (struct CGImage *)newMaskImage;
- (void)fillMaskWithValue:(double)arg1;
- (void)releaseMask;
- (struct CGRect)imageFrame;
- (struct CGRect)maskFrame;
- (_Bool)solidBrush;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)hasAmount;
- (_Bool)isAffectingOutput;
- (_Bool)hasLayerMask;
- (void)setLayerData:(id)arg1;
- (id)layerData;
- (void)dealloc;
- (id)init;

@end

