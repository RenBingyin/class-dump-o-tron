//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGLFramebuffer.h>

@class TSCH3DGLHandle;

__attribute__((visibility("hidden")))
@interface TSCH3DGLDefaultFramebuffer : TSCH3DGLFramebuffer
{
    tvec2_3b141483 mSize;
    unsigned int mType;
    TSCH3DGLHandle *mHandle;
    _Bool mDisableDestroyAssertion;
}

+ (id)currentlyBoundFramebufferWithContext:(id)arg1 size:(const tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3;
@property(nonatomic) _Bool disableDestroyAssertion; // @synthesize disableDestroyAssertion=mDisableDestroyAssertion;
@property(nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
@property(nonatomic) unsigned int type; // @synthesize type=mType;
- (id).cxx_construct;
- (id)GLHandleForSession:(id)arg1;
- (void)disableSamplingInSession:(id)arg1;
- (void)discardBuffers;
- (void)discardDepthBuffer;
- (void)discardColorBuffer;
- (_Bool)isProtectedInSession:(id)arg1;
- (void)unprotectInSession:(id)arg1 clearOnFailProtection:(_Bool)arg2;
- (void)protectInSession:(id)arg1 unprotectOnFail:(_Bool)arg2;
- (_Bool)validForSession:(id)arg1;
- (void)destroyResourcesInSession:(id)arg1;
- (void)bindColorbufferInSession:(id)arg1;
- (unsigned long long)estimatedMemroyInBytes;
- (_Bool)activateInsideSession:(id)arg1;
- (_Bool)bindInSession:(id)arg1;
- (void)p_bindFramebuffer;
@property(nonatomic) unsigned int framebufferHandle;
- (void)dealloc;
- (id)initWithContext:(id)arg1 size:(const tvec2_3b141483 *)arg2 attributes:(const struct FramebufferAttributes *)arg3;

@end

