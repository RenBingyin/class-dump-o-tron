//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLWhereIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLHavingIntermediate : NSSQLIntermediate
{
    NSSQLWhereIntermediate *_whereClause;
}

- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)isHavingScoped;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;

@end

