//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, XPCNSServiceConnection, XPCNSServiceListener;

@protocol XPCNSServiceListenerDelegate <NSObject>
- (void)XPCNSServiceListener:(XPCNSServiceListener *)arg1 didReceiveNewConnection:(XPCNSServiceConnection *)arg2;

@optional
- (_Bool)XPCNSServiceListener:(XPCNSServiceListener *)arg1 shouldReceiveNewConnection:(NSObject<OS_xpc_object> *)arg2;
@end

