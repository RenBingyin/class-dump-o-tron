//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ITunesSymlinkAnalyzer : NSObject
{
    NSString *_path;
    NSString *_basePath;
    BOOL _validateSymlinkExists;
    BOOL _validateSymlinkResolvesLocally;
}

+ (id)analyzeSymbolicLinkAtPath:(id)arg1 basePath:(id)arg2;
- (id)analyze;
- (id)analyzeFile;
- (void)analyzePath:(id)arg1 errors:(id)arg2;
- (BOOL)analyzeFileAtPath:(id)arg1 errors:(id)arg2;
- (void)analyzeSymbolicLink:(id)arg1 atPath:(id)arg2 basePath:(id)arg3 errors:(id)arg4;
- (void)setValidateSymlinkResolvesLocally:(BOOL)arg1;
- (BOOL)validateSymlinkResolvesLocally;
- (void)setValidateSymlinkExists:(BOOL)arg1;
- (BOOL)validateSymlinkExists;
- (void)setBasePath:(id)arg1;
- (id)basePath;
- (void)setPath:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)initWithBasePath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

