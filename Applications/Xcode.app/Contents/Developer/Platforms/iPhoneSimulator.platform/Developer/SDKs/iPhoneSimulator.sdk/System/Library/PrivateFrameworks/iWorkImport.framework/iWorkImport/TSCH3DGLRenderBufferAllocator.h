//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DRenderBufferAllocator.h"

@class NSString, TSCH3DRenderBufferStorage;

__attribute__((visibility("hidden")))
@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator>
{
    TSCH3DRenderBufferStorage *mStorage;
}

+ (id)allocatorWithStorage:(id)arg1;
+ (id)allocator;
- (_Bool)isEqual:(id)arg1;
- (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;
- (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;
- (id)bufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1 internalFormat:(unsigned int)arg2 attachment:(unsigned int)arg3;
@property(readonly, nonatomic) _Bool isTexturable;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
