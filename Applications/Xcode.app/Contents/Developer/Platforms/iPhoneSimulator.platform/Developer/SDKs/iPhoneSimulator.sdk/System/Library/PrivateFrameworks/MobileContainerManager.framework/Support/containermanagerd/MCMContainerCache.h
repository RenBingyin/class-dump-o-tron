//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MCMContainerCache : NSObject
{
    NSMutableDictionary *_liveContainerCache;
    NSMutableDictionary *_tempContainerCache;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _cacheLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)removeContainerForContentClass:(long long)arg1 identifier:(id)arg2 temporary:(_Bool)arg3 error:(id *)arg4;
- (_Bool)addContainerMetadata:(id)arg1 url:(id)arg2 temporary:(_Bool)arg3 error:(id *)arg4;
- (id)allContainersForContentClass:(long long)arg1 temporary:(_Bool)arg2 error:(id *)arg3;
- (id)containerForContentClass:(long long)arg1 identifier:(id)arg2 uuidString:(id)arg3 temporary:(_Bool *)arg4;
- (id)containerForContentClass:(long long)arg1 identifier:(id)arg2 temporary:(_Bool)arg3 error:(id *)arg4;
- (id)_getCacheForContentClass:(long long)arg1 temporary:(_Bool)arg2 error:(id *)arg3;
- (id)init;

@end

