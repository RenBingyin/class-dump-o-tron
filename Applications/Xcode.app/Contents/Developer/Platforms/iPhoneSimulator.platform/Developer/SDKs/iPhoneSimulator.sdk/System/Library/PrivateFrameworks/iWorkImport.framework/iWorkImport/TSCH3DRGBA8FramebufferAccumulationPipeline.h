//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferAccumulationPipeline.h>

__attribute__((visibility("hidden")))
@interface TSCH3DRGBA8FramebufferAccumulationPipeline : TSCH3DFramebufferAccumulationPipeline
{
}

- (void)setFramebufferSize:(tvec2_3b141483 *)arg1;
- (id)RGBA8Resolver;
- (id)RGBA8Accumulator;
- (void)deallo;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (id)accumulationFBOResource;

@end

