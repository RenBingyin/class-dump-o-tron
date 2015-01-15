//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class CHManager, PSAppCellularUsageGroupController, PSCellularAccountGroupController, PSListItemsController, PSSpecifier;

@interface SettingsNetworkController : PSListController
{
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    _Bool _disabled;
    PSSpecifier *_mobileDataGroup;
    PSSpecifier *_enableRATSpecifier;
    int _RATSwitchKind;
    _Bool _3GOverrideTo4G;
    _Bool _LTEOverrideTo4G;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_lifetimeSpecifier;
    PSSpecifier *_lastResetSpecifier;
    PSAppCellularUsageGroupController *_appUsageGroupController;
    PSListItemsController *_RATModeDrilldownController;
    _Bool _isOnBootstrap;
    PSCellularAccountGroupController *_cellularGroupController;
    CHManager *_callHistoryManager;
}

+ (_Bool)isConnectedOverWiFi;
+ (_Bool)isOnBootstrapProfile;
@property(nonatomic) _Bool isOnBootstrap; // @synthesize isOnBootstrap=_isOnBootstrap;
@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(retain, nonatomic) PSCellularAccountGroupController *cellularGroupController; // @synthesize cellularGroupController=_cellularGroupController;
- (void)clearStats:(id)arg1;
- (void)_updateLastResetText;
- (id)_lastUpdateDate;
- (id)callTime:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(_Bool)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)dataUsageWorkspaceInfo;
- (void)cellularPlanChanged;
- (void)airplaneModeChanged;
- (void)airplaneModeOrSIMStatusChanged;
- (_Bool)isCellularDisabled;
- (void)dataRegistrationChangedWithUserInfo:(id)arg1;
- (void)handleCallTimersChanged;
- (void)newCarrierNotification;
- (void)totalBytesUsedChangedNotification;
- (void)setupCellularFaceTime:(id)arg1;
- (_Bool)shouldShowFaceTimeSetup;
- (void)viewAccountPressed:(id)arg1;
- (_Bool)shouldShowViewAccount;
- (_Bool)shouldShowCellularAccountSetup;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (id)getEUInternetStatus:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (_Bool)showDataPlanOnly;
- (void)reloadRATStatus:(id)arg1;
- (void)updateRATSpecifiers;
- (_Bool)_updateMobileDataGroupContentShowingRAT:(_Bool)arg1;
- (void)updateRATStateWithDictionary:(id)arg1;
- (id)getRATSwitchIsOn:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (_Bool)_setRATModeConfirmed:(int)arg1;
- (void)_setRATModeStateIsOn:(_Bool)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (id)getLTEService:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (_Bool)shouldShowLegacyRATOptions;
- (_Bool)shouldShowLTEOptions;
- (_Bool)supportsVoLTE;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (id)isMobileDataEnabled:(id)arg1;
- (void)updateAppUsageGroupEnabledState;
- (void)updatePaneWithCellularDataState:(_Bool)arg1;
- (void)_setMobileDataSwitch:(_Bool)arg1;
- (void)canceledDataSwitch:(id)arg1;
- (void)acceptedDataSwitch:(id)arg1;
- (void)setMobileDataIsEnabled:(id)arg1 specifier:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end

