//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TSCHUnretainedParent.h"

@class TSCHChartInfo, TSUIntToIntDictionary;

__attribute__((visibility("hidden")))
@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying>
{
    id <TSCHNotifyOnModify> mObjectToNotify;
    TSCHChartInfo *mChartInfo;
    TSUIntToIntDictionary *mRemoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *mGridSeriesIndexForRemoteSeriesIndex;
}

+ (id)propertiesThatInvalidateMediator;
@property(nonatomic) id <TSCHNotifyOnModify> objectToNotify; // @synthesize objectToNotify=mObjectToNotify;
@property(nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
- (_Bool)preferSeriesToValues;
- (unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)arg1;
- (unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)arg1;
- (id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)categoryLabelFormulas;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (void)invalidateAndSynchronizeMediator;
- (_Bool)isEditing;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)updateGridWithSpec:(CDStruct_188655c5)arg1;
- (id)p_errorBarDataForSeries:(unsigned long long)arg1 withSpec:(CDStruct_188655c5)arg2 updateType:(int)arg3;
@property(readonly, nonatomic) int direction;
@property(readonly, nonatomic) _Bool isPhantom;
- (void)willModify;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)init;
- (id)initWithChartInfo:(id)arg1;
- (void)saveToArchive:(struct ChartMediatorArchive *)arg1;
- (void)loadFromArchive:(const struct ChartMediatorArchive *)arg1;
- (id)copyWithContext:(id)arg1;

@end

