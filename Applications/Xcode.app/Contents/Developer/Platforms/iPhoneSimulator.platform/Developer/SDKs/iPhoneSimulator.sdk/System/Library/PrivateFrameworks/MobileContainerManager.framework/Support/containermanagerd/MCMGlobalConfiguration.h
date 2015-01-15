//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface MCMGlobalConfiguration : NSObject
{
    NSURL *_homeDirectory;
    NSURL *_cachesDirectory;
    NSURL *_libraryDirectory;
    NSURL *_baseDirectory;
    NSURL *_tempDirectory;
    NSURL *_stagingDirectory;
    NSURL *_deathrowDirectory;
    NSURL *_replaceDirectory;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)containerDirectoryURLForContentClass:(long long)arg1 temporary:(_Bool)arg2;
@property(readonly) NSURL *replaceDirectory;
@property(readonly) NSURL *deathrowDirectory;
@property(readonly) NSURL *stagingDirectory;
@property(readonly) NSURL *tempDirectory;
@property(readonly) NSURL *baseDirectory;
- (id)libraryDirectory;
- (id)cachesDirectory;
@property(readonly) NSURL *logDirectory;
- (id)init;

@end

