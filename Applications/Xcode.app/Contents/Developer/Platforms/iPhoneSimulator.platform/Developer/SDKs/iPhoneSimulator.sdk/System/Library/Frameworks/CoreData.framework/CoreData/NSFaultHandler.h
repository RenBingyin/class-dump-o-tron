//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSFaultHandler : NSObject
{
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (void)initialize;
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)arg1 withContext:(id)arg2;
- (void)turnObject:(id)arg1 intoFaultWithContext:(id)arg2;
- (id)retainedFulfillAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3;
- (id)fulfillFault:(id)arg1 withContext:(id)arg2 forIndex:(unsigned long long)arg3;
- (void)fulfillFault:(id)arg1 withContext:(id)arg2;
- (id)fulfillFault:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)initWithPersistenceStore:(id)arg1;

@end

