//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface IDSDaemonMIGInterface : NSObject
{
    NSObject<OS_xpc_object> *_server;
    int _notifyToken;
    id _delegate;
    _Bool _shuttingDown;
}

+ (id)sharedInstance;
@property id <IDSDaemonMIGInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)denyIncomingGrantRequests;
- (void)acceptIncomingGrantRequests;
- (void)__setupServer;

@end

