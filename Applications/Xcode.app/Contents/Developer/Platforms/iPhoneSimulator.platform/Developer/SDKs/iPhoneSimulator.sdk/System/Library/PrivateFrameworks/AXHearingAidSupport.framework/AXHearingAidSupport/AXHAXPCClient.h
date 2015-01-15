//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface AXHAXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
    unsigned long long _requestedUpdates;
}

+ (id)clientWithConnection:(id)arg1;
@property(nonatomic) unsigned long long requestedUpdates; // @synthesize requestedUpdates=_requestedUpdates;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)sendMessage:(id)arg1 withError:(id *)arg2;
- (_Bool)wantsUpdatesForIdentifier:(unsigned long long)arg1;
- (void)setWantsUpdates:(_Bool)arg1 forIdentifier:(unsigned long long)arg2;
- (void)teardownConnection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end

