//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EMFPlayer, MFPEffect, MFPGraphics, NSMutableData;

__attribute__((visibility("hidden")))
@interface EMFPlusPlayer : NSObject
{
    MFPGraphics *mGraphics;
    EMFPlayer *mOwner;
    int mLargeType;
    unsigned short mLargeFlags;
    unsigned int mLargeSize;
    NSMutableData *mLargeData;
    MFPEffect *mEffect;
}

+ (float)firstTabPosPastPos:(float)arg1 stringFormat:(id)arg2 isExplicit:(_Bool *)arg3;
+ (int)serializableObjectTypeForGUID:(id)arg1;
- (int)play:(const char *)arg1:(unsigned int)arg2;
- (void)resetLargeRecord;
- (int)playRecord:(int)arg1:(const char *)arg2:(unsigned int)arg3:(unsigned short)arg4;
- (int)playSerializableObject:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playColorCurveEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playRedEyeCorrectionEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playColorBalanceEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playTintEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playLevelsEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playHueSaturationLightnessEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playBrightnessContrastEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playColorLUTEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playColorMatrixEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playSharpenEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playBlurEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playSetCompositingQuality:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetCompositingMode:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetPixelOffsetMode:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetInterpolationMode:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetTextContrast:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetTextRenderingHint:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetAntiAliasMode:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetRenderingOrigin:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playOffsetClip:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetClipRegion:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetClipPath:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetClipRect:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)setClipPath:(id)arg1 flags:(unsigned short)arg2;
- (int)playResetClip:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetPageTransform:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playRotateWorldTransform:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playScaleWorldTransform:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playTranslateWorldTransform:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playMultiplyWorldTransform:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playResetWorldTransform:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSetWorldTransform:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playEndContainer:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playBeginContainerNoParams:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playBeginContainer:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playRestore:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playSave:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playGetDC:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawDriverString:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawString:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawImagePoints:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawImage:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playFillPath:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawPath:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawCurve:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawClosedCurve:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playFillClosedCurve:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawBeziers:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawPie:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playFillPie:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawArc:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawLines:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playFillPolygon:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawRects:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playFillRects:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playDrawEllipse:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playFillEllipse:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playClear:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playStrokePath:(id)arg1:(const char *)arg2:(unsigned int)arg3:(unsigned short)arg4;
- (int)playFillPath:(id)arg1:(const char *)arg2:(unsigned int)arg3:(unsigned short)arg4;
- (id)canvasInWorldCoordinates;
- (int)playObject:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playGraphics:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playCustomLineCap:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playImageAttributes:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playStringFormat:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playFont:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playImage:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playRegion:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playPath:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playPen:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)playBrush:(const char *)arg1:(unsigned int)arg2:(unsigned char)arg3;
- (int)readBrush:(const char *)arg1:(unsigned int)arg2 returnBrush:(id *)arg3;
- (int)readGradientBrush:(id)arg1 from:(const char **)arg2 brushFlags:(unsigned int)arg3;
- (int)readPath:(const char *)arg1:(unsigned int)arg2 returnPath:(id *)arg3;
- (int)readImage:(const char *)arg1:(unsigned int)arg2:(id *)arg3;
- (int)playHeader:(const char *)arg1:(unsigned int)arg2:(unsigned short)arg3;
- (int)playUnknown:(const char *)arg1:(unsigned int)arg2:(int)arg3:(unsigned short)arg4;
- (void)setEffect:(id)arg1;
- (id)effect;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 canvas:(struct CGRect)arg2;

@end

