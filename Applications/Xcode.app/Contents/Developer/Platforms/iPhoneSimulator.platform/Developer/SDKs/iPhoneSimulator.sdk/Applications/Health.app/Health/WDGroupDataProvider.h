//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDChartRendererDataSource.h"
#import "WDDataProviderDelegate.h"

@class HKDataUnitGroup, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface WDGroupDataProvider : NSObject <WDDataProviderDelegate, WDChartRendererDataSource>
{
    NSMutableDictionary *_dataProviders;
    NSDate *_lastUpdatedDate;
    _Bool _isActive;
    NSMutableSet *_pendingHistoricalRequests;
    NSArray *_chartSeries;
    HKDataUnitGroup *_dataUnitGroup;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _timeScope;
    id <WDGroupDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <WDGroupDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) HKDataUnitGroup *dataUnitGroup; // @synthesize dataUnitGroup=_dataUnitGroup;
- (void).cxx_destruct;
- (void)_alertDelegateDidUpdateDisplayData;
- (void)_alertDelegateDidUpdateHistoricalData;
- (void)dataProviderDidUpdateDisplayData:(id)arg1;
- (void)dataProviderDidUpdateHistoricalData:(id)arg1;
- (id)chartRenderer:(id)arg1 dataPointAtIndex:(unsigned long long)arg2 forSeriesAtIndex:(unsigned long long)arg3;
- (unsigned long long)chartRenderer:(id)arg1 numberOfDataPointsForSeriesAtIndex:(unsigned long long)arg2;
- (id)chartRenderer:(id)arg1 seriesAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSeriesInChartRenderer:(id)arg1;
- (id)_sleepChartSeries;
- (id)_generateSleepDaySeries;
- (long long)_pointStyleForIndex:(unsigned long long)arg1;
- (id)_generateBarSeries;
- (id)_generateMinMaxSeriesForIndex:(unsigned long long)arg1;
- (id)_generateLineSeriesForIndex:(unsigned long long)arg1;
- (id)_generateChartSeriesForIndex:(unsigned long long)arg1;
- (id)_generateChartSeries;
- (void)_stopQueries;
- (void)_setupQueries;
- (id)_averageSecondaryText;
- (id)_minMaxSecondaryTextForDataUnit:(id)arg1;
- (id)_minMaxSecondaryText;
- (id)chartSeriesForIndex:(unsigned long long)arg1;
- (void)deactivate;
- (void)activate;
- (void)setStartDate:(id)arg1 endDate:(id)arg2 timeScope:(long long)arg3;
- (id)lastUpdatedDate;
- (id)currentValueForDataUnit:(id)arg1;
- (id)averageValueForDataUnit:(id)arg1;
- (id)secondaryValueText;
- (id)initWithDataUnitGroup:(id)arg1 healthStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

