//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFileProvider.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCVersionsFileProvider : BRCFileProvider
{
    NSMutableDictionary *_operationsByName;
}

- (void).cxx_destruct;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_physicalURLForURL:(id)arg1;
- (id)_fileReactorID;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

