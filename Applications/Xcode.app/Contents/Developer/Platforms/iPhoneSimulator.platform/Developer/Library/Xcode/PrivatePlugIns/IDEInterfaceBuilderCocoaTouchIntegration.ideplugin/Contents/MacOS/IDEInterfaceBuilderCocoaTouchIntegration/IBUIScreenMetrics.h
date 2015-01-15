//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIFixedSimulatedSizeMetrics.h>

@class IBCocoaTouchIdiom, NSDictionary, NSString;

@interface IBUIScreenMetrics : IBUIFixedSimulatedSizeMetrics
{
    NSDictionary *_normalizedOrientationToSizeMap;
    NSString *_displayName;
    IBCocoaTouchIdiom *_idiom;
    NSString *_displayNameForPreviewEditor;
    NSString *_archiveIdentifier;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)instantiateWithCoder:(id)arg1;
+ (id)allAbstractSizeClassMetrics;
+ (id)abstractMetricsForWidthClass:(id)arg1 heightClass:(id)arg2;
+ (id)abstractMetricsForConfiguration:(id)arg1;
+ (id)abstractMetricsBySizeClassConfiguration;
+ (id)retina47ScreenMetrics;
+ (id)retinaHDScreenMetrics;
+ (id)iPadFullScreenMetrics;
+ (id)iPhone40InchScreenMetrics;
+ (id)iPhone35InchScreenMetrics;
+ (id)screenMetricsWithArchiveIdentifier:(id)arg1;
+ (id)allScreenMetrics;
@property(readonly, copy, nonatomic) NSString *archiveIdentifier; // @synthesize archiveIdentifier=_archiveIdentifier;
@property(readonly) NSString *displayNameForPreviewEditor; // @synthesize displayNameForPreviewEditor=_displayNameForPreviewEditor;
- (id)idiom;
- (id)displayName;
- (void).cxx_destruct;
- (id)normalizedOrientationToSizeMap;
- (BOOL)isEqualToSimulatedSizeMetrics:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)pageSheetFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (id)formSheetFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (id)splitViewDetailFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (id)splitViewMasterFixedSizeMetricsForOrientationMetrics:(id)arg1;
- (BOOL)isRegularWidthForOrientationMetrics:(id)arg1;
- (id)fixedSizeMetricsForScreenMetrics:(id)arg1 orientationMetrics:(id)arg2 freeformSize:(struct CGSize)arg3;
- (BOOL)isAbstractSizeClassScreen;
- (BOOL)supportsOrientation:(int)arg1;
- (struct CGSize)sizeForOrientation:(int)arg1;
- (id)inheritableSplitViewMasterSizeMetrics;
- (id)inheritableSplitViewDetailSizeMetrics;
- (id)inheritableModalPageSheetSizeMetrics;
- (id)inheritableModalFormSheetSizeMetrics;
- (id)init;
- (id)initWithIdiom:(id)arg1 displayName:(id)arg2 displayNameForPreviewEditor:(id)arg3 archiveIdentifier:(id)arg4 landscapeSize:(struct CGSize)arg5 supportsPortrait:(BOOL)arg6;

@end

