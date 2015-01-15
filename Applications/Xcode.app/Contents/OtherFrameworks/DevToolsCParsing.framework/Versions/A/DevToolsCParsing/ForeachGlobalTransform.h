//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCParsing/Transform.h>

@class NSMutableArray, TreeSearcher;

@interface ForeachGlobalTransform : Transform
{
    BOOL _convertToForeach;
    BOOL _convertToProperties;
    BOOL _bailOnAnyFailures;
    NSMutableArray *_forwardedClassDeclarations;
    NSMutableArray *_inProgressPropertyTransforms;
    TreeSearcher *_forSearcher;
    TreeSearcher *_whileSearcher;
}

- (BOOL)checkFinal;
- (void)cleanupTransformSpecificPerFile;
- (BOOL)canFlushFunctionBodiesPerFile;
- (BOOL)checkPerFile;
- (void)_appendPropertyTransformForClassDeclaration:(id)arg1;
- (BOOL)checkFirstFile;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;
- (id)requiredParamDictKeys;
- (BOOL)checkValidateInputs;
- (id)transformRelatedNames;

@end

