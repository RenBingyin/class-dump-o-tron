//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCEActivity.h>

@class NSObject, NSString;

@interface XCEActivityNC : XCEActivity
{
    NSString *_notificationName;
    NSObject *_notificationObject;
    NSObject *_receivedObject;
}

@property(retain, nonatomic) NSObject *receivedObject; // @synthesize receivedObject=_receivedObject;
@property(retain, nonatomic) NSObject *notificationObject; // @synthesize notificationObject=_notificationObject;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)dealloc;
- (void)stopBeingActive;
- (void)startBeingActive;
- (void)triggerNotification:(id)arg1;
- (id)initWithNotificationName:(id)arg1 object:(id)arg2 context:(id)arg3;

@end

