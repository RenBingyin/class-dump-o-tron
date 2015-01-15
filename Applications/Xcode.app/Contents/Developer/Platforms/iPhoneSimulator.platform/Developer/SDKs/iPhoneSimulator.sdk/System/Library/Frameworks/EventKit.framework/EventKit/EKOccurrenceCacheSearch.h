//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKCancellableRemoteOperation.h"

@class EKEventStore, NSNumber, NSSet, NSString;

@interface EKOccurrenceCacheSearch : NSObject <EKCancellableRemoteOperation>
{
    NSSet *_calendars;
    NSString *_searchTerm;
    EKEventStore *_store;
    CDUnknownBlockType _callback;
    NSNumber *_replyID;
    _Bool _canceled;
}

+ (id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)searchTerm;
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(_Bool)arg2;
- (void)cancel;
- (void)run;
- (int)performSearchOperation:(unsigned int)arg1 inCalendars:(id)arg2 withEventStore:(id)arg3 andSearchTerm:(id)arg4;
- (void)dealloc;
- (id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

