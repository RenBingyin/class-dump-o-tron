//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCropModel : NSObject
{
    struct CGRect _cropRect;
    float _cropConstrain;
    float _angle;
    struct CGSize _photoSize;
    struct CGSize _nsqPhotoSize;
}

@property float cropConstrain; // @synthesize cropConstrain=_cropConstrain;
@property float angle; // @synthesize angle=_angle;
@property(readonly) struct CGSize size; // @synthesize size=_photoSize;
@property struct CGRect cropRect;
- (void)drawAspectedPreviewFromImage:(struct CGImage *)arg1 inContext:(struct CGContext *)arg2 inRect:(struct CGRect)arg3 withRatio:(float)arg4;
- (struct CGImage *)newAspectedPreviewFromImage:(struct CGImage *)arg1 forSize:(struct CGSize)arg2 andRatio:(float)arg3;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)arg1 forSize:(struct CGSize)arg2;
- (void)changeCropAspectRatioTo:(float)arg1;
- (void)adjustEdgeForDragAction:(int)arg1 withAmount:(struct CGPoint)arg2;
- (void)translate:(float)arg1 atAngle:(float)arg2;
- (void)scale:(float)arg1 fromPoint:(struct CGPoint)arg2;
- (void)rotate:(float)arg1 fromPoint:(struct CGPoint)arg2;
- (struct CGRect)recomputeCropRect:(struct CGRect)arg1 forStraightenAngle:(float)arg2;
- (struct CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)arg1 withDirection:(struct CGPoint)arg2;
- (double)maxAllowedTranslateWithDirection:(double)arg1;
- (double)maxAllowedScaleFromPoint:(struct CGPoint)arg1 scaleUp:(_Bool)arg2;
- (float)maxAllowedRotationFromPoint:(struct CGPoint)arg1 counterClockwise:(_Bool)arg2;
- (struct CGPoint)scalePointForCropAction:(int)arg1;
- (int)touchedImageSidesForCurrentCrop;
- (void)calculateCornerPoints:(struct CGPoint *)arg1;
- (void)reset;
- (id)initWithSize:(struct CGSize)arg1;

@end

