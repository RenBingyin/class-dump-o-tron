//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSCH3DRenderProcessor : NSObject
{
}

+ (id)processor;
- (void)setRenderHints:(const struct RenderHints *)arg1;
- (struct RenderHints)renderHints;
- (void)popRenderState;
- (void)pushRenderState;
- (void)setRenderState:(const struct RenderState *)arg1;
- (struct RenderState)renderState;
- (void)updateRenderState;
- (void)popState;
- (void)pushState;
- (id)effects;
- (long long)texture:(id)arg1;
- (void)texcoords:(id)arg1;
- (void)normals:(id)arg1;
- (void)geometry:(id)arg1;
- (_Bool)canRenderPrefilteredLines;

@end

