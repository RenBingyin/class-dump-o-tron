//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSObject<OS_dispatch_semaphore>, NSString, XRBacktraceRepository, XRMetadataTagTable, XROAEventAggregate, XROAStorageManager, XRObjectAllocVMRegionTracker;

@interface XRObjectAllocRunSharedData : NSObject <NSCoding>
{
    struct vector<unsigned int, std::__1::allocator<unsigned int>> *_allEventIDs;
    struct unordered_map<unsigned long long, OAEventPairing, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, OAEventPairing>>> *_activeAllocations;
    BOOL _discardsLifeCycleComplete;
    XROAStorageManager *_eventCoordinator;
    struct vector<XROAEventAggregate *, std::__1::allocator<XROAEventAggregate *>> *_aggregates;
    XROAEventAggregate *_currentAggregate;
    struct XRTimeRange _caTimeRange;
    NSString *_pastTracePath;
    XRMetadataTagTable *_taggingTable;
    XRBacktraceRepository *_repository;
    NSObject<OS_dispatch_semaphore> *_allEventIDLock;
    int _allocationTypeFilter;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> *_reuseBuffer;
    int _recordMode;
    id *_filterStrings;
    unsigned int *_filterStringsBehavior;
    unsigned int _filterStringCount;
    struct _opaque_pthread_mutex_t _quickLockActive;
    struct _opaque_pthread_mutex_t _reuseLock;
    struct _opaque_pthread_mutex_t _aggregatesLock;
    unsigned long long _lastTimeStamp;
    unsigned int _lastCategoryIdentifier;
    unsigned int _lastEventID;
    struct unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> *_generalAllocCategories;
    struct unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> *_generalVMAllocCategories;
    struct unordered_map<std::__1::basic_string<char>, unsigned int, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned int>>> *_classNameUniquer;
    struct unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> *_vtablePointerCategories;
    XRObjectAllocVMRegionTracker *_vmRegionTracker;
    BOOL _deviceIsLocal;
    unsigned long long _cfPasteboardAddress;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> *_allocationTypeForCategoryIdentifier;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> *_categoryIDForSummaryCategoryAllocationType;
    int _summaryCategoriesVersion;
    BOOL _hasVMevents;
    BOOL _hasHeapEvents;
}

+ (id)_currentDescriptor;
+ (void)initialize;
- (id).cxx_construct;
- (void)runEnded;
- (void)_assignEvent:(unsigned int)arg1 fromCategory:(unsigned int)arg2 toCategory:(unsigned int)arg3 eventType:(unsigned int)arg4 size:(int)arg5 delta:(int)arg6 aggregate:(id)arg7;
- (BOOL)_matchesTypeFilters:(id)arg1;
- (unsigned int)processAllocation:(CDStruct_d66149c5 *)arg1 backtrace:(id)arg2 symbolicate:(BOOL)arg3 category:(id)arg4;
- (unsigned int)_processAllocationInternal:(CDStruct_d66149c5 *)arg1 backtrace:(id)arg2 symbolicate:(BOOL)arg3 category:(id)arg4;
- (id)categoryNameForIsaPointer:(unsigned long long)arg1;
- (const char *)vmRegionTypeDescriptionFromUserTag:(unsigned char)arg1;
- (unsigned int)_categoryForVtablePointer:(unsigned long long)arg1;
- (unsigned int)_setCategoryName:(id)arg1 forIsaPointer:(unsigned long long)arg2;
- (id)symbolNameForAddress:(unsigned long long)arg1;
- (unsigned int)_categoryForEventType:(unsigned int)arg1 size:(int)arg2 name:(const char *)arg3 allocationType:(unsigned int)arg4;
- (unsigned int)_newCategoryWithName:(id)arg1 allocationType:(unsigned int)arg2;
- (void)_reuseEvent:(unsigned int)arg1;
- (void)allowEventReuse;
- (void)addToGlobalStatsFromCategory:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)isCategory:(unsigned int)arg1 inSameSummaryCategoriesAsCategory:(unsigned int)arg2;
- (BOOL)applyAllocationTypeFilterAndRequestedCategoryID:(unsigned int)arg1 toCategoryID:(unsigned int)arg2;
- (BOOL)applyAllocationTypeFilterToCategoryID:(unsigned int)arg1;
- (BOOL)hasVMevents;
- (BOOL)hasHeapEvents;
- (void)_setAllocationType:(unsigned int)arg1 forCategoryIdentifier:(unsigned int)arg2;
- (unsigned int)_allocationTypeForCategoryID:(unsigned int)arg1;
- (void)_initAllocationTypeTableFromCategoryNames;
- (unsigned int)mainSummaryCategoryIDForAllocationTypePerspective:(int)arg1;
- (BOOL)isSummaryCategoryID:(unsigned int)arg1;
- (unsigned int)summaryCategoryCount;
- (unsigned int)categoryIDForAllAllocationsSummaryCategory;
- (unsigned int)categoryIDForSummaryCategoryIndex:(unsigned int)arg1;
- (unsigned int)summaryCategoryIndexForCategoryID:(unsigned int)arg1;
- (unsigned int)categoryIDForSummaryCategoryAllocationType:(unsigned int)arg1;
- (void)_setCategoryID:(unsigned int)arg1 forSummaryCategoryAllocationType:(unsigned int)arg2;
- (int)summaryCategoriesVersion;
- (unsigned int)categoryIDForName:(id)arg1;
- (id)categoryNameForID:(unsigned int)arg1;
- (BOOL)useTypeFilteringRules:(id)arg1;
- (void)_initializeTypeFilteringRules:(unsigned long long)arg1;
- (void)_clearTypeFilteringRules;
- (void)setRecordMode:(int)arg1;
- (void)setAllocationTypeFilter:(int)arg1;
- (int)allocationTypeFilter;
- (void)setDiscardsLifeCycleComplete:(BOOL)arg1;
- (id)vmRegionTracker;
- (BOOL)onlyActiveAllocationsAvailable;
- (unsigned int)maxCategoryIdentifier;
- (unsigned int)lastEventIdentifier;
- (unsigned long long)lastTimestamp;
- (id)storageManager;
- (id)repository;
- (id)aggregates;
- (id)taggingTable;
- (id)eventsForMemoryAddress:(unsigned long long)arg1 constrainToAllocation:(id)arg2;
- (void)enumerateEventsForMemoryAddress:(unsigned long long)arg1 constrainToAllocation:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateActiveAllocationEventsForCategory:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateActiveAllocationEventPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectEventsForCategory:(unsigned int)arg1 startingIdentifier:(unsigned int)arg2 endingIdentifier:(unsigned int)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)enumerateAllEventsFromIdentifier:(unsigned int)arg1 endingIdentifier:(unsigned int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)eventForIdentifier:(unsigned int)arg1;
- (unsigned int)eventIdentifierForActiveAllocationAddress:(unsigned long long)arg1;
- (unsigned int)latestEventIdentifierBeforeTimestamp:(unsigned long long)arg1;
- (unsigned int)earliestEventIdentifierAfterTimestamp:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithEventsArray:(id)arg1 repository:(id)arg2 intermediatesPath:(id)arg3;
- (id)initWithDevice:(id)arg1 file:(id)arg2 relativePath:(id)arg3 repository:(id)arg4;
- (id)initCreatingIvars:(BOOL)arg1 device:(id)arg2;
- (id)initCreatingIvars:(BOOL)arg1 device:(id)arg2 repository:(id)arg3;

@end

