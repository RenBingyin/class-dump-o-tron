//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZAbstractToolExecutor.h"

@class NSString;

@interface PurpleApplicationArchiveExpander : MZAbstractToolExecutor
{
    NSString *_archivePath;
    NSString *_extractionPath;
}

+ (id)expanderWithArchivePath:(id)arg1;
+ (void)initialize;
- (void)cleanupDestinationDirectory;
- (id)extractionPath;
- (id)taskWithError:(id *)arg1;
- (void)processExitCode:(id)arg1;
- (BOOL)expectsStandardOutputWithSuccessfulExit;
- (id)parseOutput:(id)arg1;
- (id)expandToPath:(id)arg1;
- (id)archivePath;
- (void)dealloc;
- (id)initWithArchivePath:(id)arg1;

@end
