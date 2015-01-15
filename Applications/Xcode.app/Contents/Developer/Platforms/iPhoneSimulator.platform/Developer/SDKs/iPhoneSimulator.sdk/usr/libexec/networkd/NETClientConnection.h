//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NETHelperEndpoint.h"

#import "NETConnectionPoolEvaluationProtocol.h"
#import "NETDataProtectionStateObserver.h"
#import "NETDuetGateDelegate.h"
#import "NETLedBellyClientDelegate.h"
#import "NETProxyLookupDelegate.h"

@class NETClient, NETConnectionPool, NETDuetGate, NETLedBellyClient, NETOnDemandJob, NETProxyLookup, NSObject<OS_dispatch_source>, NSObject<OS_tcp_connection>, NSObject<OS_xpc_object>, NSString;

@interface NETClientConnection : NETHelperEndpoint <NETProxyLookupDelegate, NETConnectionPoolEvaluationProtocol, NETDuetGateDelegate, NETLedBellyClientDelegate, NETDataProtectionStateObserver>
{
    char _processName[16];
    NETOnDemandJob *_onDemandJob;
    _Bool _isConnected;
    _Bool _overrideSatisfied;
    _Bool _attemptedAndFailed;
    _Bool _isLoopback;
    _Bool _isIPv6LinkLocal;
    _Bool _isPush;
    _Bool _isWaldo;
    _Bool _isCellFallbackWhitelisted;
    _Bool _isDNS;
    _Bool _notifiedCellBlocked;
    _Bool _wifiInUse;
    _Bool _wifiInDemand;
    _Bool _vpnAlwaysRequired;
    _Bool _proxyOutstanding;
    _Bool _duetOutstanding;
    _Bool _ledbellyOutstanding;
    _Bool _connectionPoolOutstanding;
    _Bool _isBonjour;
    _Bool _mptcpCellAttempted;
    _Bool _ccTimerSuspended;
    unsigned char _ccTimerSlot;
    unsigned char _ccTimerSlotStart;
    _Bool _ccPowerNapXPCActivityScheduled;
    unsigned int _sleepAssertionOutstanding;
    unsigned int _tcpConnectResult;
    unsigned int _vpnDialOutstanding;
    unsigned int _evaluateOutstanding;
    unsigned int _attemptOutstanding;
    int _lastAttemptError;
    NSObject<OS_xpc_object> *_parameters;
    NSObject<OS_xpc_object> *_reachability;
    NSObject<OS_xpc_object> *_details;
    NSObject<OS_xpc_object> *_proxyBundle;
    unsigned long long _start;
    NSObject<OS_xpc_object> *_connectionEntry;
    NSObject<OS_xpc_object> *_dnsName;
    unsigned long long _duetLastQueryTime;
    NSObject<OS_xpc_object> *_flowDivertToken;
    NETProxyLookup *_proxyLookup;
    NETDuetGate *_duetGate;
    NSObject<OS_dispatch_source> *_ccTimer;
    long long _ccTimerInterval;
    struct power_policy_s *_ccPowerPolicy;
    NSObject<OS_xpc_object> *_ccPowerNapXPCActivityID;
    struct fallback_report_s *_fallbackReport;
    unsigned long long _connectReportTime;
    NSObject<OS_tcp_connection> *_tcpConnection;
    unsigned long long _previousReachabilityHash;
    unsigned long long _reachabilitySentTimestamp;
    struct vpn_s *_pendingVPN;
    NSObject<OS_xpc_object> *_pendingDNSFailRequest;
    NETConnectionPool *_connectionPool;
    NETLedBellyClient *_ledBellyClient;
}

