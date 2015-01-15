//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreDAVLeafDataPayload.h"
#import "DADataElement.h"

@class NSArray, NSData, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface CardDAVVCardItem : NSObject <CoreDAVLeafDataPayload, DADataElement>
{
    unsigned int _abRecordType;
    NSURL *_serverID;
    NSNumber *_clientID;
    NSData *_dataPayload;
    void *_abRecord;
    NSString *_syncKey;
    NSMutableDictionary *_UUIDToPersonCache;
    NSMutableDictionary *_uuidToPersonCache;
}

@property(retain, nonatomic) NSMutableDictionary *uuidToPersonCache; // @synthesize uuidToPersonCache=_uuidToPersonCache;
@property(nonatomic) __weak NSMutableDictionary *UUIDToPersonCache; // @synthesize UUIDToPersonCache=_UUIDToPersonCache;
@property(retain, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
@property(nonatomic) unsigned int abRecordType; // @synthesize abRecordType=_abRecordType;
@property(readonly, nonatomic) void *abRecord; // @synthesize abRecord=_abRecord;
@property(retain, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(retain, nonatomic) NSNumber *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSURL *serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;
- (id)convertToDAContactSearchResultElement;
- (void *)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned int *)arg1;
- (void)loadClientIDs;
- (_Bool)deleteFromContainer:(void *)arg1;
- (_Bool)saveServerIDToExistingItem;
- (_Bool)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void *)arg1;
- (_Bool)saveIfGroupWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 containerURL:(id)arg3 shouldMergeProperties:(_Bool)arg4 outMergeDidChooseLocalProperties:(_Bool *)arg5 account:(id)arg6 shouldSaveGroups:(_Bool)arg7;
- (void)dealloc;
- (id)initWithABRecord:(void *)arg1 outNeedsDBSave:(_Bool *)arg2 maxImageSize:(long long)arg3 maxResourceSize:(long long)arg4 inContainerWithURL:(id)arg5;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSArray *childrenOrder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

