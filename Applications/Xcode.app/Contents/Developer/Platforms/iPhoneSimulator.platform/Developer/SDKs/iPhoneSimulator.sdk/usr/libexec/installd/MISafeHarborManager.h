//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MISafeHarborManager : NSObject
{
}

+ (id)defaultManager;
- (id)safeHarborListForType:(long long)arg1 withError:(id *)arg2;
- (_Bool)removeSafeHarborWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)registerSafeHarborAtURL:(id)arg1 withOptions:(id)arg2 forIdentifier:(id)arg3 ofType:(long long)arg4 error:(id *)arg5;

@end
