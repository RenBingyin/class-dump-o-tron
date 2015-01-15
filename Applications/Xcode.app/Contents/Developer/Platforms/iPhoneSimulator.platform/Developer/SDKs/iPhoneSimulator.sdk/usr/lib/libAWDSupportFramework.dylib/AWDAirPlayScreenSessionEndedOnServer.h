//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDAirPlayScreenSessionEndedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioLate;
    unsigned int _audioLost;
    unsigned int _audioUnrecovered;
    int _avgAhead;
    unsigned int _avgRTT;
    int _avgReceiveMs;
    unsigned int _caDrops;
    unsigned int _caFrames;
    unsigned int _clearScreens;
    unsigned int _configChanges;
    unsigned int _duration;
    unsigned int _forcedRefreshes;
    unsigned int _framesReceived;
    unsigned int _negativeAheadFrames;
    int _reason;
    unsigned int _resumes;
    NSString *_sessionUUID;
    unsigned int _suspends;
    unsigned int _unclearScreens;
    struct {
        unsigned int timestamp:1;
        unsigned int audioLate:1;
        unsigned int audioLost:1;
        unsigned int audioUnrecovered:1;
        unsigned int avgAhead:1;
        unsigned int avgRTT:1;
        unsigned int avgReceiveMs:1;
        unsigned int caDrops:1;
        unsigned int caFrames:1;
        unsigned int clearScreens:1;
        unsigned int configChanges:1;
        unsigned int duration:1;
        unsigned int forcedRefreshes:1;
        unsigned int framesReceived:1;
        unsigned int negativeAheadFrames:1;
        unsigned int reason:1;
        unsigned int resumes:1;
        unsigned int suspends:1;
        unsigned int unclearScreens:1;
    } _has;
}

@property(nonatomic) int avgReceiveMs; // @synthesize avgReceiveMs=_avgReceiveMs;
@property(nonatomic) int avgAhead; // @synthesize avgAhead=_avgAhead;
@property(nonatomic) unsigned int avgRTT; // @synthesize avgRTT=_avgRTT;
@property(nonatomic) unsigned int audioLate; // @synthesize audioLate=_audioLate;
@property(nonatomic) unsigned int audioUnrecovered; // @synthesize audioUnrecovered=_audioUnrecovered;
@property(nonatomic) unsigned int audioLost; // @synthesize audioLost=_audioLost;
@property(nonatomic) unsigned int caDrops; // @synthesize caDrops=_caDrops;
@property(nonatomic) unsigned int caFrames; // @synthesize caFrames=_caFrames;
@property(nonatomic) unsigned int negativeAheadFrames; // @synthesize negativeAheadFrames=_negativeAheadFrames;
@property(nonatomic) unsigned int forcedRefreshes; // @synthesize forcedRefreshes=_forcedRefreshes;
@property(nonatomic) unsigned int resumes; // @synthesize resumes=_resumes;
@property(nonatomic) unsigned int suspends; // @synthesize suspends=_suspends;
@property(nonatomic) unsigned int unclearScreens; // @synthesize unclearScreens=_unclearScreens;
@property(nonatomic) unsigned int clearScreens; // @synthesize clearScreens=_clearScreens;
@property(nonatomic) unsigned int configChanges; // @synthesize configChanges=_configChanges;
@property(nonatomic) unsigned int framesReceived; // @synthesize framesReceived=_framesReceived;
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
@property(nonatomic) _Bool hasAvgReceiveMs;
@property(nonatomic) _Bool hasAvgAhead;
@property(nonatomic) _Bool hasAvgRTT;
@property(nonatomic) _Bool hasAudioLate;
@property(nonatomic) _Bool hasAudioUnrecovered;
@property(nonatomic) _Bool hasAudioLost;
@property(nonatomic) _Bool hasCaDrops;
@property(nonatomic) _Bool hasCaFrames;
@property(nonatomic) _Bool hasNegativeAheadFrames;
@property(nonatomic) _Bool hasForcedRefreshes;
@property(nonatomic) _Bool hasResumes;
@property(nonatomic) _Bool hasSuspends;
@property(nonatomic) _Bool hasUnclearScreens;
@property(nonatomic) _Bool hasClearScreens;
@property(nonatomic) _Bool hasConfigChanges;
@property(nonatomic) _Bool hasFramesReceived;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

