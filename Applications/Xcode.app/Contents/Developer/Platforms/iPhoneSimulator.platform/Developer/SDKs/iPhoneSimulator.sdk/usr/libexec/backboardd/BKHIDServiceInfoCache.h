//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>;

@interface BKHIDServiceInfoCache : NSObject
{
    NSMapTable *_senderToInfoMap;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void)_queue_addInfo:(id)arg1;
- (void)_queue_serviceRemoved:(id)arg1;
- (void)_serviceRemoved:(id)arg1;
- (id)_queue_infoForService:(struct __IOHIDService *)arg1 event:(struct __IOHIDEvent *)arg2;
- (id)description;
- (id)infoForService:(struct __IOHIDService *)arg1 event:(struct __IOHIDEvent *)arg2;
- (id)init;

@end

