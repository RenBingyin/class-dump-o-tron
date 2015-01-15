//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTileKeyMap.h>

@class NSLock;

__attribute__((visibility("hidden")))
@interface VKTilePool : VKTileKeyMap
{
    NSLock *_lock;
}

- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (void)removeObjectForKey:(const struct VKTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)objectForKey:(const struct VKTileKey *)arg1;
- (void)dealloc;
- (id)initWithMapType:(long long)arg1;
- (id)init;

@end

