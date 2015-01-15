//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface AWDCaptiveSession : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_appTriggeredPassiveSymptom;
    NSString *_autoLoginCarrierID;
    unsigned int _autoLoginType;
    unsigned int _durationNetworkNotCaptive;
    unsigned int _durationOnNetwork;
    NSString *_handlerCNP;
    NSMutableArray *_installedCNPDisplayIDs;
    unsigned int _passiveCaptivityCorrectDetection;
    unsigned int _passiveCaptivityIncorrectDetection;
    unsigned int _passiveCaptivitySymptom;
    unsigned int _result;
    unsigned int _websheetProbeCount;
    unsigned int _websheetScrapeResult;
    _Bool _autoLoginFailed;
    _Bool _detectedNotCaptiveHandledByCNP;
    _Bool _handlerCNPTriggeredLogOff;
    _Bool _isDetectedCaptive;
    _Bool _passiveCaptivityDetected;
    _Bool _websheetScraped;
    _Bool _wisprDetected;
    struct {
        unsigned int timestamp:1;
        unsigned int autoLoginType:1;
        unsigned int durationNetworkNotCaptive:1;
        unsigned int durationOnNetwork:1;
        unsigned int passiveCaptivityCorrectDetection:1;
        unsigned int passiveCaptivityIncorrectDetection:1;
        unsigned int passiveCaptivitySymptom:1;
        unsigned int result:1;
        unsigned int websheetProbeCount:1;
        unsigned int websheetScrapeResult:1;
        unsigned int autoLoginFailed:1;
        unsigned int detectedNotCaptiveHandledByCNP:1;
        unsigned int handlerCNPTriggeredLogOff:1;
        unsigned int isDetectedCaptive:1;
        unsigned int passiveCaptivityDetected:1;
        unsigned int websheetScraped:1;
        unsigned int wisprDetected:1;
    } _has;
}

@property(retain, nonatomic) NSString *appTriggeredPassiveSymptom; // @synthesize appTriggeredPassiveSymptom=_appTriggeredPassiveSymptom;
@property(nonatomic) unsigned int passiveCaptivitySymptom; // @synthesize passiveCaptivitySymptom=_passiveCaptivitySymptom;
@property(nonatomic) unsigned int durationNetworkNotCaptive; // @synthesize durationNetworkNotCaptive=_durationNetworkNotCaptive;
@property(nonatomic) unsigned int durationOnNetwork; // @synthesize durationOnNetwork=_durationOnNetwork;
@property(nonatomic) _Bool isDetectedCaptive; // @synthesize isDetectedCaptive=_isDetectedCaptive;
@property(nonatomic) _Bool handlerCNPTriggeredLogOff; // @synthesize handlerCNPTriggeredLogOff=_handlerCNPTriggeredLogOff;
@property(nonatomic) unsigned int passiveCaptivityIncorrectDetection; // @synthesize passiveCaptivityIncorrectDetection=_passiveCaptivityIncorrectDetection;
@property(nonatomic) unsigned int passiveCaptivityCorrectDetection; // @synthesize passiveCaptivityCorrectDetection=_passiveCaptivityCorrectDetection;
@property(nonatomic) _Bool passiveCaptivityDetected; // @synthesize passiveCaptivityDetected=_passiveCaptivityDetected;
@property(nonatomic) _Bool wisprDetected; // @synthesize wisprDetected=_wisprDetected;
@property(retain, nonatomic) NSString *autoLoginCarrierID; // @synthesize autoLoginCarrierID=_autoLoginCarrierID;
@property(nonatomic) _Bool autoLoginFailed; // @synthesize autoLoginFailed=_autoLoginFailed;
@property(nonatomic) unsigned int autoLoginType; // @synthesize autoLoginType=_autoLoginType;
@property(nonatomic) _Bool detectedNotCaptiveHandledByCNP; // @synthesize detectedNotCaptiveHandledByCNP=_detectedNotCaptiveHandledByCNP;
@property(retain, nonatomic) NSString *handlerCNP; // @synthesize handlerCNP=_handlerCNP;
@property(retain, nonatomic) NSMutableArray *installedCNPDisplayIDs; // @synthesize installedCNPDisplayIDs=_installedCNPDisplayIDs;
@property(nonatomic) unsigned int websheetScrapeResult; // @synthesize websheetScrapeResult=_websheetScrapeResult;
@property(nonatomic) _Bool websheetScraped; // @synthesize websheetScraped=_websheetScraped;
@property(nonatomic) unsigned int websheetProbeCount; // @synthesize websheetProbeCount=_websheetProbeCount;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
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
@property(readonly, nonatomic) _Bool hasAppTriggeredPassiveSymptom;
@property(nonatomic) _Bool hasPassiveCaptivitySymptom;
@property(nonatomic) _Bool hasDurationNetworkNotCaptive;
@property(nonatomic) _Bool hasDurationOnNetwork;
@property(nonatomic) _Bool hasIsDetectedCaptive;
@property(nonatomic) _Bool hasHandlerCNPTriggeredLogOff;
@property(nonatomic) _Bool hasPassiveCaptivityIncorrectDetection;
@property(nonatomic) _Bool hasPassiveCaptivityCorrectDetection;
@property(nonatomic) _Bool hasPassiveCaptivityDetected;
@property(nonatomic) _Bool hasWisprDetected;
@property(readonly, nonatomic) _Bool hasAutoLoginCarrierID;
@property(nonatomic) _Bool hasAutoLoginFailed;
@property(nonatomic) _Bool hasAutoLoginType;
@property(nonatomic) _Bool hasDetectedNotCaptiveHandledByCNP;
@property(readonly, nonatomic) _Bool hasHandlerCNP;
- (id)installedCNPDisplayIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)installedCNPDisplayIDsCount;
- (void)addInstalledCNPDisplayIDs:(id)arg1;
- (void)clearInstalledCNPDisplayIDs;
@property(nonatomic) _Bool hasWebsheetScrapeResult;
@property(nonatomic) _Bool hasWebsheetScraped;
@property(nonatomic) _Bool hasWebsheetProbeCount;
@property(nonatomic) _Bool hasResult;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

