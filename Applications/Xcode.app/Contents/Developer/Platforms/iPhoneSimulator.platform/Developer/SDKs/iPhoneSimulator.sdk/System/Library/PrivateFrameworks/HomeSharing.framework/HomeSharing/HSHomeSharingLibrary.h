//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSConnection, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface HSHomeSharingLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    _Bool _requiresPassword;
    _Bool _available;
    _Bool __hasPendingUpdateRequest;
    unsigned int _version;
    NSString *_name;
    NSString *_uniqueIdentifier;
    NSString *_homeSharingGroupID;
    NSURL *_baseURL;
    id <NSObject> _context;
    long long _connectionType;
    HSConnection *_connection;
}

@property(nonatomic) _Bool _hasPendingUpdateRequest; // @synthesize _hasPendingUpdateRequest=__hasPendingUpdateRequest;
@property(retain, nonatomic) HSConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property(readonly, nonatomic) _Bool requiresPassword; // @synthesize requiresPassword=_requiresPassword;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_sendUpdateRequest;
- (void)_onQueue_ensureConnection;
@property(readonly, nonatomic) NSString *deviceGUID;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, nonatomic) unsigned int basePlaylistContainerID;
@property(readonly, nonatomic) unsigned int databaseID;
- (void)disconnect;
- (id)urlForRequest:(id)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)securityInfoForURL:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6;

@end

