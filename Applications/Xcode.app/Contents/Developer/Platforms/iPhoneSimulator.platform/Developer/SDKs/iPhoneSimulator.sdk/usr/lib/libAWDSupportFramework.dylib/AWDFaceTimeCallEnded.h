//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDFaceTimeCallEnded : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _backCameraCaptureDuration;
    unsigned int _callDuration;
    unsigned int _conferenceMiscError;
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _currentNatType;
    unsigned int _dataRate;
    unsigned int _diagnosticPingAvg;
    unsigned int _diagnosticPingMax;
    unsigned int _diagnosticPingMin;
    unsigned int _diagnosticPingPacketLoss;
    unsigned int _endedReason;
    unsigned int _frontCameraCaptureDuration;
    unsigned int _gameKitError;
    int _genericError;
    int _gksError;
    int _gksReturnCode;
    NSString *_guid;
    unsigned int _invitationServiceError;
    unsigned int _isAudioInterrupted;
    unsigned int _isCallUpgrade;
    unsigned int _isInitiator;
    unsigned int _isNetworkActive;
    unsigned int _isNetworkEnabled;
    unsigned int _isNetworkReachable;
    unsigned int _isVideo;
    unsigned int _isVideoInterrupted;
    int _linkQuality;
    unsigned int _localNetworkConnection;
    unsigned int _messageDeliveryError;
    unsigned int _networkCheckResult;
    unsigned int _onLockScreen;
    unsigned int _registrationError;
    unsigned int _relayConnectDuration;
    unsigned int _relayError;
    unsigned int _remoteNatType;
    unsigned int _remoteNetworkConnection;
    unsigned int _usesRelay;
    unsigned int _viceroyError;
    CDStruct_7d3f21e4 _has;
}

