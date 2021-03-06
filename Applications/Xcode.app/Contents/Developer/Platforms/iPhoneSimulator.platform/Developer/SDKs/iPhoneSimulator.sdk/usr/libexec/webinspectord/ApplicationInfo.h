//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WebInspectorXPCWrapper;

@interface ApplicationInfo : NSObject
{
    int _hostApplicationPID;
    _Bool _proxy;
    _Bool _hasRemoteDebugSession;
    int _pid;
    NSString *_bundleId;
    NSString *_name;
    WebInspectorXPCWrapper *_connection;
    unsigned long long _applicationState;
}

+ (id)identifierForPID:(int)arg1;
@property(readonly, nonatomic) _Bool hasRemoteDebugSession; // @synthesize hasRemoteDebugSession=_hasRemoteDebugSession;
@property(readonly, nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) WebInspectorXPCWrapper *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isProxy) _Bool proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void)setHostApplicationPID:(int)arg1;
- (_Bool)updateApplicationState:(unsigned long long)arg1;
- (_Bool)updateFromListing:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
- (void)dealloc;
- (id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(_Bool)arg4 connection:(id)arg5 applicationState:(unsigned long long)arg6;

@end

