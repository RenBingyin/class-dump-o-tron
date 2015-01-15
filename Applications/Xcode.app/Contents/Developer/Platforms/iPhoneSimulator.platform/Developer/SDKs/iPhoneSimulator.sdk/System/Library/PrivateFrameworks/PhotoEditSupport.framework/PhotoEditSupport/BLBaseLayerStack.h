//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLPixelImageBuffer, NSDictionary, NSMutableArray, UIImage;

@interface BLBaseLayerStack : NSObject
{
    NSMutableArray *_layers;
    double _brushSize;
    double _brushSoftness;
    struct CGImage *_brushImageRef;
    _Bool _shouldNotify;
    int _maskLongEdgeSize;
    struct CGSize _maskSize;
    struct CGAffineTransform _viewToMaskTransform;
    struct CGAffineTransform _inverseViewToMaskTransform;
    struct CGAffineTransform _flippedViewToMaskTransform;
    struct CGAffineTransform _inverseFlippedViewToMaskTransform;
}

@property(nonatomic) _Bool shouldNotify; // @synthesize shouldNotify=_shouldNotify;
@property(nonatomic) int maskLongEdgeSize; // @synthesize maskLongEdgeSize=_maskLongEdgeSize;
@property(readonly, nonatomic) struct CGAffineTransform inverseFlippedViewToMaskTransform; // @synthesize inverseFlippedViewToMaskTransform=_inverseFlippedViewToMaskTransform;
@property(nonatomic) struct CGAffineTransform flippedViewToMaskTransform; // @synthesize flippedViewToMaskTransform=_flippedViewToMaskTransform;
@property(readonly, nonatomic) struct CGAffineTransform inverseViewToMaskTransform; // @synthesize inverseViewToMaskTransform=_inverseViewToMaskTransform;
@property(nonatomic) struct CGAffineTransform viewToMaskTransform; // @synthesize viewToMaskTransform=_viewToMaskTransform;
@property(nonatomic) struct CGSize maskSize; // @synthesize maskSize=_maskSize;
@property(readonly, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
- (void)dealloc;
- (double)maskArea;
- (_Bool)readyToDraw;
- (_Bool)haveLayerMask;
@property(nonatomic) NSDictionary *strokesDataDictionary;
- (double)timestamp;
@property(nonatomic) double workingImageScaleFactor;
@property(retain, nonatomic) UIImage *workingImage;
@property(retain, nonatomic) BLPixelImageBuffer *workingImageBuffer;
- (id)imageLayer;
- (struct CGImage *)brushImageRefWithSize:(float)arg1 softness:(float)arg2;
- (struct CGImage *)newImageForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;

@end

