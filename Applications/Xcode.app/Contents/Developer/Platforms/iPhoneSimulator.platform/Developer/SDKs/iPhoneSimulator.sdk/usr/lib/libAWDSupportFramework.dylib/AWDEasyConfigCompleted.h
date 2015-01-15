//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface AWDEasyConfigCompleted : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _channelOfDestinationAP;
    unsigned int _channelOfSWAP;
    NSString *_eaBundleSeedID;
    NSString *_eaFirmwareRevision;
    NSString *_eaHardwareRevision;
    NSString *_eaManufacturerName;
    NSString *_eaModelName;
    NSMutableArray *_eaProtocolStrings;
    int _easyConfigStoppedReasonError;
    int _rssiOfDestinationAP;
    int _rssiOfSWAP;
    float _secondsToApplyConfig;
    float _secondsToCompleteFullConfig;
    float _secondsToCompleteMFiSAPAuth;
    float _secondsToCompletePostConfigCheck;
    float _secondsToFindPostConfigDevice;
    float _secondsToFindPreConfigDevice;
    float _secondsToGetLinkUpOnDestination;
    float _secondsToGetLinkUpOnSWAP;
    unsigned int _snrOfDestinationAP;
    unsigned int _snrOfSWAP;
    int _wifiJoinDestinationAPError;
    int _wifiJoinSWAPError;
    _Bool _adminPasswordSet;
    _Bool _destinationNetworkPSKInKeychain;
    _Bool _destinationNetworkRecommendationUsed;
    _Bool _hitJoiningDestinationAPTimeout;
    _Bool _hitJoiningTargetSWAPTimeout;
    _Bool _pauseAfterApply;
    _Bool _playPasswordSet;
    _Bool _userChangedFriendlyName;
    struct {
        unsigned int timestamp:1;
        unsigned int channelOfDestinationAP:1;
        unsigned int channelOfSWAP:1;
        unsigned int easyConfigStoppedReasonError:1;
        unsigned int rssiOfDestinationAP:1;
        unsigned int rssiOfSWAP:1;
        unsigned int secondsToApplyConfig:1;
        unsigned int secondsToCompleteFullConfig:1;
        unsigned int secondsToCompleteMFiSAPAuth:1;
        unsigned int secondsToCompletePostConfigCheck:1;
        unsigned int secondsToFindPostConfigDevice:1;
        unsigned int secondsToFindPreConfigDevice:1;
        unsigned int secondsToGetLinkUpOnDestination:1;
        unsigned int secondsToGetLinkUpOnSWAP:1;
        unsigned int snrOfDestinationAP:1;
        unsigned int snrOfSWAP:1;
        unsigned int wifiJoinDestinationAPError:1;
        unsigned int wifiJoinSWAPError:1;
        unsigned int adminPasswordSet:1;
        unsigned int destinationNetworkPSKInKeychain:1;
        unsigned int destinationNetworkRecommendationUsed:1;
        unsigned int hitJoiningDestinationAPTimeout:1;
        unsigned int hitJoiningTargetSWAPTimeout:1;
        unsigned int pauseAfterApply:1;
        unsigned int playPasswordSet:1;
        unsigned int userChangedFriendlyName:1;
    } _has;
}

