//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MZProductIntervalHelper : NSObject
{
    Class _intervalClass;
}

+ (id)helper;
- (BOOL)isDefaultInterval:(id)arg1;
- (id)_collapseIntervals:(id)arg1;
- (id)intervalsWithTimeGapsFilledInUsingTopLevelInterval:(id)arg1 intervals:(id)arg2;
- (id)createIntervalAndValidateWholesalePriceTier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id *)arg4;
- (id)_endDateForComparisonFromInterval:(id)arg1;
- (id)_startDateForComparisonFromInterval:(id)arg1;
- (BOOL)_isDate:(id)arg1 laterThanOrEqualTo:(id)arg2;
- (BOOL)_isDate:(id)arg1 laterThan:(id)arg2;
- (BOOL)_isDate:(id)arg1 earlierThanOrEqualTo:(id)arg2;
- (BOOL)_isDate:(id)arg1 earlierThan:(id)arg2;
- (id)_addNoneOptionToList:(id)arg1;
- (id)_addNowOptionToList:(id)arg1;
- (BOOL)isEndDateNoneForInterval:(id)arg1;
- (BOOL)isStartDateNoneForInterval:(id)arg1;
- (BOOL)isNeverStringValue:(id)arg1;
- (BOOL)isNoneStringValue:(id)arg1;
- (BOOL)isNowStringValue:(id)arg1;
- (id)_datePartWithFormat:(id)arg1 date:(id)arg2;
- (id)_datePartWithFormat:(id)arg1 dateString:(id)arg2;
- (id)neverString;
- (id)noneString;
- (id)nowString;
- (id)dateStringForDay:(id)arg1 month:(id)arg2 year:(id)arg3;
- (id)dateStringForDate:(id)arg1;
- (id)dateForDateString:(id)arg1;
- (id)yearFromDate:(id)arg1;
- (id)monthFromDate:(id)arg1;
- (id)dayFromDate:(id)arg1;
- (id)yearFromDateString:(id)arg1;
- (id)monthFromDateString:(id)arg1;
- (id)dayFromDateString:(id)arg1;
- (id)intervalsByAddingInterval:(id)arg1 toProduct:(id)arg2;
- (id)intervalsByRemovingInterval:(id)arg1 fromIntervals:(id)arg2;
- (id)intervalsByAddingInterval:(id)arg1 toIntervals:(id)arg2;
- (id)handleConflictingIntervals:(id)arg1 forNewInterval:(id)arg2;
- (id)addToplevelInterval:(id)arg1 toIntervals:(id)arg2;
- (id)orderIntervals:(id)arg1;
- (id)normalizedIntervalsWithProduct:(id)arg1;
- (id)allowedDaysWithSelectedYear:(id)arg1 month:(id)arg2 allowedIntervalDates:(id)arg3 addNowOptionToList:(BOOL)arg4 addNoneOptionToList:(BOOL)arg5;
- (id)allowedMonthsWithSelectedYear:(id)arg1 day:(id)arg2 allowedIntervalDates:(id)arg3 addNowOptionToList:(BOOL)arg4 addNoneOptionToList:(BOOL)arg5;
- (id)allowedYearsWithSelectedMonth:(id)arg1 day:(id)arg2 allowedIntervalDates:(id)arg3 addNowOptionToList:(BOOL)arg4 addNoneOptionToList:(BOOL)arg5;
- (id)allowedIntervalDatesAfterDate:(id)arg1;
- (id)allowedIntervalDates;
- (void)setIntervalClass:(Class)arg1;
- (Class)intervalClass;
- (void)dealloc;
- (id)init;

@end

