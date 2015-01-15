//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAOpenGLLayer.h"

@class JNFJObjectWrapper;

@interface CGLLayer : CAOpenGLLayer
{
    JNFJObjectWrapper *javaLayer;
    unsigned int textureID;
    unsigned int target;
    float textureWidth;
    float textureHeight;
}

- (id)initWithJavaLayer:(id)arg1;
- (void)dealloc;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (void)blitTexture;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
@property float textureHeight; // @synthesize textureHeight;
@property float textureWidth; // @synthesize textureWidth;
@property unsigned int target; // @synthesize target;
@property unsigned int textureID; // @synthesize textureID;
@property(retain, nonatomic) JNFJObjectWrapper *javaLayer; // @synthesize javaLayer;

@end

