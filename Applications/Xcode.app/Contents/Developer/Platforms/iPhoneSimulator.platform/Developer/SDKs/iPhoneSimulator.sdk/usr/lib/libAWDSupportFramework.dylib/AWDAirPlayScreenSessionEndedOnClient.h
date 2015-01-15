//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDAirPlayScreenSessionEndedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _avgBitrate;
    unsigned int _avgEstimatedBandwidth;
    unsigned int _avgUsedBandwidth;
    unsigned int _clearScreens;
    unsigned int _configChanges;
    unsigned int _cpuAvg;
    unsigned int _duration;
    unsigned int _forcedRefreshes;
    unsigned int _framesSent;
    int _reason;
    unsigned int _resumes;
    unsigned int _retransmitAvg;
    unsigned int _rttAvg;
    NSString *_sessionUUID;
    unsigned int _suspends;
    unsigned int _unclearScreens;
    unsigned int _wifiChannel;
    int _wifiRSSI;
    struct {
        unsigned int timestamp:1;
        unsigned int avgBitrate:1;
        unsigned int avgEstimatedBandwidth:1;
        unsigned int avgUsedBandwidth:1;
        unsigned int clearScreens:1;
        unsigned int configChanges:1;
        unsigned int cpuAvg:1;
        unsigned int duration:1;
        unsigned int forcedRefreshes:1;
        unsigned int framesSent:1;
        unsigned int reason:1;
        unsigned int resumes:1;
        unsigned int retransmitAvg:1;
        unsigned int rttAvg:1;
        unsigned int suspends:1;
        unsigned int unclearScreens:1;
        unsigned int wifiChannel:1;
        unsigned int wifiRSSI:1;
    } _has;
}

@property(nonatomic) unsigned int wifiChannel; // @synthesize wifiChannel=_wifiChannel;
@property(nonatomic) int wifiRSSI; // @synthesize wifiRSSI=_wifiRSSI;
@property(nonatomic) unsigned int cpuAvg; // @synthesize cpuAvg=_cpuAvg;
@property(nonatomic) unsigned int rttAvg; // @synthesize rttAvg=_rttAvg;
@property(nonatomic) unsigned int retransmitAvg; // @synthesize retransmitAvg=_retransmitAvg;
@property(nonatomic) unsigned int avgBitrate; // @synthesize avgBitrate=_avgBitrate;
@property(nonatomic) unsigned int avgUsedBandwidth; // @synthesize avgUsedBandwidth=_avgUsedBandwidth;
@property(nonatomic) unsigned int avgEstimatedBandwidth; // @synthesize avgEstimatedBandwidth=_avgEstimatedBandwidth;
@property(nonatomic) unsigned int forcedRefreshes; // @synthesize forcedRefreshes=_forcedRefreshes;
@property(nonatomic) unsigned int resumes; // @synthesize resumes=_resumes;
@property(nonatomic) unsigned int suspends; // @synthesize suspends=_suspends;
@property(nonatomic) unsigned int unclearScreens; // @synthesize unclearScreens=_unclearScreens;
@property(nonatomic) unsigned int clearScreens; // @synthesize clearScreens=_clearScreens;
@property(nonatomic) unsigned int configChanges; // @synthesize configChanges=_configChanges;
@property(nonatomic) unsigned int framesSent; // @synthesize framesSent=_framesSent;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasWifiChannel;
@property(nonatomic) _Bool hasWifiRSSI;
@property(nonatomic) _Bool hasCpuAvg;
@property(nonatomic) _Bool hasRttAvg;
@property(nonatomic) _Bool hasRetransmitAvg;
@property(nonatomic) _Bool hasAvgBitrate;
@property(nonatomic) _Bool hasAvgUsedBandwidth;
@property(nonatomic) _Bool hasAvgEstimatedBandwidth;
@property(nonatomic) _Bool hasForcedRefreshes;
@property(nonatomic) _Bool hasResumes;
@property(nonatomic) _Bool hasSuspends;
@property(nonatomic) _Bool hasUnclearScreens;
@property(nonatomic) _Bool hasClearScreens;
@property(nonatomic) _Bool hasConfigChanges;
@property(nonatomic) _Bool hasFramesSent;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

