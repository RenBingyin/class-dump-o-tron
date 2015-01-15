//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, VKPIconPack;

__attribute__((visibility("hidden")))
@interface VKIconAtlas : NSObject
{
    VKPIconPack *_iconPack;
    struct _GEOGenericContainer<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, id, std::__1::hash<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _artworkPool;
    NSMapTable *_atlasToImages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage *)_createImageForIconInfo:(id)arg1 contentScale:(double)arg2;
- (struct CGImage *)_createImageForName:(id)arg1 contentScale:(double)arg2 size:(long long)arg3;
- (id)artworkForName:(id)arg1 style:(CDStruct_44d855de *)arg2 contentScale:(double)arg3 size:(long long)arg4;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 value:(unsigned int)arg2 style:(CDStruct_44d855de *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longValue:(unsigned long long)arg2 style:(CDStruct_44d855de *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)_artworkForBaseImage:(struct CGImage *)arg1 additionalImage:(struct CGImage *)arg2 cacheKey:(id)arg3 style:(CDStruct_44d855de *)arg4 contentScale:(double)arg5;
- (void)dealloc;
- (id)initWithIconPack:(id)arg1;
- (id)init;

@end

