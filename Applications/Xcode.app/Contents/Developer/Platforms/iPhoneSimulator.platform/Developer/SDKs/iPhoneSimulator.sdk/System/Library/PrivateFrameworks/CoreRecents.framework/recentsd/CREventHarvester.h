//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRRecentContactsLibrary, EKEventStore, NSObject<OS_dispatch_queue>;

@interface CREventHarvester : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CRRecentContactsLibrary *_library;
    EKEventStore *_eventStore;
}

- (void)processEvent:(id)arg1;
- (void)searchForEvents;
- (void)eventStoreChanged:(id)arg1;
- (void)registerForPeriodicSearch;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

@end

