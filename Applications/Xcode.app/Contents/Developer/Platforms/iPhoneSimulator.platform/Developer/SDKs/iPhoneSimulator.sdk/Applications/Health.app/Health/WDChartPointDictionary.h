//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDChartPoint.h"

@class NSDate, NSDictionary, NSString, WDChartPointAnnotation;

@interface WDChartPointDictionary : NSObject <WDChartPoint>
{
    NSDate *_xValue;
    WDChartPointAnnotation *_annotation;
    NSDictionary *_yValue;
    long long _averageStyle;
}

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
@property(nonatomic) long long averageStyle; // @synthesize averageStyle=_averageStyle;
@property(retain, nonatomic) NSDictionary *yValue; // @synthesize yValue=_yValue;
@property(retain, nonatomic) WDChartPointAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
- (void).cxx_destruct;
- (double)yValueFloatRepresentation;
- (id)averageYValue;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

