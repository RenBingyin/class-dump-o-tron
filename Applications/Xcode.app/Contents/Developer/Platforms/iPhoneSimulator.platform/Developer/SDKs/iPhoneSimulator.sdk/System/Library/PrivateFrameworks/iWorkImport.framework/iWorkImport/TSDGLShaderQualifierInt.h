//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDGLShaderQualifier.h>

__attribute__((visibility("hidden")))
@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier
{
    int _GLintValue;
    int _proposedGLintValue;
}

@property(nonatomic) int proposedGLintValue; // @synthesize proposedGLintValue=_proposedGLintValue;
@property(readonly, nonatomic) int GLintValue; // @synthesize GLintValue=_GLintValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

