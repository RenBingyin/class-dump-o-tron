//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DRenderBufferStorage.h>

@class CAEAGLLayer;

__attribute__((visibility("hidden")))
@interface TSCH3DGLESEAGLLayerBufferStorage : TSCH3DRenderBufferStorage
{
    CAEAGLLayer *mLayer;
    tvec2_3b141483 mSize;
}

+ (id)storageWithLayer:(id)arg1;
- (id).cxx_construct;
- (void)allocateStorageWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1 size:(tvec2_3b141483 *)arg2 internalFormat:(unsigned int)arg3;
- (void)updateSize;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end

