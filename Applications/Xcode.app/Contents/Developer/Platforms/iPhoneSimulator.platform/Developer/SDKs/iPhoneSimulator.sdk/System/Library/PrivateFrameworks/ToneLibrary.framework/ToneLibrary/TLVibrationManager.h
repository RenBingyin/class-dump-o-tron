//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, TLAccessQueue;

@interface TLVibrationManager : NSObject
{
    _Bool _needsRefresh;
    _Bool _allowsAutoRefresh;
    unsigned long long _specialBehaviors;
    NSDictionary *_cachedSystemVibrationPatterns;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    TLAccessQueue *_accessQueue;
}

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotification;
+ (id)sharedVibrationManager;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
@property(retain, nonatomic, setter=_setCachedUserGeneratedVibrationPatterns:) NSDictionary *_cachedUserGeneratedVibrationPatterns; // @synthesize _cachedUserGeneratedVibrationPatterns;
@property(retain, nonatomic, setter=_setCachedSystemVibrationPatterns:) NSDictionary *_cachedSystemVibrationPatterns; // @synthesize _cachedSystemVibrationPatterns;
@property(nonatomic, setter=_setSpecialBehaviors:) unsigned long long _specialBehaviors; // @synthesize _specialBehaviors;
@property(nonatomic, setter=_setAllowsAutoRefresh:) _Bool _allowsAutoRefresh; // @synthesize _allowsAutoRefresh;
- (void)_setNeedsRefresh:(_Bool)arg1;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (unsigned long long)_storedSystemVibrationDataMigrationVersion;
- (_Bool)_migrateLegacySettings;
@property(readonly, nonatomic) _Bool shouldVibrateOnSilent;
@property(readonly, nonatomic) _Bool shouldVibrateOnRing;
@property(readonly, nonatomic) _Bool shouldVibrateForCurrentRingerSwitchState;
- (_Bool)_booleanPreferenceForKey:(struct __CFString *)arg1 defaultValue:(_Bool)arg2;
- (_Bool)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id *)arg1;
- (_Bool)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id *)arg2;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (id)_newServiceConnection;
- (_Bool)_removeAllUserGeneratedVibrationsWithError:(id *)arg1;
- (unsigned long long)_numberOfUserGeneratedVibrations;
- (_Bool)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (_Bool)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id *)arg2;
- (void)_didChangeUserGeneratedVibrationPatterns;
@property(readonly, nonatomic) NSDictionary *_userGeneratedVibrationPatterns;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (_Bool)_vibrationIsSettableForAlertType:(int)arg1;
- (id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (_Bool)vibrationWithIdentifierIsValid:(id)arg1;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(_Bool)arg2;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_systemVibrationPatterns;
@property(readonly, nonatomic, getter=_isUnitTestingModeEnabled) _Bool _unitTestingModeEnabled;
- (id)noneVibrationPattern;
- (id)noneVibrationName;
- (id)defaultVibrationPatternForAlertType:(int)arg1;
- (id)defaultVibrationNameForAlertType:(int)arg1;
- (id)defaultVibrationIdentifierForAlertType:(int)arg1;
- (id)currentVibrationPatternForAlertType:(int)arg1;
- (id)currentVibrationNameForAlertType:(int)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2;
- (id)currentVibrationIdentifierForAlertType:(int)arg1;
- (_Bool)refresh;
@property(nonatomic) _Bool allowsAutoRefresh;
- (void)dealloc;
- (id)_initWithSpecialBehaviors:(unsigned long long)arg1;
- (id)init;

@end

