//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDChart, CHDChartType, CHDSeries, EDResources, EXOfficeArtState, OADParagraphProperties, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface CHXReadState : NSObject
{
    EXOfficeArtState *mDrawingState;
    CHDChart *mChart;
    EDResources *mResources;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    _Bool mDefaultTextPropertiesHaveExplicitFontSize;
    id <CHAutoStyling> mAutoStyling;
    _Bool mIgnoreFormulas;
}

@property(nonatomic) _Bool ignoreFormulas; // @synthesize ignoreFormulas=mIgnoreFormulas;
- (id)autoStyling;
- (void)popTitleTextProperties;
- (void)pushTitleTextProperties:(_Bool)arg1;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(_Bool)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (id)defaultTextProperties;
- (id)exState;
- (void)setCurrentSeries:(id)arg1;
- (id)currentSeries;
- (void)setCurrentChartType:(id)arg1;
- (id)currentChartType;
- (void)setChartPart:(id)arg1;
- (id)chartPart;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setChart:(id)arg1;
- (id)chart;
- (id)drawingState;
- (void)dealloc;
- (id)initWithDrawingState:(id)arg1;

@end

