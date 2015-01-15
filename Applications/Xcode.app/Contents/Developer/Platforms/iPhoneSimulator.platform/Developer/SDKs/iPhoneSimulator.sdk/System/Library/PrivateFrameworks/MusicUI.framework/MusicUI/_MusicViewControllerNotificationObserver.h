//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _MusicViewControllerNotificationObserver : NSObject
{
    NSString *_notificationName;
    id _object;
    SEL _selector;
    id _target;
}

@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 object:(id)arg4;

@end

