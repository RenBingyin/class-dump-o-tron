//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BKSHIDEventRouterManagerBase : NSObject
{
    NSArray *_eventRouters;
}

@property(retain, nonatomic) NSArray *eventRouters; // @synthesize eventRouters=_eventRouters;
- (id)description;
- (long long)routerDestinationForDescriptor:(id)arg1;
- (id)init;

@end

