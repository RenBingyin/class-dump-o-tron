//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_xpc_object>, NSString, SYDPeer;

@interface SYDMessage : NSObject
{
    SYDPeer *_peer;
    NSObject<OS_xpc_object> *_message;
    NSDictionary *_nsMessage;
}

@property(readonly, nonatomic) SYDPeer *peer; // @synthesize peer=_peer;
- (void)sendReply:(id)arg1;
@property(readonly, nonatomic) NSString *storeIdentifier;
@property(readonly, nonatomic) _Bool hasProposedAdditionalStores;
@property(readonly, nonatomic) NSString *proposedStoreIdentifier;
@property(readonly, nonatomic) NSString *proposedBundleIdentifier;
@property(readonly, nonatomic) id userInfo;
@property(readonly, nonatomic) NSString *messageName;
- (void)_translateMessageIfNecessary;
- (void)finalize;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 andMessage:(id)arg2;

@end

