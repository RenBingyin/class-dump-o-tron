//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _HKCFGNodeCache : NSObject
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (void)cacheNodes:(id)arg1 forPosition:(unsigned long long)arg2 nonTerminal:(id)arg3 lengthAllowance:(unsigned long long)arg4;
- (id)nodesForPosition:(unsigned long long)arg1 nonTerminal:(id)arg2 withLengthAllowance:(unsigned long long)arg3;
- (id)init;

@end

