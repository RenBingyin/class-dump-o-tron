//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKRenderStyle.h>

__attribute__((visibility("hidden")))
@interface VKRoadDrawStyle : VKRenderStyle
{
    struct VKProfileSparseRamp<float> width;
    struct VKProfileSparseRamp<float> strokeWidth;
    struct VKProfileSparseRamp<float> labelHeight;
    struct VKProfileSparseRamp<float> widthDropoff;
    struct VKProfileSparseRamp<_VGLColor> fillColor;
    struct VKProfileSparseRamp<_VGLColor> strokeColor;
    struct VKProfileSparseRamp<bool> simpleLine;
    struct VKProfileSparseRamp<int> zIndices;
    struct VKProfileSparseRamp<int> fillZIndices;
    struct VKProfileSparseRamp<bool> strokeColorInterpolate;
    struct VKProfileSparseRamp<bool> fillColorInterpolate;
    unsigned char railroadPattern;
    struct VKProfileSparseRamp<_VGLColor> alternateFillColor;
    struct VKProfileSparseRamp<float> patternScaler;
    struct VKProfileSparseRamp<float> patternScalerQuantizationFactor;
    struct VKProfileSparseRamp<bool> renderEndCaps;
}

+ (int)renderStyleID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)visibleAtZoom:(float)arg1;
- (unsigned char)railroadPattern;

@end

