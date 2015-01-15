//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGLContext.h>

@class EAGLContext;

__attribute__((visibility("hidden")))
@interface TSCH3DGLESContext : TSCH3DGLContext
{
    EAGLContext *mContext;
}

+ (_Bool)isCurrentContextValid;
+ (void)clearCurrentContext;
- (id)capabilitiesForExtensions:(id)arg1;
- (id)extensionsForCurrentVirtualScreen;
- (void)setVirtualScreen:(int)arg1;
- (int)virtualScreen;
- (void)restoreEAGLContext:(id)arg1;
- (id)bindReturningPreviousContext;
- (_Bool)isBound;
- (void)present;
- (void)dealloc;
- (id)init;

@end

