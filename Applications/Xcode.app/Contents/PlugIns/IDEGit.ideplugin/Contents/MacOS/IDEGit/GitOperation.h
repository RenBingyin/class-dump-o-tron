//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDESourceControlTaskOperation.h"

@interface GitOperation : IDESourceControlTaskOperation
{
}

+ (void)parseForStatusAndPathWithLine:(id)arg1 withFullPath:(id)arg2 puttingIntoDictionary:(id)arg3 blackListedFilePaths:(id)arg4;
+ (void)setupFilePath:(id)arg1 asUnversionedWithDictionary:(id)arg2;
+ (id)dvtFilePathForPathString:(id)arg1 withFullPath:(id)arg2;
- (void)addQuietFlagIfNeeded:(id)arg1 defaultFlag:(BOOL)arg2;
- (id)errorFromErrorMessage:(id)arg1;
- (id)defaultArguments;
- (id)launchPath;
- (id)initWithRequest:(id)arg1;

@end

