//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSDNXPCObject.h"

@class NSMutableArray, NSObject<OS_xpc_object>, NSString, _NSDNXPCConnection;

@interface ClientOfLocalNoteServer : NSObject <_NSDNXPCObject>
{
    _NSDNXPCConnection *_client;
    NSObject<OS_xpc_object> *_regList;
    NSObject<OS_xpc_object> *_queue;
    _Bool _suspended;
    NSMutableArray *_invalidHandlers;
    int _started;
    int _invalid;
    BOOL _postingForbidden;
    BOOL _registerAllForbidden;
    int _lock;
    int _pid;
    char *_processName;
}

- (void)handlePost:(id)arg1;
- (void)start;
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithClientConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

