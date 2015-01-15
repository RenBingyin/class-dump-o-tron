//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "SSXPCCoding.h"

@class NSSet, NSString;

@interface SSDownloadPolicyRule : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    NSSet *_applicationStates;
    float _batteryLevel;
    long long _cellularDataStates;
    long long _downloadSizeLimit;
    NSSet *_networkTypes;
    long long _powerStates;
    long long _registrationStates;
    long long _timeLimitStates;
}

@property(nonatomic) long long timeLimitStates; // @synthesize timeLimitStates=_timeLimitStates;
@property(nonatomic) long long registrationStates; // @synthesize registrationStates=_registrationStates;
@property(nonatomic) long long powerStates; // @synthesize powerStates=_powerStates;
@property(copy, nonatomic) NSSet *networkTypes; // @synthesize networkTypes=_networkTypes;
@property(nonatomic) long long downloadSizeLimit; // @synthesize downloadSizeLimit=_downloadSizeLimit;
@property(nonatomic) long long cellularDataStates; // @synthesize cellularDataStates=_cellularDataStates;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(copy, nonatomic) NSSet *applicationStates; // @synthesize applicationStates=_applicationStates;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)unionPolicyRule:(id)arg1;
@property(readonly, nonatomic, getter=isWiFiAllowed) _Bool wiFiAllowed;
@property(readonly, nonatomic, getter=isCellularAllowed) _Bool cellularAllowed;
- (void)addNetworkType:(long long)arg1;
- (void)addApplicationState:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

