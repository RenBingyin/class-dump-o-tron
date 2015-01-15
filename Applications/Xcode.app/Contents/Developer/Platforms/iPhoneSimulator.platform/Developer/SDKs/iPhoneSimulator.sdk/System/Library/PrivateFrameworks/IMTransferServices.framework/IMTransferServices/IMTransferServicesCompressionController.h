//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject
{
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressFileTransfer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_blockForCopier:(id)arg1;
- (void)_unmapCopier:(id)arg1;
- (void)_mapCopier:(id)arg1 toBlock:(CDUnknownBlockType)arg2;

@end

