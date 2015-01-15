//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPeer, NSDictionary, NSObject<OS_xpc_object>, NSString;

@interface GEOMessage : NSObject
{
    NSObject<OS_xpc_object> *_xpcMessage;
    NSDictionary *_decodedMessage;
    GEOPeer *_peer;
}

@property(readonly, nonatomic) GEOPeer *peer; // @synthesize peer=_peer;
- (void)sendReply:(id)arg1;
@property(readonly, nonatomic) id userInfo;
@property(readonly, nonatomic) NSString *messageName;
- (void)finalize;
- (void)dealloc;
- (id)initWithXPCMessage:(id)arg1 peer:(id)arg2;

@end

