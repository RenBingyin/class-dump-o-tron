//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertFindingGenerator.h>

@class DYGLExpertVertexObjectFindingGenerator;

__attribute__((visibility("hidden")))
@interface DYGLExpertBasicCPUFindingGenerator : DYGLExpertFindingGenerator
{
    DYGLExpertVertexObjectFindingGenerator *_voGenerator;
}

- (void).cxx_destruct;
- (void)_generateCPULimitedGeneralFinding;
- (void)_generateFinding:(unsigned int)arg1 category:(int)arg2 time:(unsigned long long)arg3;
- (unsigned int)execute;
- (id)initWithVertexObjectFindingGenerator:(id)arg1 withCase:(id)arg2;
- (id)description;

@end

