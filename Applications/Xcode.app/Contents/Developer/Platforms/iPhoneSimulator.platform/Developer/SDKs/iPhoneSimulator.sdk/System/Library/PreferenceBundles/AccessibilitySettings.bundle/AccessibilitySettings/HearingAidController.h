//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccessibilityListController.h"

#import "AXHAServerDelegate.h"
#import "CBPeripheralManagerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class CBPeripheralManager, NSLock, NSMutableArray, NSString, UIAlertView;

__attribute__((visibility("hidden")))
@interface HearingAidController : AccessibilityListController <MFMailComposeViewControllerDelegate, AXHAServerDelegate, UIAlertViewDelegate, CBPeripheralManagerDelegate>
{
    NSMutableArray *_availableDevices;
    _Bool _bluetoothAvailable;
    CBPeripheralManager *_pairingManager;
    UIAlertView *_compressingAlert;
    UIAlertView *_pairingAlert;
    NSLock *deviceUpdateLock;
}

@property(retain, nonatomic) NSLock *deviceUpdateLock; // @synthesize deviceUpdateLock;
@property(retain, nonatomic) NSMutableArray *availableDevices; // @synthesize availableDevices=_availableDevices;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)serverDidDie:(id)arg1;
- (void)bluetoothPowerDidChange:(id)arg1;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2;
- (id)accessibilityPreferenceForSpecifier:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)displayPairingFailureAlertForDevice:(id)arg1;
- (void)viewHearingAidDetailsWithSpecifier:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)cleanupView;
- (void)setBluetoothAvailability:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willBecomeActive;
- (void)viewDidLoad;
- (void)_updateHACSwitchSettingWithStatus:(int)arg1;
- (void)_toggleHACSwitch:(_Bool)arg1;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)beginSearching;
- (void)setBluetoothAvailable:(id)arg1;
- (id)bluetoothAvailable;
- (id)valueForSpecifier:(id)arg1;
- (void)refreshAvailableDevices;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)specifiers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

