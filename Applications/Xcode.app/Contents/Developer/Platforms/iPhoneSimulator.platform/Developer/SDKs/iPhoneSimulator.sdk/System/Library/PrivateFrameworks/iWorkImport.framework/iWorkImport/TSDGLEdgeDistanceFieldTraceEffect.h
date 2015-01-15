//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TSDGLShader, TSDGLTextureInfo;

__attribute__((visibility("hidden")))
@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject
{
    _Bool _canDraw;
    _Bool _didTeardown;
    long long _traceTextureMaxValue;
    struct CGAffineTransform _textureEdgeInsetsAdjustmentMatrix;
    NSArray *_strokeLineSegment;
    struct __CFArray *_zeroesArray;
    struct CGSize _bufferSize;
    _Bool _isValid;
    TSDGLTextureInfo *_edgeDistanceFieldTextureInfo;
    TSDGLTextureInfo *_traceTextureInfo;
    TSDGLShader *_shader;
    struct CGPoint _randomStrokePoint;
}

+ (void)didEndUsingShaders;
+ (void)willBeginUsingShaders;
@property(readonly, nonatomic) struct CGPoint randomStrokePoint; // @synthesize randomStrokePoint=_randomStrokePoint;
@property(readonly, nonatomic) TSDGLShader *shader; // @synthesize shader=_shader;
@property(readonly, nonatomic) TSDGLTextureInfo *traceTextureInfo; // @synthesize traceTextureInfo=_traceTextureInfo;
@property(readonly, nonatomic) TSDGLTextureInfo *edgeDistanceFieldTextureInfo; // @synthesize edgeDistanceFieldTextureInfo=_edgeDistanceFieldTextureInfo;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (void)p_addNearbyPixelsToArray:(struct __CFArray *)arg1 pixel:(struct CGPoint)arg2 edgeDataBuffer:(float *)arg3 dataBuffer:(char *)arg4 tempDataBuffer:(char *)arg5 localMaximumLookupBuffer:(_Bool *)arg6 bufferSize:(struct CGSize)arg7;
- (_Bool)p_generateTraceTextureInfoWithStrokeWidth:(double)arg1 clockwise:(_Bool)arg2;
- (void)p_fillFloatBuffer:(float *)arg1 withRGBAData:(char *)arg2 bufferSize:(struct CGSize)arg3;
- (id)p_houghTransformWithZeroes:(struct __CFArray *)arg1 bufferSize:(struct CGSize)arg2;
- (struct CGPoint)p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint)arg1 inBufferSize:(struct CGSize)arg2;
@property(readonly, nonatomic) NSArray *strokeLineSegment;
- (void)setupShaderWithPercent:(double)arg1 MVPMatrix:(struct CATransform3D)arg2 opacity:(double)arg3 color:(CDStruct_818bb265)arg4 strokeFadeHardnessLeading:(double)arg5 strokeFadeHardnessTrailing:(double)arg6;
- (void)teardown;
- (id)description;
- (void)dealloc;
- (id)initWithTR:(id)arg1 strokeWidth:(double)arg2 downsampleScale:(double)arg3 clockwise:(_Bool)arg4 GLState:(id)arg5;

@end

