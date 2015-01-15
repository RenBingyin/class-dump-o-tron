//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PSSearchResults : NSObject <NSCopying>
{
    NSMutableArray *_sectionEntries;
    NSMutableSet *_explicitlyAddedSectionEntries;
    NSMutableDictionary *_entriesBySection;
    _Bool _needsSorting;
    _Bool _treatSectionEntriesAsRegularEntries;
    CDUnknownBlockType _sectionComparator;
    CDUnknownBlockType _entryComparator;
}

@property(nonatomic) _Bool treatSectionEntriesAsRegularEntries; // @synthesize treatSectionEntriesAsRegularEntries=_treatSectionEntriesAsRegularEntries;
@property(copy, nonatomic) CDUnknownBlockType entryComparator; // @synthesize entryComparator=_entryComparator;
@property(copy, nonatomic) CDUnknownBlockType sectionComparator; // @synthesize sectionComparator=_sectionComparator;
- (id)description;
- (void)dealloc;
- (id)resultsByMergingWithResults:(id)arg1;
- (void)mergeWithResults:(id)arg1;
- (void)sortResults;
- (id)allSectionEntries;
- (id)entryAtIndexPath:(id)arg1;
- (id)entriesInSectionAtIndex:(unsigned long long)arg1;
- (id)sectionEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalNumberOfEntries;
- (unsigned long long)numberOfEntriesInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSectionEntries;
- (unsigned long long)removeEntries:(id)arg1;
- (_Bool)removeEntry:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initForCopyWithSectionEntries:(id)arg1 entriesBySection:(id)arg2 explicitlyAddedSectionEntries:(id)arg3;
- (id)init;

@end

