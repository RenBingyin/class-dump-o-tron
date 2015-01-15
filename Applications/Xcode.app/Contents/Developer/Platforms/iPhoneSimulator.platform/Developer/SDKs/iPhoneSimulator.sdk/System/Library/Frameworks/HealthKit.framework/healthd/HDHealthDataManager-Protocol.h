//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDClient, HDSourceEntity, HKObject, HKObjectType, NSArray, NSNumber, NSString, _HKFilter;

@protocol HDHealthDataManager <NSObject>
- (void)setBackgroundObserverFrequency:(HDClient *)arg1 forDataType:(HKObjectType *)arg2 frequency:(long long)arg3 completion:(void (^)(void))arg4;
- (void)closeObserverTransaction;
- (void)openObserverTransaction;
- (void)removeObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2;
- (void)addObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2;
- (void)dataObjectsOfType:(HKObjectType *)arg1 filter:(_HKFilter *)arg2 sinceAnchor:(NSNumber *)arg3 batchHandler:(void (^)(NSArray *, _Bool, NSNumber *))arg4;
- (_Bool)containsDataObject:(HKObject *)arg1;
- (_Bool)deleteDataObjects:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 error:(id *)arg3;
- (_Bool)insertDataObjects:(NSArray *)arg1 withProvenance:(unsigned long long)arg2 sourceEntity:(HDSourceEntity *)arg3 error:(id *)arg4;
@end

