//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MIUninstallNotifier : NSObject
{
    NSArray *_removals;
}

- (void).cxx_destruct;
- (void)performRemovalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithContainersToRemove:(id)arg1;

@end