@property(retain, nonatomic) NSString *eaHardwareRevision; // @synthesize eaHardwareRevision=_eaHardwareRevision;
@property(retain, nonatomic) NSString *eaFirmwareRevision; // @synthesize eaFirmwareRevision=_eaFirmwareRevision;
@property(retain, nonatomic) NSString *eaModelName; // @synthesize eaModelName=_eaModelName;
@property(retain, nonatomic) NSString *eaManufacturerName; // @synthesize eaManufacturerName=_eaManufacturerName;
@property(retain, nonatomic) NSMutableArray *eaProtocolStrings; // @synthesize eaProtocolStrings=_eaProtocolStrings;
@property(retain, nonatomic) NSString *eaBundleSeedID; // @synthesize eaBundleSeedID=_eaBundleSeedID;
@property(nonatomic) int easyConfigStoppedReasonError; // @synthesize easyConfigStoppedReasonError=_easyConfigStoppedReasonError;
@property(nonatomic) _Bool pauseAfterApply; // @synthesize pauseAfterApply=_pauseAfterApply;
@property(nonatomic) float secondsToCompletePostConfigCheck; // @synthesize secondsToCompletePostConfigCheck=_secondsToCompletePostConfigCheck;
@property(nonatomic) float secondsToFindPostConfigDevice; // @synthesize secondsToFindPostConfigDevice=_secondsToFindPostConfigDevice;
@property(nonatomic) float secondsToApplyConfig; // @synthesize secondsToApplyConfig=_secondsToApplyConfig;
@property(nonatomic) float secondsToCompleteMFiSAPAuth; // @synthesize secondsToCompleteMFiSAPAuth=_secondsToCompleteMFiSAPAuth;
@property(nonatomic) float secondsToFindPreConfigDevice; // @synthesize secondsToFindPreConfigDevice=_secondsToFindPreConfigDevice;
@property(nonatomic) unsigned int channelOfDestinationAP; // @synthesize channelOfDestinationAP=_channelOfDestinationAP;
@property(nonatomic) unsigned int snrOfDestinationAP; // @synthesize snrOfDestinationAP=_snrOfDestinationAP;
@property(nonatomic) int rssiOfDestinationAP; // @synthesize rssiOfDestinationAP=_rssiOfDestinationAP;
@property(nonatomic) _Bool hitJoiningDestinationAPTimeout; // @synthesize hitJoiningDestinationAPTimeout=_hitJoiningDestinationAPTimeout;
@property(nonatomic) _Bool destinationNetworkPSKInKeychain; // @synthesize destinationNetworkPSKInKeychain=_destinationNetworkPSKInKeychain;
@property(nonatomic) int wifiJoinDestinationAPError; // @synthesize wifiJoinDestinationAPError=_wifiJoinDestinationAPError;
@property(nonatomic) float secondsToGetLinkUpOnDestination; // @synthesize secondsToGetLinkUpOnDestination=_secondsToGetLinkUpOnDestination;
@property(nonatomic) unsigned int channelOfSWAP; // @synthesize channelOfSWAP=_channelOfSWAP;
@property(nonatomic) unsigned int snrOfSWAP; // @synthesize snrOfSWAP=_snrOfSWAP;
@property(nonatomic) int rssiOfSWAP; // @synthesize rssiOfSWAP=_rssiOfSWAP;
@property(nonatomic) _Bool hitJoiningTargetSWAPTimeout; // @synthesize hitJoiningTargetSWAPTimeout=_hitJoiningTargetSWAPTimeout;
@property(nonatomic) int wifiJoinSWAPError; // @synthesize wifiJoinSWAPError=_wifiJoinSWAPError;
@property(nonatomic) float secondsToGetLinkUpOnSWAP; // @synthesize secondsToGetLinkUpOnSWAP=_secondsToGetLinkUpOnSWAP;
@property(nonatomic) float secondsToCompleteFullConfig; // @synthesize secondsToCompleteFullConfig=_secondsToCompleteFullConfig;
@property(nonatomic) _Bool destinationNetworkRecommendationUsed; // @synthesize destinationNetworkRecommendationUsed=_destinationNetworkRecommendationUsed;
@property(nonatomic) _Bool adminPasswordSet; // @synthesize adminPasswordSet=_adminPasswordSet;
@property(nonatomic) _Bool playPasswordSet; // @synthesize playPasswordSet=_playPasswordSet;
@property(nonatomic) _Bool userChangedFriendlyName; // @synthesize userChangedFriendlyName=_userChangedFriendlyName;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEaHardwareRevision;
@property(readonly, nonatomic) _Bool hasEaFirmwareRevision;
@property(readonly, nonatomic) _Bool hasEaModelName;
@property(readonly, nonatomic) _Bool hasEaManufacturerName;
- (id)eaProtocolStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eaProtocolStringsCount;
- (void)addEaProtocolStrings:(id)arg1;
- (void)clearEaProtocolStrings;
@property(readonly, nonatomic) _Bool hasEaBundleSeedID;
@property(nonatomic) _Bool hasEasyConfigStoppedReasonError;
@property(nonatomic) _Bool hasPauseAfterApply;
@property(nonatomic) _Bool hasSecondsToCompletePostConfigCheck;
@property(nonatomic) _Bool hasSecondsToFindPostConfigDevice;
@property(nonatomic) _Bool hasSecondsToApplyConfig;
@property(nonatomic) _Bool hasSecondsToCompleteMFiSAPAuth;
@property(nonatomic) _Bool hasSecondsToFindPreConfigDevice;
@property(nonatomic) _Bool hasChannelOfDestinationAP;
@property(nonatomic) _Bool hasSnrOfDestinationAP;
@property(nonatomic) _Bool hasRssiOfDestinationAP;
@property(nonatomic) _Bool hasHitJoiningDestinationAPTimeout;
@property(nonatomic) _Bool hasDestinationNetworkPSKInKeychain;
@property(nonatomic) _Bool hasWifiJoinDestinationAPError;
@property(nonatomic) _Bool hasSecondsToGetLinkUpOnDestination;
@property(nonatomic) _Bool hasChannelOfSWAP;
@property(nonatomic) _Bool hasSnrOfSWAP;
@property(nonatomic) _Bool hasRssiOfSWAP;
@property(nonatomic) _Bool hasHitJoiningTargetSWAPTimeout;
@property(nonatomic) _Bool hasWifiJoinSWAPError;
@property(nonatomic) _Bool hasSecondsToGetLinkUpOnSWAP;
@property(nonatomic) _Bool hasSecondsToCompleteFullConfig;
@property(nonatomic) _Bool hasDestinationNetworkRecommendationUsed;
@property(nonatomic) _Bool hasAdminPasswordSet;
@property(nonatomic) _Bool hasPlayPasswordSet;
@property(nonatomic) _Bool hasUserChangedFriendlyName;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

