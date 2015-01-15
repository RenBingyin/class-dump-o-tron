//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding>
{
    _Bool _isEyesFree;
    _Bool _useAutomaticEndpointing;
    _Bool _useStreamingDictation;
    _Bool _isInitialBringUp;
    _Bool _acousticIdEnabled;
    long long _activationEvent;
    NSString *_btDeviceAddress;
    NSString *_serverCommandId;
    double _activationEventTime;
    double _expectedActivationEventTime;
    NSNumber *_homeButtonUpFromBeep;
    long long _audioFileType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long audioFileType; // @synthesize audioFileType=_audioFileType;
@property(nonatomic) _Bool acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(copy, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) _Bool isInitialBringUp; // @synthesize isInitialBringUp=_isInitialBringUp;
@property(nonatomic) double expectedActivationEventTime; // @synthesize expectedActivationEventTime=_expectedActivationEventTime;
@property(nonatomic) double activationEventTime; // @synthesize activationEventTime=_activationEventTime;
@property(nonatomic) _Bool useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
@property(nonatomic) _Bool isEyesFree; // @synthesize isEyesFree=_isEyesFree;
@property(copy, nonatomic) NSString *btDeviceAddress; // @synthesize btDeviceAddress=_btDeviceAddress;
@property(nonatomic) long long activationEvent; // @synthesize activationEvent=_activationEvent;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivationEvent:(long long)arg1;

@end

