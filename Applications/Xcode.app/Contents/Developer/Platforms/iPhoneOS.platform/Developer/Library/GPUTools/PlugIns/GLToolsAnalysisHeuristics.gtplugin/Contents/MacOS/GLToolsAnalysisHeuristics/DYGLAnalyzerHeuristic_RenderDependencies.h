//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYGLAnalyzerHeuristic.h"

@interface DYGLAnalyzerHeuristic_RenderDependencies : DYGLAnalyzerHeuristic
{
    const struct Function *_function;
    ContextStateMirror_daaf80d0 *_stateMirrorContext;
    unsigned int _currentFrameIndex;
    unsigned int _currentRenderPassIndex;
    struct RenderPass _currentRenderPass;
}

+ (id)identifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_generateSurfaceSetStringFrom:(const unordered_set_0c578b6f *)arg1;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;
- (void)_destinationSurfaceList:(unordered_set_0c578b6f *)arg1;
- (void)_sourceSurfaceList:(unordered_set_0c578b6f *)arg1;
- (id)init;

@end

