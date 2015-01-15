//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSPushHandlerDelegate.h"

@class NSArray, NSData, NSMutableArray, NSString;

@interface IDSInvitationPushHandler : NSObject <IDSPushHandlerDelegate>
{
    NSMutableArray *_handlers;
    NSArray *_topics;
    _Bool _registeredForPush;
    _Bool _isListening;
}

+ (id)commandToHandlerBlock;
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)copyHandlersForEnumerating;
- (id)_pushTopics;
@property(nonatomic) _Bool registered;
- (void)_ignoreIncomingPushes;
- (void)_acceptIncomingPushes;
- (void)_updateListenerIfNeeded;
@property(readonly, nonatomic) NSData *pushToken;
- (void)dealloc;
- (id)initWithTopics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

