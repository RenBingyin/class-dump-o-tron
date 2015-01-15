//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLStatement : NSObject
{
    NSSQLEntity *_entity;
    NSMutableArray *_bindVariables;
    NSMutableArray *_bindIntarrays;
    NSString *_sqlString;
    _Bool _isImpossibleCondition;
    NSSQLEntity *_fakeEntityForFetch;
}

- (_Bool)isReadOnly;
- (void)cacheFakeEntityForFetch:(id)arg1;
- (id)fakeEntityForFetch;
- (void)setImpossibleCondition:(_Bool)arg1;
- (_Bool)isImpossibleCondition;
- (void)removeAllBindIntarrays;
- (void)setBindIntarrays:(id)arg1;
- (unsigned int)addBindIntarray:(id)arg1;
- (id)bindIntarrays;
- (void)removeAllBindVariables;
- (void)setBindVariables:(id)arg1;
- (unsigned int)addBindVariable:(id)arg1;
- (id)bindVariables;
- (void)setSQLString:(id)arg1;
- (id)sqlString;
- (id)entity;
- (void)dealloc;
- (void)clearCaches;
- (id)initWithEntity:(id)arg1;
- (id)description;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;

@end

