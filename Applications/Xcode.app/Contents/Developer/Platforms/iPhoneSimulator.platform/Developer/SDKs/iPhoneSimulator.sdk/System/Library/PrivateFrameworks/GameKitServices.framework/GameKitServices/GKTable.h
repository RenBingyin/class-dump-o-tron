//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GKTable : NSObject
{
    struct _gktableitem {
        unsigned int _field1;
        id _field2;
        double _field3;
        double _field4;
    } *_items;
    unsigned long long _count;
    unsigned long long _size;
    struct _opaque_pthread_mutex_t _lock;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
- (void)print;
- (void)unlock;
- (void)lock;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)touchObjectForKey:(unsigned int)arg1;
- (void)touchObject:(id)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (id)allObjects;
- (id)objectForKey:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1;
- (id)init;

@end

