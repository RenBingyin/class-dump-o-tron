//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTFileCopierDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _APSLogFileCompressor : NSObject <CUTFileCopierDelegate>
{
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)dealloc;
- (id)init;

@end

