//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class TSCH3DGLContext, TSCH3DGLHandle, TSCH3DSession;

@protocol TSCH3DGLResolveFramebuffer
- (tvec2_3b141483)resolveFramebufferSize;
- (struct FramebufferAttributes)resolveFramebufferAttributes;
- (TSCH3DGLHandle *)resolveFramebufferHandleForSession:(TSCH3DSession *)arg1;
- (_Bool)resolveFramebufferValidForSession:(TSCH3DSession *)arg1;
- (TSCH3DGLContext *)resolveFramebufferContext;
- (_Bool)activateResolveFramebufferInsideSession:(TSCH3DSession *)arg1;
@end

