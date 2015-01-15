//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3DatabaseConnection, ML3MusicLibrary, NSData, NSMutableArray, NSMutableDictionary;

@interface ML3SortMap : NSObject
{
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
    NSMutableDictionary *_nameOrders;
    NSMutableArray *_entries;
    NSData *_minSortKey;
    NSData *_maxSortKey;
    long long _smallestNameDelta;
}

- (void).cxx_destruct;
- (id)nameOrders;
- (_Bool)commitUpdates;
- (id)_sortKeyString:(id)arg1;
- (long long)_sortKeyDistance:(id)arg1 sortKey2:(id)arg2 offset:(unsigned long long)arg3;
- (long long)_maxNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (long long)_minNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (id)_maxSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (id)_minSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder *)arg2;
- (_Bool)_insertSortedNameEntriesIntoSortMap:(id)arg1;
- (id)_sortedNameEntriesToInsertForNames:(id)arg1;
- (_Bool)insertStringsIntoSortMap:(id)arg1 didReSortMap:(_Bool *)arg2;
- (_Bool)loadExistingSortedEntries;
- (id)initWithConnection:(id)arg1 library:(id)arg2;

@end

