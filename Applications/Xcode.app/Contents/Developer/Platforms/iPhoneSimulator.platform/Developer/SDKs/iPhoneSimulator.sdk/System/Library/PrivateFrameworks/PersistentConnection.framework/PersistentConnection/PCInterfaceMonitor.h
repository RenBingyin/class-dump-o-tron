//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PCInterfaceMonitorProtocol.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"

@class NSMapTable, NSString;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol>
{
    id <PCInterfaceUsabilityMonitorProtocol> _internal;
    NSMapTable *_delegateMap;
}

+ (_Bool)isBadLinkQuality:(int)arg1;
+ (_Bool)isPoorLinkQuality:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(long long)arg1;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) struct __CFString *currentRAT;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

