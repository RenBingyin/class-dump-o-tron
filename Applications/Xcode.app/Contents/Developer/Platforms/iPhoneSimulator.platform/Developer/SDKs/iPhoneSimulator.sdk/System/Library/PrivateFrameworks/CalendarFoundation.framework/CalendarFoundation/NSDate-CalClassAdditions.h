//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (CalClassAdditions)
+ (id)nextRoundedHour;
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;
+ (id)CalDateForEndOfTomorrow;
+ (id)CalDateForBeginningOfTomorrow;
+ (id)_tomorrowComponents;
+ (id)CalDateForEndOfToday;
+ (id)CalDateForBeginningOfToday;
+ (id)_todayComponents;
+ (id)_nowComponents;
+ (id)CalDateForNow;
- (id)timeStringAlwaysIncludeMinutes:(_Bool)arg1;
- (id)_stringWithUseAbbreviatedFormats:(_Bool)arg1 lowerCase:(_Bool)arg2;
- (id)localizedRelativeDateStringShortened:(_Bool)arg1;
- (id)localizedWeekNumber;
- (id)localizedDateStringWithTemplate:(id)arg1;
- (id)localizedWeekdayMonthDayStringShortened:(_Bool)arg1;
- (id)localizedWeekdayMonthYearStringShortened:(_Bool)arg1;
- (id)localizedWeekdayMonthDayYearStringShortened:(_Bool)arg1;
- (id)localizedYearMonthAndDayStringShortened:(_Bool)arg1;
- (id)localizedMonthAndDayStringShortened:(_Bool)arg1;
- (id)localizedMonthAndYearStringShortened:(_Bool)arg1;
- (id)localizedMonthShortened:(_Bool)arg1;
- (void)printComparisonToDate:(id)arg1;
- (id)dateRoundedToStartOfNextDayInCalendar:(id)arg1;
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;
- (_Bool)isTodayInCalendar:(id)arg1;
- (_Bool)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isSameYearAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (long long)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (_Bool)isBeforeDate:(id)arg1;
- (_Bool)isAfterDate:(id)arg1;
- (id)roundToCurrentYearInCalendar:(id)arg1;
- (id)roundToCurrentMonthInCalendar:(id)arg1;
- (id)roundToCurrentMondayInCalendar:(id)arg1;
- (id)roundToCurrentWeekInCalendar:(id)arg1 withFirstWeekdayIndex:(long long)arg2;
- (id)roundToCurrentDayInCalendar:(id)arg1;
- (id)roundSecondsDownInCalendar:(id)arg1;
- (id)dateByAddingYears:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMonths:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingWeeks:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingDays:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingHours:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMinutes:(long long)arg1 inCalendar:(id)arg2;
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;
- (long long)secondInCalendar:(id)arg1;
- (long long)minuteInCalendar:(id)arg1;
- (long long)hourInCalendar:(id)arg1;
- (long long)weekdayInCalendar:(id)arg1;
- (long long)dayInCalendar:(id)arg1;
- (long long)weekInCalendar:(id)arg1;
- (long long)monthInCalendar:(id)arg1;
- (long long)yearInCalendar:(id)arg1;
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;
- (id)timeOnlyComponentsInCalendar:(id)arg1;
- (id)dateOnlyComponentsInCalendar:(id)arg1;
- (id)allComponentsInCalendar:(id)arg1;
- (_Bool)CalIsAfterOrSameAsDate:(id)arg1;
- (_Bool)CalIsAfterDate:(id)arg1;
- (_Bool)CalIsBeforeOrSameAsDate:(id)arg1;
- (_Bool)CalIsBeforeDate:(id)arg1;
- (_Bool)CalIsBetweenStartDate:(id)arg1 endDate:(id)arg2;
@end

