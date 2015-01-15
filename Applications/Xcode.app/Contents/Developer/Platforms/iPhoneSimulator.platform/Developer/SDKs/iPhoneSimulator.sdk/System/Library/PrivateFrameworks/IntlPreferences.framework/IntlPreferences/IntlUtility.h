//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

@interface IntlUtility : NSObject
{
    NSDictionary *mLanguageList;
    NSDictionary *mLocalizedLanguageList;
    void *mDisplayLanguageCachePtr;
    int mDisplayLanguageCacheUsed;
    NSMutableArray *mBidiLanguagesArray;
    NSMutableArray *mBidiTestedLanguagesArray;
}

+ (id)restrictedCountryCodes;
+ (id)supportedCalendars;
+ (_Bool)performMigration;
+ (_Bool)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2;
+ (id)importAppleLanguages;
+ (id)importAppleLanguagesLegacy;
+ (id)importUsedLanguages;
+ (id)parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)preferredLanguagesForRegion:(id)arg1;
+ (int)UDisplayContextForIUDisplayNameContext:(unsigned long long)arg1;
+ (void)setYearlessYear:(id)arg1 forCalendar:(id)arg2;
+ (_Bool)isYearlessDate:(id)arg1 forCalendar:(id)arg2;
+ (long long)yearlessYearForMonth:(long long)arg1 withCalendar:(id)arg2;
+ (_Bool)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2;
+ (_Bool)isLunarCalendarDefaultOn;
+ (id)localeForCalendarID:(id)arg1 andLocale:(id)arg2;
+ (id)localeForCalendarID:(id)arg1;
+ (id)preferredLunarCalendarForLocaleID:(id)arg1;
+ (id)lunarCalendarsForLocaleID:(id)arg1;
+ (id)defaultCalendarForLocaleID:(id)arg1;
+ (void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)alternateContinentOfRegion:(id)arg1;
+ (id)nativeNameForLanguage:(id)arg1 context:(unsigned long long)arg2;
+ (id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2;
+ (id)normalizedLanguageIDFromString:(id)arg1;
+ (id)stdLanguageIDs;
+ (id)stdLanguageIDsAndNativeNames;
+ (id)languageCharSetList;
+ (id)sharedIntlUtility;
- (id)localizedNameForScript:(short)arg1;
- (_Bool)canRenderLanguage:(id)arg1;
- (id)localizedLanguageList;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3;
- (id)displayNameForNormalizedLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)localizedLanguageForLanguage:(id)arg1;
- (id)languageList;
- (id)nativeLanguageForLanguage:(id)arg1;
- (void)dealloc;
- (id)displayNameForLabelForLunarCalendarID:(id)arg1 displayLanguage:(id)arg2;

@end

