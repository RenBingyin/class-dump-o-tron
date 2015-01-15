//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTXMessage;

@protocol DTXMessenger <NSObject>
- (void)sendMessageSync:(DTXMessage *)arg1 replyHandler:(void (^)(DTXMessage *))arg2;
- (_Bool)sendMessageAsync:(DTXMessage *)arg1 replyHandler:(void (^)(DTXMessage *))arg2;
- (void)sendMessage:(DTXMessage *)arg1 replyHandler:(void (^)(DTXMessage *))arg2;
- (void)sendControlSync:(DTXMessage *)arg1 replyHandler:(void (^)(DTXMessage *))arg2;
- (void)sendControlAsync:(DTXMessage *)arg1 replyHandler:(void (^)(DTXMessage *))arg2;
- (void)cancel;
- (void)registerDisconnectHandler:(void (^)(void))arg1;
- (void)setDispatchTarget:(id <DTXAllowedRPC>)arg1;
- (void)setMessageHandler:(void (^)(DTXMessage *))arg1;
@end