@property(nonatomic) unsigned int onLockScreen; // @synthesize onLockScreen=_onLockScreen;
@property(nonatomic) unsigned int isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) int gksReturnCode; // @synthesize gksReturnCode=_gksReturnCode;
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(nonatomic) unsigned int isCallUpgrade; // @synthesize isCallUpgrade=_isCallUpgrade;
@property(nonatomic) unsigned int isAudioInterrupted; // @synthesize isAudioInterrupted=_isAudioInterrupted;
@property(nonatomic) unsigned int isVideoInterrupted; // @synthesize isVideoInterrupted=_isVideoInterrupted;
@property(nonatomic) unsigned int isInitiator; // @synthesize isInitiator=_isInitiator;
@property(nonatomic) unsigned int relayConnectDuration; // @synthesize relayConnectDuration=_relayConnectDuration;
@property(nonatomic) unsigned int remoteNatType; // @synthesize remoteNatType=_remoteNatType;
@property(nonatomic) unsigned int currentNatType; // @synthesize currentNatType=_currentNatType;
@property(nonatomic) unsigned int usesRelay; // @synthesize usesRelay=_usesRelay;
@property(nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) unsigned int localNetworkConnection; // @synthesize localNetworkConnection=_localNetworkConnection;
@property(nonatomic) unsigned int remoteNetworkConnection; // @synthesize remoteNetworkConnection=_remoteNetworkConnection;
@property(nonatomic) unsigned int connectDuration; // @synthesize connectDuration=_connectDuration;
@property(nonatomic) int gksError; // @synthesize gksError=_gksError;
@property(nonatomic) unsigned int dataRate; // @synthesize dataRate=_dataRate;
@property(nonatomic) unsigned int backCameraCaptureDuration; // @synthesize backCameraCaptureDuration=_backCameraCaptureDuration;
@property(nonatomic) unsigned int frontCameraCaptureDuration; // @synthesize frontCameraCaptureDuration=_frontCameraCaptureDuration;
@property(nonatomic) unsigned int networkCheckResult; // @synthesize networkCheckResult=_networkCheckResult;
@property(nonatomic) unsigned int isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
@property(nonatomic) unsigned int isNetworkActive; // @synthesize isNetworkActive=_isNetworkActive;
@property(nonatomic) unsigned int isNetworkEnabled; // @synthesize isNetworkEnabled=_isNetworkEnabled;
@property(nonatomic) unsigned int diagnosticPingPacketLoss; // @synthesize diagnosticPingPacketLoss=_diagnosticPingPacketLoss;
@property(nonatomic) unsigned int diagnosticPingMax; // @synthesize diagnosticPingMax=_diagnosticPingMax;
@property(nonatomic) unsigned int diagnosticPingAvg; // @synthesize diagnosticPingAvg=_diagnosticPingAvg;
@property(nonatomic) unsigned int diagnosticPingMin; // @synthesize diagnosticPingMin=_diagnosticPingMin;
@property(nonatomic) unsigned int callDuration; // @synthesize callDuration=_callDuration;
@property(nonatomic) unsigned int invitationServiceError; // @synthesize invitationServiceError=_invitationServiceError;
@property(nonatomic) unsigned int relayError; // @synthesize relayError=_relayError;
@property(nonatomic) unsigned int registrationError; // @synthesize registrationError=_registrationError;
@property(nonatomic) unsigned int conferenceMiscError; // @synthesize conferenceMiscError=_conferenceMiscError;
@property(nonatomic) unsigned int messageDeliveryError; // @synthesize messageDeliveryError=_messageDeliveryError;
@property(nonatomic) unsigned int gameKitError; // @synthesize gameKitError=_gameKitError;
@property(nonatomic) unsigned int viceroyError; // @synthesize viceroyError=_viceroyError;
@property(nonatomic) int genericError; // @synthesize genericError=_genericError;
@property(nonatomic) unsigned int endedReason; // @synthesize endedReason=_endedReason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOnLockScreen;
@property(nonatomic) _Bool hasIsVideo;
@property(nonatomic) _Bool hasGksReturnCode;
@property(nonatomic) _Bool hasLinkQuality;
@property(nonatomic) _Bool hasIsCallUpgrade;
@property(nonatomic) _Bool hasIsAudioInterrupted;
@property(nonatomic) _Bool hasIsVideoInterrupted;
@property(nonatomic) _Bool hasIsInitiator;
@property(nonatomic) _Bool hasRelayConnectDuration;
@property(nonatomic) _Bool hasRemoteNatType;
@property(nonatomic) _Bool hasCurrentNatType;
@property(nonatomic) _Bool hasUsesRelay;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) _Bool hasLocalNetworkConnection;
@property(nonatomic) _Bool hasRemoteNetworkConnection;
@property(nonatomic) _Bool hasConnectDuration;
@property(nonatomic) _Bool hasGksError;
@property(nonatomic) _Bool hasDataRate;
@property(nonatomic) _Bool hasBackCameraCaptureDuration;
@property(nonatomic) _Bool hasFrontCameraCaptureDuration;
@property(nonatomic) _Bool hasNetworkCheckResult;
@property(nonatomic) _Bool hasIsNetworkReachable;
@property(nonatomic) _Bool hasIsNetworkActive;
@property(nonatomic) _Bool hasIsNetworkEnabled;
@property(nonatomic) _Bool hasDiagnosticPingPacketLoss;
@property(nonatomic) _Bool hasDiagnosticPingMax;
@property(nonatomic) _Bool hasDiagnosticPingAvg;
@property(nonatomic) _Bool hasDiagnosticPingMin;
@property(nonatomic) _Bool hasCallDuration;
@property(nonatomic) _Bool hasInvitationServiceError;
@property(nonatomic) _Bool hasRelayError;
@property(nonatomic) _Bool hasRegistrationError;
@property(nonatomic) _Bool hasConferenceMiscError;
@property(nonatomic) _Bool hasMessageDeliveryError;
@property(nonatomic) _Bool hasGameKitError;
@property(nonatomic) _Bool hasViceroyError;
@property(nonatomic) _Bool hasGenericError;
@property(nonatomic) _Bool hasEndedReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasGuid;
- (void)dealloc;

@end

