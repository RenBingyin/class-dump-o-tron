//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSSQLitePredicate.h>

#import "NSCopying.h"

@class NSArray, NSString;

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate <NSCopying>
{
    NSString *_combinationOperation;
    NSArray *_predicates;
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

