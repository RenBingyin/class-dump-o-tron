//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XDErrorWarningCallback.h"

@class NSDictionary, NSMutableArray, NSString;

@interface XDErrorWarningCallbackDefaultImp : NSObject <XDErrorWarningCallback>
{
    NSString *_errorWarningPrefix;
    NSMutableArray *_errorList;
    NSMutableArray *_warningList;
    BOOL _logFlag;
    BOOL _stopAtFirstError;
    BOOL _hide_warnings;
    NSDictionary *_compilerFlags;
}

- (float)targetVersion;
- (BOOL)continueGeneration;
- (void)createWarningForElement:(id)arg1 withMessage:(id)arg2;
- (id)warningList;
- (void)createErrorForElement:(id)arg1 withMessage:(id)arg2;
- (id)errorList;
- (id)compilerFlags;
- (id)_elementPath:(id)arg1;
- (void)dealloc;
- (id)initWithErrorWarningPrefix:(id)arg1 stopAtFirstError:(BOOL)arg2 logFlag:(BOOL)arg3 hideWarnings:(BOOL)arg4 compilerFlags:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

