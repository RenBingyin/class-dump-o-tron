//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCOperationMultiplexer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRCDownloadOperationMultiplexer : BRCOperationMultiplexer
{
    NSArray *_desiredKeys;
}

- (void).cxx_destruct;
- (id)operationFromBatch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 container:(id)arg2 desiredKeys:(id)arg3;

@end

