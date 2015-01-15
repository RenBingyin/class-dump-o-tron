//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSLink.h"
#import "IDSLinkDelegate.h"

@class IDSUDPLink, NSArray, NSMutableArray, NSString;

@interface IDSUDPGlobalLink : NSObject <IDSLink, IDSLinkDelegate>
{
    IDSUDPLink *_udpLink;
    id <IDSLinkDelegate> _delegate;
    CDUnknownBlockType _dataReadyHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_interfaceIPv4AddressArray;
    NSMutableArray *_remoteAddressArray;
    struct IDSSockAddrPairTable _sockAddrPairTable;
    unsigned int _sourceInterfaceIndex;
    struct sockaddr_storage _sourceAddress;
    struct sockaddr_storage _destinationAddress;
    double _connectionRequestStartTime;
    double _nominateRequestStartTime;
    _Bool _isInvalidated;
    _Bool _notifyReachableDone;
    NSString *_localPartyID;
    NSString *_remotePartyID;
    NSString *_deviceID;
    unsigned long long _state;
    unsigned long long _headerOverhead;
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
    unsigned long long _previousBytesSent;
    unsigned long long _previousPacketsSent;
    unsigned long long _previousBytesReceived;
    unsigned long long _previousPacketsReceived;
    double _previousReportTime;
}

@property(retain, nonatomic) NSString *remotePartyID; // @synthesize remotePartyID=_remotePartyID;
@property(retain, nonatomic) NSString *localPartyID; // @synthesize localPartyID=_localPartyID;
@property id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (_Bool)link:(id)arg1 fromDeviceID:(id)arg2 didReceivePacket:(CDStruct_9a16016b *)arg3;
- (void)link:(id)arg1 didDisconnectForDevice:(id)arg2;
- (void)link:(id)arg1 didConnectForDevice:(id)arg2;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (unsigned long long)sendPacketBuffer:(CDStruct_9a16016b *)arg1 toDeviceID:(id)arg2;
- (_Bool)remoteHostAwake;
- (_Bool)_processStunPacket:(CDStruct_9a16016b *)arg1 fromDevice:(id)arg2 arrivalTime:(double)arg3;
- (_Bool)_processStunBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 arrivalTime:(double)arg6;
- (_Bool)_processStunBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 arrivalTime:(double)arg6;
- (void)_updateLinkTransportAddress:(unsigned int)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3;
@property(readonly) unsigned long long headerOverhead; // @synthesize headerOverhead=_headerOverhead;
- (void)_sendNominateRequest;
- (void)_sendConnectionCheckRequest;
- (void)_createSimpleConnectionData;
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3;
- (void)processRemoteConnectionData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createConnectionData:(id)arg1 dataReadyHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDeviceID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

