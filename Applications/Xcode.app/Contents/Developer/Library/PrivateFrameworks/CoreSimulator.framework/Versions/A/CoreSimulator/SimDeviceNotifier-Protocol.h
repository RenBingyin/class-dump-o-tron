//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSObject<OS_dispatch_queue>;

@protocol SimDeviceNotifier
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)registerNotificationHandlerOnQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(void (^)(NSDictionary *))arg2;
- (unsigned long long)registerNotificationHandler:(void (^)(NSDictionary *))arg1;
@end

