//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class XRStorageManager;

@interface XRManagedEvent : NSObject <NSCopying>
{
    int _managedRetainCount;
    unsigned int _identifier;
    XRStorageManager *_storageManager;
}

+ (void)configureDescriptor:(id)arg1 forStorageManager:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (unsigned int)_managedRetainCount;
- (id)storageManager;
- (unsigned int)identifier;

@end
