//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSSockAddrWrapper, IDSUTunControlChannel, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IDSDeviceConnectionInfo : NSObject
{
    NSString *_token;
    IDSSockAddrWrapper *_remoteSA;
    NSMutableDictionary *_connectionsByID;
    IDSUTunControlChannel *_controlChannel;
    NSData *_controlChannelCachedSYN;
    NSMutableSet *_highPriorityConnectionSendingSet;
    unsigned int _localCIDSet[2048];
    _Bool _suspendTraffic;
    double _suspendTrafficCheckTime;
    _Bool _linkManagerConnected;
    double _linkManagerDisconnectTime;
    NSString *_vifName;
    IDSSockAddrWrapper *_localSA;
    struct IDSPortMap _portMap;
    struct SimpleUInt32ToObjectTable _connectionsTableByLocalRemotePortKey;
    struct SimpleUInt32ToObjectTable _outgoingEncryptionTableBySSRC;
    struct SimpleUInt32ToObjectTable _incomingEncryptionTableBySSRC;
    NSMutableArray *_blocksOnLinkConnect;
    int _utunSocket;
}

@property(nonatomic) int utunSocket; // @synthesize utunSocket=_utunSocket;
@property(copy, nonatomic) IDSSockAddrWrapper *localSA; // @synthesize localSA=_localSA;
@property(copy, nonatomic) NSString *vifName; // @synthesize vifName=_vifName;
@property(nonatomic) double linkManagerDisconnectTime; // @synthesize linkManagerDisconnectTime=_linkManagerDisconnectTime;
@property(nonatomic) _Bool linkManagerConnected; // @synthesize linkManagerConnected=_linkManagerConnected;
@property(nonatomic) double suspendTrafficCheckTime; // @synthesize suspendTrafficCheckTime=_suspendTrafficCheckTime;
@property(nonatomic) _Bool suspendTraffic; // @synthesize suspendTraffic=_suspendTraffic;
@property(nonatomic) NSMutableSet *highPriorityConnectionSendingSet; // @synthesize highPriorityConnectionSendingSet=_highPriorityConnectionSendingSet;
@property(retain, nonatomic) NSData *controlChannelCachedSYN; // @synthesize controlChannelCachedSYN=_controlChannelCachedSYN;
@property(retain, nonatomic) IDSUTunControlChannel *controlChannel; // @synthesize controlChannel=_controlChannel;
@property(readonly, nonatomic) NSMutableDictionary *connectionsByID; // @synthesize connectionsByID=_connectionsByID;
@property(copy, nonatomic) IDSSockAddrWrapper *remoteSA; // @synthesize remoteSA=_remoteSA;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void)invalidate;
- (void)cancelBlocksOnLinkConnect;
- (void)cancelBlockOnLinkConnectWithID:(id)arg1 cancelSucceeded:(_Bool *)arg2;
- (void)performBlocksOnLinkConnect;
- (void)addBlocksOnLinkConnect:(CDUnknownBlockType)arg1;
- (void)clearLocalCID:(unsigned short)arg1;
- (unsigned short)nextAvailableLocalCID;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) struct SimpleUInt32ToObjectTable *incomingEncryptionTableBySSRC;
@property(readonly, nonatomic) struct SimpleUInt32ToObjectTable *outgoingEncryptionTableBySSRC;
@property(readonly, nonatomic) struct SimpleUInt32ToObjectTable *connectionsTableByLocalRemotePortKey;
@property(readonly, nonatomic) struct IDSPortMap *portMap;
- (id)initWithToken:(id)arg1;

@end

