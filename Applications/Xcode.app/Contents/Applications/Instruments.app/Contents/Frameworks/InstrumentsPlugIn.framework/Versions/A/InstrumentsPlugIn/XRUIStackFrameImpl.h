//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CommonSymbol.h"
#import "XRUIStackFrame.h"

@class NSString;

@interface XRUIStackFrameImpl : NSObject <XRUIStackFrame, CommonSymbol>
{
    NSString *_library;
    NSString *_symbolName;
    NSString *_path;
    long long _lineNumber;
}

@property(readonly, copy) NSString *description;
- (id)libraryPath;
- (id)libraryName;
- (id)symbolName;
- (unsigned long long)lineNumber;
- (id)sourcePath;
- (int)pid;
- (unsigned long long)address;
- (long long)lineNumberForDisplay;
- (id)pathForDisplay;
- (id)symbolNameForUse;
- (id)symbolNameForDisplay;
- (id)libraryForDisplay;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 symbolName:(id)arg2 path:(id)arg3 lineNumber:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

