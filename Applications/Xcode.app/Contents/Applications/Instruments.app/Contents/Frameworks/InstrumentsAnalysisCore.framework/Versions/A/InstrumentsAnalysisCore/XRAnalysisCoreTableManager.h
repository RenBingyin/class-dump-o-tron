//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, XRAnalysisCorePathManager, XRIntKeyedDictionary;

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreTableManager : NSObject
{
    XRAnalysisCorePathManager *_pathMan;
    NSMutableDictionary *_storesBySpec;
    NSMutableDictionary *_invalidStoresBySpec;
    XRIntKeyedDictionary *_tablesByID;
    unsigned long long _latestStoreIdx;
    unsigned int _nextAvailableTableID;
    id <XRAnalysisCoreReadOnly> _delegate;
}

- (void).cxx_destruct;
- (id)tableBoundToID:(unsigned int)arg1;
- (void)enumerateKnownTablesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)reserveTableID;
- (id)bindTableID:(unsigned int)arg1 store:(id)arg2 side:(int)arg3;
- (void)wipeInvalidTables;
- (void)invalidateAllTables;
- (id)makeStoreWithSpec:(id)arg1;
- (id)init;
- (id)initWithPathManager:(id)arg1 delegate:(id)arg2;

@end

