//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HAPRemoteSession : NSObject
{
    unsigned char _cipherReadKey[32];
    unsigned char _cipherReadNonce[8];
    unsigned char _cipherWriteKey[32];
    unsigned char _cipherWriteNonce[8];
    _Bool _commitResponded;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CDUnknownBlockType _internalRequestHandler;
    const char *_label;
    unsigned char _pairVerifyDone;
    struct PairingSessionPrivate *_pairVerifySession;
    NSMutableDictionary *_prepareRequests;
    _Bool _prepareResponded;
    NSString *_sessionID;
    _Bool _started;
    int _state;
    NSMutableDictionary *_transactions;
    NSMutableArray *_userTransactions;
    CDUnknownBlockType _findPeerHandler;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _stoppedHandler;
    CDUnknownBlockType _transportSendMessage;
    long long _type;
    NSObject<OS_dispatch_queue> *_userQueue;
}

@property(copy) CDUnknownBlockType transportSendMessage; // @synthesize transportSendMessage=_transportSendMessage;
@property(copy) CDUnknownBlockType stoppedHandler; // @synthesize stoppedHandler=_stoppedHandler;
@property(copy) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
@property(copy) CDUnknownBlockType findPeerHandler; // @synthesize findPeerHandler=_findPeerHandler;
@property(copy) CDUnknownBlockType internalRequestHandler; // @synthesize internalRequestHandler=_internalRequestHandler;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_userQueue;
- (void).cxx_destruct;
- (void)_serverCompletePrepareRequest:(id)arg1;
- (int)_serverHandleCommitRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (int)_serverHandlePrepareRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (int)_serverHandleDecryptedRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_serverHandleEncryptedRequest:(id)arg1;
- (void)_serverPairVerifyExchange:(id)arg1;
- (void)_serverRunStateMachine;
- (int)_clientHandleCommitResponse:(id)arg1;
- (int)_clientSendCommitRequest:(id)arg1;
- (int)_clientHandlePrepareResponse:(id)arg1;
- (int)_clientSendPrepareRequest:(id)arg1;
- (int)_clientPairVerifyExchange:(id)arg1;
- (void)_clientRunStateMachine;
- (void)_transportReceivedMessage:(id)arg1;
- (void)transportReceivedMessage:(id)arg1;
- (void)_completeTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (int)_updateIdleTimer;
- (int)_setupEncryption;
- (void)_runStateMachine;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)_start;
- (void)start;
- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (id)init;

@end
