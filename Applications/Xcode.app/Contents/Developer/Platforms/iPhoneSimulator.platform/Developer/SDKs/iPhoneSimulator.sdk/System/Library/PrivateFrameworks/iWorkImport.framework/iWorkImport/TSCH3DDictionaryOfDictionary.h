//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DDictionaryOfDictionary : NSObject
{
    NSMutableDictionary *mDictionary;
}

- (void)addEntriesFromDictionaryOfDictionary:(id)arg1;
- (void)removeObjectForFirstLevelKey:(id)arg1 secondLevelKey:(id)arg2;
- (id)objectForFirstLevelKey:(id)arg1 secondLevelKey:(id)arg2;
- (void)setObject:(id)arg1 forFirstLevelKey:(id)arg2 secondLevelKey:(id)arg3;
- (id)description;
- (void)dealloc;
- (id)init;

@end

