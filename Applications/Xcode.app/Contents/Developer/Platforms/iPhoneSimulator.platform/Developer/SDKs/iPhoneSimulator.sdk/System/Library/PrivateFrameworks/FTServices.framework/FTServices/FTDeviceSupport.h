//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FTDeviceSupport : NSObject
{
    NSString *_number;
    _Bool _blockPost;
    _Bool _supportsFrontCamera;
    _Bool _supportsBackCamera;
    _Bool _supportsiMessage;
    _Bool _supportsSMS;
    _Bool _supportsMMS;
    _Bool _mmsConfigured;
    _Bool _supportsHandoff;
    _Bool _supportsTethering;
    _Bool _supportsFT;
    _Bool _supportsFTA;
    _Bool _supportsWiFi;
    _Bool _supportsWLAN;
    _Bool _supportsNonWiFiFaceTime;
    _Bool _supportsCellularData;
    _Bool _shouldUseSIMState;
    _Bool _commCenterDead;
    _Bool _simBecameNotReady;
    _Bool _simInserted;
    int _carrierBundleSupported;
    int _iMessageAllowedToken;
    _Bool _faceTimeBlocked;
    _Bool _iMessageBlocked;
    _Bool _accountModificationRestricted;
    long long _performanceClass;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool mmsConfigured; // @synthesize mmsConfigured=_mmsConfigured;
@property(readonly, nonatomic) _Bool supportsMMS; // @synthesize supportsMMS=_supportsMMS;
@property(readonly, nonatomic) _Bool supportsSMS; // @synthesize supportsSMS=_supportsSMS;
@property(readonly, nonatomic) _Bool supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property(readonly, nonatomic) _Bool supportsWiFi; // @synthesize supportsWiFi=_supportsWiFi;
@property(readonly, nonatomic) _Bool supportsWLAN; // @synthesize supportsWLAN=_supportsWLAN;
@property(readonly, nonatomic) _Bool supportsBackFacingCamera; // @synthesize supportsBackFacingCamera=_supportsBackCamera;
@property(readonly, nonatomic) _Bool supportsFrontFacingCamera; // @synthesize supportsFrontFacingCamera=_supportsFrontCamera;
@property(readonly, nonatomic) _Bool supportsTethering; // @synthesize supportsTethering=_supportsTethering;
@property(readonly, nonatomic) _Bool supportsHandoff; // @synthesize supportsHandoff=_supportsHandoff;
@property(readonly, nonatomic) _Bool nonWifiCallingAvailable;
@property(readonly, nonatomic) _Bool nonWifiFaceTimeAvailable;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) long long performanceClass;
- (void)_registerForLockdownNotifications;
- (void)_lockdownStateChanged:(id)arg1;
@property(readonly, nonatomic) NSString *deviceInformationString;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *userAgentString;
@property(readonly, nonatomic) NSString *telephoneNumber;
@property(readonly, nonatomic) _Bool isTelephonyDevice;
@property(readonly, nonatomic) _Bool supportsAppleIDIdentification;
@property(readonly, nonatomic) _Bool supportsSMSIdentification;
@property(readonly, nonatomic) NSDictionary *CTNetworkInformation;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_simStatusChanged:(id)arg1;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) _Bool wantsBreakBeforeMake;
@property(readonly, nonatomic) _Bool SIMInserted;
@property(readonly, nonatomic) _Bool supportsSimultaneousVoiceAndDataRightNow;
@property(readonly, nonatomic) _Bool isC2KEquipment;
@property(readonly, nonatomic) NSDictionary *telephonyCapabilities;
@property(readonly, nonatomic) NSString *deviceTypeIDPrefix;
@property(readonly, nonatomic) NSString *deviceIDPrefix;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) _Bool accountModificationRestricted;
@property(readonly, nonatomic) _Bool registrationSupported;
@property(readonly, nonatomic) _Bool conferencingAllowed;
@property(readonly, nonatomic) _Bool conferencingEnabled;
@property(readonly, nonatomic) _Bool conferencingBlocked;
@property(readonly, nonatomic) _Bool supportsNonWiFiCalling;
@property(readonly, nonatomic) _Bool supportsNonWiFiFaceTime; // @synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime;
@property(readonly, nonatomic) _Bool identityServicesSupported;
@property(readonly, nonatomic) _Bool faceTimeSupported;
@property(readonly, nonatomic) _Bool faceTimeBlocked;
@property(readonly, nonatomic) _Bool faceTimeAvailable;
@property(readonly, nonatomic) _Bool iMessageSupported;
@property(readonly, nonatomic) _Bool iMessageBlocked;
@property(readonly, nonatomic) _Bool iMessageAvailable;
@property(readonly, nonatomic) _Bool callingSupported;
@property(readonly, nonatomic) _Bool callingBlocked;
@property(readonly, nonatomic) _Bool callingAvailable;
@property(readonly, nonatomic) _Bool madridSupported;
@property(readonly, nonatomic) _Bool madridBlocked;
@property(readonly, nonatomic) _Bool madridAvailable;
@property(readonly, nonatomic) _Bool commCenterDead;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_carrierChanged;
- (void)_operatorChanged;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_updateCapabilities;
- (void)carrierSettingsChanged:(id)arg1;
- (void)_unregisterForCarrierNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCapabilityNotifications;
- (void)_updateManagedConfigurationSettings;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_watchNotifyTokens;
- (void)dealloc;
- (id)init;

@end