+ (void)forEach:(CDUnknownBlockType)arg1;
+ (id)findResumeToken:(unsigned long long)arg1;
+ (id)findLaunchOnDemand:(const char *)arg1 label:(id)arg2;
+ (void)setPersistentInterface:(int)arg1;
+ (void)handleThermalConditionChange;
+ (void)handleChange:(const char *)arg1 line:(int)arg2;
+ (void)clearFallback;
+ (void)persistentDump;
@property(retain) NETLedBellyClient *ledBellyClient; // @synthesize ledBellyClient=_ledBellyClient;
@property(retain) NETConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property int lastAttemptError; // @synthesize lastAttemptError=_lastAttemptError;
@property unsigned int attemptOutstanding; // @synthesize attemptOutstanding=_attemptOutstanding;
@property unsigned int evaluateOutstanding; // @synthesize evaluateOutstanding=_evaluateOutstanding;
@property(retain) NSObject<OS_xpc_object> *pendingDNSFailRequest; // @synthesize pendingDNSFailRequest=_pendingDNSFailRequest;
@property unsigned int vpnDialOutstanding; // @synthesize vpnDialOutstanding=_vpnDialOutstanding;
@property struct vpn_s *pendingVPN; // @synthesize pendingVPN=_pendingVPN;
@property unsigned long long reachabilitySentTimestamp; // @synthesize reachabilitySentTimestamp=_reachabilitySentTimestamp;
@property unsigned long long previousReachabilityHash; // @synthesize previousReachabilityHash=_previousReachabilityHash;
@property unsigned int tcpConnectResult; // @synthesize tcpConnectResult=_tcpConnectResult;
@property(retain) NSObject<OS_tcp_connection> *tcpConnection; // @synthesize tcpConnection=_tcpConnection;
@property unsigned long long connectReportTime; // @synthesize connectReportTime=_connectReportTime;
@property struct fallback_report_s *fallbackReport; // @synthesize fallbackReport=_fallbackReport;
@property _Bool ccPowerNapXPCActivityScheduled; // @synthesize ccPowerNapXPCActivityScheduled=_ccPowerNapXPCActivityScheduled;
@property(retain) NSObject<OS_xpc_object> *ccPowerNapXPCActivityID; // @synthesize ccPowerNapXPCActivityID=_ccPowerNapXPCActivityID;
@property struct power_policy_s *ccPowerPolicy; // @synthesize ccPowerPolicy=_ccPowerPolicy;
@property unsigned char ccTimerSlotStart; // @synthesize ccTimerSlotStart=_ccTimerSlotStart;
@property unsigned char ccTimerSlot; // @synthesize ccTimerSlot=_ccTimerSlot;
@property long long ccTimerInterval; // @synthesize ccTimerInterval=_ccTimerInterval;
@property _Bool ccTimerSuspended; // @synthesize ccTimerSuspended=_ccTimerSuspended;
@property(retain) NSObject<OS_dispatch_source> *ccTimer; // @synthesize ccTimer=_ccTimer;
@property(nonatomic) _Bool mptcpCellAttempted; // @synthesize mptcpCellAttempted=_mptcpCellAttempted;
@property(nonatomic) _Bool isBonjour; // @synthesize isBonjour=_isBonjour;
@property(nonatomic) _Bool connectionPoolOutstanding; // @synthesize connectionPoolOutstanding=_connectionPoolOutstanding;
@property(nonatomic) _Bool ledbellyOutstanding; // @synthesize ledbellyOutstanding=_ledbellyOutstanding;
@property(nonatomic) _Bool duetOutstanding; // @synthesize duetOutstanding=_duetOutstanding;
@property(nonatomic) _Bool proxyOutstanding; // @synthesize proxyOutstanding=_proxyOutstanding;
@property(nonatomic) _Bool vpnAlwaysRequired; // @synthesize vpnAlwaysRequired=_vpnAlwaysRequired;
@property(nonatomic) _Bool wifiInDemand; // @synthesize wifiInDemand=_wifiInDemand;
@property(nonatomic) _Bool wifiInUse; // @synthesize wifiInUse=_wifiInUse;
@property(nonatomic) _Bool notifiedCellBlocked; // @synthesize notifiedCellBlocked=_notifiedCellBlocked;
@property(nonatomic) _Bool isDNS; // @synthesize isDNS=_isDNS;
@property(nonatomic) _Bool isCellFallbackWhitelisted; // @synthesize isCellFallbackWhitelisted=_isCellFallbackWhitelisted;
@property(nonatomic) _Bool isWaldo; // @synthesize isWaldo=_isWaldo;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) _Bool isIPv6LinkLocal; // @synthesize isIPv6LinkLocal=_isIPv6LinkLocal;
@property(nonatomic) _Bool isLoopback; // @synthesize isLoopback=_isLoopback;
@property(nonatomic) unsigned int sleepAssertionOutstanding; // @synthesize sleepAssertionOutstanding=_sleepAssertionOutstanding;
@property(retain) NETDuetGate *duetGate; // @synthesize duetGate=_duetGate;
@property(retain) NETProxyLookup *proxyLookup; // @synthesize proxyLookup=_proxyLookup;
@property(retain) NSObject<OS_xpc_object> *flowDivertToken; // @synthesize flowDivertToken=_flowDivertToken;
@property unsigned long long duetLastQueryTime; // @synthesize duetLastQueryTime=_duetLastQueryTime;
@property(retain, nonatomic) NSObject<OS_xpc_object> *dnsName; // @synthesize dnsName=_dnsName;
@property(retain) NSObject<OS_xpc_object> *connectionEntry; // @synthesize connectionEntry=_connectionEntry;
@property unsigned long long start; // @synthesize start=_start;
@property _Bool attemptedAndFailed; // @synthesize attemptedAndFailed=_attemptedAndFailed;
@property(nonatomic) _Bool overrideSatisfied; // @synthesize overrideSatisfied=_overrideSatisfied;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain) NSObject<OS_xpc_object> *proxyBundle; // @synthesize proxyBundle=_proxyBundle;
@property(retain) NSObject<OS_xpc_object> *details; // @synthesize details=_details;
@property(retain) NSObject<OS_xpc_object> *reachability; // @synthesize reachability=_reachability;
@property(retain) NSObject<OS_xpc_object> *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)destroy:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithParamters:(id)arg1 state:(id)arg2 client:(id)arg3 endpointID:(unsigned long long)arg4 start:(unsigned long long)arg5;
- (id)init;
- (void)switchToClient:(id)arg1 withID:(unsigned long long)arg2;
- (void)handleMessage:(id)arg1 ofType:(unsigned long long)arg2;
- (_Bool)needsLaunchOnDemand;
- (void)evaluate;
@property(readonly) long long poolPriority;
@property(retain) NETOnDemandJob *onDemandJob;
@property(readonly, nonatomic) const char *name;
@property(readonly) unsigned long long cid;
@property(readonly) int pid;
- (void)dataProtectionStateChanged;
- (void)ledBellyStateChanged:(id)arg1;
- (void)duetGateChanged:(id)arg1;
- (void)proxyLookupComplete:(id)arg1;
- (void)handleConnectionRetry:(id)arg1;
- (void)handleMessageForLedbellyFd:(id)arg1;
- (void)handleDestinationFallback:(id)arg1;
- (void)handleDestinationReport:(id)arg1;
- (void)handleCopyState:(id)arg1;
- (void)handleConnectReport:(id)arg1;
- (void)handleDNSFail:(const char *)arg1 request:(id)arg2;
- (void)handleConnectFail:(id)arg1;
- (void)handleUpdate:(id)arg1;
- (void)handleMPTCPToTCPFallback:(id)arg1;
- (void)handleMPTCPResuming:(id)arg1;
- (void)handleMPTCPFailureReport:(id)arg1;
- (void)handleStatsReport:(id)arg1;
- (void)reportAWDStatsForMPTCP:(id)arg1;
- (id)copyMatchingMultipathInterfaces:(struct established_evaluation_s *)arg1 path:(struct path_evaluation_s *)arg2;
- (void)evaluateLedBellyConnected:(struct established_evaluation_s *)arg1 withPath:(struct path_evaluation_s *)arg2;
- (void)evaluateEstablishedMultipath:(struct path_evaluation_s *)arg1;
- (void)evaluateEstablishedBetterRoute:(struct established_evaluation_s *)arg1 withPath:(struct path_evaluation_s *)arg2;
- (void)evaluateEstablishedRoutable:(struct established_evaluation_s *)arg1 withPath:(struct path_evaluation_s *)arg2;
- (void)evaluatePath:(struct path_evaluation_s *)arg1;
- (void)evaluatePathConnectionPool:(struct path_evaluation_s *)arg1;
- (void)poolPriorityEvaluated:(_Bool)arg1;
- (void)evaluatePathDataProtection:(struct path_evaluation_s *)arg1;
- (void)evaluatePathWiFi:(struct path_evaluation_s *)arg1;
- (void)evaluatePathFallback:(struct path_evaluation_s *)arg1;
- (void)evaluatePathLedBelly:(struct path_evaluation_s *)arg1;
- (void)evaluatePathMultipath:(struct path_evaluation_s *)arg1;
- (void)evaluatePathPowerPost:(struct path_evaluation_s *)arg1;
- (void)evaluatePathProxy:(struct path_evaluation_s *)arg1;
- (void)evaluatePathRoute:(struct path_evaluation_s *)arg1;
- (void)evaluatePathDNS:(struct path_evaluation_s *)arg1;
- (void)evaluatePathPersistent:(struct path_evaluation_s *)arg1;
- (void)evaluatePathVPN:(struct path_evaluation_s *)arg1;
- (void)evaluatePathCellular:(struct path_evaluation_s *)arg1;
- (void)evaluatePathPowerPre:(struct path_evaluation_s *)arg1;
- (void)evaluatePathDuet:(struct path_evaluation_s *)arg1;
- (void)setReachabilityNotSatisfiedWithReason:(long long)arg1 format:(const char *)arg2;
- (_Bool)interfaceAllowed:(int)arg1 withPath:(struct path_evaluation_s *)arg2 shouldNotify:(_Bool)arg3;
- (_Bool)isCellularBlocked;
- (void)reportCellularBlocked;
- (void)decrementConnectionAttemptOutstanding;
- (void)incrementConnectionAttemptOutstanding;
- (void)decrementEvaluateOutstanding;
- (void)incrementEvaluateOutstanding;
- (void)handleReachabilityReply:(id)arg1 decrementSleepAssert:(_Bool)arg2;
- (void)decrementSleepAssertion;
- (void)incrementSleepAssertion;
- (void)cancelPowerNap;
- (void)schedulePowerNapWithDelay:(long long)arg1 gracePeriod:(long long)arg2;
- (void)handleCCTimerFired:(_Bool)arg1;
- (void)cleanupCCTimer;
- (void)cancelCCWakeEvents;
- (void)initializeCCWakeEvents;
- (id)serialize;
- (_Bool)startCellular:(id)arg1;
- (_Bool)startVPNForDNS:(const char *)arg1 msg:(id)arg2 sendRestartOnSuccess:(_Bool)arg3;
- (_Bool)reevaluateActiveVPN:(struct vpn_s *)arg1 forHostname:(const char *)arg2;
- (id)networkSignatureForInterface:(int)arg1;
- (id)scrubParametersForEntitlements:(id)arg1;
- (const char *)processName;

// Remaining properties
@property(retain) NETClient *client;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

