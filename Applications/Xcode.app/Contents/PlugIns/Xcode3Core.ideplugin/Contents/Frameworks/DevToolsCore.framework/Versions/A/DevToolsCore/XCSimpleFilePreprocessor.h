//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface XCSimpleFilePreprocessor : NSObject
{
    struct {
        unsigned int stripComments:1;
        unsigned int forceIncludeFilesToEndWithNewline:1;
        unsigned int processIncludes:1;
        unsigned int searchLocalDirForIncludes:1;
        unsigned int reservedForFutureUse:28;
    } _sppFlags;
    NSArray *_includeSearchPath;
    NSString *_filePath;
    unsigned long long _encoding;
    NSString *_result;
    NSMutableSet *_filesProcessed;
    NSMutableArray *_errors;
}

+ (id)preprocessor;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *errors;
@property(readonly, copy, nonatomic) NSSet *filesProcessed;
@property(readonly, copy, nonatomic) NSString *preprocessedFileContents;
@property(readonly, nonatomic) unsigned long long fileEncoding;
@property(readonly, copy, nonatomic) NSString *preprocessedFilePath;
- (id)preprocessFileAtPath:(id)arg1 encoding:(unsigned long long)arg2;
- (id)_preprocessFileAtPath:(id)arg1 seenFiles:(id)arg2;
- (id)_pathToIncludedFileNamed:(id)arg1 usingSearchPath:(id)arg2;
@property(copy, nonatomic) NSArray *includeSearchPath;
@property(nonatomic) BOOL searchLocalDirForIncludes;
@property(nonatomic) BOOL processIncludes;
@property(nonatomic) BOOL forceIncludedFilesToEndWithNewline;
@property(nonatomic) BOOL stripComments;
- (id)init;

@end

